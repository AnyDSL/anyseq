#!/bin/bash

if [ $# -lt 1 ]; then
    echo "Usage: $0 <absolute path to AnyDSL installation>"
    exit
fi

anydsl=$1
runtime=$anydsl/runtime/build/share/anydsl/cmake

threads=$( nproc )


rm -rf build_cpu
mkdir build_cpu
cd build_cpu
cmake .. -DAnyDSL_runtime_DIR:PATH=$runtime -DBACKEND=cpu
make -j $threads
cd ..


rm -rf build_avx
mkdir build_avx
cd build_avx_
cmake .. -DAnyDSL_runtime_DIR:PATH=$runtime -DBACKEND=avx
make -j $threads
cd ..


rm -rf build_cuda
mkdir build_cuda
cd build_cuda
cmake .. -DAnyDSL_runtime_DIR:PATH=$runtime -DBACKEND=cuda
make -j $threads
cd ..

