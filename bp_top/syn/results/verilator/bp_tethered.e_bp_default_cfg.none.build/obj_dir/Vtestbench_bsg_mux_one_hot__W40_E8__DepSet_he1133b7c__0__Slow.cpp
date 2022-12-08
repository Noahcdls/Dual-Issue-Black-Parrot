// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bsg_mux_one_hot__W40_E8.h"

VL_ATTR_COLD void Vtestbench_bsg_mux_one_hot__W40_E8___ctor_var_reset(Vtestbench_bsg_mux_one_hot__W40_E8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W40_E8___ctor_var_reset\n"); );
    // Body
    VL_ZERO_RESET_W(512, vlSelf->data_i);
    vlSelf->sel_one_hot_i = 0;
    vlSelf->data_o = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__data_masked);
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather = 0;
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather = 0;
}
