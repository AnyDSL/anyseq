cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(anyseq_hls_postproc)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
set(CMAKE_SUPPRESS_REGENERATION TRUE)

set(LIBRARY_LIST clangFrontend  clangSerialization clangDriver clangParse clangRewriteFrontend clangStaticAnalyzerFrontend clangSema)
set(LIBRARY_LIST ${LIBRARY_LIST} clangAnalysis clangEdit clangAST clangLex clangBasic clangTooling
      clangRewrite clangASTMatchers clangToolingCore)
set(COMPONENT_LIST mcparser bitreader support mc option)

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
if(LLVM_BUILD_MAIN_SRC_DIR)
  include_directories(${LLVM_BUILD_MAIN_SRC_DIR}/tools/clang/include)
  include_directories(${LLVM_BUILD_BINARY_DIR}/tools/clang/include)
endif()
link_directories(${LLVM_LIBRARY_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_definitions(-D__STDC_LIMIT_MACROS -D__STDC_CONSTANT_MACROS)

add_executable(anyseq_hls_postproc align_postproc.cpp)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  foreach(link_lib IN LISTS LIBRARY_LIST)
    target_link_libraries(anyseq_hls_postproc optimized ${link_lib})
    target_link_libraries(anyseq_hls_postproc debug     ${link_lib}d)
  endforeach()
else()
  target_link_libraries(anyseq_hls_postproc ${LIBRARY_LIST})
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wno-unused-parameter -fno-strict-aliasing -fno-exceptions -fno-rtti")
  #set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc -static-libstdc++")
endif()

target_link_libraries(anyseq_hls_postproc LLVMX86AsmParser LLVMX86Desc LLVMX86AsmPrinter LLVMX86Info LLVMX86Utils LLVMipo LLVMScalarOpts LLVMInstCombine
                                          LLVMTransformUtils LLVMAnalysis LLVMTarget LLVMOption LLVMMCParser LLVMMC LLVMObject LLVMBitReader LLVMCore LLVMSupport)

