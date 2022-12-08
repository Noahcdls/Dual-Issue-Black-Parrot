// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_MUX_ONE_HOT__W84_E3_H_
#define VERILATED_VTESTBENCH_BSG_MUX_ONE_HOT__W84_E3_H_  // guard

#include "verilated.h"

class Vtestbench__Syms;

class Vtestbench_bsg_mux_one_hot__W84_E3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sel_one_hot_i,2,0);
    VL_INW(data_i,395,0,13);
    VL_OUTW(data_o,131,0,5);
    VlWide<13>/*395:0*/ __PVT__data_masked;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_mux_one_hot__W84_E3(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench_bsg_mux_one_hot__W84_E3();
    VL_UNCOPYABLE(Vtestbench_bsg_mux_one_hot__W84_E3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
