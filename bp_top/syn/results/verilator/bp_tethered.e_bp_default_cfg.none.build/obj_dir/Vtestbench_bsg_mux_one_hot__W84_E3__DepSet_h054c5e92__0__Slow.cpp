// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bsg_mux_one_hot__W84_E3.h"

VL_ATTR_COLD void Vtestbench_bsg_mux_one_hot__W84_E3___ctor_var_reset(Vtestbench_bsg_mux_one_hot__W84_E3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E3___ctor_var_reset\n"); );
    // Body
    VL_ZERO_RESET_W(396, vlSelf->data_i);
    vlSelf->sel_one_hot_i = 0;
    VL_ZERO_RESET_W(132, vlSelf->data_o);
    VL_ZERO_RESET_W(396, vlSelf->__PVT__data_masked);
}
