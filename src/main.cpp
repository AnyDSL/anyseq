#include <cstdio>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <random>

#include "import.h"         //AnySeq C interface
#include "alignment_io.h"
#include "sequence_io.h"
#include "timer.h"  
#include "clipp.h"          //command line args handling


using namespace anyseq;


//-------------------------------------------------------------------
template<class Function>
void benchmark_align(const std::string& name,
               Function&& align, 
               const std::string& q, const std::string& s,
               std::string& alq, std::string& als,
               std::ostream& os)
{
    os << "testing " << name << ": " << std::flush;

    am::timer time;
    time.start();
    volatile auto score = align(q.c_str(), q.size(),
                                s.c_str(), s.size(),
                                &alq.front(), &als.front());
    time.stop();

    os << time.milliseconds() << " ms" << std::endl;
}


//-------------------------------------------------------------------
template<class Function>
void benchmark_score(const std::string& name,
               Function&& align, 
               const std::string& q, const std::string& s,
               std::ostream& os)
{
    os << "testing " << name << ": " << std::flush;

    am::timer time;
    time.start();
    volatile auto score = align(q.c_str(), q.size(), s.c_str(), s.size());
    time.stop();

    os << time.milliseconds() << " ms" << std::endl;
}

//-------------------------------------------------------------------
void benchmark_alignments(const std::string& q, const std::string& s,
                          std::ostream& os)
{
    benchmark_score("global score", 
        global_alignment_score, q, s, os);

    benchmark_score("semiglobal score",
        semiglobal_alignment_score, q, s, os);

    benchmark_score("local score",
        local_alignment_score, q, s, os);


    const auto alen = q.size() + s.size();

    std::string alq; alq.resize(alen, ' ');
    std::string als; als.resize(alen, ' ');

    benchmark_align("global alignment", 
        construct_global_alignment, q, s, alq, als, os);

    benchmark_align("semiglobal alignment",
    construct_semiglobal_alignment, q, s, alq, als, os);

    benchmark_align("local alignment",
        construct_local_alignment, q, s, alq, als, os);
}


//-------------------------------------------------------------------
class uniform_ACGT_distribution {
public:
    uniform_ACGT_distribution(): rndNum_{0,3} {}

    template<class URNG>
    char operator () (URNG& urng) {
        switch(rndNum_(urng)) {
            case 0: return 'A';
            case 1: return 'C';
            case 2: return 'G';
            case 3: return 'T';
            default: return '_';
        }
    }

private:
    std::uniform_int_distribution<char> rndNum_;
};

template<class URNG>
std::string random_string(std::size_t minlen, std::size_t maxlen, URNG& urng)
{
    std::string s;
    s.resize(std::uniform_int_distribution<std::size_t>{minlen,maxlen}(urng));

    uniform_ACGT_distribution chars;
    // auto distr = std::uniform_int_distribution<int>{65,122};
    std::generate(begin(s), end(s), [&]{ return chars(urng); });

    return s;
}


//-------------------------------------------------------------------
int main(int argc, char* argv[]) 
{
    using namespace clipp;
    using std::cout;

    enum class imode { file, args, stdio, random };
    enum class omode { file, stdio };
    auto input = imode::file;
    auto output = omode::stdio;
    std::int64_t minlen = 256;
    std::int64_t maxlen = 1024;
    std::string query, subject;
    std::string outfile;
    std::vector<std::string> wrong;

    auto cli = (
        // (option("-o", "--out").set(output,omode::file) & 
        //  value("file", outfile)) % "write results to file"
        // ,
        "read sequences from input files" % (
            command("-i", "--in"),
            value("query file", query),
            value("subject file", subject)
        ) | 
        // "specify sequences on the command line" % (
        //     command("-a", "--args").set(input,imode::args),
        //     value("query string", query),
        //     value("subject string", subject)
        // ) | 
        "generate random input sequences" % (
            command("-r", "--rand").set(input,imode::random),
            opt_integer("min len", minlen) &
            opt_integer("max len", maxlen)
        ),
        // | ( 
        // "read sequences from stdin" %
        //     command("-").set(input,imode::stdio)
        // )
        any_other(wrong)
    );

    if(!parse(argc,argv, cli) || !wrong.empty()) {
        if(!wrong.empty()) {
            cout << "Unknown command line arguments:\n";
            for(const auto& a : wrong) cout << "'" << a << "'\n";
            cout << '\n';
        }
        cout << make_man_page(cli, argv[0]) << '\n';
        return 0;
    }

    switch(input) {
        default:
        case imode::file:
            try {
                //only use first sequence from each input files 
                auto qreader = make_sequence_reader(query);
                auto sreader = make_sequence_reader(subject);
                if(qreader->has_next()) {
                    query = std::move(qreader->next().data);
                }
                if(sreader->has_next()) {
                    subject = std::move(qreader->next().data);
                }
            } 
            catch(std::exception& e) {
                std::cerr << e.what();
            }
            break;
        case imode::args:
            break; //data already in variables
        case imode::stdio:
            std::cin >> query >> subject;
            break;
        case imode::random: {
            if(minlen < 1 || maxlen < 1) {
                std::cerr << "String lenghts must be greater than zero!" << std::endl;
                return 1;
            }
            if(maxlen < minlen) std::swap(minlen,maxlen);
            cout << "random strings with length from [" << minlen << "," << maxlen << "]\n";
            std::mt19937_64 urng;
            query = random_string(minlen,maxlen,urng);
            subject = random_string(minlen,maxlen,urng);
            break;
        }
    }

    switch(output) {
        default:
        case omode::stdio:             
            benchmark_alignments(query, subject, cout);
            break;
        case omode::file: {
            if(outfile.empty()) {
                std::cerr << "No output file name given!" << std::endl;
                return 1;
            }
            std::ofstream os{outfile};
            if(os.good()) {
                benchmark_alignments(query, subject, os);
            } else {
                std::cerr << "Unable to open output file!" << std::endl;
                return 1;
            }
        }
    }
}

