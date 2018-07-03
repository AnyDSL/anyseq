#!/bin/bash

echo "running CPU benchmark with genomic sequences"
./anyseq/build/align -i anyseq/sequences/sboydii.fna anyseq/sequences/ecoli.fna
./anyseq/build/align -i anyseq/sequences/rose.fna anyseq/sequences/caul.fna
./anyseq/build/align -i anyseq/sequences/ecoli.fna anyseq/sequences/caul.fna
./anyseq/build/align -i anyseq/sequences/rattus.fna anyseq/sequences/ecoli.fna

