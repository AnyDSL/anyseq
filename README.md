
## AnySeq

Proof-of-concept sequence alignment algorithms library implemented in [Impala](https://github.com/AnyDSL/impala).


### Setup Instructions

 -  Prerequisites:
  - a recent version of CMake (at least v3.7)
  - for the CUDA benchmark an NVIDIA GPU with recent drivers and a working CUDA
    installation
  - make sure, that the CUDA libraries are in your PATH before installing
    AnyDSL
   

 - Install [AnyDSL](https://github.com/AnyDSL/anydsl). In order to do so, run
   the "install_anydsl.sh" script provided. This will download, configure & 
   compile AnyDSL which can take some time.

 - After you have a working AnyDSL installation you can run the AnySeq build script:
  ```
  ./makeall.sh <absolute path to your AnyDSL installation>
  ```

If all went well you should now have two different executables for CPU and GPU.


### Running 

#### Demo Benchmarks

The 'bechmark.sh' script will align two bacterial genomes and 2 random
sequences with different alignment schemes for the CPU and the GPU version.


#### Demo Program Usage

 - read sequences from files:
   ```
   align [-o <output_file>] -i <FASTA file> <FASTA file>
   ```

 - use random sequences:
   ```
   align [-o <output_file>] -r [[<min length>] <max length>]
   ```

