// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTBENCH__DPI_H_
#define VERILATED_VTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dpi_clock_gen.v:57:17
    extern svBit bsg_dpi_clock_gen_set_level(svBit clkval);
    // DPI export at testbench.sv:64:16
    extern int get_dram_period();
    // DPI export at testbench.sv:68:16
    extern int get_sim_period();

    // DPI IMPORTS
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dpi_clock_gen.v:39:32
    extern int bsg_dpi_clock_gen_register(long long cycle_time_p, const char* hierarchy);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:96:13
    extern void bsg_dramsim3_exit(void* dramsim3_handle);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:78:13
    extern svBit bsg_dramsim3_get_read_done(void* dramsim3_handle, int ch);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:81:13
    extern long long bsg_dramsim3_get_read_done_addr(void* dramsim3_handle, int ch);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:84:13
    extern svBit bsg_dramsim3_get_write_done(void* dramsim3_handle, int ch);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:87:13
    extern long long bsg_dramsim3_get_write_done_addr(void* dramsim3_handle, int ch);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:65:17
    extern void* bsg_dramsim3_init(int num_channels, int data_width, long long size, int num_columns, const char* config_file);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:93:13
    extern void bsg_dramsim3_print_stats(void* dramsim3_handle, unsigned int tag);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:75:13
    extern svBit bsg_dramsim3_send_read_req(void* dramsim3_handle, long long addr);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:72:13
    extern svBit bsg_dramsim3_send_write_req(void* dramsim3_handle, long long addr);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dramsim3.v:90:13
    extern void bsg_dramsim3_tick(void* dramsim3_handle);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_mem/bsg_nonsynth_mem_1r1w_sync_mask_write_byte_dma.v:45:10
    extern void bsg_mem_dma_exit(unsigned long long id);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_mem/bsg_nonsynth_mem_1r1w_sync_mask_write_byte_dma.v:48:19
    extern unsigned char bsg_mem_dma_get(void* handle, unsigned long long addr);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_mem/bsg_nonsynth_mem_1r1w_sync_mask_write_byte_dma.v:38:13
    extern void* bsg_mem_dma_init(unsigned long long id, unsigned long long channel_addr_width_fp, unsigned long long data_width_fp, unsigned long long mem_els_fp, unsigned long long init_mem_fp);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_mem/bsg_nonsynth_mem_1r1w_sync_mask_write_byte_dma.v:51:10
    extern void bsg_mem_dma_set(void* handle, unsigned long long addr, char val);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_nonsynth_cosim.sv:66:39
    extern svBit check_terminate();
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_nonsynth_cosim.sv:57:40
    extern void dromajo_init(const char* cfg_f_name, int hartid, int ncpus, int memory_size, svBit checkpoint, svBit amo_en);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_nonsynth_cosim.sv:58:40
    extern svBit dromajo_step(int hartid, long long pc, int insn, long long wdata, long long mstatus);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_nonsynth_cosim.sv:63:40
    extern void dromajo_trap(int hartid, long long cause);
    // DPI import at testbench.sv:60:39
    extern svBit get_finish(int hartid);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_nonsynth_host.sv:60:40
    extern void pop();
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_nonsynth_host.sv:59:39
    extern int scan();
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_nonsynth_cosim.sv:65:40
    extern void set_finish(int hartid);
    // DPI import at /home/nsantos/Desktop/black-parrot-sim/rtl/bp_top/test/common/bp_nonsynth_host.sv:58:40
    extern void start();

#ifdef __cplusplus
}
#endif

#endif  // guard
