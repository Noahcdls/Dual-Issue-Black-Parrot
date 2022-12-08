// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_cache__pi35.h"
#include "Vtestbench_bsg_mem_1rw_sync__pi87.h"

extern const VlUnpacked<CData/*3:0*/, 128> Vtestbench__ConstPool__TABLE_h30c84400_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_hbdaffb28_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h025ce265_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_hedafa651_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h04292f50_0;

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__0(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*3:0*/ __Vdly__dma__DOT__counter_r;
    CData/*2:0*/ __Vdlyvdim0__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    QData/*63:0*/ __Vdlyvval__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdly__dma__DOT__out_fifo__DOT__tail_r;
    CData/*0:0*/ __Vdlyvdim0__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    QData/*63:0*/ __Vdlyvval__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*6:0*/ __Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<6>/*175:0*/ __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*6:0*/ __Vdlyvdim0__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*14:0*/ __Vdlyvval__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<4>/*127:0*/ __Vtemp_h9ceed10c__0;
    // Body
    __Vdlyvset__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__dma__DOT__out_fifo__DOT__tail_r = vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r;
    __Vdlyvset__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__dma__DOT__counter_r = vlSelf->__PVT__dma__DOT__counter_r;
    __Vdlyvset__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__read_en)
            ? (IData)(vlSelf->__PVT__tag_mem_addr_li)
            : 0U);
    if (((IData)(vlSelf->__PVT__tag_mem_v_li) & (IData)(vlSelf->__PVT__tag_mem_w_li))) {
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U];
        __Vdlyvset__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tag_mem_addr_li;
    }
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__read_en)
            ? (IData)(vlSelf->__PVT__stat_mem_addr_li)
            : 0U);
    if (((IData)(vlSelf->__PVT__stat_mem_v_li) & (IData)(vlSelf->__PVT__stat_mem_w_li))) {
        __Vdlyvval__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n;
        __Vdlyvset__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__stat_mem_addr_li;
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & (((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
                                                   & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_data_v_o)) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.reset_i)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h30c84400_0
         [__Vtableidx1])) {
        __Vdly__dma__DOT__out_fifo__DOT__tail_r = Vtestbench__ConstPool__TABLE_hbdaffb28_0
            [__Vtableidx1];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h30c84400_0
         [__Vtableidx1])) {
        vlSelf->__PVT__dma__DOT__out_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h025ce265_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_hedafa651_0[__Vtableidx1];
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h04292f50_0[__Vtableidx1];
    vlSelf->__PVT__miss__DOT__select_snoop_data_r = 
        ((~ (IData)(vlSymsp->TOP.reset_i)) & (IData)(vlSelf->__PVT__miss__DOT__select_snoop_data_n));
    if (vlSelf->__PVT__dma__DOT__out_fifo__DOT__enq_i) {
        __Vdlyvval__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (((QData)((IData)(vlSelf->__Vcellout__data_mem__data_o[
                                (((IData)(0x3fU) + 
                                  (0x1ffU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                             << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->__Vcellout__data_mem__data_o[
                                       (((IData)(0x1fU) 
                                         + (0x1ffU 
                                            & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->__Vcellout__data_mem__data_o[
                                     (0xeU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                              << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                  << 6U)))));
        __Vdlyvset__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset_i)))) {
        if (vlSelf->__PVT__v_we) {
            if (vlSelf->__PVT__v_tl_r) {
                vlSelf->__PVT__ld_data_v_r[0U] = vlSelf->__Vcellout__data_mem__data_o[0U];
                vlSelf->__PVT__ld_data_v_r[1U] = vlSelf->__Vcellout__data_mem__data_o[1U];
                vlSelf->__PVT__ld_data_v_r[2U] = vlSelf->__Vcellout__data_mem__data_o[2U];
                vlSelf->__PVT__ld_data_v_r[3U] = vlSelf->__Vcellout__data_mem__data_o[3U];
                vlSelf->__PVT__ld_data_v_r[4U] = vlSelf->__Vcellout__data_mem__data_o[4U];
                vlSelf->__PVT__ld_data_v_r[5U] = vlSelf->__Vcellout__data_mem__data_o[5U];
                vlSelf->__PVT__ld_data_v_r[6U] = vlSelf->__Vcellout__data_mem__data_o[6U];
                vlSelf->__PVT__ld_data_v_r[7U] = vlSelf->__Vcellout__data_mem__data_o[7U];
                vlSelf->__PVT__ld_data_v_r[8U] = vlSelf->__Vcellout__data_mem__data_o[8U];
                vlSelf->__PVT__ld_data_v_r[9U] = vlSelf->__Vcellout__data_mem__data_o[9U];
                vlSelf->__PVT__ld_data_v_r[0xaU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xaU];
                vlSelf->__PVT__ld_data_v_r[0xbU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xbU];
                vlSelf->__PVT__ld_data_v_r[0xcU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xcU];
                vlSelf->__PVT__ld_data_v_r[0xdU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xdU];
                vlSelf->__PVT__ld_data_v_r[0xeU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xeU];
                vlSelf->__PVT__ld_data_v_r[0xfU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xfU];
            }
        }
        if ((((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r)) 
              & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty))) 
             & ((7U & (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                == (7U & (IData)((vlSelf->__PVT__dma_addr_lo 
                                  >> 3U)))))) {
            vlSelf->__PVT__snoop_word_lo = vlSelf->__PVT__dma__DOT__in_fifo_data_lo;
        }
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0U;
        vlSelf->__PVT__sbuf__DOT__num_els_r = 0U;
        __Vdly__dma__DOT__counter_r = 0U;
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 1U;
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__mask_v_r = 0U;
        vlSelf->__PVT__data_v_r = 0ULL;
        vlSelf->__PVT__lock_v_r = 0U;
        vlSelf->__PVT__v_v_r = 0U;
        vlSelf->__PVT__bypass_data_lo = 0ULL;
        vlSelf->__PVT__bypass_mask_lo = 0U;
        vlSelf->__PVT__miss__DOT__flush_way_r = 0U;
        vlSelf->__PVT__miss__DOT__chosen_way_r = 0U;
        vlSelf->__PVT__decode_v_r = 0U;
        vlSelf->__PVT__miss__DOT__miss_state_r = 0U;
        vlSelf->__PVT__valid_v_r = 0U;
        vlSelf->__PVT__tag_v_r[0U] = 0U;
        vlSelf->__PVT__tag_v_r[1U] = 0U;
        vlSelf->__PVT__tag_v_r[2U] = 0U;
        vlSelf->__PVT__tag_v_r[3U] = 0U;
        vlSelf->__PVT__tag_v_r[4U] = 0U;
        vlSelf->__PVT__addr_v_r = 0ULL;
    } else {
        if (((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__PVT__dma__DOT__in_fifo_yumi_li))) {
            vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r 
                = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque;
            vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r 
                = vlSelf->__PVT__dma__DOT__in_fifo_yumi_li;
        }
        vlSelf->__PVT__sbuf__DOT__num_els_r = (3U & 
                                               (((IData)(vlSelf->__PVT__sbuf__DOT__num_els_r) 
                                                 + (IData)(vlSelf->__PVT__sbuf_v_li)) 
                                                - ((IData)(vlSelf->__PVT__sbuf_v_lo) 
                                                   & (IData)(vlSelf->__PVT__sbuf_yumi_li))));
        if (vlSelf->__PVT__dma__DOT__counter_clear) {
            __Vdly__dma__DOT__counter_r = vlSelf->__PVT__dma__DOT__counter_up;
        } else if (vlSelf->__PVT__dma__DOT__counter_up) {
            __Vdly__dma__DOT__counter_r = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dma__DOT__counter_r)));
        }
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r 
            = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_n;
        if (vlSelf->__PVT__v_we) {
            if (vlSelf->__PVT__v_tl_r) {
                vlSelf->__PVT__mask_v_r = vlSelf->__PVT__mask_tl_r;
                vlSelf->__PVT__data_v_r = vlSelf->__PVT__data_tl_r;
                vlSelf->__PVT__lock_v_r = vlSelf->__PVT__lock_tl;
                vlSelf->__PVT__decode_v_r = vlSelf->__PVT__decode_tl_r;
                vlSelf->__PVT__valid_v_r = vlSelf->__PVT__valid_tl;
                vlSelf->__PVT__tag_v_r[0U] = vlSelf->__PVT__tag_tl[0U];
                vlSelf->__PVT__tag_v_r[1U] = vlSelf->__PVT__tag_tl[1U];
                vlSelf->__PVT__tag_v_r[2U] = vlSelf->__PVT__tag_tl[2U];
                vlSelf->__PVT__tag_v_r[3U] = vlSelf->__PVT__tag_tl[3U];
                vlSelf->__PVT__tag_v_r[4U] = vlSelf->__PVT__tag_tl[4U];
                vlSelf->__PVT__addr_v_r = vlSelf->__PVT__addr_tl_r;
                vlSelf->__PVT__v_v_r = 1U;
            } else {
                vlSelf->__PVT__v_v_r = 0U;
            }
        }
        if (vlSelf->__PVT__bypass_v_li) {
            vlSelf->__PVT__bypass_data_lo = vlSelf->__PVT__sbuf__DOT__bypass_data_n;
            vlSelf->__PVT__bypass_mask_lo = (0xffU 
                                             & ((((- (IData)((IData)(vlSelf->__PVT__sbuf__DOT__tag_hit0))) 
                                                  & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                      << 0x1dU) 
                                                     | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                        >> 3U))) 
                                                 | ((- (IData)(
                                                               (((0x3fffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__addr_tl_r 
                                                                             >> 3U))) 
                                                                 == 
                                                                 (0x3fffffffU 
                                                                  & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                                                                        >> 0xeU)))) 
                                                                & (IData)(vlSelf->__PVT__sbuf__DOT__el1_valid)))) 
                                                    & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                        << 0x1dU) 
                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                          >> 3U)))) 
                                                | ((- (IData)((IData)(vlSelf->__PVT__sbuf__DOT__tag_hit2))) 
                                                   & ((vlSelf->__PVT__sbuf_entry_li[0U] 
                                                       << 0x1dU) 
                                                      | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                                         >> 3U)))));
        }
        vlSelf->__PVT__miss__DOT__flush_way_r = vlSelf->__PVT__miss__DOT__flush_way_n;
        vlSelf->__PVT__miss__DOT__chosen_way_r = vlSelf->__PVT__miss__DOT__chosen_way_n;
        vlSelf->__PVT__miss__DOT__miss_state_r = vlSelf->__PVT__miss__DOT__miss_state_n;
    }
    if (vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) {
        __Vdlyvval__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (((QData)((IData)(vlSymsp->TOP.testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT____Vcellout__rx0__dma_data_o[1U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT____Vcellout__rx0__dma_data_o[0U])));
        __Vdlyvset__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r;
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__mask_tl_r = 0U;
        vlSelf->__PVT__data_tl_r = 0ULL;
        vlSelf->__PVT__dma__DOT__dma_state_r = 0U;
        vlSelf->__PVT__decode_tl_r = 0U;
        vlSelf->__PVT__addr_tl_r = 0ULL;
        vlSelf->__PVT__v_tl_r = 0U;
    } else {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r 
            = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_n;
        if (vlSelf->ready_o) {
            if ((1U & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li))) {
                vlSelf->__PVT__mask_tl_r = (0xffU & 
                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U]);
                vlSelf->__PVT__data_tl_r = (((QData)((IData)(
                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U])) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U])) 
                                                  >> 8U)));
                vlSelf->__PVT__decode_tl_r = vlSelf->__PVT__decode;
                vlSelf->__PVT__addr_tl_r = (0x1ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U])) 
                                                  >> 8U)));
                vlSelf->__PVT__v_tl_r = 1U;
            } else {
                vlSelf->__PVT__v_tl_r = 0U;
            }
        } else if (vlSelf->__PVT__sbuf_hazard) {
            vlSelf->__PVT__v_tl_r = 0U;
        }
        vlSelf->__PVT__dma__DOT__dma_state_r = vlSelf->__PVT__dma__DOT__dma_state_n;
    }
    if (__Vdlyvset__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[5U];
    }
    if (__Vdlyvset__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r 
        = __Vdly__dma__DOT__out_fifo__DOT__tail_r;
    if (__Vdlyvset__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__Vcellout__data_mem__data_o[0U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[0U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[0U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[1U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[1U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[1U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[1U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[2U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[2U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[2U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[2U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[3U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[3U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[3U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[3U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[4U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[4U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[4U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[4U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[5U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[5U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[5U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[5U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[6U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[6U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[6U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[6U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[7U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[7U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[7U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[7U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[8U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[8U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[8U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[8U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[9U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[9U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[9U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[9U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[0xaU] = ((0xffff0000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xaU]) 
                                                  | (0xffffffU 
                                                     & ((0xffff00U 
                                                         & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)) 
                                                        | ((0xffffffU 
                                                            & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xaU] = ((0xffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xaU]) 
                                                  | (0xffff0000U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                           << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[0xbU] = ((0xffffff00U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xbU]) 
                                                  | (0xffffU 
                                                     & ((0xffffU 
                                                         & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                        | ((0xffffU 
                                                            & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                 ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                 : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xbU] = ((0xffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xbU]) 
                                                  | (0xffffff00U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xcU] = ((0xff000000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xcU]) 
                                                  | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                        ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                        : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                      << 0x10U) 
                                                     | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0xcU] = ((0xffffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xcU]) 
                                                  | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                       ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                       : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                     << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[0xdU] = ((0xffff0000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xdU]) 
                                                  | (0xffffffU 
                                                     & ((0xffff00U 
                                                         & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)) 
                                                        | ((0xffffffU 
                                                            & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xdU] = ((0xffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xdU]) 
                                                  | (0xffff0000U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                           << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[0xeU] = ((0xffffff00U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xeU]) 
                                                  | (0xffffU 
                                                     & ((0xffffU 
                                                         & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                        | ((0xffffU 
                                                            & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                 ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                 : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xeU] = ((0xffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xeU]) 
                                                  | (0xffffff00U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xfU] = ((0xff000000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xfU]) 
                                                  | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                        ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                        : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                      << 0x10U) 
                                                     | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0xfU] = ((0xffffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xfU]) 
                                                  | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                       ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                       : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                     << 0x18U));
    vlSelf->__PVT__dma__DOT__counter_r = __Vdly__dma__DOT__counter_r;
    if (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[3U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[4U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[4U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[5U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[5U];
    }
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][3U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[4U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][4U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[5U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][5U];
    if (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__tag_mem__data_o[0U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__tag_mem__data_o[1U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__tag_mem__data_o[2U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__tag_mem__data_o[3U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[3U];
        vlSelf->__Vcellout__tag_mem__data_o[4U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[4U];
        vlSelf->__Vcellout__tag_mem__data_o[5U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[5U];
    } else {
        vlSelf->__Vcellout__tag_mem__data_o[0U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__tag_mem__data_o[1U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__tag_mem__data_o[2U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__tag_mem__data_o[3U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
        vlSelf->__Vcellout__tag_mem__data_o[4U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[4U];
        vlSelf->__Vcellout__tag_mem__data_o[5U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[5U];
    }
    if (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_out;
    }
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__Vcellout__stat_mem__data_o = ((IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                             ? (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_out)
                                             : (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r));
    vlSelf->__PVT__dma__DOT__in_fifo_data_lo = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r];
    vlSelf->__PVT__expanded_mask_v = ((0xffffffffffff0000ULL 
                                       & vlSelf->__PVT__expanded_mask_v) 
                                      | (IData)((IData)(
                                                        ((0xff00U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                            >> 1U)))) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSelf->__PVT__mask_v_r)))))))));
    vlSelf->__PVT__expanded_mask_v = ((0xffffffff0000ffffULL 
                                       & vlSelf->__PVT__expanded_mask_v) 
                                      | ((QData)((IData)(
                                                         ((0xff00U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                             >> 3U)))) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                              >> 2U)))))))) 
                                         << 0x10U));
    vlSelf->__PVT__expanded_mask_v = ((0xffff0000ffffffffULL 
                                       & vlSelf->__PVT__expanded_mask_v) 
                                      | ((QData)((IData)(
                                                         ((0xff00U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                             >> 5U)))) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                              >> 4U)))))))) 
                                         << 0x20U));
    vlSelf->__PVT__expanded_mask_v = ((0xffffffffffffULL 
                                       & vlSelf->__PVT__expanded_mask_v) 
                                      | ((QData)((IData)(
                                                         ((0xff00U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                             >> 7U)))) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                              >> 6U)))))))) 
                                         << 0x30U));
    __Vtemp_h9ceed10c__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->__PVT__data_v_r)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->__PVT__data_v_r)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->__PVT__data_v_r)))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                  << 0x20U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                     << 0x18U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                        << 0x10U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                           << 8U) 
                                                          | (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->__PVT__data_v_r))))))))))));
    __Vtemp_h9ceed10c__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->__PVT__data_v_r)))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->__PVT__data_v_r)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->__PVT__data_v_r))))))))))) 
                                        >> 0x20U));
    vlSelf->__PVT__sbuf_data_in_mux_li[0U] = __Vtemp_h9ceed10c__0[0U];
    vlSelf->__PVT__sbuf_data_in_mux_li[1U] = __Vtemp_h9ceed10c__0[1U];
    vlSelf->__PVT__sbuf_data_in_mux_li[2U] = (IData)(
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                          << 0x20U) 
                                                         | (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->__PVT__data_v_r))))))));
    vlSelf->__PVT__sbuf_data_in_mux_li[3U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                           << 0x20U) 
                                                          | (((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__data_v_r))))))) 
                                                      >> 0x20U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x77U 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (8U 
                                                   & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                      << 3U)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x77U 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__lock_v_r)))) 
                                                   << 3U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x6fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (0x10U 
                                                   & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                      << 2U)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x6fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                                >> 2U)))) 
                                                   << 4U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x5fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (0x20U 
                                                   & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                      << 1U)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x5fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                                >> 4U)))) 
                                                   << 5U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x3fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->__PVT__lock_v_r)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x3fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                                >> 6U)))) 
                                                   << 6U));
    vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__0__KET____DOT__and_reduce 
        = (((IData)((0xfU == (0xfU & ((IData)(vlSelf->__PVT__lock_v_r) 
                                      >> 4U)))) << 1U) 
           | (0xfU == (0xfU & (IData)(vlSelf->__PVT__lock_v_r))));
    vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce 
        = ((0xcU & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce)) 
           | (((IData)((3U == (3U & ((IData)(vlSelf->__PVT__lock_v_r) 
                                     >> 2U)))) << 1U) 
              | (3U == (3U & (IData)(vlSelf->__PVT__lock_v_r)))));
    vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce 
        = ((3U & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce)) 
           | ((((IData)((3U == (3U & ((IData)(vlSelf->__PVT__lock_v_r) 
                                      >> 6U)))) << 1U) 
               | (3U == (3U & ((IData)(vlSelf->__PVT__lock_v_r) 
                               >> 4U)))) << 2U));
    if (vlSelf->__PVT__sbuf__DOT__el1_enable) {
        if (vlSelf->__PVT__sbuf__DOT__mux0_sel) {
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[3U] 
                = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[3U];
        } else {
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                = vlSelf->__PVT__sbuf_entry_li[0U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                = vlSelf->__PVT__sbuf_entry_li[1U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                = vlSelf->__PVT__sbuf_entry_li[2U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[3U] 
                = vlSelf->__PVT__sbuf_entry_li[3U];
        }
    }
    vlSelf->__PVT__atomic_reg_data = ((0x80000U & vlSelf->__PVT__decode_v_r)
                                       ? vlSelf->__PVT__data_v_r
                                       : ((QData)((IData)(vlSelf->__PVT__data_v_r)) 
                                          << 0x20U));
    vlSelf->__PVT__miss__DOT__goto_flush_op = (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2700U 
                                                        & vlSelf->__PVT__decode_v_r)));
    vlSelf->__PVT__recover_lo = 0U;
    vlSelf->__PVT__miss_done_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_done_lo = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffff00U & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | VL_STREAML_FAST_III(8, (0xffU & ((~ (IData)(vlSelf->__PVT__valid_v_r)) 
                                              & (~ (IData)(vlSelf->__PVT__lock_v_r)))), 0));
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] = 0U;
    vlSelf->__PVT__sbuf_mask_in_mux_li = ((0xff00ffffU 
                                           & vlSelf->__PVT__sbuf_mask_in_mux_li) 
                                          | ((0xf00000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__addr_v_r 
                                                                             >> 2U)))) 
                                                                >> 1U)))) 
                                                 << 0x14U)) 
                                             | (0xf0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(1U) 
                                                                  << 
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__addr_v_r 
                                                                              >> 2U))))))) 
                                                   << 0x10U))));
    vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xf0U & (IData)(vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (3U & (IData)(
                                                           (vlSelf->__PVT__addr_v_r 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__addr_v_r 
                                                                  >> 1U))))))))));
    vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfU & (IData)(vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__addr_v_r 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__addr_v_r 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->__PVT__tag_hit_v = ((0xfeU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (((0xfffffU & (IData)(
                                                        (vlSelf->__PVT__addr_v_r 
                                                         >> 0xdU))) 
                                    == (0xfffffU & 
                                        vlSelf->__PVT__tag_v_r[0U])) 
                                   & (IData)(vlSelf->__PVT__valid_v_r)));
    vlSelf->__PVT__tag_hit_v = ((0xfdU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xfffffffeU & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->__PVT__tag_v_r[1U] 
                                                         << 0xcU) 
                                                        | (vlSelf->__PVT__tag_v_r[0U] 
                                                           >> 0x14U)))) 
                                                   << 1U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xfbU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xfffffffcU & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & (vlSelf->__PVT__tag_v_r[1U] 
                                                        >> 8U))) 
                                                   << 2U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xf7U & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xfffffff8U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->__PVT__tag_v_r[2U] 
                                                         << 4U) 
                                                        | (vlSelf->__PVT__tag_v_r[1U] 
                                                           >> 0x1cU)))) 
                                                   << 3U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xefU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xfffffff0U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->__PVT__tag_v_r[3U] 
                                                         << 0x10U) 
                                                        | (vlSelf->__PVT__tag_v_r[2U] 
                                                           >> 0x10U)))) 
                                                   << 4U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xdfU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xffffffe0U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & (vlSelf->__PVT__tag_v_r[3U] 
                                                        >> 4U))) 
                                                   << 5U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xbfU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xffffffc0U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->__PVT__tag_v_r[4U] 
                                                         << 8U) 
                                                        | (vlSelf->__PVT__tag_v_r[3U] 
                                                           >> 0x18U)))) 
                                                   << 6U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0x7fU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xffffff80U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (vlSelf->__PVT__tag_v_r[4U] 
                                                     >> 0xcU)) 
                                                   << 7U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x7eU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__0__KET____DOT__and_reduce)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x7eU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | (0U 
                                                   != (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__0__KET____DOT__and_reduce)));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x7dU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (2U 
                                                   & ((IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce) 
                                                      << 1U)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x7dU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce)))) 
                                                   << 1U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x7bU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (4U 
                                                   & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x7bU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce) 
                                                                >> 2U)))) 
                                                   << 2U));
    vlSelf->__PVT__dma_way_lo = ((IData)(vlSelf->__PVT__miss__DOT__goto_flush_op)
                                  ? (IData)(vlSelf->__PVT__miss__DOT__flush_way_r)
                                  : (IData)(vlSelf->__PVT__miss__DOT__chosen_way_r));
    vlSelf->__PVT__sbuf_mask_in_mux_li = ((0xffff0000U 
                                           & vlSelf->__PVT__sbuf_mask_in_mux_li) 
                                          | (((IData)(vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o) 
                                              << 8U) 
                                             | (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelf->__PVT__addr_v_r))))));
    vlSelf->__PVT__miss__DOT__flush_way_decode = (0xffU 
                                                  & ((0x2000U 
                                                      & vlSelf->__PVT__decode_v_r)
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__addr_v_r 
                                                                  >> 0xdU))))
                                                      : (IData)(vlSelf->__PVT__tag_hit_v)));
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffff00U & vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | VL_STREAML_FAST_III(8, (IData)(vlSelf->__PVT__tag_hit_v), 0));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__sbuf__DOT__el0_enable) {
        vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
            = vlSelf->__PVT__sbuf_entry_li[0U];
        vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
            = vlSelf->__PVT__sbuf_entry_li[1U];
        vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
            = vlSelf->__PVT__sbuf_entry_li[2U];
        vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[3U] 
            = vlSelf->__PVT__sbuf_entry_li[3U];
    }
    vlSelf->__PVT__dma__DOT__out_fifo_v_li = 0U;
    vlSelf->__PVT__dma_evict_lo = 0U;
    vlSelf->dma__DOT____Vcellout__expand0__o = ((0xffffffffffff0000ULL 
                                                 & vlSelf->dma__DOT____Vcellout__expand0__o) 
                                                | (IData)((IData)(
                                                                  ((0xff00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 1U)))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo))))))))));
    vlSelf->dma__DOT____Vcellout__expand0__o = ((0xffffffff0000ffffULL 
                                                 & vlSelf->dma__DOT____Vcellout__expand0__o) 
                                                | ((QData)((IData)(
                                                                   ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 3U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 2U)))))))) 
                                                   << 0x10U));
    vlSelf->dma__DOT____Vcellout__expand0__o = ((0xffff0000ffffffffULL 
                                                 & vlSelf->dma__DOT____Vcellout__expand0__o) 
                                                | ((QData)((IData)(
                                                                   ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 5U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 4U)))))))) 
                                                   << 0x20U));
    vlSelf->dma__DOT____Vcellout__expand0__o = ((0xffffffffffffULL 
                                                 & vlSelf->dma__DOT____Vcellout__expand0__o) 
                                                | ((QData)((IData)(
                                                                   ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 7U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 6U)))))))) 
                                                   << 0x30U));
    vlSelf->__PVT__dma_addr_lo = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__unnamedblk3__DOT__i = 8U;
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xfff00000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]) 
                           | vlSelf->miss__DOT____Vlvbound_ha99840ce__0);
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xffcfffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]) 
                           | (0xfff00000U & (0x200000U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0x14U))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0x16U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffffc00U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              >> 0xaU));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffff3ffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xfffffc00U & (0x800U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0xaU))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0xcU));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                        = (2U | ((0xfffffffcU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                                 | (IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0)));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xffc00003U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 2U));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xff3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xffc00000U & (0x800000U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0x16U))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0x18U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                        = ((0xfffff000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              >> 8U));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                        = ((0xffffcfffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]) 
                           | (0xfffff000U & (0x2000U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0xcU))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                        = ((0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0xeU));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0xfffffffcU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              >> 0x12U));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0xfffffff3U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (0xfffffffcU & (8U | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                   << 2U))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0xff00000fU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 4U));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0xfcffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (0xff000000U & (0x2000000U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0x18U))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0x1aU));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] 
                        = ((0xc000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U]) 
                           | (0xffffU & (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                                         >> 6U)));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] 
                        = ((0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U]) 
                           | (0xc000U & (0x8000U | 
                                         ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                          << 0xeU))));
                    vlSelf->__PVT__dma_addr_lo = (((QData)((IData)(
                                                                   (0xfffffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__addr_v_r 
                                                                               >> 0xdU))))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    ((0x1fc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->__PVT__addr_v_r 
                                                                                >> 6U)) 
                                                                         << 6U)) 
                                                                     | (0x38U 
                                                                        & ((IData)(
                                                                                (vlSelf->__PVT__addr_v_r 
                                                                                >> 3U)) 
                                                                           << 3U))))));
                }
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__recover_lo = 1U;
                }
            } else {
                vlSelf->__PVT__dma_addr_lo = ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                               ? (((QData)((IData)(
                                                                   ((0x9fU 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(0x14U) 
                                                                         * (IData)(vlSelf->__PVT__dma_way_lo))))
                                                                     ? 
                                                                    (0xfffffU 
                                                                     & (((0U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((IData)(0x14U) 
                                                                              * (IData)(vlSelf->__PVT__dma_way_lo))))
                                                                          ? 0U
                                                                          : 
                                                                         (vlSelf->__PVT__tag_v_r[
                                                                          (((IData)(0x13U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x14U) 
                                                                                * (IData)(vlSelf->__PVT__dma_way_lo)))) 
                                                                           >> 5U)] 
                                                                          << 
                                                                          ((IData)(0x20U) 
                                                                           - 
                                                                           (0x1fU 
                                                                            & ((IData)(0x14U) 
                                                                               * (IData)(vlSelf->__PVT__dma_way_lo)))))) 
                                                                        | (vlSelf->__PVT__tag_v_r[
                                                                           (7U 
                                                                            & (((IData)(0x14U) 
                                                                                * (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                               >> 5U))] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(0x14U) 
                                                                               * (IData)(vlSelf->__PVT__dma_way_lo))))))
                                                                     : 0U))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    (0x1fc0U 
                                                                     & ((IData)(
                                                                                (vlSelf->__PVT__addr_v_r 
                                                                                >> 6U)) 
                                                                        << 6U)))))
                                               : (((QData)((IData)(
                                                                   (0xfffffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__addr_v_r 
                                                                               >> 0xdU))))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    (0x1fc0U 
                                                                     & ((IData)(
                                                                                (vlSelf->__PVT__addr_v_r 
                                                                                >> 6U)) 
                                                                        << 6U))))));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                    = (0xffdfffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xffe00000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                          << 0x14U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xfffff7ffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                    = (0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffff800U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0x3ffc00U & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                       << 0xaU)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = (0xfffffffdU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0xfffffffeU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xfffU & (IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = (0xff7fffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0xff800003U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xfffffffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                         << 0x16U)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                    = (0xffffdfffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = (0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                    = ((0xffffe000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]) 
                       | (0xfff000U & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                       << 0xcU)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = (0xfffffff7U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                    = (0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = ((0xfffffff8U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                       | (0x3ffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                     << 2U)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = (0xfdffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = ((0xfe00000fU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                       | (0xfffffff0U & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                         << 0x18U)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] 
                    = (0x7fffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = (0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] 
                    = ((0x8000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U]) 
                       | (0xc000U & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                     << 0xeU)));
            }
            if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__dma_addr_lo = (((QData)((IData)(
                                                               ((0x9fU 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(0x14U) 
                                                                     * (IData)(vlSelf->__PVT__dma_way_lo))))
                                                                 ? 
                                                                (0xfffffU 
                                                                 & (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(0x14U) 
                                                                          * (IData)(vlSelf->__PVT__dma_way_lo))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelf->__PVT__tag_v_r[
                                                                      (((IData)(0x13U) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x14U) 
                                                                            * (IData)(vlSelf->__PVT__dma_way_lo)))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & ((IData)(0x14U) 
                                                                           * (IData)(vlSelf->__PVT__dma_way_lo)))))) 
                                                                    | (vlSelf->__PVT__tag_v_r[
                                                                       (7U 
                                                                        & (((IData)(0x14U) 
                                                                            * (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                           >> 5U))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(0x14U) 
                                                                           * (IData)(vlSelf->__PVT__dma_way_lo))))))
                                                                 : 0U))) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                (0x1fc0U 
                                                                 & ((IData)(
                                                                            (vlSelf->__PVT__addr_v_r 
                                                                             >> 6U)) 
                                                                    << 6U)))));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__unnamedblk2__DOT__i = 8U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss__DOT__unnamedblk1__DOT__i = 8U;
                }
            }
        }
    }
    vlSelf->__PVT__valid_tl = ((0xfeU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (1U & (vlSelf->__Vcellout__tag_mem__data_o[0U] 
                                        >> 0x15U)));
    vlSelf->__PVT__tag_tl[0U] = ((0xfff00000U & vlSelf->__PVT__tag_tl[0U]) 
                                 | (0xfffffU & vlSelf->__Vcellout__tag_mem__data_o[0U]));
    vlSelf->__PVT__lock_tl = ((0xfeU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (1U & (vlSelf->__Vcellout__tag_mem__data_o[0U] 
                                       >> 0x14U)));
    vlSelf->__PVT__valid_tl = ((0xfdU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (2U & (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                        >> 0xaU)));
    vlSelf->__PVT__tag_tl[0U] = ((0xfffffU & vlSelf->__PVT__tag_tl[0U]) 
                                 | (0xfff00000U & (
                                                   (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                                    << 0x1eU) 
                                                   | (0x3ff00000U 
                                                      & (vlSelf->__Vcellout__tag_mem__data_o[0U] 
                                                         >> 2U)))));
    vlSelf->__PVT__tag_tl[1U] = ((0xffffff00U & vlSelf->__PVT__tag_tl[1U]) 
                                 | (0xffU & (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                             >> 2U)));
    vlSelf->__PVT__lock_tl = ((0xfdU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (2U & (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                       >> 9U)));
    vlSelf->__PVT__valid_tl = ((0xfbU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (4U & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                        << 1U)));
    vlSelf->__PVT__tag_tl[1U] = ((0xf00000ffU & vlSelf->__PVT__tag_tl[1U]) 
                                 | (0xfffff00U & (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                                  >> 4U)));
    vlSelf->__PVT__lock_tl = ((0xfbU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (4U & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                       << 2U)));
    vlSelf->__PVT__valid_tl = ((0xf7U & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (8U & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                        >> 0x14U)));
    vlSelf->__PVT__tag_tl[1U] = ((0xfffffffU & vlSelf->__PVT__tag_tl[1U]) 
                                 | (0xf0000000U & (
                                                   vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                                   << 0x1aU)));
    vlSelf->__PVT__tag_tl[2U] = ((0xffff0000U & vlSelf->__PVT__tag_tl[2U]) 
                                 | (0xffffU & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                               >> 6U)));
    vlSelf->__PVT__lock_tl = ((0xf7U & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (8U & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                       >> 0x13U)));
    vlSelf->__PVT__valid_tl = ((0xefU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (0x10U & (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                           >> 9U)));
    vlSelf->__PVT__tag_tl[2U] = ((0xffffU & vlSelf->__PVT__tag_tl[2U]) 
                                 | (0xffff0000U & (
                                                   (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                                         >> 8U)))));
    vlSelf->__PVT__tag_tl[3U] = ((0xfffffff0U & vlSelf->__PVT__tag_tl[3U]) 
                                 | (0xfU & (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                            >> 8U)));
    vlSelf->__PVT__lock_tl = ((0xefU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (0x10U & (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                          >> 8U)));
    vlSelf->__PVT__valid_tl = ((0xdfU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (0x20U & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                           << 2U)));
    vlSelf->__PVT__tag_tl[3U] = ((0xff00000fU & vlSelf->__PVT__tag_tl[3U]) 
                                 | (0xfffff0U & ((vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                                  << 0x16U) 
                                                 | (0x3ffff0U 
                                                    & (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                                       >> 0xaU)))));
    vlSelf->__PVT__lock_tl = ((0xdfU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (0x20U & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                          << 3U)));
    vlSelf->__PVT__valid_tl = ((0xbfU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (0x40U & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                           >> 0x13U)));
    vlSelf->__PVT__tag_tl[3U] = ((0xffffffU & vlSelf->__PVT__tag_tl[3U]) 
                                 | (0xff000000U & (
                                                   vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                                   << 0x14U)));
    vlSelf->__PVT__tag_tl[4U] = ((0xfffff000U & vlSelf->__PVT__tag_tl[4U]) 
                                 | (0xfffU & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                              >> 0xcU)));
    vlSelf->__PVT__lock_tl = ((0xbfU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (0x40U & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                          >> 0x12U)));
    vlSelf->__PVT__valid_tl = ((0x7fU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (0x80U & (vlSelf->__Vcellout__tag_mem__data_o[5U] 
                                           >> 8U)));
    vlSelf->__PVT__tag_tl[4U] = ((0xfffU & vlSelf->__PVT__tag_tl[4U]) 
                                 | (0xfffff000U & (
                                                   (vlSelf->__Vcellout__tag_mem__data_o[5U] 
                                                    << 0x12U) 
                                                   | (0x3f000U 
                                                      & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                                         >> 0xeU)))));
    vlSelf->__PVT__lock_tl = ((0x7fU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (0x80U & (vlSelf->__Vcellout__tag_mem__data_o[5U] 
                                          >> 7U)));
    vlSelf->__PVT__miss__DOT__modified_lru_bits = (
                                                   (0x7cU 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                            >> 1U)
                                                            : 
                                                           ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                             ? (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)
                                                             : (IData)(vlSelf->__Vcellout__stat_mem__data_o)))));
    vlSelf->__PVT__miss__DOT__modified_lru_bits = (
                                                   (0x73U 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits)) 
                                                   | ((8U 
                                                       & (((8U 
                                                            & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                            >> 3U)
                                                            : 
                                                           ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                            >> 3U)) 
                                                          << 3U)) 
                                                      | (4U 
                                                         & (((4U 
                                                              & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                              >> 2U)
                                                              : 
                                                             ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                              >> 2U)) 
                                                            << 2U))));
    vlSelf->__PVT__miss__DOT__modified_lru_bits = (
                                                   (0x4fU 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits)) 
                                                   | ((0x20U 
                                                       & (((0x20U 
                                                            & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                            >> 5U)) 
                                                          << 5U)) 
                                                      | (0x10U 
                                                         & (((0x10U 
                                                              & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                              >> 4U)
                                                              : 
                                                             ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                              >> 4U)) 
                                                            << 4U))));
    vlSelf->__PVT__miss__DOT__modified_lru_bits = (
                                                   (0x3fU 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits)) 
                                                   | (0x40U 
                                                      & (((0x40U 
                                                           & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                           >> 6U)
                                                           : 
                                                          ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                           >> 6U)) 
                                                         << 6U)));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__full 
        = ((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty 
        = ((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__sbuf_entry_li[2U] = ((0x7ffU & vlSelf->__PVT__sbuf_entry_li[2U]) 
                                        | ((IData)(vlSelf->__PVT__addr_v_r) 
                                           << 0xbU));
    vlSelf->__PVT__sbuf_entry_li[3U] = (0xfffU & (((IData)(vlSelf->__PVT__addr_v_r) 
                                                   >> 0x15U) 
                                                  | ((IData)(
                                                             (vlSelf->__PVT__addr_v_r 
                                                              >> 0x20U)) 
                                                     << 0xbU)));
    if ((0U != (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        if ((1U != (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
            if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
                vlSelf->__PVT__dma__DOT__out_fifo_v_li = 1U;
            }
        }
    }
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__enq_i = 
        ((IData)(vlSelf->__PVT__dma__DOT__out_fifo_v_li) 
         & (~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_data_v_o) 
                 & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__full))));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_n 
        = (7U & ((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r)));
    vlSelf->__PVT__dma__DOT__in_fifo_yumi_li = 0U;
    vlSelf->__PVT__dma_data_mem_w_lo = 0U;
    if ((0U != (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        if ((1U != (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
            if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
                vlSelf->__PVT__dma_evict_lo = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
            vlSelf->__PVT__dma__DOT__in_fifo_yumi_li 
                = (1U & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
            vlSelf->__PVT__dma_data_mem_w_lo = (1U 
                                                & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
        }
    }
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_n 
        = (7U & ((IData)(vlSelf->__PVT__dma__DOT__in_fifo_yumi_li)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r)));
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__0(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    CData/*3:0*/ __Vdly__dma__DOT__counter_r;
    CData/*2:0*/ __Vdlyvdim0__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    QData/*63:0*/ __Vdlyvval__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdly__dma__DOT__out_fifo__DOT__tail_r;
    CData/*0:0*/ __Vdlyvdim0__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    QData/*63:0*/ __Vdlyvval__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*6:0*/ __Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<6>/*175:0*/ __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*6:0*/ __Vdlyvdim0__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*14:0*/ __Vdlyvval__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    VlWide<4>/*127:0*/ __Vtemp_h9ceed10c__0;
    // Body
    __Vdlyvset__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__dma__DOT__out_fifo__DOT__tail_r = vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r;
    __Vdlyvset__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__dma__DOT__counter_r = vlSelf->__PVT__dma__DOT__counter_r;
    __Vdlyvset__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__read_en)
            ? (IData)(vlSelf->__PVT__tag_mem_addr_li)
            : 0U);
    if (((IData)(vlSelf->__PVT__tag_mem_v_li) & (IData)(vlSelf->__PVT__tag_mem_w_li))) {
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U];
        __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U];
        __Vdlyvset__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tag_mem_addr_li;
    }
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__read_en)
            ? (IData)(vlSelf->__PVT__stat_mem_addr_li)
            : 0U);
    if (((IData)(vlSelf->__PVT__stat_mem_v_li) & (IData)(vlSelf->__PVT__stat_mem_w_li))) {
        __Vdlyvval__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n;
        __Vdlyvset__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__stat_mem_addr_li;
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & (((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
                                                   & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_data_v_o)) 
                                                  << 2U)) 
                                           | (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.reset_i)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h30c84400_0
         [__Vtableidx3])) {
        __Vdly__dma__DOT__out_fifo__DOT__tail_r = Vtestbench__ConstPool__TABLE_hbdaffb28_0
            [__Vtableidx3];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h30c84400_0
         [__Vtableidx3])) {
        vlSelf->__PVT__dma__DOT__out_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h025ce265_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_hedafa651_0[__Vtableidx3];
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h04292f50_0[__Vtableidx3];
    vlSelf->__PVT__miss__DOT__select_snoop_data_r = 
        ((~ (IData)(vlSymsp->TOP.reset_i)) & (IData)(vlSelf->__PVT__miss__DOT__select_snoop_data_n));
    if (vlSelf->__PVT__dma__DOT__out_fifo__DOT__enq_i) {
        __Vdlyvval__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (((QData)((IData)(vlSelf->__Vcellout__data_mem__data_o[
                                (((IData)(0x3fU) + 
                                  (0x1ffU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                             << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->__Vcellout__data_mem__data_o[
                                       (((IData)(0x1fU) 
                                         + (0x1ffU 
                                            & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->__Vcellout__data_mem__data_o[
                                     (0xeU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                              << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->__PVT__dma_way_lo) 
                                  << 6U)))));
        __Vdlyvset__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset_i)))) {
        if (vlSelf->__PVT__v_we) {
            if (vlSelf->__PVT__v_tl_r) {
                vlSelf->__PVT__ld_data_v_r[0U] = vlSelf->__Vcellout__data_mem__data_o[0U];
                vlSelf->__PVT__ld_data_v_r[1U] = vlSelf->__Vcellout__data_mem__data_o[1U];
                vlSelf->__PVT__ld_data_v_r[2U] = vlSelf->__Vcellout__data_mem__data_o[2U];
                vlSelf->__PVT__ld_data_v_r[3U] = vlSelf->__Vcellout__data_mem__data_o[3U];
                vlSelf->__PVT__ld_data_v_r[4U] = vlSelf->__Vcellout__data_mem__data_o[4U];
                vlSelf->__PVT__ld_data_v_r[5U] = vlSelf->__Vcellout__data_mem__data_o[5U];
                vlSelf->__PVT__ld_data_v_r[6U] = vlSelf->__Vcellout__data_mem__data_o[6U];
                vlSelf->__PVT__ld_data_v_r[7U] = vlSelf->__Vcellout__data_mem__data_o[7U];
                vlSelf->__PVT__ld_data_v_r[8U] = vlSelf->__Vcellout__data_mem__data_o[8U];
                vlSelf->__PVT__ld_data_v_r[9U] = vlSelf->__Vcellout__data_mem__data_o[9U];
                vlSelf->__PVT__ld_data_v_r[0xaU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xaU];
                vlSelf->__PVT__ld_data_v_r[0xbU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xbU];
                vlSelf->__PVT__ld_data_v_r[0xcU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xcU];
                vlSelf->__PVT__ld_data_v_r[0xdU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xdU];
                vlSelf->__PVT__ld_data_v_r[0xeU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xeU];
                vlSelf->__PVT__ld_data_v_r[0xfU] = 
                    vlSelf->__Vcellout__data_mem__data_o[0xfU];
            }
        }
        if ((((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r)) 
              & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty))) 
             & ((7U & (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                == (7U & (IData)((vlSelf->__PVT__dma_addr_lo 
                                  >> 3U)))))) {
            vlSelf->__PVT__snoop_word_lo = vlSelf->__PVT__dma__DOT__in_fifo_data_lo;
        }
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0U;
        vlSelf->__PVT__sbuf__DOT__num_els_r = 0U;
        __Vdly__dma__DOT__counter_r = 0U;
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 1U;
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__mask_v_r = 0U;
        vlSelf->__PVT__data_v_r = 0ULL;
        vlSelf->__PVT__lock_v_r = 0U;
        vlSelf->__PVT__v_v_r = 0U;
        vlSelf->__PVT__bypass_data_lo = 0ULL;
        vlSelf->__PVT__bypass_mask_lo = 0U;
        vlSelf->__PVT__miss__DOT__flush_way_r = 0U;
        vlSelf->__PVT__miss__DOT__chosen_way_r = 0U;
        vlSelf->__PVT__decode_v_r = 0U;
        vlSelf->__PVT__miss__DOT__miss_state_r = 0U;
        vlSelf->__PVT__valid_v_r = 0U;
        vlSelf->__PVT__tag_v_r[0U] = 0U;
        vlSelf->__PVT__tag_v_r[1U] = 0U;
        vlSelf->__PVT__tag_v_r[2U] = 0U;
        vlSelf->__PVT__tag_v_r[3U] = 0U;
        vlSelf->__PVT__tag_v_r[4U] = 0U;
        vlSelf->__PVT__addr_v_r = 0ULL;
    } else {
        if (((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__PVT__dma__DOT__in_fifo_yumi_li))) {
            vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r 
                = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque;
            vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r 
                = vlSelf->__PVT__dma__DOT__in_fifo_yumi_li;
        }
        vlSelf->__PVT__sbuf__DOT__num_els_r = (3U & 
                                               (((IData)(vlSelf->__PVT__sbuf__DOT__num_els_r) 
                                                 + (IData)(vlSelf->__PVT__sbuf_v_li)) 
                                                - ((IData)(vlSelf->__PVT__sbuf_v_lo) 
                                                   & (IData)(vlSelf->__PVT__sbuf_yumi_li))));
        if (vlSelf->__PVT__dma__DOT__counter_clear) {
            __Vdly__dma__DOT__counter_r = vlSelf->__PVT__dma__DOT__counter_up;
        } else if (vlSelf->__PVT__dma__DOT__counter_up) {
            __Vdly__dma__DOT__counter_r = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dma__DOT__counter_r)));
        }
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r 
            = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_n;
        if (vlSelf->__PVT__v_we) {
            if (vlSelf->__PVT__v_tl_r) {
                vlSelf->__PVT__mask_v_r = vlSelf->__PVT__mask_tl_r;
                vlSelf->__PVT__data_v_r = vlSelf->__PVT__data_tl_r;
                vlSelf->__PVT__lock_v_r = vlSelf->__PVT__lock_tl;
                vlSelf->__PVT__decode_v_r = vlSelf->__PVT__decode_tl_r;
                vlSelf->__PVT__valid_v_r = vlSelf->__PVT__valid_tl;
                vlSelf->__PVT__tag_v_r[0U] = vlSelf->__PVT__tag_tl[0U];
                vlSelf->__PVT__tag_v_r[1U] = vlSelf->__PVT__tag_tl[1U];
                vlSelf->__PVT__tag_v_r[2U] = vlSelf->__PVT__tag_tl[2U];
                vlSelf->__PVT__tag_v_r[3U] = vlSelf->__PVT__tag_tl[3U];
                vlSelf->__PVT__tag_v_r[4U] = vlSelf->__PVT__tag_tl[4U];
                vlSelf->__PVT__addr_v_r = vlSelf->__PVT__addr_tl_r;
                vlSelf->__PVT__v_v_r = 1U;
            } else {
                vlSelf->__PVT__v_v_r = 0U;
            }
        }
        if (vlSelf->__PVT__bypass_v_li) {
            vlSelf->__PVT__bypass_data_lo = vlSelf->__PVT__sbuf__DOT__bypass_data_n;
            vlSelf->__PVT__bypass_mask_lo = (0xffU 
                                             & ((((- (IData)((IData)(vlSelf->__PVT__sbuf__DOT__tag_hit0))) 
                                                  & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                      << 0x1dU) 
                                                     | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                        >> 3U))) 
                                                 | ((- (IData)(
                                                               (((0x3fffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__addr_tl_r 
                                                                             >> 3U))) 
                                                                 == 
                                                                 (0x3fffffffU 
                                                                  & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                                                                        >> 0xeU)))) 
                                                                & (IData)(vlSelf->__PVT__sbuf__DOT__el1_valid)))) 
                                                    & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                        << 0x1dU) 
                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                          >> 3U)))) 
                                                | ((- (IData)((IData)(vlSelf->__PVT__sbuf__DOT__tag_hit2))) 
                                                   & ((vlSelf->__PVT__sbuf_entry_li[0U] 
                                                       << 0x1dU) 
                                                      | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                                         >> 3U)))));
        }
        vlSelf->__PVT__miss__DOT__flush_way_r = vlSelf->__PVT__miss__DOT__flush_way_n;
        vlSelf->__PVT__miss__DOT__chosen_way_r = vlSelf->__PVT__miss__DOT__chosen_way_n;
        vlSelf->__PVT__miss__DOT__miss_state_r = vlSelf->__PVT__miss__DOT__miss_state_n;
    }
    if (vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) {
        __Vdlyvval__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = (((QData)((IData)(vlSymsp->TOP.testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT____Vcellout__rx0__dma_data_o[3U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT____Vcellout__rx0__dma_data_o[2U])));
        __Vdlyvset__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r;
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__mask_tl_r = 0U;
        vlSelf->__PVT__data_tl_r = 0ULL;
        vlSelf->__PVT__dma__DOT__dma_state_r = 0U;
        vlSelf->__PVT__decode_tl_r = 0U;
        vlSelf->__PVT__addr_tl_r = 0ULL;
        vlSelf->__PVT__v_tl_r = 0U;
    } else {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r 
            = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_n;
        if (vlSelf->ready_o) {
            if ((2U & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li))) {
                vlSelf->__PVT__mask_tl_r = (0xffU & 
                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U]);
                vlSelf->__PVT__data_tl_r = (((QData)((IData)(
                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U])) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U])) 
                                                  >> 8U)));
                vlSelf->__PVT__decode_tl_r = vlSelf->__PVT__decode;
                vlSelf->__PVT__addr_tl_r = (0x1ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U])) 
                                                  >> 8U)));
            }
            vlSelf->__PVT__v_tl_r = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                           >> 1U));
        } else if (vlSelf->__PVT__sbuf_hazard) {
            vlSelf->__PVT__v_tl_r = 0U;
        }
        vlSelf->__PVT__dma__DOT__dma_state_r = vlSelf->__PVT__dma__DOT__dma_state_n;
    }
    if (__Vdlyvset__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[5U];
    }
    if (__Vdlyvset__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r 
        = __Vdly__dma__DOT__out_fifo__DOT__tail_r;
    if (__Vdlyvset__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__Vcellout__data_mem__data_o[0U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[0U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[0U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[1U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[1U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[1U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[1U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[2U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[2U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[2U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[2U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[3U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[3U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[3U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[3U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[4U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[4U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[4U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[4U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[5U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[5U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[5U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[5U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[6U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[6U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[6U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[6U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[7U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[7U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[7U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[7U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[8U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[8U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[8U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[8U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[9U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[9U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[9U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[9U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[0xaU] = ((0xffff0000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xaU]) 
                                                  | (0xffffffU 
                                                     & ((0xffff00U 
                                                         & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)) 
                                                        | ((0xffffffU 
                                                            & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xaU] = ((0xffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xaU]) 
                                                  | (0xffff0000U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                           << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[0xbU] = ((0xffffff00U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xbU]) 
                                                  | (0xffffU 
                                                     & ((0xffffU 
                                                         & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                        | ((0xffffU 
                                                            & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                 ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                 : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xbU] = ((0xffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xbU]) 
                                                  | (0xffffff00U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xcU] = ((0xff000000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xcU]) 
                                                  | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                        ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                        : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                      << 0x10U) 
                                                     | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0xcU] = ((0xffffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xcU]) 
                                                  | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                       ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                       : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                     << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[0xdU] = ((0xffff0000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xdU]) 
                                                  | (0xffffffU 
                                                     & ((0xffff00U 
                                                         & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)) 
                                                        | ((0xffffffU 
                                                            & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xdU] = ((0xffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xdU]) 
                                                  | (0xffff0000U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                           << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[0xeU] = ((0xffffff00U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xeU]) 
                                                  | (0xffffU 
                                                     & ((0xffffU 
                                                         & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                        | ((0xffffU 
                                                            & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                 ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                 : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xeU] = ((0xffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xeU]) 
                                                  | (0xffffff00U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xfU] = ((0xff000000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xfU]) 
                                                  | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                        ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                        : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                      << 0x10U) 
                                                     | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0xfU] = ((0xffffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xfU]) 
                                                  | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                       ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                       : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                     << 0x18U));
    vlSelf->__PVT__dma__DOT__counter_r = __Vdly__dma__DOT__counter_r;
    if (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[3U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[4U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[4U];
        vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[5U] 
            = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[5U];
    }
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][3U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[4U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][4U];
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[5U] 
        = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][5U];
    if (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__tag_mem__data_o[0U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__tag_mem__data_o[1U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__tag_mem__data_o[2U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__tag_mem__data_o[3U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[3U];
        vlSelf->__Vcellout__tag_mem__data_o[4U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[4U];
        vlSelf->__Vcellout__tag_mem__data_o[5U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[5U];
    } else {
        vlSelf->__Vcellout__tag_mem__data_o[0U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__tag_mem__data_o[1U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__tag_mem__data_o[2U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__tag_mem__data_o[3U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
        vlSelf->__Vcellout__tag_mem__data_o[4U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[4U];
        vlSelf->__Vcellout__tag_mem__data_o[5U] = vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[5U];
    }
    if (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_out;
    }
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__Vcellout__stat_mem__data_o = ((IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                             ? (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_out)
                                             : (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r));
    vlSelf->__PVT__dma__DOT__in_fifo_data_lo = vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r];
    vlSelf->__PVT__expanded_mask_v = ((0xffffffffffff0000ULL 
                                       & vlSelf->__PVT__expanded_mask_v) 
                                      | (IData)((IData)(
                                                        ((0xff00U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                            >> 1U)))) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSelf->__PVT__mask_v_r)))))))));
    vlSelf->__PVT__expanded_mask_v = ((0xffffffff0000ffffULL 
                                       & vlSelf->__PVT__expanded_mask_v) 
                                      | ((QData)((IData)(
                                                         ((0xff00U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                             >> 3U)))) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                              >> 2U)))))))) 
                                         << 0x10U));
    vlSelf->__PVT__expanded_mask_v = ((0xffff0000ffffffffULL 
                                       & vlSelf->__PVT__expanded_mask_v) 
                                      | ((QData)((IData)(
                                                         ((0xff00U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                             >> 5U)))) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                              >> 4U)))))))) 
                                         << 0x20U));
    vlSelf->__PVT__expanded_mask_v = ((0xffffffffffffULL 
                                       & vlSelf->__PVT__expanded_mask_v) 
                                      | ((QData)((IData)(
                                                         ((0xff00U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                             >> 7U)))) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->__PVT__mask_v_r) 
                                                                              >> 6U)))))))) 
                                         << 0x30U));
    __Vtemp_h9ceed10c__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->__PVT__data_v_r)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->__PVT__data_v_r)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->__PVT__data_v_r)))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                  << 0x20U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                     << 0x18U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                        << 0x10U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                           << 8U) 
                                                          | (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->__PVT__data_v_r))))))))))));
    __Vtemp_h9ceed10c__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->__PVT__data_v_r)))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->__PVT__data_v_r)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->__PVT__data_v_r))))))))))) 
                                        >> 0x20U));
    vlSelf->__PVT__sbuf_data_in_mux_li[0U] = __Vtemp_h9ceed10c__0[0U];
    vlSelf->__PVT__sbuf_data_in_mux_li[1U] = __Vtemp_h9ceed10c__0[1U];
    vlSelf->__PVT__sbuf_data_in_mux_li[2U] = (IData)(
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                          << 0x20U) 
                                                         | (((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->__PVT__data_v_r))))))));
    vlSelf->__PVT__sbuf_data_in_mux_li[3U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                           << 0x20U) 
                                                          | (((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->__PVT__data_v_r)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__data_v_r))))))) 
                                                      >> 0x20U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x77U 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (8U 
                                                   & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                      << 3U)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x77U 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__lock_v_r)))) 
                                                   << 3U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x6fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (0x10U 
                                                   & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                      << 2U)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x6fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                                >> 2U)))) 
                                                   << 4U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x5fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (0x20U 
                                                   & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                      << 1U)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x5fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                                >> 4U)))) 
                                                   << 5U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x3fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->__PVT__lock_v_r)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x3fU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                                >> 6U)))) 
                                                   << 6U));
    vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__0__KET____DOT__and_reduce 
        = (((IData)((0xfU == (0xfU & ((IData)(vlSelf->__PVT__lock_v_r) 
                                      >> 4U)))) << 1U) 
           | (0xfU == (0xfU & (IData)(vlSelf->__PVT__lock_v_r))));
    vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce 
        = ((0xcU & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce)) 
           | (((IData)((3U == (3U & ((IData)(vlSelf->__PVT__lock_v_r) 
                                     >> 2U)))) << 1U) 
              | (3U == (3U & (IData)(vlSelf->__PVT__lock_v_r)))));
    vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce 
        = ((3U & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce)) 
           | ((((IData)((3U == (3U & ((IData)(vlSelf->__PVT__lock_v_r) 
                                      >> 6U)))) << 1U) 
               | (3U == (3U & ((IData)(vlSelf->__PVT__lock_v_r) 
                               >> 4U)))) << 2U));
    if (vlSelf->__PVT__sbuf__DOT__el1_enable) {
        if (vlSelf->__PVT__sbuf__DOT__mux0_sel) {
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[3U] 
                = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[3U];
        } else {
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                = vlSelf->__PVT__sbuf_entry_li[0U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                = vlSelf->__PVT__sbuf_entry_li[1U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                = vlSelf->__PVT__sbuf_entry_li[2U];
            vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[3U] 
                = vlSelf->__PVT__sbuf_entry_li[3U];
        }
    }
    vlSelf->__PVT__atomic_reg_data = ((0x80000U & vlSelf->__PVT__decode_v_r)
                                       ? vlSelf->__PVT__data_v_r
                                       : ((QData)((IData)(vlSelf->__PVT__data_v_r)) 
                                          << 0x20U));
    vlSelf->__PVT__miss__DOT__goto_flush_op = (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2700U 
                                                        & vlSelf->__PVT__decode_v_r)));
    vlSelf->__PVT__recover_lo = 0U;
    vlSelf->__PVT__miss_done_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_done_lo = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffff00U & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | VL_STREAML_FAST_III(8, (0xffU & ((~ (IData)(vlSelf->__PVT__valid_v_r)) 
                                              & (~ (IData)(vlSelf->__PVT__lock_v_r)))), 0));
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] = 0U;
    vlSelf->__PVT__sbuf_mask_in_mux_li = ((0xff00ffffU 
                                           & vlSelf->__PVT__sbuf_mask_in_mux_li) 
                                          | ((0xf00000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__addr_v_r 
                                                                             >> 2U)))) 
                                                                >> 1U)))) 
                                                 << 0x14U)) 
                                             | (0xf0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(1U) 
                                                                  << 
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__addr_v_r 
                                                                              >> 2U))))))) 
                                                   << 0x10U))));
    vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xf0U & (IData)(vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (3U & (IData)(
                                                           (vlSelf->__PVT__addr_v_r 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__addr_v_r 
                                                                  >> 1U))))))))));
    vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfU & (IData)(vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__addr_v_r 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__addr_v_r 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->__PVT__tag_hit_v = ((0xfeU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (((0xfffffU & (IData)(
                                                        (vlSelf->__PVT__addr_v_r 
                                                         >> 0xdU))) 
                                    == (0xfffffU & 
                                        vlSelf->__PVT__tag_v_r[0U])) 
                                   & (IData)(vlSelf->__PVT__valid_v_r)));
    vlSelf->__PVT__tag_hit_v = ((0xfdU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xfffffffeU & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->__PVT__tag_v_r[1U] 
                                                         << 0xcU) 
                                                        | (vlSelf->__PVT__tag_v_r[0U] 
                                                           >> 0x14U)))) 
                                                   << 1U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xfbU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xfffffffcU & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & (vlSelf->__PVT__tag_v_r[1U] 
                                                        >> 8U))) 
                                                   << 2U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xf7U & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xfffffff8U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->__PVT__tag_v_r[2U] 
                                                         << 4U) 
                                                        | (vlSelf->__PVT__tag_v_r[1U] 
                                                           >> 0x1cU)))) 
                                                   << 3U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xefU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xfffffff0U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->__PVT__tag_v_r[3U] 
                                                         << 0x10U) 
                                                        | (vlSelf->__PVT__tag_v_r[2U] 
                                                           >> 0x10U)))) 
                                                   << 4U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xdfU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xffffffe0U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & (vlSelf->__PVT__tag_v_r[3U] 
                                                        >> 4U))) 
                                                   << 5U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0xbfU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xffffffc0U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->__PVT__tag_v_r[4U] 
                                                         << 8U) 
                                                        | (vlSelf->__PVT__tag_v_r[3U] 
                                                           >> 0x18U)))) 
                                                   << 6U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__tag_hit_v = ((0x7fU & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                | (0xffffff80U & ((
                                                   ((0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))) 
                                                    == 
                                                    (vlSelf->__PVT__tag_v_r[4U] 
                                                     >> 0xcU)) 
                                                   << 7U) 
                                                  & (IData)(vlSelf->__PVT__valid_v_r))));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x7eU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__0__KET____DOT__and_reduce)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x7eU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | (0U 
                                                   != (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__0__KET____DOT__and_reduce)));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x7dU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (2U 
                                                   & ((IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce) 
                                                      << 1U)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x7dU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce)))) 
                                                   << 1U));
    vlSelf->__PVT__miss__DOT__modify_data_lo = ((0x7bU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)) 
                                                | (4U 
                                                   & (IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce)));
    vlSelf->__PVT__miss__DOT__modify_mask_lo = ((0x7bU 
                                                 & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo)) 
                                                | ((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce) 
                                                                >> 2U)))) 
                                                   << 2U));
    vlSelf->__PVT__dma_way_lo = ((IData)(vlSelf->__PVT__miss__DOT__goto_flush_op)
                                  ? (IData)(vlSelf->__PVT__miss__DOT__flush_way_r)
                                  : (IData)(vlSelf->__PVT__miss__DOT__chosen_way_r));
    vlSelf->__PVT__sbuf_mask_in_mux_li = ((0xffff0000U 
                                           & vlSelf->__PVT__sbuf_mask_in_mux_li) 
                                          | (((IData)(vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o) 
                                              << 8U) 
                                             | (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelf->__PVT__addr_v_r))))));
    vlSelf->__PVT__miss__DOT__flush_way_decode = (0xffU 
                                                  & ((0x2000U 
                                                      & vlSelf->__PVT__decode_v_r)
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__addr_v_r 
                                                                  >> 0xdU))))
                                                      : (IData)(vlSelf->__PVT__tag_hit_v)));
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffff00U & vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | VL_STREAML_FAST_III(8, (IData)(vlSelf->__PVT__tag_hit_v), 0));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__sbuf__DOT__el0_enable) {
        vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
            = vlSelf->__PVT__sbuf_entry_li[0U];
        vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
            = vlSelf->__PVT__sbuf_entry_li[1U];
        vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
            = vlSelf->__PVT__sbuf_entry_li[2U];
        vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[3U] 
            = vlSelf->__PVT__sbuf_entry_li[3U];
    }
    vlSelf->__PVT__dma__DOT__out_fifo_v_li = 0U;
    vlSelf->__PVT__dma_evict_lo = 0U;
    vlSelf->dma__DOT____Vcellout__expand0__o = ((0xffffffffffff0000ULL 
                                                 & vlSelf->dma__DOT____Vcellout__expand0__o) 
                                                | (IData)((IData)(
                                                                  ((0xff00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 1U)))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo))))))))));
    vlSelf->dma__DOT____Vcellout__expand0__o = ((0xffffffff0000ffffULL 
                                                 & vlSelf->dma__DOT____Vcellout__expand0__o) 
                                                | ((QData)((IData)(
                                                                   ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 3U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 2U)))))))) 
                                                   << 0x10U));
    vlSelf->dma__DOT____Vcellout__expand0__o = ((0xffff0000ffffffffULL 
                                                 & vlSelf->dma__DOT____Vcellout__expand0__o) 
                                                | ((QData)((IData)(
                                                                   ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 5U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 4U)))))))) 
                                                   << 0x20U));
    vlSelf->dma__DOT____Vcellout__expand0__o = ((0xffffffffffffULL 
                                                 & vlSelf->dma__DOT____Vcellout__expand0__o) 
                                                | ((QData)((IData)(
                                                                   ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 7U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                                >> 6U)))))))) 
                                                   << 0x30U));
    vlSelf->__PVT__dma_addr_lo = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__unnamedblk3__DOT__i = 8U;
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xfff00000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]) 
                           | vlSelf->miss__DOT____Vlvbound_ha99840ce__0);
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xffcfffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]) 
                           | (0xfff00000U & (0x200000U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0x14U))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0x16U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffffc00U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              >> 0xaU));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffff3ffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xfffffc00U & (0x800U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0xaU))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0xcU));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                        = (2U | ((0xfffffffcU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                                 | (IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0)));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xffc00003U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 2U));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xff3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xffc00000U & (0x800000U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0x16U))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0x18U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                        = ((0xfffff000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              >> 8U));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                        = ((0xffffcfffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]) 
                           | (0xfffff000U & (0x2000U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0xcU))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                        = ((0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0xeU));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0xfffffffcU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              >> 0x12U));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0xfffffff3U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (0xfffffffcU & (8U | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                   << 2U))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0xff00000fU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 4U));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0xfcffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (0xff000000U & (0x2000000U 
                                             | ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                                << 0x18U))));
                    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                        = (0xfffffU & (IData)((vlSelf->__PVT__addr_v_r 
                                               >> 0xdU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                        = ((0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                              << 0x1aU));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] 
                        = ((0xc000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U]) 
                           | (0xffffU & (vlSelf->miss__DOT____Vlvbound_ha99840ce__0 
                                         >> 6U)));
                    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 
                        = (1U & (vlSelf->__PVT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] 
                        = ((0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U]) 
                           | (0xc000U & (0x8000U | 
                                         ((IData)(vlSelf->miss__DOT____Vlvbound_h08450b7e__0) 
                                          << 0xeU))));
                    vlSelf->__PVT__dma_addr_lo = (((QData)((IData)(
                                                                   (0xfffffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__addr_v_r 
                                                                               >> 0xdU))))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    ((0x1fc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->__PVT__addr_v_r 
                                                                                >> 6U)) 
                                                                         << 6U)) 
                                                                     | (0x38U 
                                                                        & ((IData)(
                                                                                (vlSelf->__PVT__addr_v_r 
                                                                                >> 3U)) 
                                                                           << 3U))))));
                }
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__recover_lo = 1U;
                }
            } else {
                vlSelf->__PVT__dma_addr_lo = ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                               ? (((QData)((IData)(
                                                                   ((0x9fU 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(0x14U) 
                                                                         * (IData)(vlSelf->__PVT__dma_way_lo))))
                                                                     ? 
                                                                    (0xfffffU 
                                                                     & (((0U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((IData)(0x14U) 
                                                                              * (IData)(vlSelf->__PVT__dma_way_lo))))
                                                                          ? 0U
                                                                          : 
                                                                         (vlSelf->__PVT__tag_v_r[
                                                                          (((IData)(0x13U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x14U) 
                                                                                * (IData)(vlSelf->__PVT__dma_way_lo)))) 
                                                                           >> 5U)] 
                                                                          << 
                                                                          ((IData)(0x20U) 
                                                                           - 
                                                                           (0x1fU 
                                                                            & ((IData)(0x14U) 
                                                                               * (IData)(vlSelf->__PVT__dma_way_lo)))))) 
                                                                        | (vlSelf->__PVT__tag_v_r[
                                                                           (7U 
                                                                            & (((IData)(0x14U) 
                                                                                * (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                               >> 5U))] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(0x14U) 
                                                                               * (IData)(vlSelf->__PVT__dma_way_lo))))))
                                                                     : 0U))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    (0x1fc0U 
                                                                     & ((IData)(
                                                                                (vlSelf->__PVT__addr_v_r 
                                                                                >> 6U)) 
                                                                        << 6U)))))
                                               : (((QData)((IData)(
                                                                   (0xfffffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__addr_v_r 
                                                                               >> 0xdU))))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    (0x1fc0U 
                                                                     & ((IData)(
                                                                                (vlSelf->__PVT__addr_v_r 
                                                                                >> 6U)) 
                                                                        << 6U))))));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                    = (0xffdfffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xffe00000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                          << 0x14U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xfffff7ffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] 
                    = (0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffff800U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0x3ffc00U & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                       << 0xaU)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = (0xfffffffdU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0xfffffffeU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xfffU & (IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = (0xff7fffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0xff800003U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xfffffffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                         << 0x16U)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                    = (0xffffdfffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] 
                    = (0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                    = ((0xffffe000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]) 
                       | (0xfff000U & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                       << 0xcU)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = (0xfffffff7U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] 
                    = (0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = ((0xfffffff8U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                       | (0x3ffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                     << 2U)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = (0xfdffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = ((0xfe00000fU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]) 
                       | (0xfffffff0U & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                         << 0x18U)));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] 
                    = (0x7fffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U]);
                vlSelf->miss__DOT____Vlvbound_hf01905f9__0 
                    = (1U & (vlSelf->__PVT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] 
                    = (0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U]);
                vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] 
                    = ((0x8000U & vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U]) 
                       | (0xc000U & ((IData)(vlSelf->miss__DOT____Vlvbound_hf01905f9__0) 
                                     << 0xeU)));
            }
            if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__dma_addr_lo = (((QData)((IData)(
                                                               ((0x9fU 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(0x14U) 
                                                                     * (IData)(vlSelf->__PVT__dma_way_lo))))
                                                                 ? 
                                                                (0xfffffU 
                                                                 & (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(0x14U) 
                                                                          * (IData)(vlSelf->__PVT__dma_way_lo))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelf->__PVT__tag_v_r[
                                                                      (((IData)(0x13U) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x14U) 
                                                                            * (IData)(vlSelf->__PVT__dma_way_lo)))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & ((IData)(0x14U) 
                                                                           * (IData)(vlSelf->__PVT__dma_way_lo)))))) 
                                                                    | (vlSelf->__PVT__tag_v_r[
                                                                       (7U 
                                                                        & (((IData)(0x14U) 
                                                                            * (IData)(vlSelf->__PVT__dma_way_lo)) 
                                                                           >> 5U))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(0x14U) 
                                                                           * (IData)(vlSelf->__PVT__dma_way_lo))))))
                                                                 : 0U))) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                (0x1fc0U 
                                                                 & ((IData)(
                                                                            (vlSelf->__PVT__addr_v_r 
                                                                             >> 6U)) 
                                                                    << 6U)))));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U] = 0U;
            vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U] = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__unnamedblk2__DOT__i = 8U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss__DOT__unnamedblk1__DOT__i = 8U;
                }
            }
        }
    }
    vlSelf->__PVT__valid_tl = ((0xfeU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (1U & (vlSelf->__Vcellout__tag_mem__data_o[0U] 
                                        >> 0x15U)));
    vlSelf->__PVT__tag_tl[0U] = ((0xfff00000U & vlSelf->__PVT__tag_tl[0U]) 
                                 | (0xfffffU & vlSelf->__Vcellout__tag_mem__data_o[0U]));
    vlSelf->__PVT__lock_tl = ((0xfeU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (1U & (vlSelf->__Vcellout__tag_mem__data_o[0U] 
                                       >> 0x14U)));
    vlSelf->__PVT__valid_tl = ((0xfdU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (2U & (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                        >> 0xaU)));
    vlSelf->__PVT__tag_tl[0U] = ((0xfffffU & vlSelf->__PVT__tag_tl[0U]) 
                                 | (0xfff00000U & (
                                                   (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                                    << 0x1eU) 
                                                   | (0x3ff00000U 
                                                      & (vlSelf->__Vcellout__tag_mem__data_o[0U] 
                                                         >> 2U)))));
    vlSelf->__PVT__tag_tl[1U] = ((0xffffff00U & vlSelf->__PVT__tag_tl[1U]) 
                                 | (0xffU & (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                             >> 2U)));
    vlSelf->__PVT__lock_tl = ((0xfdU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (2U & (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                       >> 9U)));
    vlSelf->__PVT__valid_tl = ((0xfbU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (4U & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                        << 1U)));
    vlSelf->__PVT__tag_tl[1U] = ((0xf00000ffU & vlSelf->__PVT__tag_tl[1U]) 
                                 | (0xfffff00U & (vlSelf->__Vcellout__tag_mem__data_o[1U] 
                                                  >> 4U)));
    vlSelf->__PVT__lock_tl = ((0xfbU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (4U & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                       << 2U)));
    vlSelf->__PVT__valid_tl = ((0xf7U & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (8U & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                        >> 0x14U)));
    vlSelf->__PVT__tag_tl[1U] = ((0xfffffffU & vlSelf->__PVT__tag_tl[1U]) 
                                 | (0xf0000000U & (
                                                   vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                                   << 0x1aU)));
    vlSelf->__PVT__tag_tl[2U] = ((0xffff0000U & vlSelf->__PVT__tag_tl[2U]) 
                                 | (0xffffU & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                               >> 6U)));
    vlSelf->__PVT__lock_tl = ((0xf7U & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (8U & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                       >> 0x13U)));
    vlSelf->__PVT__valid_tl = ((0xefU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (0x10U & (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                           >> 9U)));
    vlSelf->__PVT__tag_tl[2U] = ((0xffffU & vlSelf->__PVT__tag_tl[2U]) 
                                 | (0xffff0000U & (
                                                   (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (vlSelf->__Vcellout__tag_mem__data_o[2U] 
                                                         >> 8U)))));
    vlSelf->__PVT__tag_tl[3U] = ((0xfffffff0U & vlSelf->__PVT__tag_tl[3U]) 
                                 | (0xfU & (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                            >> 8U)));
    vlSelf->__PVT__lock_tl = ((0xefU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (0x10U & (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                          >> 8U)));
    vlSelf->__PVT__valid_tl = ((0xdfU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (0x20U & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                           << 2U)));
    vlSelf->__PVT__tag_tl[3U] = ((0xff00000fU & vlSelf->__PVT__tag_tl[3U]) 
                                 | (0xfffff0U & ((vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                                  << 0x16U) 
                                                 | (0x3ffff0U 
                                                    & (vlSelf->__Vcellout__tag_mem__data_o[3U] 
                                                       >> 0xaU)))));
    vlSelf->__PVT__lock_tl = ((0xdfU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (0x20U & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                          << 3U)));
    vlSelf->__PVT__valid_tl = ((0xbfU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (0x40U & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                           >> 0x13U)));
    vlSelf->__PVT__tag_tl[3U] = ((0xffffffU & vlSelf->__PVT__tag_tl[3U]) 
                                 | (0xff000000U & (
                                                   vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                                   << 0x14U)));
    vlSelf->__PVT__tag_tl[4U] = ((0xfffff000U & vlSelf->__PVT__tag_tl[4U]) 
                                 | (0xfffU & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                              >> 0xcU)));
    vlSelf->__PVT__lock_tl = ((0xbfU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (0x40U & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                          >> 0x12U)));
    vlSelf->__PVT__valid_tl = ((0x7fU & (IData)(vlSelf->__PVT__valid_tl)) 
                               | (0x80U & (vlSelf->__Vcellout__tag_mem__data_o[5U] 
                                           >> 8U)));
    vlSelf->__PVT__tag_tl[4U] = ((0xfffU & vlSelf->__PVT__tag_tl[4U]) 
                                 | (0xfffff000U & (
                                                   (vlSelf->__Vcellout__tag_mem__data_o[5U] 
                                                    << 0x12U) 
                                                   | (0x3f000U 
                                                      & (vlSelf->__Vcellout__tag_mem__data_o[4U] 
                                                         >> 0xeU)))));
    vlSelf->__PVT__lock_tl = ((0x7fU & (IData)(vlSelf->__PVT__lock_tl)) 
                              | (0x80U & (vlSelf->__Vcellout__tag_mem__data_o[5U] 
                                          >> 7U)));
    vlSelf->__PVT__miss__DOT__modified_lru_bits = (
                                                   (0x7cU 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                            >> 1U)
                                                            : 
                                                           ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                             ? (IData)(vlSelf->__PVT__miss__DOT__modify_data_lo)
                                                             : (IData)(vlSelf->__Vcellout__stat_mem__data_o)))));
    vlSelf->__PVT__miss__DOT__modified_lru_bits = (
                                                   (0x73U 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits)) 
                                                   | ((8U 
                                                       & (((8U 
                                                            & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                            >> 3U)
                                                            : 
                                                           ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                            >> 3U)) 
                                                          << 3U)) 
                                                      | (4U 
                                                         & (((4U 
                                                              & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                              >> 2U)
                                                              : 
                                                             ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                              >> 2U)) 
                                                            << 2U))));
    vlSelf->__PVT__miss__DOT__modified_lru_bits = (
                                                   (0x4fU 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits)) 
                                                   | ((0x20U 
                                                       & (((0x20U 
                                                            & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                            >> 5U)) 
                                                          << 5U)) 
                                                      | (0x10U 
                                                         & (((0x10U 
                                                              & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                              >> 4U)
                                                              : 
                                                             ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                              >> 4U)) 
                                                            << 4U))));
    vlSelf->__PVT__miss__DOT__modified_lru_bits = (
                                                   (0x3fU 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits)) 
                                                   | (0x40U 
                                                      & (((0x40U 
                                                           & (IData)(vlSelf->__PVT__miss__DOT__modify_mask_lo))
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__miss__DOT__modify_data_lo) 
                                                           >> 6U)
                                                           : 
                                                          ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                           >> 6U)) 
                                                         << 6U)));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__full 
        = ((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty 
        = ((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__sbuf_entry_li[2U] = ((0x7ffU & vlSelf->__PVT__sbuf_entry_li[2U]) 
                                        | ((IData)(vlSelf->__PVT__addr_v_r) 
                                           << 0xbU));
    vlSelf->__PVT__sbuf_entry_li[3U] = (0xfffU & (((IData)(vlSelf->__PVT__addr_v_r) 
                                                   >> 0x15U) 
                                                  | ((IData)(
                                                             (vlSelf->__PVT__addr_v_r 
                                                              >> 0x20U)) 
                                                     << 0xbU)));
    if ((0U != (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        if ((1U != (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
            if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
                vlSelf->__PVT__dma__DOT__out_fifo_v_li = 1U;
            }
        }
    }
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__enq_i = 
        ((IData)(vlSelf->__PVT__dma__DOT__out_fifo_v_li) 
         & (~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_data_v_o) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__full))));
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_n 
        = (7U & ((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r)));
    vlSelf->__PVT__dma__DOT__in_fifo_yumi_li = 0U;
    vlSelf->__PVT__dma_data_mem_w_lo = 0U;
    if ((0U != (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        if ((1U != (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
            if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
                vlSelf->__PVT__dma_evict_lo = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
            vlSelf->__PVT__dma__DOT__in_fifo_yumi_li 
                = (1U & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
            vlSelf->__PVT__dma_data_mem_w_lo = (1U 
                                                & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
        }
    }
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_n 
        = (7U & ((IData)(vlSelf->__PVT__dma__DOT__in_fifo_yumi_li)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r)));
}
