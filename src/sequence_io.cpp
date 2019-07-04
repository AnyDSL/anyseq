#include <sstream>

#include "io_error.h"
#include "sequence_io.h"


namespace anyseq {

using std::string;


//-------------------------------------------------------------------
sequence_reader::sequence
sequence_reader::next()
{
    if(!has_next()) return sequence{};

    std::lock_guard<std::mutex> lock(mutables_);
    sequence seq;
    ++index_;
    seq.index = index_;
    read_next(seq);
    return seq;
}



//-------------------------------------------------------------------
void sequence_reader::skip(index_type skip)
{
    if(skip < 1) return;

    std::lock_guard<std::mutex> lock(mutables_);
    sequence seq;

    for(; skip > 0 && has_next(); --skip) {
        ++index_;
        seq.index = index_;
        read_next(seq);
    }
}



//-------------------------------------------------------------------
fasta_reader::fasta_reader(string filename):
    sequence_reader{},
    file_{},
    linebuffer_{}
{
    file_.open(filename.c_str());

    if(file_.rdstate() & std::ifstream::failbit) {
        invalidate();
        throw file_access_error{"can't open file " + filename};
    }
}



//-------------------------------------------------------------------
void fasta_reader::read_next(sequence& seq)
{
    if(!file_.good()) {
        invalidate();
        return;
    }
    string line;

    if(linebuffer_.empty()) {
        getline(file_, line);
    }
    else {
        line.clear();
        using std::swap;
        swap(line, linebuffer_);
    }

    if(line[0] != '>') {
        throw io_format_error{"malformed fasta file - expected header char > not found"};
        invalidate();
        return;
    }
    seq.header = line.substr(1);
    
    std::ostringstream seqss;

    while(file_.good()) {
        getline(file_, line);
        if(line[0] == '>') {
            linebuffer_ = line;
            break;
        }
        else {
            seqss << line;
        }
    }
    seq.data = seqss.str();

    if(seq.data.empty()) {
        throw io_format_error{"malformed fasta file - zero-length sequence: " + seq.header};
        invalidate();
        return;
    }

    if(!file_.good()) {
        invalidate();
        return;
    }
}




//-------------------------------------------------------------------
fastq_reader::fastq_reader(string filename):
    sequence_reader{},
    file_{}
{
    file_.open(filename.c_str());

    if(file_.rdstate() & std::ifstream::failbit) {
        invalidate();
        throw file_access_error{"can't open file " + filename};
    }
}



//-------------------------------------------------------------------
void fastq_reader::read_next(sequence& seq)
{
    if(!file_.good()) {
        invalidate();
        return;
    }

    string line;
    getline(file_, line);
    if(line.empty()) {
        invalidate();
        return;
    }
    if(line[0] != '@') {
        if(line[0] != '\r') {
            throw io_format_error{"malformed fastq file - sequence header: "  + line};
        }
        invalidate();
        return;
    }
    seq.header = line.substr(1);
    getline(file_, seq.data);

    getline(file_, line);
    if(line.empty() || line[0] != '+') {
        if(line[0] != '\r') {
            throw io_format_error{"malformed fastq file - quality header: "  + line};
        }
        invalidate();
        return;
    }
    getline(file_, seq.qualities);
}




//-------------------------------------------------------------------
sequence_header_reader::sequence_header_reader(string filename):
    file_{}
{
    file_.open(filename.c_str());

    if(file_.rdstate() & std::ifstream::failbit) {
        invalidate();
        throw file_access_error{"can't open file " + filename};
    }
}



//-------------------------------------------------------------------
void sequence_header_reader::read_next(sequence& seq)
{

    bool headerFound = false;
    do {
        if(!file_.good()) {
            invalidate();
            return;
        }

        string line;
        getline(file_, line);

        headerFound = line[0] == '>' || line[0] == '@';
        if(headerFound) {
            seq.header = line.substr(1);
        }
    } while(!headerFound);
}



//-------------------------------------------------------------------
std::unique_ptr<sequence_reader>
make_sequence_reader(const string& filename)
{
    auto n = filename.size();
    if(filename.find(".fq")    == (n-3) ||
       filename.find(".fnq")   == (n-4) ||
       filename.find(".fastq") == (n-6) )
    {
        return std::unique_ptr<sequence_reader>{new fastq_reader{filename}};
    }
    else if(filename.find(".fa")    == (n-3) ||
            filename.find(".fna")   == (n-4) ||
            filename.find(".fasta") == (n-6) )
    {
        return std::unique_ptr<sequence_reader>{new fasta_reader{filename}};
    }

    //try to determine file type content
    std::ifstream is {filename};
    if(is.good()) {
        string line;
        getline(is,line);
        if(!line.empty()) {
            if(line[0] == '>') {
                return std::unique_ptr<sequence_reader>{new fasta_reader{filename}};
            }
            else if(line[0] == '@') {
                return std::unique_ptr<sequence_reader>{new fastq_reader{filename}};
            }
        }
        throw file_read_error{"file format not recognized"};
    }

    throw file_access_error{"file not accessible"};
    return nullptr;
}


} // namespace anyseq

