#ifndef ANYSEQ_ALIGNMENT_IO_H_
#define ANYSEQ_ALIGNMENT_IO_H_

#include <string>
#include <iosfwd>

#include "config.h"


namespace anyseq {

void print_alignment(std::ostream& os,
                     score_t score, 
                     const std::string& q, 
                     const std::string& s,
                     std::size_t maxWidth = 80);


} // namespace anyseq 



#endif
