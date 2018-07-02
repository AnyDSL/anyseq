#include <iostream>
#include <cstring>
#include <algorithm>
#include <iterator>

#include "alignment_io.h"


namespace anyseq {


//-------------------------------------------------------------------
void print_alignment(std::ostream& os,
                     score_t score, 
                     const std::string& q, 
                     const std::string& s,
                     std::size_t maxWidth)
{
    os << score << '\n';

    // std::size_t n = q.find(' ');
    std::size_t n = q.size();

    for(std::size_t i = 0, j = 0; i < n; i += maxWidth) {
        j = std::min(n, i + maxWidth);

        std::copy(q.begin() + i, q.begin() + j, std::ostream_iterator<char>(os));
        os << '\n';

        for(std::size_t k = i; k < j; ++k) {
            if(q[k] == s[k]) os << '|'; else os << ' ';
        }
        os << '\n';

        std::copy(s.begin() + i, s.begin() + j, std::ostream_iterator<char>(os));
        os << "\n\n";
    }
}


} //namespace anyseq
