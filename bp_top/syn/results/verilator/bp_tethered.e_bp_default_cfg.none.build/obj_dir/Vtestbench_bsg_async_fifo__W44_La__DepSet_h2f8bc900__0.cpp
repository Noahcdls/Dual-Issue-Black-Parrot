// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_async_fifo__W44_La.h"

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__1(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__1\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__cosim_reset_i) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (7U & ((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n) 
                     >> 8U));
        vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_r = vlSelf->__PVT__bapg_rd__DOT__w_ptr_n;
    }
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__2(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__2\n"); );
    // Body
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (7U & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n) 
                     >> 8U));
        vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n));
    }
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__ird_fifo__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<3>/*67:0*/ __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__fill) {
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[0U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                << 0x1aU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[1U] 
                             >> 6U));
        __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT____Vcellout__calculator__fwb_pkt_o[2U] 
                       >> 6U));
        __Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_r));
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0U;
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = vlSelf->__PVT__bapg_wr__DOT__w_ptr_n;
    }
    if (__Vdlyvset__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0xffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | ((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
              << 8U));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = ((0x700U & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r_rsync)) 
           | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__deallocate) {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = vlSelf->__PVT__bapg_rd__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_r));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W44_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bsg_async_fifo__W44_La___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__ird_fifo__0\n"); );
    // Body
    if (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__fill) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                                   & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_r));
    }
}
