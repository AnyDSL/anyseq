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

if(BACKEND STREQUAL "cpu")
    set(DEVICE "cpu")
    set(DEVICE_COMM "cpu")
elseif(BACKEND STREQUAL "avx")
    set(DEVICE "avx")
    set(DEVICE_COMM "cpu")
else()
    set(DEVICE "gpu")
    set(DEVICE_COMM "gpu")
endif()


# Don't change the order of the files!
# The impala compiler crashes sometimes depending on
# the definition order of "static" constants.
anydsl_runtime_wrap(ANYSEQ_PROGRAM FILES 
    ${BACKEND_FILE} 
    src/mapping_${DEVICE_COMM}.impala 
    src/scoring_${DEVICE_COMM}.impala 
    src/iteration_${DEVICE}.impala 
    src/iteration.impala 
    src/limits.impala
    src/print.impala
    src/timing.impala
    src/utils.impala
    src/indexing.impala 
    src/align.impala
    src/matrix.impala 
    src/export.impala
    src/predecessors.impala 
    src/scoring.impala 
    src/sequence.impala 
    src/traceback.impala 
    src/concurrent_queue.impala
    src/config.impala
    src/config_${DEVICE}.impala
) 

add_executable(align 
    src/main.cpp 
    src/alignment_io.cpp 
    src/sequence_io.cpp 
    src/concurrent_queue.cpp 
    ${ANYSEQ_PROGRAM}
)


target_link_libraries(align 
    ${ANYDSL_RUNTIME_LIBRARY} 
    ${ANYDSL_RUNTIME_LIBRARIES}
    -pthread  # needed for the queuing stuff
)

set_target_properties(align PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)

