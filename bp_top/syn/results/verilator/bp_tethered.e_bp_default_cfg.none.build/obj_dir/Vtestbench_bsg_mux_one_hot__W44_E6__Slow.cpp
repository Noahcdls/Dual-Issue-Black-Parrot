// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mux_one_hot__W44_E6.h"

void Vtestbench_bsg_mux_one_hot__W44_E6___ctor_var_reset(Vtestbench_bsg_mux_one_hot__W44_E6* vlSelf);

Vtestbench_bsg_mux_one_hot__W44_E6::Vtestbench_bsg_mux_one_hot__W44_E6(Vtestbench__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bsg_mux_one_hot__W44_E6___ctor_var_reset(this);
}

void Vtestbench_bsg_mux_one_hot__W44_E6::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bsg_mux_one_hot__W44_E6::~Vtestbench_bsg_mux_one_hot__W44_E6() {
}
