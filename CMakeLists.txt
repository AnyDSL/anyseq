cmake_minimum_required(VERSION 3.7 FATAL_ERROR)

project(AnySeq)

find_package(AnyDSL_runtime REQUIRED)
include_directories(${AnyDSL_runtime_INCLUDE_DIRS})
set(ANYDSL_RUNTIME_LIBRARIES ${AnyDSL_runtime_LIBRARIES})


set(BACKEND ${BACKEND} CACHE STRING "select the backend from the following: CPU, AVX, NVVM, CUDA, OPENCL, HLS")
if(NOT BACKEND)
    set(BACKEND cpu CACHE STRING "select the backend from the following: CPU, AVX, NVVM, CUDA, OPENCL, HLS" FORCE)
endif()
string(TOLOWER "${BACKEND}" BACKEND)
message(STATUS "Selected backend: ${BACKEND}")

if(BACKEND STREQUAL "hls")
    if(NOT HLS_PART)
        set(HLS_PART xczu7ev-ffvc1156-2-e CACHE STRING "select the hardware the high level synthesis should use." FORCE)
    endif()
    string(TOLOWER "${HLS_PART}" HLS_PART)
    message(STATUS "selected hls part: ${HLS_PART}")

    if(NOT ALIGN_SCHEME)
        set(ALIGN_SCHEME local CACHE STRING "select the alignment scheme for the specialized hardware." FORCE)
        set_property(CACHE ALIGN_SCHEME PROPERTY STRINGS local global semiglobal)
    endif()
    string(TOLOWER "${ALIGN_SCHEME}" ALIGN_SCHEME)
    message(STATUS "selected scheme: ${ALIGN_SCHEME}")

    if(NOT PE_COUNT)
        set(PE_COUNT 16 CACHE STRING "select the number of processing elements used in the systolic array." FORCE)
    endif()
    if(NOT PE_COUNT MATCHES "^([0-9]|[1-9][0-9]*)$")
        message(FATAL_ERROR "PE_COUNT must be a number!")
    endif()

    message(STATUS "Number of PEs: ${PE_COUNT}")
    add_custom_target(mapping_fpga_pe_count ALL "${CMAKE_COMMAND}" -DSOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR} -DPE_COUNT=${PE_COUNT} -P "${CMAKE_CURRENT_SOURCE_DIR}/src/hls/write_pe_count.cmake" WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} BYPRODUCTS ${CMAKE_CURRENT_SOURCE_DIR}/mapping_fpga_pe_count.impala)
else()
    unset(HLS_PART CACHE)
    unset(ALIGN_SCHEME CACHE)
    unset(PE_COUNT CACHE)
endif()

set(BACKEND_FILE src/backend/backend_${BACKEND}.impala)

if(BACKEND STREQUAL "cpu")
    set(DEVICE "cpu")
    set(DEVICE_COMM "cpu")
elseif(BACKEND STREQUAL "avx")
    set(DEVICE "avx")
    set(DEVICE_COMM "cpu")
elseif(BACKEND STREQUAL "hls") # or BACKEND STREQUAL "aocl" for altera based FPGAS
    set(DEVICE "fpga")
    set(DEVICE_COMM "cpu")
else()
    set(DEVICE "gpu")
    set(DEVICE_COMM "gpu")
endif()

if(DEVICE STREQUAL "fpga")
    set(DEVICE_FILES src/sysarr.impala src/iteration_hls.impala src/scoring_hls.impala src/mapping_fpga.impala src/mapping_fpga_pe_count.impala)
    set(EXPORT_FILE src/export_hls_${ALIGN_SCHEME}.impala src/hls/scheme_${ALIGN_SCHEME}.impala)

    set(HLS_FLAGS OFF OFF ${HLS_PART})
else()
    set(DEVICE_FILES src/mapping_${DEVICE_COMM}.impala src/scoring_${DEVICE_COMM}.impala src/iteration_${DEVICE}.impala)
    set(EXPORT_FILE src/export.impala)
endif()

# Don't change the order of the files!
# The impala compiler crashes sometimes depending on
# the definition order of "static" constants.
anydsl_runtime_wrap(ANYSEQ_PROGRAM
  HLS_FLAGS ${HLS_FLAGS}
  FILES 
    ${BACKEND_FILE} 
    ${DEVICE_FILES}
    src/iteration.impala 
    src/limits.impala
    src/print.impala
    src/timing.impala
    src/utils.impala
    src/indexing.impala 
    src/align.impala
    src/matrix.impala 
    ${EXPORT_FILE}
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
if(BACKEND STREQUAL "hls")
    add_dependencies(align mapping_fpga_pe_count)
endif()


target_link_libraries(align 
    ${ANYDSL_RUNTIME_LIBRARY} 
    ${ANYDSL_RUNTIME_LIBRARIES}
    -pthread  # needed for the queuing stuff
)

set_target_properties(align PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)

if(BACKEND STREQUAL "hls")
    add_custom_target(hls_postproc ALL "${CMAKE_COMMAND}" -DALIGN_SCHEME=${ALIGN_SCHEME} -DHLS_PART=${HLS_PART} -DPE_COUNT=${PE_COUNT} -DSOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR} -DBINARY_DIR=${CMAKE_CURRENT_BINARY_DIR} -P "${CMAKE_CURRENT_SOURCE_DIR}/src/hls/postproc.cmake"
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
endif()
