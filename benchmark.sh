#!/bin/bash

echo "running CPU benchmark with genomic sequences"
./build/align -i sequences/sboydii.fna sequences/ecoli.fna
./build/align -i sequences/rose.fna sequences/caul.fna
./build/align -i sequences/ecoli.fna sequences/caul.fna
./build/align -i sequences/rattus.fna sequences/rattus.fna

