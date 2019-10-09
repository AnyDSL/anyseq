file(REMOVE ${SOURCE_DIR}/src/mapping_fpga_pe_count.impala)
file(WRITE ${SOURCE_DIR}/src/mapping_fpga_pe_count.impala "static PE_COUNT = ${PE_COUNT};\n")

