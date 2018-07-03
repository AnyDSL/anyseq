#!/bin/bash

# len=10000000

if [ -d build_cpu ]; then
    echo "running CPU benchmark - genomic sequences"
    ./build_cpu/align -i sequences/sboydii.fna sequences/ecoli.fna
    ./build_cpu/align -i sequences/rose.fna sequences/caul.fna
    ./build_cpu/align -i sequences/ecoli.fna sequences/caul.fna
    ./build_cpu/align -i sequences/rattus.fna sequences/rattus.fna
    # echo "running CPU benchmark - random sequences"
    # ./build_cpu/align -r $len $len 
fi

# if [ -d build_gpu ]; then
#     echo "running GPU benchmark - genomic sequences"
#     ./build_gpu/align -i sequences/sboydii.fna sequences/ecoli.fna
#     echo "running GPU benchmark - random sequences"
#     ./build_gpu/align -r $len $len
# fi

