// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mux_one_hot__W40_E8.h"

void Vtestbench_bsg_mux_one_hot__W40_E8___ctor_var_reset(Vtestbench_bsg_mux_one_hot__W40_E8* vlSelf);

Vtestbench_bsg_mux_one_hot__W40_E8::Vtestbench_bsg_mux_one_hot__W40_E8(Vtestbench__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bsg_mux_one_hot__W40_E8___ctor_var_reset(this);
}

void Vtestbench_bsg_mux_one_hot__W40_E8::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bsg_mux_one_hot__W40_E8::~Vtestbench_bsg_mux_one_hot__W40_E8() {
}
