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

# rm -rf build_gpu
# mkdir build_gpu
# cd build_gpu
# cmake .. -DAnyDSL_runtime_DIR:PATH=$runtime -DBACKEND=cuda
# make -j $threads
# cd ..

