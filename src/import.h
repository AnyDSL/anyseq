#ifndef ANYSEQ_IMPALA_IMPORT_H_
#define ANYSEQ_IMPALA_IMPORT_H_

#include <vector>

#include "datatypes.h"


extern "C" { 

// functions with pre-configured scoring; defined in "export.impala"


score_t construct_global_alignment(
    const char* query, int lenq, 
    const char* subject, int lens, 
    char* alQuery, char* alSubject);

score_t construct_semiglobal_alignment(
    const char* query, int lenq, 
    const char* subject, int lens, 
    char* alQuery, char* alSubject);

score_t construct_local_alignment(
    const char* query, int lenq, 
    const char* subject, int lens, 
    char* alQuery, char* alSubject);



score_t global_alignment_score(
    const char* query, int lenq, 
    const char* subject, int lens);

score_t semiglobal_alignment_score(
    const char* query, int lenq, 
    const char* subject, int lens);

score_t local_alignment_score(
    const char* query, int lenq, 
    const char* subject, int lens);



}

#endif
