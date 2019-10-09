# We assume align_postproc is already built for simplicity

string(CONCAT custom_tcl_script "open_project anyseq_align_${ALIGN_SCHEME}_${PE_COUNT}\n"
                                "set_top align\n"
                                "file copy -force config_fpga_hls.cpp config_fpga_hls_${ALIGN_SCHEME}_${PE_COUNT}.cpp\n"
                                "add_files config_fpga_hls_${ALIGN_SCHEME}_${PE_COUNT}.cpp\n"
                                "add_files align_${ALIGN_SCHEME}_${PE_COUNT}.h\n"
                                "add_files -tb tb_${ALIGN_SCHEME}_${PE_COUNT}.cpp\n"
                                "open_solution align_${PE_COUNT}\n"
                                "set lower ${HLS_PART}\n"
                                "set_part ${HLS_PART}\n"
                                "create_clock -period 5 -name default\n"
                                "exit\n")
execute_process(COMMAND ${SOURCE_DIR}/scripts/hls_postproc/anyseq_hls_postproc ${BINARY_DIR}/config_fpga_hls.cpp)
execute_process(COMMAND echo "${custom_tcl_script}" OUTPUT_FILE ${BINARY_DIR}/anyseq_align_${ALIGN_SCHEME}_${PE_COUNT}.tcl)
configure_file(${SOURCE_DIR}/src/hls/tb_${ALIGN_SCHEME}.cpp.in ${BINARY_DIR}/tb_${ALIGN_SCHEME}_${PE_COUNT}.cpp)
configure_file(${SOURCE_DIR}/src/hls/align_${ALIGN_SCHEME}.h.in ${BINARY_DIR}/align_${ALIGN_SCHEME}_${PE_COUNT}.h)
configure_file(${SOURCE_DIR}/src/hls/vivado_proj.tcl.in ${BINARY_DIR}/vivado_${ALIGN_SCHEME}_${PE_COUNT}_proj.tcl)

# first setup the project
execute_process(COMMAND vivado_hls -f anyseq_align_${ALIGN_SCHEME}_${PE_COUNT}.tcl
        WORKING_DIRECTORY ${BINARY_DIR})
# then automatically startup vivado_hls
execute_process(COMMAND vivado_hls -p anyseq_align_${ALIGN_SCHEME}_${PE_COUNT}
        WORKING_DIRECTORY ${BINARY_DIR})

# synthesize hardware
execute_process(COMMAND vivado -mode tcl -source ${BINARY_DIR}/vivado_${ALIGN_SCHEME}_${PE_COUNT}_proj.tcl
    WORKING_DIRECTORY ${BINARY_DIR})
