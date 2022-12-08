// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vtestbench::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vtestbench__Dpi.h"
#include "Vtestbench.h"

#ifndef VL_DPIDECL_bsg_dpi_clock_gen_set_level_
#define VL_DPIDECL_bsg_dpi_clock_gen_set_level_
svBit bsg_dpi_clock_gen_set_level(svBit clkval) {
    // DPI export at /home/nsantos/Desktop/black-parrot-sim/rtl/external/basejump_stl/bsg_test/bsg_nonsynth_dpi_clock_gen.v:57:17
    return Vtestbench::bsg_dpi_clock_gen_set_level(clkval);
}
#endif

#ifndef VL_DPIDECL_get_dram_period_
#define VL_DPIDECL_get_dram_period_
int get_dram_period() {
    // DPI export at testbench.sv:64:16
    return Vtestbench::get_dram_period();
}
#endif

#ifndef VL_DPIDECL_get_sim_period_
#define VL_DPIDECL_get_sim_period_
int get_sim_period() {
    // DPI export at testbench.sv:68:16
    return Vtestbench::get_sim_period();
}
#endif

