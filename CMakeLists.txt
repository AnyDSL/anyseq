cmake_minimum_required(VERSION 3.7 FATAL_ERROR)

project(AnySeq)

find_package(AnyDSL_runtime REQUIRED)
include_directories(${AnyDSL_runtime_INCLUDE_DIRS})
set(ANYDSL_RUNTIME_LIBRARIES ${AnyDSL_runtime_LIBRARIES})

set(BACKEND ${BACKEND} CACHE STRING "select the backend from the following: CPU, AVX, NVVM, CUDA, OPENCL")
if(NOT BACKEND)
    set(BACKEND cpu CACHE STRING "select the backend from the following: CPU, AVX, NVVM, CUDA, OPENCL" FORCE)
endif()
string(TOLOWER "${BACKEND}" BACKEND)
message(STATUS "Selected backend: ${BACKEND}")

set(BACKEND_FILE src/backend/backend_${BACKEND}.impala)

if(BACKEND STREQUAL "cpu" OR BACKEND STREQUAL "avx")
    set(DEVICE "cpu")
else()
    set(DEVICE "acc")
endif()

anydsl_runtime_wrap(ANYSEQ_PROGRAM FILES 
    ${BACKEND_FILE} 
    src/align.impala
    src/dynprog.impala 
    src/export.impala
    src/iteration_${DEVICE}.impala 
    src/mapping_${DEVICE}.impala 
    src/predecessors.impala 
    src/scoring.impala 
    src/scoring_${DEVICE}.impala 
    src/traceback.impala 
    src/traceback_lintime.impala 
    src/utils.impala
    ) 

add_executable(align 
    src/main.cpp 
    src/alignment_io.cpp 
    src/sequence_io.cpp 
    ${ANYSEQ_PROGRAM})

target_link_libraries(align 
    ${ANYDSL_RUNTIME_LIBRARY} 
    ${ANYDSL_RUNTIME_LIBRARIES})

set_target_properties(align PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)

