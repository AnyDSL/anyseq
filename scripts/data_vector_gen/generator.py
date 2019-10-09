#!/usr/bin/env python

import sys

def print_create_data_vec(size):
     s = "fn @create_data_vector" + str(size) + "(init: DataVectorValueType) -> DataVector {\n"
     s += "  let mut array = [init, .. " + str(size) + "];\n    if(is_hls()) {  }\n"
     s += "  DataVector {\n    read:  @|i|   array(i),\n    write: @|i,v| array(i) = v,\n\n    size: "
     s += str(size) + "\n  }\n}"
     print(s)

def print_create_chooser(list):
     ss = "fn @create_data_vector(size: i32, init: DataVectorValueType) -> DataVector {\n"
     for s in list:
             ss += "let s_" + str(s) + " = size - " + str(s) + ";\n"
     ss += "\n"
     list.reverse()
     for s in list:
             ss += "  if s_" + str(s) + " >= 0 {\n"
             ss += "    let dat = create_data_vector" + str(s) + "(init);\n\n"
             ss += "    if s_" + str(s) + " > 0 { \n"
             ss += "      concat_data_vectors(dat, create_data_vector(s_" + str(s) + ", init))\n"
             ss += "    } else {\n      dat\n    }\n  } else "
     ss += "{ undef[DataVector]() }\n}"
     print(ss)

def print_all(list):
     ss = "fn @concat_data_vectors(first: DataVector, second: DataVector) -> DataVector {\n  let total_size = first.size + second.size;\n  DataVector {\n    read:   @|i|   if i < first.size               { first.read(i) }\n              else if i - first.size < second.size { second.read(i - first.size) }\n              else { undef[DataVectorValueType]() },\n    write: @|i,v| if i < first.size               { first.write(i, v) }\n             else if i - first.size < second.size { second.write(i - first.size, v) }\n             else { undef[()]() },\n\n    size: total_size\n  }\n}\n"
     print(ss)
     for s in list:
             print_create_data_vec(s)
     print_create_chooser(list)

if len(sys.argv) < 2:
    print("Please provide a list of data vector sizes as argument. i.e. generator.py 1 2 4 8 16")
    sys.exit()

print_all([int(i) for i in sys.argv[1:]])
