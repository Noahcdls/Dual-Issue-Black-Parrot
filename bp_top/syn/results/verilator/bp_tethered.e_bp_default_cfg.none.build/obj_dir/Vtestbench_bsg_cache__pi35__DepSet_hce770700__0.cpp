// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_cache__pi35.h"

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__1(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__1\n"); );
    // Body
    vlSelf->__PVT__decode = ((0x7ffffU & vlSelf->__PVT__decode) 
                             | (((0x4000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                  ? ((0x2000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                      ? ((0x1000U & 
                                          vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                          ? ((0x800U 
                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                              ? 0U : 
                                             ((0x400U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                               ? 0U
                                               : ((0x200U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                   ? 0U
                                                   : 3U)))
                                          : 3U) : (
                                                   (0x1000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                     ? 0U
                                                     : 
                                                    ((0x400U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                      ? 0U
                                                      : 
                                                     ((0x200U 
                                                       & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                       ? 0U
                                                       : 2U)))
                                                    : 2U))
                                  : ((0x2000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                      ? 0U : ((0x1000U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                               ? ((0x800U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                   ? 0U
                                                   : 
                                                  ((0x400U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                    ? 
                                                   ((0x200U 
                                                     & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                     ? 1U
                                                     : 0U)))
                                               : ((0x400U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                   ? 
                                                  ((0x200U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x200U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                    ? 1U
                                                    : 0U))))) 
                                << 0x13U));
    vlSelf->__PVT__decode = ((0x1dffffU & vlSelf->__PVT__decode) 
                             | (((0xcU == (0x3fU & 
                                           (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                            >> 9U))) 
                                 | (0xdU == (0x3fU 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                >> 9U)))) 
                                << 0x11U));
    vlSelf->__PVT__decode = (0x10U | vlSelf->__PVT__decode);
    vlSelf->__PVT__decode = ((0x4000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                              ? ((0x1000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                  ? ((0x800U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                      ? (0x1fffe0U 
                                         & vlSelf->__PVT__decode)
                                      : ((0x400U & 
                                          vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                          ? (0x1fffe0U 
                                             & vlSelf->__PVT__decode)
                                          : ((0x200U 
                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                              ? (0x1fffe0U 
                                                 & vlSelf->__PVT__decode)
                                              : (8U 
                                                 | (0x1ffff0U 
                                                    & vlSelf->__PVT__decode)))))
                                  : ((0x1ffff0U & vlSelf->__PVT__decode) 
                                     | ((0x800U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                         ? ((0x400U 
                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                             ? ((0x200U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                 ? 7U
                                                 : 6U)
                                             : ((0x200U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                 ? 5U
                                                 : 4U))
                                         : ((0x400U 
                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                             ? ((0x200U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                 ? 3U
                                                 : 2U)
                                             : ((0x200U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U])
                                                 ? 1U
                                                 : 0U)))))
                              : (0x1fffe0U & vlSelf->__PVT__decode));
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__2(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__2\n"); );
    // Body
    if (VL_UNLIKELY((((8U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                      & (IData)(vlSelf->__PVT__dma__DOT__counter_up)) 
                     & (~ (IData)(vlSymsp->TOP.reset_i))))) {
        VL_WRITEF("%Ntestbench.wrapper.unicore.dut.c[0].dut.l2s.bank[0].cache.dma.dma_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty) 
                      & (IData)(vlSelf->__PVT__dma__DOT__in_fifo_yumi_li)) 
                     & (~ (IData)(vlSymsp->TOP.reset_i))))) {
        VL_WRITEF("%Ntestbench.wrapper.unicore.dut.c[0].dut.l2s.bank[0].cache.dma.in_fifo.unhardened.un.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
    }
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__0(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__0\n"); );
    // Init
    CData/*7:0*/ __PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    CData/*7:0*/ __PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    CData/*7:0*/ __PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    CData/*1:0*/ __PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*7:0*/ __PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    CData/*7:0*/ __PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    CData/*7:0*/ __PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    CData/*1:0*/ __PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*0:0*/ miss__DOT__lru_encode__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o;
    CData/*0:0*/ miss__DOT__lru_encode__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o;
    SData/*31:0*/ __Vtemp_h90a94bde__0;
    VlWide<3>/*95:0*/ __Vtemp_h10f62817__0;
    // Body
    vlSelf->__PVT__miss__DOT__chosen_way_lru_mask = 
        ((0x7dU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask)) 
         | (2U & (((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                   & (~ ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_r) 
                         >> 2U))) << 1U)));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_mask = 
        ((0x7bU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask)) 
         | (((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
             & ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_r) 
                >> 2U)) << 2U));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_mask = 
        ((0x77U & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask)) 
         | (8U & (((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                   << 2U) & ((~ ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_r) 
                                 >> 1U)) << 3U))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_mask = 
        ((0x6fU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask)) 
         | (0x10U & (((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                      & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_r)) 
                     << 3U)));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_mask = 
        ((0x5fU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask)) 
         | (0x20U & (((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                      << 3U) & ((~ ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_r) 
                                    >> 1U)) << 5U))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_mask = 
        ((0x3fU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask)) 
         | (0x40U & (((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                      << 4U) & ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_r) 
                                << 5U))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_data = 
        ((0x7eU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_data)) 
         | (1U & ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                  & (~ ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_r) 
                        >> 2U)))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_data = 
        ((0x7dU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_data)) 
         | (2U & ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                  & ((~ ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_r) 
                         >> 1U)) << 1U))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_data = 
        ((0x7bU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_data)) 
         | (4U & ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                  & ((~ ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_r) 
                         >> 1U)) << 2U))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_data = 
        ((0x77U & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_data)) 
         | (8U & ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                  & ((~ (IData)(vlSelf->__PVT__miss__DOT__chosen_way_r)) 
                     << 3U))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_data = 
        ((0x6fU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_data)) 
         | (0x10U & ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                     & ((~ (IData)(vlSelf->__PVT__miss__DOT__chosen_way_r)) 
                        << 4U))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_data = 
        ((0x5fU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_data)) 
         | (0x20U & ((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                     & ((~ (IData)(vlSelf->__PVT__miss__DOT__chosen_way_r)) 
                        << 5U))));
    vlSelf->__PVT__miss__DOT__chosen_way_lru_data = 
        ((0x3fU & (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_data)) 
         | ((IData)((((IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask) 
                      >> 6U) & (~ (IData)(vlSelf->__PVT__miss__DOT__chosen_way_r)))) 
            << 6U));
    vlSelf->__PVT__dma_cmd_lo = 0U;
    __PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fU & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 1U));
    __PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fU & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 0xaU));
    __PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfU & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                   >> 0x14U));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo 
        = ((0xf8U & (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo)) 
           | ((4U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                          >> 0x1dU)) 
                                   | (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                      >> 0x1fU))));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo 
        = ((0xc7U & (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo)) 
           | ((0x20U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               >> 0x19U)))));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo)) 
           | ((0x80U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               >> 0x13U))));
    __PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fU & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 1U));
    __PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fU & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 0xaU));
    __PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfU & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                   >> 0x14U));
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo 
        = ((0xf8U & (IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo)) 
           | ((4U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                          >> 0x1dU)) 
                                   | (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                      >> 0x1fU))));
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo 
        = ((0xc7U & (IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo)) 
           | ((0x20U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               >> 0x19U)))));
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo)) 
           | ((0x80U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               >> 0x13U))));
    miss__DOT__lru_encode__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits) 
                 >> (7U & ((IData)(1U) + (1U & ((IData)(vlSelf->__PVT__miss__DOT__lru_way_id) 
                                                >> 2U))))));
    miss__DOT__lru_encode__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits) 
                 >> (7U & ((IData)(3U) + (3U & ((IData)(vlSelf->__PVT__miss__DOT__lru_way_id) 
                                                >> 1U))))));
    vlSelf->__PVT__decode = ((0x1bffffU & vlSelf->__PVT__decode) 
                             | (0x40000U & ((((((0U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                     >> 9U))) 
                                                | (1U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                       >> 9U)))) 
                                               | (2U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                      >> 9U)))) 
                                              | (3U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                     >> 9U)))) 
                                             << 0x12U) 
                                            | (0xfffc0000U 
                                               & (vlSelf->__PVT__decode 
                                                  << 0xeU)))));
    __Vtemp_h90a94bde__0 = ((((((((((((((0U == (0x3fU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                   >> 9U))) 
                                        | (1U == (0x3fU 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                     >> 9U)))) 
                                       | (2U == (0x3fU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                    >> 9U)))) 
                                      | (3U == (0x3fU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                   >> 9U)))) 
                                     | (4U == (0x3fU 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                  >> 9U)))) 
                                    | (5U == (0x3fU 
                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                 >> 9U)))) 
                                   | (6U == (0x3fU 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                >> 9U)))) 
                                  | (7U == (0x3fU & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                             >> 9U)))) 
                                 | (0xcU == (0x3fU 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                >> 9U)))) 
                                << 0xbU) | ((((((8U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                     >> 9U))) 
                                                | (9U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                       >> 9U)))) 
                                               | (0xaU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                      >> 9U)))) 
                                              | (0xbU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                     >> 9U)))) 
                                             | (0xdU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                    >> 9U)))) 
                                            << 0xaU)) 
                              | (((0x10U == (0x3fU 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                >> 9U))) 
                                  << 9U) | (((0x11U 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                     >> 9U))) 
                                             << 8U) 
                                            | ((0x12U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                    >> 9U))) 
                                               << 7U)))) 
                             | (((0x13U == (0x3fU & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                             >> 9U))) 
                                 << 6U) | (((0x18U 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                    >> 9U))) 
                                            << 5U) 
                                           | ((0x19U 
                                               == (0x3fU 
                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                      >> 9U))) 
                                              << 4U)))) 
                            | (((0x1aU == (0x3fU & 
                                           (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                            >> 9U))) 
                                << 3U) | (((0x1bU == 
                                            (0x3fU 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                >> 9U))) 
                                           << 2U) | 
                                          (((0x1cU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[3U] 
                                                    >> 9U))) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (vlSelf->__PVT__decode 
                                                  >> 0xeU)))))));
    vlSelf->__PVT__decode = ((0x1e001fU & vlSelf->__PVT__decode) 
                             | (__Vtemp_h90a94bde__0 
                                << 5U));
    vlSelf->__PVT__miss__DOT__stat_mem_data_out = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__dma_cmd_lo = ((IData)(vlSelf->__PVT__sbuf_empty_li)
                                                  ? 4U
                                                  : 0U);
                    vlSelf->__PVT__miss__DOT__stat_mem_data_out 
                        = ((0x7fU & (IData)(vlSelf->__PVT__miss__DOT__stat_mem_data_out)) 
                           | (0x7f80U & ((- (IData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0x8010U 
                                                              & vlSelf->__PVT__decode_v_r))))) 
                                         << 7U)));
                    vlSelf->__PVT__miss__DOT__stat_mem_data_out 
                        = ((0x7f80U & (IData)(vlSelf->__PVT__miss__DOT__stat_mem_data_out)) 
                           | (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_data));
                }
            } else {
                vlSelf->__PVT__dma_cmd_lo = ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                              ? ((IData)(vlSelf->__PVT__sbuf_empty_li)
                                                  ? 8U
                                                  : 0U)
                                              : 1U);
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__dma_cmd_lo = 2U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss__DOT__stat_mem_data_out = 0U;
                }
            }
        }
    }
    vlSelf->dma_pkt_v_o = 0U;
    vlSelf->__PVT__dma__DOT__dma_pkt = ((QData)((IData)(
                                                        (0x7ffffffU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__dma_addr_lo 
                                                                    >> 6U))))) 
                                        << 6U);
    vlSelf->__PVT__dma__DOT__counter_up = 0U;
    vlSelf->__PVT__dma__DOT__counter_clear = 0U;
    vlSelf->__PVT__dma_data_mem_v_lo = 0U;
    if ((0U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->dma_pkt_v_o = 0U;
        vlSelf->__PVT__dma__DOT__dma_pkt = (0x1ffffffffULL 
                                            & vlSelf->__PVT__dma__DOT__dma_pkt);
        if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__dma_cmd_lo)))) {
                        vlSelf->dma_pkt_v_o = 1U;
                        vlSelf->__PVT__dma__DOT__dma_pkt 
                            = (0x200000000ULL | vlSelf->__PVT__dma__DOT__dma_pkt);
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    vlSelf->dma_pkt_v_o = 1U;
                    vlSelf->__PVT__dma__DOT__dma_pkt 
                        = (0x1ffffffffULL & vlSelf->__PVT__dma__DOT__dma_pkt);
                }
            }
        }
        vlSelf->__PVT__dma__DOT__counter_up = 0U;
        vlSelf->__PVT__dma__DOT__counter_clear = 0U;
        vlSelf->__PVT__dma__DOT__dma_state_n = 0U;
        vlSelf->__PVT__dma_data_mem_v_lo = 0U;
        if ((8U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma__DOT__counter_up = 1U;
                        vlSelf->__PVT__dma__DOT__counter_clear = 1U;
                        vlSelf->__PVT__dma__DOT__dma_state_n = 2U;
                        vlSelf->__PVT__dma_data_mem_v_lo = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__dma_cmd_lo)))) {
                    vlSelf->__PVT__dma__DOT__counter_clear = 1U;
                    vlSelf->__PVT__dma__DOT__dma_state_n = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dma_cmd_lo)))) {
                vlSelf->__PVT__dma__DOT__dma_state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
            vlSelf->__PVT__dma__DOT__dma_state_n = 0U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma__DOT__counter_up = ((~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)) 
                                               & (7U 
                                                  != (IData)(vlSelf->__PVT__dma__DOT__counter_r)));
        vlSelf->__PVT__dma__DOT__counter_clear = ((~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)) 
                                                  & (7U 
                                                     == (IData)(vlSelf->__PVT__dma__DOT__counter_r)));
        vlSelf->__PVT__dma__DOT__dma_state_n = (((7U 
                                                  == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                                 & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)))
                                                 ? 0U
                                                 : 1U);
        vlSelf->__PVT__dma_data_mem_v_lo = (1U & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma__DOT__counter_up = ((~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)) 
                                               & (8U 
                                                  != (IData)(vlSelf->__PVT__dma__DOT__counter_r)));
        vlSelf->__PVT__dma__DOT__counter_clear = ((~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)) 
                                                  & (8U 
                                                     == (IData)(vlSelf->__PVT__dma__DOT__counter_r)));
        vlSelf->__PVT__dma__DOT__dma_state_n = (((8U 
                                                  == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                                 & (~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)))
                                                 ? 0U
                                                 : 2U);
        vlSelf->__PVT__dma_data_mem_v_lo = ((~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)) 
                                            & (8U != (IData)(vlSelf->__PVT__dma__DOT__counter_r)));
    } else {
        vlSelf->__PVT__dma__DOT__dma_state_n = 0U;
    }
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffff00ffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff00U & ((vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                          | (IData)(__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                         << 8U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xff00ffffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff0000U & ((0xffff0000U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                           << 8U)) 
                           | ((IData)(__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                              << 0x10U))));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff000000U & ((0xff000000U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                             << 8U)) 
                             | ((IData)(__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted) 
                                << 0x18U))));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__enc_lo 
        = ((IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo) 
           & (1U | (0xfeU & ((~ (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo)) 
                             << 1U))));
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffff00ffU & vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff00U & ((vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                          | (IData)(__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                         << 8U)));
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xff00ffffU & vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff0000U & ((0xffff0000U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                           << 8U)) 
                           | ((IData)(__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                              << 0x10U))));
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffffU & vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff000000U & ((0xff000000U & (vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                             << 8U)) 
                             | ((IData)(__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted) 
                                << 0x18U))));
    vlSelf->__PVT__tag_hit_pe__DOT__enc_lo = ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo) 
                                              & (1U 
                                                 | (0xfeU 
                                                    & ((~ (IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo)) 
                                                       << 1U))));
    vlSelf->__PVT__miss__DOT__lru_way_id = ((4U & ((IData)(vlSelf->__PVT__miss__DOT__modified_lru_bits) 
                                                   << 2U)) 
                                            | (((IData)(miss__DOT__lru_encode__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o) 
                                                << 1U) 
                                               | (IData)(miss__DOT__lru_encode__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xffffff00U & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
           | (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__enc_lo));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = ((0xffffff00U 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v) 
                                                 | (IData)(vlSelf->__PVT__tag_hit_pe__DOT__enc_lo));
    __PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v);
    __PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                 >> 2U));
    __PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                 >> 4U));
    __PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                 >> 6U));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                  >> 9U)) | (1U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                                   >> 8U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                                     >> 0xcU)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                                      >> 0x10U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xfffffeffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr) 
           | (0x100U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                        << 7U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xfffffbffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr) 
           | (0x400U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                        << 7U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xffffefffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr) 
           | (0x1000U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                         << 7U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xffffbfffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr) 
           | (0x4000U & (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
                         << 7U)));
    __PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v);
    __PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                 >> 2U));
    __PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                 >> 4U));
    __PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                 >> 6U));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                  >> 9U)) | (1U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                                   >> 8U)));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                                     >> 0xcU)));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                                      >> 0x10U)));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr = 
        ((0xfffffeffU & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr) 
         | (0x100U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                      << 7U)));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr = 
        ((0xfffffbffU & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr) 
         | (0x400U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                      << 7U)));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr = 
        ((0xffffefffU & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr) 
         | (0x1000U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                       << 7U)));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr = 
        ((0xffffbfffU & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr) 
         | (0x4000U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v 
                       << 7U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xfffffeffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xfffffbffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xffffefffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xffffbfffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xfffeffffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xffefffffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v 
        = ((0xfeffffffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xfffcffffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x500U 
                                                   & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr))) 
                                         << 0x10U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xffcfffffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr))) 
                                          << 0x14U)));
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
        = ((0xf8ffffffU & vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
                                               << 8U) 
                                              | (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
                                                 << 4U)))));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = ((0xfffffeffU 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v) 
                                                 | ((IData)(
                                                            (0U 
                                                             != (IData)(__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
                                                    << 8U));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = ((0xfffffbffU 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v) 
                                                 | ((IData)(
                                                            (0U 
                                                             != (IData)(__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
                                                    << 0xaU));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = ((0xffffefffU 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v) 
                                                 | ((IData)(
                                                            (0U 
                                                             != (IData)(__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
                                                    << 0xcU));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = ((0xffffbfffU 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v) 
                                                 | ((IData)(
                                                            (0U 
                                                             != (IData)(__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
                                                    << 0xeU));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = ((0xfffeffffU 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v) 
                                                 | ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
                                                    << 0x10U));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = ((0xffefffffU 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v) 
                                                 | ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
                                                    << 0x14U));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = ((0xfeffffffU 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v) 
                                                 | ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
                                                    << 0x18U));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr = 
        ((0xfffcffffU & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr) 
         | ((0x20000U & ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                         << 0x10U)) | ((IData)((0U 
                                                != 
                                                (0x500U 
                                                 & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr))) 
                                       << 0x10U)));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr = 
        ((0xffcfffffU & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr) 
         | ((0x200000U & ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                          << 0x14U)) | ((IData)((0U 
                                                 != 
                                                 (0x5000U 
                                                  & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr))) 
                                        << 0x14U)));
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr = 
        ((0xf8ffffffU & vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr) 
         | ((0x4000000U & ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                           << 0x19U)) | (0x3000000U 
                                         & ((vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr 
                                             << 8U) 
                                            | (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr 
                                               << 4U)))));
    vlSelf->__PVT__tag_hit_way_id = ((0U == (((IData)(vlSelf->__PVT__tag_hit_pe__DOT__enc_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_hit_pe__DOT__enc_lo)))
                                      ? (7U & (vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr 
                                               >> 0x18U))
                                      : 0U);
    vlSelf->__PVT__plru_decode_mask_lo = ((0x7dU & (IData)(vlSelf->__PVT__plru_decode_mask_lo)) 
                                          | (2U & (
                                                   ((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                        >> 2U))) 
                                                   << 1U)));
    vlSelf->__PVT__plru_decode_mask_lo = ((0x7bU & (IData)(vlSelf->__PVT__plru_decode_mask_lo)) 
                                          | (((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                              & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                 >> 2U)) 
                                             << 2U));
    vlSelf->__PVT__plru_decode_mask_lo = ((0x77U & (IData)(vlSelf->__PVT__plru_decode_mask_lo)) 
                                          | (8U & (
                                                   ((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                    << 2U) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                        >> 1U)) 
                                                      << 3U))));
    vlSelf->__PVT__plru_decode_mask_lo = ((0x6fU & (IData)(vlSelf->__PVT__plru_decode_mask_lo)) 
                                          | (0x10U 
                                             & (((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                 & (IData)(vlSelf->__PVT__tag_hit_way_id)) 
                                                << 3U)));
    vlSelf->__PVT__plru_decode_mask_lo = ((0x5fU & (IData)(vlSelf->__PVT__plru_decode_mask_lo)) 
                                          | (0x20U 
                                             & (((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                 << 3U) 
                                                & ((~ 
                                                    ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                     >> 1U)) 
                                                   << 5U))));
    vlSelf->__PVT__plru_decode_mask_lo = ((0x3fU & (IData)(vlSelf->__PVT__plru_decode_mask_lo)) 
                                          | (0x40U 
                                             & (((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                 << 4U) 
                                                & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                   << 5U))));
    vlSelf->__PVT__plru_decode_data_lo = ((0x7eU & (IData)(vlSelf->__PVT__plru_decode_data_lo)) 
                                          | (1U & ((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                       >> 2U)))));
    vlSelf->__PVT__plru_decode_data_lo = ((0x7dU & (IData)(vlSelf->__PVT__plru_decode_data_lo)) 
                                          | (2U & ((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                        >> 1U)) 
                                                      << 1U))));
    vlSelf->__PVT__plru_decode_data_lo = ((0x7bU & (IData)(vlSelf->__PVT__plru_decode_data_lo)) 
                                          | (4U & ((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                        >> 1U)) 
                                                      << 2U))));
    vlSelf->__PVT__plru_decode_data_lo = ((0x77U & (IData)(vlSelf->__PVT__plru_decode_data_lo)) 
                                          | (8U & ((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                   & ((~ (IData)(vlSelf->__PVT__tag_hit_way_id)) 
                                                      << 3U))));
    vlSelf->__PVT__plru_decode_data_lo = ((0x6fU & (IData)(vlSelf->__PVT__plru_decode_data_lo)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                & ((~ (IData)(vlSelf->__PVT__tag_hit_way_id)) 
                                                   << 4U))));
    vlSelf->__PVT__plru_decode_data_lo = ((0x5fU & (IData)(vlSelf->__PVT__plru_decode_data_lo)) 
                                          | (0x20U 
                                             & ((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                & ((~ (IData)(vlSelf->__PVT__tag_hit_way_id)) 
                                                   << 5U))));
    vlSelf->__PVT__plru_decode_data_lo = ((0x3fU & (IData)(vlSelf->__PVT__plru_decode_data_lo)) 
                                          | ((IData)(
                                                     (((IData)(vlSelf->__PVT__plru_decode_mask_lo) 
                                                       >> 6U) 
                                                      & (~ (IData)(vlSelf->__PVT__tag_hit_way_id)))) 
                                             << 6U));
    vlSelf->__PVT__miss_v = (((~ (vlSelf->__PVT__decode_v_r 
                                  >> 0xeU)) & (IData)(vlSelf->__PVT__v_v_r)) 
                             & (((((((~ ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo) 
                                         >> 7U)) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x18000U 
                                                             & vlSelf->__PVT__decode_v_r)))) 
                                    | ((vlSelf->__PVT__decode_v_r 
                                        >> 0xdU) & 
                                       ((IData)(vlSelf->__PVT__valid_v_r) 
                                        >> (7U & (IData)(
                                                         (vlSelf->__PVT__addr_v_r 
                                                          >> 0xdU)))))) 
                                   | ((IData)((0U != 
                                               (0x700U 
                                                & vlSelf->__PVT__decode_v_r))) 
                                      & ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo) 
                                         >> 7U))) | 
                                  ((vlSelf->__PVT__decode_v_r 
                                    >> 7U) & ((~ ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo) 
                                                  >> 7U)) 
                                              | (~ 
                                                 ((IData)(vlSelf->__PVT__lock_v_r) 
                                                  >> (IData)(vlSelf->__PVT__tag_hit_way_id)))))) 
                                 | ((vlSelf->__PVT__decode_v_r 
                                     >> 6U) & (((IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo) 
                                                >> 7U) 
                                               & ((IData)(vlSelf->__PVT__lock_v_r) 
                                                  >> (IData)(vlSelf->__PVT__tag_hit_way_id))))) 
                                | ((vlSelf->__PVT__decode_v_r 
                                    >> 4U) & (~ ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo) 
                                                 >> 7U)))));
    vlSelf->__PVT__ld_data_way_picked = (((QData)((IData)(
                                                          vlSelf->__PVT__ld_data_v_r[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelf->__PVT__ld_data_v_r[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__ld_data_v_r[
                                                               (0xeU 
                                                                & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__tag_hit_way_id) 
                                                      << 6U)))));
    if ((1U & (~ (IData)(vlSelf->__PVT__miss_v)))) {
        vlSelf->__PVT__unnamedblk1__DOT__i = 8U;
    }
    if (vlSelf->__PVT__miss_v) {
        vlSelf->__PVT__stat_mem_addr_li = (0x7fU & (IData)(
                                                           (vlSelf->__PVT__addr_v_r 
                                                            >> 6U)));
        vlSelf->__PVT__stat_mem_data_li = vlSelf->__PVT__miss__DOT__stat_mem_data_out;
        vlSelf->__PVT__tag_mem_data_li[0U] = vlSelf->__PVT__miss__DOT__tag_mem_data_out[0U];
        vlSelf->__PVT__tag_mem_data_li[1U] = vlSelf->__PVT__miss__DOT__tag_mem_data_out[1U];
        vlSelf->__PVT__tag_mem_data_li[2U] = vlSelf->__PVT__miss__DOT__tag_mem_data_out[2U];
        vlSelf->__PVT__tag_mem_data_li[3U] = vlSelf->__PVT__miss__DOT__tag_mem_data_out[3U];
        vlSelf->__PVT__tag_mem_data_li[4U] = vlSelf->__PVT__miss__DOT__tag_mem_data_out[4U];
        vlSelf->__PVT__tag_mem_data_li[5U] = vlSelf->__PVT__miss__DOT__tag_mem_data_out[5U];
    } else {
        vlSelf->__PVT__stat_mem_addr_li = (0x7fU & (IData)(
                                                           (vlSelf->__PVT__addr_v_r 
                                                            >> 6U)));
        if ((0x4000U & vlSelf->__PVT__decode_v_r)) {
            vlSelf->__PVT__stat_mem_data_li = 0U;
        } else {
            vlSelf->__PVT__stat_mem_data_li = ((0x7fU 
                                                & (IData)(vlSelf->__PVT__stat_mem_data_li)) 
                                               | (0x7f80U 
                                                  & ((- (IData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x8010U 
                                                                          & vlSelf->__PVT__decode_v_r))))) 
                                                     << 7U)));
            vlSelf->__PVT__stat_mem_data_li = ((0x7f80U 
                                                & (IData)(vlSelf->__PVT__stat_mem_data_li)) 
                                               | (IData)(vlSelf->__PVT__plru_decode_data_lo));
        }
        vlSelf->__Vlvbound_h155a2524__0 = ((0x200000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                               << 0xeU)) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                  << 0xeU)) 
                                              | (0xfffffU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U] 
                                                    >> 8U))));
        vlSelf->__PVT__tag_mem_data_li[0U] = ((0xffc00000U 
                                               & vlSelf->__PVT__tag_mem_data_li[0U]) 
                                              | vlSelf->__Vlvbound_h155a2524__0);
        vlSelf->__Vlvbound_h155a2524__0 = ((0x200000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                               << 0xeU)) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                  << 0xeU)) 
                                              | (0xfffffU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U] 
                                                    >> 8U))));
        vlSelf->__PVT__tag_mem_data_li[0U] = ((0x3fffffU 
                                               & vlSelf->__PVT__tag_mem_data_li[0U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 << 0x16U));
        vlSelf->__PVT__tag_mem_data_li[1U] = ((0xfffff000U 
                                               & vlSelf->__PVT__tag_mem_data_li[1U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 >> 0xaU));
        vlSelf->__Vlvbound_h155a2524__0 = ((0x200000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                               << 0xeU)) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                  << 0xeU)) 
                                              | (0xfffffU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U] 
                                                    >> 8U))));
        vlSelf->__PVT__tag_mem_data_li[1U] = ((0xfffU 
                                               & vlSelf->__PVT__tag_mem_data_li[1U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 << 0xcU));
        vlSelf->__PVT__tag_mem_data_li[2U] = ((0xfffffffcU 
                                               & vlSelf->__PVT__tag_mem_data_li[2U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 >> 0x14U));
        vlSelf->__Vlvbound_h155a2524__0 = ((0x200000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                               << 0xeU)) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                  << 0xeU)) 
                                              | (0xfffffU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U] 
                                                    >> 8U))));
        vlSelf->__PVT__tag_mem_data_li[2U] = ((0xff000003U 
                                               & vlSelf->__PVT__tag_mem_data_li[2U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 << 2U));
        vlSelf->__Vlvbound_h155a2524__0 = ((0x200000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                               << 0xeU)) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                  << 0xeU)) 
                                              | (0xfffffU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U] 
                                                    >> 8U))));
        vlSelf->__PVT__tag_mem_data_li[2U] = ((0xffffffU 
                                               & vlSelf->__PVT__tag_mem_data_li[2U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 << 0x18U));
        vlSelf->__PVT__tag_mem_data_li[3U] = ((0xffffc000U 
                                               & vlSelf->__PVT__tag_mem_data_li[3U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 >> 8U));
        vlSelf->__Vlvbound_h155a2524__0 = ((0x200000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                               << 0xeU)) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                  << 0xeU)) 
                                              | (0xfffffU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U] 
                                                    >> 8U))));
        vlSelf->__PVT__tag_mem_data_li[3U] = ((0x3fffU 
                                               & vlSelf->__PVT__tag_mem_data_li[3U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 << 0xeU));
        vlSelf->__PVT__tag_mem_data_li[4U] = ((0xfffffff0U 
                                               & vlSelf->__PVT__tag_mem_data_li[4U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 >> 0x12U));
        vlSelf->__Vlvbound_h155a2524__0 = ((0x200000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                               << 0xeU)) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                  << 0xeU)) 
                                              | (0xfffffU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U] 
                                                    >> 8U))));
        vlSelf->__PVT__tag_mem_data_li[4U] = ((0xfc00000fU 
                                               & vlSelf->__PVT__tag_mem_data_li[4U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 << 4U));
        vlSelf->__Vlvbound_h155a2524__0 = ((0x200000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                               << 0xeU)) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                  << 0xeU)) 
                                              | (0xfffffU 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[0U] 
                                                    >> 8U))));
        vlSelf->__PVT__tag_mem_data_li[4U] = ((0x3ffffffU 
                                               & vlSelf->__PVT__tag_mem_data_li[4U]) 
                                              | (vlSelf->__Vlvbound_h155a2524__0 
                                                 << 0x1aU));
        vlSelf->__PVT__tag_mem_data_li[5U] = (0xffffU 
                                              & (vlSelf->__Vlvbound_h155a2524__0 
                                                 >> 6U));
    }
    vlSelf->__PVT__sbuf_entry_li[0U] = ((0xfffffff8U 
                                         & vlSelf->__PVT__sbuf_entry_li[0U]) 
                                        | ((IData)(vlSelf->__PVT__miss_v)
                                            ? (IData)(vlSelf->__PVT__miss__DOT__chosen_way_r)
                                            : (IData)(vlSelf->__PVT__tag_hit_way_id)));
    vlSelf->v_o = ((IData)(vlSelf->__PVT__v_v_r) & 
                   ((~ (IData)(vlSelf->__PVT__miss_v)) 
                    | (IData)(vlSelf->__PVT__miss_done_lo)));
    vlSelf->__PVT__bypass_data_masked = ((0xffffffffffff0000ULL 
                                          & vlSelf->__PVT__bypass_data_masked) 
                                         | (IData)((IData)(
                                                           ((0xff00U 
                                                             & (((2U 
                                                                  & (IData)(vlSelf->__PVT__bypass_mask_lo))
                                                                  ? (IData)(
                                                                            (vlSelf->__PVT__bypass_data_lo 
                                                                             >> 8U))
                                                                  : (IData)(
                                                                            (vlSelf->__PVT__ld_data_way_picked 
                                                                             >> 8U))) 
                                                                << 8U)) 
                                                            | (0xffU 
                                                               & ((1U 
                                                                   & (IData)(vlSelf->__PVT__bypass_mask_lo))
                                                                   ? (IData)(vlSelf->__PVT__bypass_data_lo)
                                                                   : (IData)(vlSelf->__PVT__ld_data_way_picked)))))));
    vlSelf->__PVT__bypass_data_masked = ((0xffffffff0000ffffULL 
                                          & vlSelf->__PVT__bypass_data_masked) 
                                         | ((QData)((IData)(
                                                            ((0xff00U 
                                                              & (((8U 
                                                                   & (IData)(vlSelf->__PVT__bypass_mask_lo))
                                                                   ? (IData)(
                                                                             (vlSelf->__PVT__bypass_data_lo 
                                                                              >> 0x18U))
                                                                   : (IData)(
                                                                             (vlSelf->__PVT__ld_data_way_picked 
                                                                              >> 0x18U))) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & ((4U 
                                                                    & (IData)(vlSelf->__PVT__bypass_mask_lo))
                                                                    ? (IData)(
                                                                              (vlSelf->__PVT__bypass_data_lo 
                                                                               >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__ld_data_way_picked 
                                                                               >> 0x10U))))))) 
                                            << 0x10U));
    vlSelf->__PVT__bypass_data_masked = ((0xffff0000ffffffffULL 
                                          & vlSelf->__PVT__bypass_data_masked) 
                                         | ((QData)((IData)(
                                                            ((0xff00U 
                                                              & (((0x20U 
                                                                   & (IData)(vlSelf->__PVT__bypass_mask_lo))
                                                                   ? (IData)(
                                                                             (vlSelf->__PVT__bypass_data_lo 
                                                                              >> 0x28U))
                                                                   : (IData)(
                                                                             (vlSelf->__PVT__ld_data_way_picked 
                                                                              >> 0x28U))) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & ((0x10U 
                                                                    & (IData)(vlSelf->__PVT__bypass_mask_lo))
                                                                    ? (IData)(
                                                                              (vlSelf->__PVT__bypass_data_lo 
                                                                               >> 0x20U))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__ld_data_way_picked 
                                                                               >> 0x20U))))))) 
                                            << 0x20U));
    vlSelf->__PVT__bypass_data_masked = ((0xffffffffffffULL 
                                          & vlSelf->__PVT__bypass_data_masked) 
                                         | ((QData)((IData)(
                                                            ((0xff00U 
                                                              & (((0x80U 
                                                                   & (IData)(vlSelf->__PVT__bypass_mask_lo))
                                                                   ? (IData)(
                                                                             (vlSelf->__PVT__bypass_data_lo 
                                                                              >> 0x38U))
                                                                   : (IData)(
                                                                             (vlSelf->__PVT__ld_data_way_picked 
                                                                              >> 0x38U))) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & ((0x40U 
                                                                    & (IData)(vlSelf->__PVT__bypass_mask_lo))
                                                                    ? (IData)(
                                                                              (vlSelf->__PVT__bypass_data_lo 
                                                                               >> 0x30U))
                                                                    : (IData)(
                                                                              (vlSelf->__PVT__ld_data_way_picked 
                                                                               >> 0x30U))))))) 
                                            << 0x30U));
    vlSelf->__PVT__snoop_or_ld_data = ((IData)(vlSelf->__PVT__miss__DOT__select_snoop_data_r)
                                        ? vlSelf->__PVT__snoop_word_lo
                                        : vlSelf->__PVT__bypass_data_masked);
    vlSelf->__PVT__ld_data_final_li[6U] = (IData)(vlSelf->__PVT__snoop_or_ld_data);
    vlSelf->__PVT__ld_data_final_li[7U] = (IData)((vlSelf->__PVT__snoop_or_ld_data 
                                                   >> 0x20U));
    vlSelf->__PVT__ld_data_sel__BRA__0__KET____DOT__byte_sel 
        = (0xffU & (IData)((vlSelf->__PVT__snoop_or_ld_data 
                            >> (0x38U & ((IData)(vlSelf->__PVT__addr_v_r) 
                                         << 3U)))));
    vlSelf->__PVT__ld_data_sel__BRA__1__KET____DOT__byte_sel 
        = (0xffffU & (IData)((vlSelf->__PVT__snoop_or_ld_data 
                              >> (0x30U & ((IData)(
                                                   (vlSelf->__PVT__addr_v_r 
                                                    >> 1U)) 
                                           << 4U)))));
    vlSelf->__PVT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
        = (IData)((vlSelf->__PVT__snoop_or_ld_data 
                   >> (0x20U & ((IData)((vlSelf->__PVT__addr_v_r 
                                         >> 2U)) << 5U))));
    vlSelf->__PVT__ld_data_final_li[0U] = (IData)((
                                                   ((- (QData)((IData)(
                                                                       ((vlSelf->__PVT__decode_v_r 
                                                                         >> 0x12U) 
                                                                        & ((IData)(vlSelf->__PVT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                                           >> 7U))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(vlSelf->__PVT__ld_data_sel__BRA__0__KET____DOT__byte_sel))));
    vlSelf->__PVT__ld_data_final_li[1U] = (IData)((
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->__PVT__decode_v_r 
                                                                          >> 0x12U) 
                                                                         & ((IData)(vlSelf->__PVT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(vlSelf->__PVT__ld_data_sel__BRA__0__KET____DOT__byte_sel))) 
                                                   >> 0x20U));
    vlSelf->__PVT__ld_data_final_li[2U] = (IData)((
                                                   ((- (QData)((IData)(
                                                                       ((vlSelf->__PVT__decode_v_r 
                                                                         >> 0x12U) 
                                                                        & ((IData)(vlSelf->__PVT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                                           >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(vlSelf->__PVT__ld_data_sel__BRA__1__KET____DOT__byte_sel))));
    vlSelf->__PVT__ld_data_final_li[3U] = (IData)((
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->__PVT__decode_v_r 
                                                                          >> 0x12U) 
                                                                         & ((IData)(vlSelf->__PVT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->__PVT__ld_data_sel__BRA__1__KET____DOT__byte_sel))) 
                                                   >> 0x20U));
    vlSelf->__PVT__ld_data_final_li[4U] = (IData)((
                                                   ((QData)((IData)(
                                                                    (- (IData)((IData)(
                                                                                ((vlSelf->__PVT__decode_v_r 
                                                                                >> 0x12U) 
                                                                                & (vlSelf->__PVT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__ld_data_sel__BRA__2__KET____DOT__byte_sel))));
    vlSelf->__PVT__ld_data_final_li[5U] = (IData)((
                                                   (((QData)((IData)(
                                                                     (- (IData)((IData)(
                                                                                ((vlSelf->__PVT__decode_v_r 
                                                                                >> 0x12U) 
                                                                                & (vlSelf->__PVT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__ld_data_sel__BRA__2__KET____DOT__byte_sel))) 
                                                   >> 0x20U));
    vlSelf->__PVT__atomic_mem_data = ((0x80000U & vlSelf->__PVT__decode_v_r)
                                       ? (((QData)((IData)(
                                                           vlSelf->__PVT__ld_data_final_li[7U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__ld_data_final_li[6U])))
                                       : ((QData)((IData)(
                                                          vlSelf->__PVT__ld_data_final_li[4U])) 
                                          << 0x20U));
    vlSelf->__PVT__atomic_alu_result = ((1U & (1U >> 
                                               (0xfU 
                                                & vlSelf->__PVT__decode_v_r)))
                                         ? ((8U & vlSelf->__PVT__decode_v_r)
                                             ? ((4U 
                                                 & vlSelf->__PVT__decode_v_r)
                                                 ? 0ULL
                                                 : 
                                                ((2U 
                                                  & vlSelf->__PVT__decode_v_r)
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & vlSelf->__PVT__decode_v_r)
                                                   ? 0ULL
                                                   : 
                                                  ((vlSelf->__PVT__atomic_reg_data 
                                                    > vlSelf->__PVT__atomic_mem_data)
                                                    ? vlSelf->__PVT__atomic_reg_data
                                                    : vlSelf->__PVT__atomic_mem_data))))
                                             : ((4U 
                                                 & vlSelf->__PVT__decode_v_r)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->__PVT__decode_v_r)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->__PVT__decode_v_r)
                                                   ? 
                                                  ((vlSelf->__PVT__atomic_reg_data 
                                                    < vlSelf->__PVT__atomic_mem_data)
                                                    ? vlSelf->__PVT__atomic_reg_data
                                                    : vlSelf->__PVT__atomic_mem_data)
                                                   : 
                                                  (VL_GTS_IQQ(64, vlSelf->__PVT__atomic_reg_data, vlSelf->__PVT__atomic_mem_data)
                                                    ? vlSelf->__PVT__atomic_reg_data
                                                    : vlSelf->__PVT__atomic_mem_data))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->__PVT__decode_v_r)
                                                   ? 
                                                  (VL_LTS_IQQ(64, vlSelf->__PVT__atomic_reg_data, vlSelf->__PVT__atomic_mem_data)
                                                    ? vlSelf->__PVT__atomic_reg_data
                                                    : vlSelf->__PVT__atomic_mem_data)
                                                   : 
                                                  (vlSelf->__PVT__atomic_reg_data 
                                                   | vlSelf->__PVT__atomic_mem_data)))
                                                 : 
                                                ((2U 
                                                  & vlSelf->__PVT__decode_v_r)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->__PVT__decode_v_r)
                                                   ? 
                                                  (vlSelf->__PVT__atomic_reg_data 
                                                   & vlSelf->__PVT__atomic_mem_data)
                                                   : 
                                                  (vlSelf->__PVT__atomic_reg_data 
                                                   ^ vlSelf->__PVT__atomic_mem_data))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->__PVT__decode_v_r)
                                                   ? 
                                                  (vlSelf->__PVT__atomic_reg_data 
                                                   + vlSelf->__PVT__atomic_mem_data)
                                                   : vlSelf->__PVT__atomic_reg_data))))
                                         : 0ULL);
    vlSelf->__PVT__atomic_result = ((0x80000U & vlSelf->__PVT__decode_v_r)
                                     ? vlSelf->__PVT__atomic_alu_result
                                     : (vlSelf->__PVT__atomic_alu_result 
                                        >> 0x20U));
    vlSelf->__PVT__sbuf_data_in_mux_li[4U] = (IData)(
                                                     (((QData)((IData)(
                                                                       ((0x10U 
                                                                         & vlSelf->__PVT__decode_v_r)
                                                                         ? (IData)(vlSelf->__PVT__atomic_result)
                                                                         : (IData)(vlSelf->__PVT__data_v_r)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((0x10U 
                                                                          & vlSelf->__PVT__decode_v_r)
                                                                          ? (IData)(vlSelf->__PVT__atomic_result)
                                                                          : (IData)(vlSelf->__PVT__data_v_r))))));
    vlSelf->__PVT__sbuf_data_in_mux_li[5U] = (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x10U 
                                                                          & vlSelf->__PVT__decode_v_r)
                                                                          ? (IData)(vlSelf->__PVT__atomic_result)
                                                                          : (IData)(vlSelf->__PVT__data_v_r)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((0x10U 
                                                                           & vlSelf->__PVT__decode_v_r)
                                                                           ? (IData)(vlSelf->__PVT__atomic_result)
                                                                           : (IData)(vlSelf->__PVT__data_v_r))))) 
                                                      >> 0x20U));
    vlSelf->__PVT__sbuf_data_in_mux_li[6U] = (IData)(
                                                     ((0x10U 
                                                       & vlSelf->__PVT__decode_v_r)
                                                       ? vlSelf->__PVT__atomic_result
                                                       : vlSelf->__PVT__data_v_r));
    vlSelf->__PVT__sbuf_data_in_mux_li[7U] = (IData)(
                                                     (((0x10U 
                                                        & vlSelf->__PVT__decode_v_r)
                                                        ? vlSelf->__PVT__atomic_result
                                                        : vlSelf->__PVT__data_v_r) 
                                                      >> 0x20U));
    __Vtemp_h10f62817__0[1U] = ((0x20000U & vlSelf->__PVT__decode_v_r)
                                 ? (((IData)(vlSelf->__PVT__data_v_r) 
                                     >> 0x18U) | ((IData)(
                                                          (vlSelf->__PVT__data_v_r 
                                                           >> 0x20U)) 
                                                  << 8U))
                                 : (((IData)((((QData)((IData)(
                                                               vlSelf->__PVT__sbuf_data_in_mux_li[
                                                               (((IData)(0x3fU) 
                                                                 + 
                                                                 (0xc0U 
                                                                  & (vlSelf->__PVT__decode_v_r 
                                                                     >> 0xdU))) 
                                                                >> 5U)])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                (6U 
                                                                 & (vlSelf->__PVT__decode_v_r 
                                                                    >> 0x12U))])))) 
                                     >> 0x18U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                             (((IData)(0x3fU) 
                                                                               + 
                                                                               (0xc0U 
                                                                                & (vlSelf->__PVT__decode_v_r 
                                                                                >> 0xdU))) 
                                                                              >> 5U)])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                              (6U 
                                                                               & (vlSelf->__PVT__decode_v_r 
                                                                                >> 0x12U))]))) 
                                                           >> 0x20U)) 
                                                  << 8U)));
    vlSelf->__PVT__sbuf_entry_li[0U] = ((7U & vlSelf->__PVT__sbuf_entry_li[0U]) 
                                        | (((0x20000U 
                                             & vlSelf->__PVT__decode_v_r)
                                             ? (((IData)(vlSelf->__PVT__data_v_r) 
                                                 << 8U) 
                                                | (IData)(vlSelf->__PVT__mask_v_r))
                                             : (((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                           (((IData)(0x3fU) 
                                                                             + 
                                                                             (0xc0U 
                                                                              & (vlSelf->__PVT__decode_v_r 
                                                                                >> 0xdU))) 
                                                                            >> 5U)])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                            (6U 
                                                                             & (vlSelf->__PVT__decode_v_r 
                                                                                >> 0x12U))])))) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & (vlSelf->__PVT__sbuf_mask_in_mux_li 
                                                      >> 
                                                      (0x18U 
                                                       & (vlSelf->__PVT__decode_v_r 
                                                          >> 0x10U)))))) 
                                           << 3U));
    vlSelf->__PVT__sbuf_entry_li[1U] = ((((0x20000U 
                                           & vlSelf->__PVT__decode_v_r)
                                           ? (((IData)(vlSelf->__PVT__data_v_r) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__mask_v_r))
                                           : (((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                         (((IData)(0x3fU) 
                                                                           + 
                                                                           (0xc0U 
                                                                            & (vlSelf->__PVT__decode_v_r 
                                                                               >> 0xdU))) 
                                                                          >> 5U)])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                          (6U 
                                                                           & (vlSelf->__PVT__decode_v_r 
                                                                              >> 0x12U))])))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelf->__PVT__sbuf_mask_in_mux_li 
                                                    >> 
                                                    (0x18U 
                                                     & (vlSelf->__PVT__decode_v_r 
                                                        >> 0x10U)))))) 
                                         >> 0x1dU) 
                                        | (__Vtemp_h10f62817__0[1U] 
                                           << 3U));
    vlSelf->__PVT__sbuf_entry_li[2U] = ((0xfffff800U 
                                         & vlSelf->__PVT__sbuf_entry_li[2U]) 
                                        | ((__Vtemp_h10f62817__0[1U] 
                                            >> 0x1dU) 
                                           | (((0x20000U 
                                                & vlSelf->__PVT__decode_v_r)
                                                ? ((IData)(
                                                           (vlSelf->__PVT__data_v_r 
                                                            >> 0x20U)) 
                                                   >> 0x18U)
                                                : ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                              (((IData)(0x3fU) 
                                                                                + 
                                                                                (0xc0U 
                                                                                & (vlSelf->__PVT__decode_v_r 
                                                                                >> 0xdU))) 
                                                                               >> 5U)])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__sbuf_data_in_mux_li[
                                                                               (6U 
                                                                                & (vlSelf->__PVT__decode_v_r 
                                                                                >> 0x12U))]))) 
                                                            >> 0x20U)) 
                                                   >> 0x18U)) 
                                              << 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__1(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__1\n"); );
    // Body
    vlSelf->__PVT__sbuf_v_li = (((IData)((0U != (0x8010U 
                                                 & vlSelf->__PVT__decode_v_r))) 
                                 & (IData)(vlSelf->v_o)) 
                                & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li));
    vlSelf->__Vcellinp__miss__ack_i = ((IData)(vlSelf->v_o) 
                                       & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li));
    vlSelf->__PVT__v_we = (1U & ((~ (IData)(vlSelf->__PVT__v_v_r)) 
                                 | ((IData)(vlSelf->v_o) 
                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li))));
    vlSelf->__PVT__sbuf__DOT__tag_hit2 = (((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__addr_tl_r 
                                                       >> 3U))) 
                                           == (0x3fffffffU 
                                               & ((vlSelf->__PVT__sbuf_entry_li[3U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__sbuf_entry_li[2U] 
                                                     >> 0xeU)))) 
                                          & (IData)(vlSelf->__PVT__sbuf_v_li));
    vlSelf->__PVT__bypass_v_li = (((IData)((0U != (0x10010U 
                                                   & vlSelf->__PVT__decode_tl_r))) 
                                   & (IData)(vlSelf->__PVT__v_tl_r)) 
                                  & (IData)(vlSelf->__PVT__v_we));
    vlSelf->ready_o = ((IData)(vlSelf->__PVT__v_tl_r)
                        ? ((IData)(vlSelf->__PVT__v_we) 
                           & (IData)(vlSelf->__PVT__tl_ready))
                        : (IData)(vlSelf->__PVT__tl_ready));
    vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i 
        = (0xffU & ((- (IData)((IData)(vlSelf->__PVT__sbuf__DOT__tag_hit2))) 
                    & ((vlSelf->__PVT__sbuf_entry_li[0U] 
                        << 0x1dU) | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                     >> 3U))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hec3dbc1a_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h946a5157_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h9e305796_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h8dca61ff_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h69ef6335_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hec9e430c_0;

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__2(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__2\n"); );
    // Init
    CData/*7:0*/ sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i;
    CData/*3:0*/ __Vtableidx2;
    // Body
    vlSelf->__PVT__sbuf_yumi_li = ((((IData)(vlSelf->__PVT__sbuf_v_lo) 
                                     & (~ (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x10010U 
                                                      & vlSelf->__PVT__decode))) 
                                            & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li)) 
                                           & (IData)(vlSelf->ready_o)))) 
                                    & (~ (IData)(vlSelf->__PVT__dma_data_mem_v_lo))) 
                                   & (~ ((((IData)(vlSelf->__PVT__v_tl_r) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x10010U 
                                                       & vlSelf->__PVT__decode_tl_r)))) 
                                          & (~ (IData)(vlSelf->__PVT__v_we))) 
                                         & (~ (IData)(vlSelf->__PVT__miss_v)))));
    vlSelf->__PVT__data_mem_v_li = ((((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                        & (IData)(vlSelf->ready_o)) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x10010U 
                                                   & vlSelf->__PVT__decode)))) 
                                      | (((IData)(vlSelf->__PVT__v_tl_r) 
                                          & (IData)(vlSelf->__PVT__recover_lo)) 
                                         & (IData)(
                                                   (0U 
                                                    != 
                                                    (0x10010U 
                                                     & vlSelf->__PVT__decode_tl_r))))) 
                                     | (IData)(vlSelf->__PVT__dma_data_mem_v_lo)) 
                                    | ((IData)(vlSelf->__PVT__sbuf_v_lo) 
                                       & (IData)(vlSelf->__PVT__sbuf_yumi_li)));
    vlSelf->__PVT__data_mem_w_li = ((IData)(vlSelf->__PVT__dma_data_mem_w_lo) 
                                    | ((IData)(vlSelf->__PVT__sbuf_v_lo) 
                                       & (IData)(vlSelf->__PVT__sbuf_yumi_li)));
    __Vtableidx2 = (((IData)(vlSelf->__PVT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__sbuf__DOT__num_els_r)));
    vlSelf->__PVT__sbuf_v_lo = Vtestbench__ConstPool__TABLE_hec3dbc1a_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf_empty_li = Vtestbench__ConstPool__TABLE_h946a5157_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf_full_lo = Vtestbench__ConstPool__TABLE_h9e305796_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf__DOT__el0_valid = Vtestbench__ConstPool__TABLE_h9e305796_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf__DOT__el1_valid = Vtestbench__ConstPool__TABLE_h8dca61ff_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf__DOT__el0_enable = Vtestbench__ConstPool__TABLE_h69ef6335_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf__DOT__el1_enable = Vtestbench__ConstPool__TABLE_hec9e430c_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf__DOT__mux0_sel = Vtestbench__ConstPool__TABLE_h9e305796_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf__DOT__mux1_sel = Vtestbench__ConstPool__TABLE_h8dca61ff_0
        [__Vtableidx2];
    vlSelf->__PVT__sbuf_hazard = (((IData)(vlSelf->__PVT__sbuf_full_lo) 
                                   & (((IData)(vlSelf->v_o) 
                                       & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li)) 
                                      & (IData)((0U 
                                                 != 
                                                 (0x8010U 
                                                  & vlSelf->__PVT__decode_v_r))))) 
                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                     & (IData)((0U 
                                                != 
                                                (0x10010U 
                                                 & vlSelf->__PVT__decode)))));
    vlSelf->__PVT__sbuf__DOT__tag_hit0 = (((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__addr_tl_r 
                                                       >> 3U))) 
                                           == (0x3fffffffU 
                                               & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[3U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
                                                     >> 0xeU)))) 
                                          & (IData)(vlSelf->__PVT__sbuf__DOT__el0_valid));
    if (vlSelf->__PVT__sbuf__DOT__mux1_sel) {
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
            = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U] 
            = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U] 
            = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[3U] 
            = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[3U];
    } else {
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
            = vlSelf->__PVT__sbuf_entry_li[0U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U] 
            = vlSelf->__PVT__sbuf_entry_li[1U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U] 
            = vlSelf->__PVT__sbuf_entry_li[2U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[3U] 
            = vlSelf->__PVT__sbuf_entry_li[3U];
    }
    sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffU & ((- (IData)((IData)(vlSelf->__PVT__sbuf__DOT__tag_hit0))) 
                    & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                        << 0x1dU) | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                     >> 3U))));
    vlSelf->__PVT__data_mem_addr_li = (0x3ffU & ((IData)(vlSelf->__PVT__recover_lo)
                                                  ? (IData)(
                                                            (vlSelf->__PVT__addr_tl_r 
                                                             >> 3U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__dma_data_mem_v_lo)
                                                   ? 
                                                  ((0x3f8U 
                                                    & ((IData)(
                                                               (vlSelf->__PVT__dma_addr_lo 
                                                                >> 6U)) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->__PVT__dma__DOT__counter_r)))
                                                   : 
                                                  ((((IData)(
                                                             (0U 
                                                              != 
                                                              (0x10010U 
                                                               & vlSelf->__PVT__decode))) 
                                                     & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li)) 
                                                    & (IData)(vlSelf->ready_o))
                                                    ? 
                                                   ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                     << 0x15U) 
                                                    | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                       >> 0xbU))
                                                    : 
                                                   ((vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U] 
                                                       >> 0xeU))))));
    vlSelf->__PVT__sbuf_data_mem_data[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[1U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[2U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[3U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[4U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[5U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[6U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[7U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[8U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[9U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[0xaU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                           << 0x15U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                             >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[0xbU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                         << 0x35U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                            << 0x15U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                              >> 0xbU))) 
                                                       >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[0xcU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                           << 0x15U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                             >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[0xdU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                         << 0x35U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                            << 0x15U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                              >> 0xbU))) 
                                                       >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[0xeU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                           << 0x15U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                             >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[0xfU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                         << 0x35U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                            << 0x15U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                              >> 0xbU))) 
                                                       >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffffffffff00ULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | (IData)((IData)(
                                                             ((1U 
                                                               & ((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                               ? 
                                                              (0xffU 
                                                               & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                  >> 3U))
                                                               : 0U))));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffffffff00ffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 8U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffffff00ffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x10U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffff00ffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((8U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x18U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffff00ffffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((0x10U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x20U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffff00ffffffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((0x20U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x28U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xff00ffffffffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((0x40U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x30U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffffffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((0x80U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x38U));
    vlSelf->__PVT__sbuf__DOT__el0or1_data = ((0xffffffffffff0000ULL 
                                              & vlSelf->__PVT__sbuf__DOT__el0or1_data) 
                                             | (IData)((IData)(
                                                               ((0xff00U 
                                                                 & (((2U 
                                                                      & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                       << 0xdU) 
                                                                      | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                         >> 0x13U))
                                                                      : 
                                                                     ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                       << 0xdU) 
                                                                      | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                         >> 0x13U))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & ((1U 
                                                                       & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                        << 0x15U) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                          >> 0xbU))
                                                                       : 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                        << 0x15U) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                          >> 0xbU))))))));
    vlSelf->__PVT__sbuf__DOT__el0or1_data = ((0xffffffff0000ffffULL 
                                              & vlSelf->__PVT__sbuf__DOT__el0or1_data) 
                                             | ((QData)((IData)(
                                                                ((0xff00U 
                                                                  & (((8U 
                                                                       & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                          >> 3U))
                                                                       : 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                          >> 3U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((4U 
                                                                        & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                           >> 0x1bU))
                                                                        : 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                           >> 0x1bU))))))) 
                                                << 0x10U));
    vlSelf->__PVT__sbuf__DOT__el0or1_data = ((0xffff0000ffffffffULL 
                                              & vlSelf->__PVT__sbuf__DOT__el0or1_data) 
                                             | ((QData)((IData)(
                                                                ((0xff00U 
                                                                  & (((0x20U 
                                                                       & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                        << 0xdU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                          >> 0x13U))
                                                                       : 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                        << 0xdU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                          >> 0x13U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                         << 0x15U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                           >> 0xbU))
                                                                        : 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                         << 0x15U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                           >> 0xbU))))))) 
                                                << 0x20U));
    vlSelf->__PVT__sbuf__DOT__el0or1_data = ((0xffffffffffffULL 
                                              & vlSelf->__PVT__sbuf__DOT__el0or1_data) 
                                             | ((QData)((IData)(
                                                                ((0xff00U 
                                                                  & (((0x80U 
                                                                       & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
                                                                          >> 3U))
                                                                       : 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                                                                          >> 3U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x40U 
                                                                        & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                           >> 0x1bU))
                                                                        : 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                           >> 0x1bU))))))) 
                                                << 0x30U));
    if (vlSelf->__PVT__dma_data_mem_w_lo) {
        vlSelf->__PVT__data_mem_data_li[0U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[1U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[2U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[3U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[4U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[5U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[6U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[7U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[8U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[9U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[0xaU] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[0xbU] = (IData)(
                                                        (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                         >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[0xcU] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[0xdU] = (IData)(
                                                        (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                         >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[0xeU] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[0xfU] = (IData)(
                                                        (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                         >> 0x20U));
        vlSelf->__PVT__data_mem_w_mask_li = vlSelf->dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__data_mem_data_li[0U] = vlSelf->__PVT__sbuf_data_mem_data[0U];
        vlSelf->__PVT__data_mem_data_li[1U] = vlSelf->__PVT__sbuf_data_mem_data[1U];
        vlSelf->__PVT__data_mem_data_li[2U] = vlSelf->__PVT__sbuf_data_mem_data[2U];
        vlSelf->__PVT__data_mem_data_li[3U] = vlSelf->__PVT__sbuf_data_mem_data[3U];
        vlSelf->__PVT__data_mem_data_li[4U] = vlSelf->__PVT__sbuf_data_mem_data[4U];
        vlSelf->__PVT__data_mem_data_li[5U] = vlSelf->__PVT__sbuf_data_mem_data[5U];
        vlSelf->__PVT__data_mem_data_li[6U] = vlSelf->__PVT__sbuf_data_mem_data[6U];
        vlSelf->__PVT__data_mem_data_li[7U] = vlSelf->__PVT__sbuf_data_mem_data[7U];
        vlSelf->__PVT__data_mem_data_li[8U] = vlSelf->__PVT__sbuf_data_mem_data[8U];
        vlSelf->__PVT__data_mem_data_li[9U] = vlSelf->__PVT__sbuf_data_mem_data[9U];
        vlSelf->__PVT__data_mem_data_li[0xaU] = vlSelf->__PVT__sbuf_data_mem_data[0xaU];
        vlSelf->__PVT__data_mem_data_li[0xbU] = vlSelf->__PVT__sbuf_data_mem_data[0xbU];
        vlSelf->__PVT__data_mem_data_li[0xcU] = vlSelf->__PVT__sbuf_data_mem_data[0xcU];
        vlSelf->__PVT__data_mem_data_li[0xdU] = vlSelf->__PVT__sbuf_data_mem_data[0xdU];
        vlSelf->__PVT__data_mem_data_li[0xeU] = vlSelf->__PVT__sbuf_data_mem_data[0xeU];
        vlSelf->__PVT__data_mem_data_li[0xfU] = vlSelf->__PVT__sbuf_data_mem_data[0xfU];
        vlSelf->__PVT__data_mem_w_mask_li = vlSelf->__PVT__sbuf_data_mem_w_mask;
    }
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = ((0xffffffffffff0000ULL 
                                                & vlSelf->__PVT__sbuf__DOT__bypass_data_n) 
                                               | (IData)((IData)(
                                                                 ((0xff00U 
                                                                   & (((2U 
                                                                        & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                         << 0xdU) 
                                                                        | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                           >> 0x13U))
                                                                        : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 8U))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & ((1U 
                                                                         & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                          << 0x15U) 
                                                                         | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                            >> 0xbU))
                                                                         : (IData)(vlSelf->__PVT__sbuf__DOT__el0or1_data)))))));
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = ((0xffffffff0000ffffULL 
                                                & vlSelf->__PVT__sbuf__DOT__bypass_data_n) 
                                               | ((QData)((IData)(
                                                                  ((0xff00U 
                                                                    & (((8U 
                                                                         & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                          << 0x1dU) 
                                                                         | (vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                            >> 3U))
                                                                         : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x18U))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((4U 
                                                                          & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                          ? 
                                                                         ((vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                           << 5U) 
                                                                          | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                             >> 0x1bU))
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x10U))))))) 
                                                  << 0x10U));
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = ((0xffff0000ffffffffULL 
                                                & vlSelf->__PVT__sbuf__DOT__bypass_data_n) 
                                               | ((QData)((IData)(
                                                                  ((0xff00U 
                                                                    & (((0x20U 
                                                                         & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                          << 0xdU) 
                                                                         | (vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                            >> 0x13U))
                                                                         : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x28U))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((0x10U 
                                                                          & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                          ? 
                                                                         ((vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                             >> 0xbU))
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x20U))))))) 
                                                  << 0x20U));
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = ((0xffffffffffffULL 
                                                & vlSelf->__PVT__sbuf__DOT__bypass_data_n) 
                                               | ((QData)((IData)(
                                                                  ((0xff00U 
                                                                    & (((0x80U 
                                                                         & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__sbuf_entry_li[2U] 
                                                                          << 0x1dU) 
                                                                         | (vlSelf->__PVT__sbuf_entry_li[2U] 
                                                                            >> 3U))
                                                                         : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x38U))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((0x40U 
                                                                          & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                          ? 
                                                                         ((vlSelf->__PVT__sbuf_entry_li[2U] 
                                                                           << 5U) 
                                                                          | (vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                             >> 0x1bU))
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x30U))))))) 
                                                  << 0x30U));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(vlSelf->__PVT__data_mem_w_mask_li));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 1U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 2U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 3U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 4U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 5U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 6U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 7U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 8U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 9U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xaU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xbU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xcU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xdU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xeU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xfU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x10U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x11U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x12U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x13U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x14U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x15U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x16U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x17U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x18U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x19U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1aU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1bU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1cU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1dU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1eU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1fU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x20U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x21U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x22U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x23U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x24U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x25U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x26U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x27U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x28U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x29U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2aU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2bU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2cU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2dU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2eU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2fU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x30U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x31U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x32U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x33U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x34U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x35U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x36U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x37U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x38U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x39U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3aU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3bU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3cU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3dU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3eU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3fU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)(vlSelf->__PVT__data_mem_w_mask_li)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 1U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 2U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 3U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 4U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 5U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 6U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 7U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 8U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 9U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xaU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xbU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xcU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xdU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xeU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xfU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x10U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x11U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x12U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x13U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x14U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x15U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x16U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x17U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x18U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x19U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1aU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1bU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1cU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1dU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1eU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1fU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x20U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x21U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x22U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x23U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x24U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x25U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x26U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x27U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x28U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x29U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2aU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2bU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2cU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2dU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2eU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2fU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x30U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x31U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x32U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x33U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x34U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x35U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x36U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x37U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x38U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x39U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3aU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3bU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3cU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3dU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3eU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3fU))));
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__3(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__3\n"); );
    // Body
    vlSelf->__PVT__dma_done_li = 0U;
    if ((0U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_done_li 
                            = (1U & ((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_pkt_yumi_o) 
                                     & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)));
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_done_li = (1U 
                                                  & ((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_pkt_yumi_o) 
                                                     & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)));
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = ((7U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = ((8U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)));
    }
    vlSelf->__PVT__miss__DOT__select_snoop_data_n = vlSelf->__PVT__miss__DOT__select_snoop_data_r;
    vlSelf->__PVT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__miss_stat_mem_v_lo = 0U;
    vlSelf->__PVT__miss_tag_mem_v_lo = 0U;
    vlSelf->__PVT__miss__DOT__chosen_way_n = vlSelf->__PVT__miss__DOT__chosen_way_r;
    vlSelf->__PVT__miss__DOT__flush_way_n = vlSelf->__PVT__miss__DOT__flush_way_r;
    if ((8U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__select_snoop_data_n 
                        = ((~ (IData)(vlSelf->__Vcellinp__miss__ack_i)) 
                           & (IData)(vlSelf->__PVT__miss__DOT__select_snoop_data_r));
                }
            }
        }
        vlSelf->__PVT__miss__DOT__miss_state_n = ((4U 
                                                   & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->__Vcellinp__miss__ack_i)
                                                      ? 0U
                                                      : 8U))));
    } else if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__miss__DOT__select_snoop_data_n 
                    = ((IData)(vlSelf->__PVT__dma_done_li) 
                       | (IData)(vlSelf->__PVT__miss__DOT__select_snoop_data_r));
            }
            vlSelf->__PVT__miss__DOT__miss_state_n 
                = ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                    ? 8U : ((IData)(vlSelf->__PVT__dma_done_li)
                             ? 7U : 6U));
        } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__miss__DOT__miss_state_n 
                = ((IData)(vlSelf->__PVT__dma_done_li)
                    ? ((IData)((0U != (0x2600U & vlSelf->__PVT__decode_v_r)))
                        ? 7U : 6U) : 5U);
        } else {
            vlSelf->__PVT__miss__DOT__chosen_way_n 
                = (7U & ((0x80U & (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo))
                          ? ((0U == (((IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__enc_lo) 
                                      - (IData)(1U)) 
                                     & (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__enc_lo)))
                              ? (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
                                 >> 0x18U) : 0U) : (IData)(vlSelf->__PVT__miss__DOT__lru_way_id)));
            vlSelf->__PVT__miss__DOT__miss_state_n 
                = ((IData)(vlSelf->__PVT__dma_done_li)
                    ? ((((0xeU >= ((IData)(7U) + (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n))) 
                         & ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                            >> ((IData)(7U) + (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)))) 
                        & ((IData)(vlSelf->__PVT__valid_v_r) 
                           >> (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)))
                        ? 3U : 6U) : 4U);
        }
    } else if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__miss__DOT__miss_state_n = ((1U 
                                                   & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__dma_done_li)
                                                    ? 5U
                                                    : 3U)
                                                   : 7U);
    } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__miss__DOT__flush_way_n = (7U 
                                                 & ((0x2000U 
                                                     & vlSelf->__PVT__decode_v_r)
                                                     ? (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))
                                                     : (IData)(vlSelf->__PVT__tag_hit_way_id)));
        vlSelf->__PVT__miss__DOT__miss_state_n = ((
                                                   ((~ 
                                                     (vlSelf->__PVT__decode_v_r 
                                                      >> 8U)) 
                                                    & ((0xeU 
                                                        >= 
                                                        ((IData)(7U) 
                                                         + (IData)(vlSelf->__PVT__miss__DOT__flush_way_n))) 
                                                       & ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                          >> 
                                                          ((IData)(7U) 
                                                           + (IData)(vlSelf->__PVT__miss__DOT__flush_way_n))))) 
                                                   & ((IData)(vlSelf->__PVT__valid_v_r) 
                                                      >> (IData)(vlSelf->__PVT__miss__DOT__flush_way_n)))
                                                   ? 3U
                                                   : 7U);
    } else {
        vlSelf->__PVT__miss__DOT__miss_state_n = ((IData)(vlSelf->__PVT__miss_v)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__miss__DOT__goto_flush_op)
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((vlSelf->__PVT__decode_v_r 
                                                         >> 6U) 
                                                        | ((vlSelf->__PVT__decode_v_r 
                                                            >> 7U) 
                                                           & ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo) 
                                                              >> 7U))))
                                                     ? 2U
                                                     : 4U))
                                                   : 0U);
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_tag_mem_w_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_stat_mem_w_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_stat_mem_v_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_tag_mem_v_lo 
                        = vlSelf->__PVT__dma_done_li;
                }
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_tag_mem_w_lo = 1U;
                    vlSelf->__PVT__miss_tag_mem_v_lo = 1U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__miss_tag_mem_v_lo = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss_stat_mem_w_lo = 1U;
                }
                vlSelf->__PVT__miss_stat_mem_v_lo = 
                    (1U & ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                           | (IData)(vlSelf->__PVT__miss_v)));
            }
        }
    }
    vlSelf->__PVT__tag_mem_v_li = ((((((vlSelf->__PVT__decode 
                                        >> 5U) & (IData)(vlSelf->ready_o)) 
                                      & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li)) 
                                     | (((IData)(vlSelf->__PVT__recover_lo) 
                                         & (vlSelf->__PVT__decode_tl_r 
                                            >> 5U)) 
                                        & (IData)(vlSelf->__PVT__v_tl_r))) 
                                    | (IData)(vlSelf->__PVT__miss_tag_mem_v_lo)) 
                                   | (((vlSelf->__PVT__decode 
                                        >> 0xeU) & (IData)(vlSelf->ready_o)) 
                                      & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li)));
    vlSelf->__PVT__tl_ready = (1U & (((~ (IData)(vlSelf->__PVT__miss_v)) 
                                      | (((((~ ((vlSelf->__PVT__decode 
                                                 >> 0xeU) 
                                                & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li))) 
                                            & (~ (IData)(vlSelf->__PVT__miss_tag_mem_v_lo))) 
                                           & (~ (IData)(vlSelf->__PVT__dma_data_mem_v_lo))) 
                                          & (~ (IData)(vlSelf->__PVT__recover_lo))) 
                                         & (~ (IData)(vlSelf->__PVT__dma_evict_lo)))) 
                                     & (~ (IData)(vlSelf->__PVT__sbuf_hazard))));
    vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out 
                        = ((0x7f80U & (((IData)(1U) 
                                        << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                       << 7U)) | (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n))))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xfff00000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | vlSelf->miss__DOT____Vlvbound_h867f3837__0);
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xffefffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0x14U));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xffdfffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0x15U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 1U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0x16U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffffc00U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              >> 0xaU));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 1U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffffbffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0xaU));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 1U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffff7ffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0xbU));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 2U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0xcU));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 2U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xfffffffeU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 2U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xfffffffdU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 1U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 3U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xffc00003U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 2U));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 3U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xffbfffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0x16U));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 3U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xff7fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0x17U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 4U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0x18U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0xfffff000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              >> 8U));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 4U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0xffffefffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0xcU));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 4U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0xffffdfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0xdU));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 5U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0xeU));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfffffffcU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              >> 0x12U));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 5U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfffffffbU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 2U));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 5U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfffffff7U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 3U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 6U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xff00000fU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 4U));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 6U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfeffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0x18U));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 6U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfdffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0x19U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 7U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0x1aU));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = ((0xc000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                           | (0xffffU & (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                                         >> 6U)));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = ((0xbfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                           | (0xffffU & ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                                         << 0xeU)));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = ((0x7fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                           | (0xffffU & ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                                         << 0xfU)));
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out 
                        = ((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                           << 7U);
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = (0xffdfffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & (IData)(vlSelf->__PVT__tag_hit_v));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xffe00000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                              << 0x14U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = (0xfffff7ffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 1U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = (0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffff800U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (0x3ffc00U & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                           << 0xaU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = (0xfffffffdU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 2U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = (0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xfffffffeU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (0xfffU & (IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = (0xff7fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 3U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xff800003U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (0xfffffffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                             << 0x16U)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = (0xffffdfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 4U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = (0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0xffffe000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | (0xfff000U & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                           << 0xcU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = (0xfffffff7U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 5U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = (0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfffffff8U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (0x3ffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                         << 2U)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = (0xfdffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 6U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfe00000fU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (0xfffffff0U & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                             << 0x18U)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = (0x7fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = (0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = ((0x8000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                           | (0xc000U & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                         << 0xeU)));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = ((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                       & (0U != (0x300U & vlSelf->__PVT__decode_v_r)));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = ((0xffdfffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0x15U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = ((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                       & (0U != (0x300U & vlSelf->__PVT__decode_v_r)));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = ((0xffe00000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                          << 0x14U));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 1U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xfffff7ffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0xbU));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 1U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = (0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xfffff800U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | (0x3ffc00U & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                       << 0xaU)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 2U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xfffffffdU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 1U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 2U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = (0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xfffffffeU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | (0xfffU & (IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 3U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xff7fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0x17U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 3U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xff800003U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | (0xfffffffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                         << 0x16U)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 4U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                    = ((0xffffdfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0xdU));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 4U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = (0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                    = ((0xffffe000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                       | (0xfff000U & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                       << 0xcU)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 5U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = ((0xfffffff7U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 3U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 5U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                    = (0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = ((0xfffffff8U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                       | (0x3ffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                     << 2U)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 6U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = ((0xfdffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0x19U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 6U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = ((0xfe00000fU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                       | (0xfffffff0U & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                         << 0x18U)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 7U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                    = ((0x7fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                       | (0xffffU & ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                                     << 0xfU)));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 7U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = (0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                    = ((0x8000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                       | (0xc000U & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                     << 0xeU)));
            }
        }
    }
    if (vlSelf->__PVT__miss_v) {
        vlSelf->__PVT__tag_mem_w_li = vlSelf->__PVT__miss_tag_mem_w_lo;
        vlSelf->__PVT__stat_mem_w_li = vlSelf->__PVT__miss_stat_mem_w_lo;
        vlSelf->__PVT__stat_mem_v_li = vlSelf->__PVT__miss_stat_mem_v_lo;
        vlSelf->__PVT__tag_mem_addr_li = (0x7fU & ((IData)(vlSelf->__PVT__recover_lo)
                                                    ? (IData)(
                                                              (vlSelf->__PVT__addr_tl_r 
                                                               >> 6U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__miss_tag_mem_v_lo)
                                                     ? (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 6U))
                                                     : 
                                                    ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                      << 0x12U) 
                                                     | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                        >> 0xeU)))));
        vlSelf->__PVT__stat_mem_w_mask_li = vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out;
        vlSelf->__PVT__tag_mem_w_mask_li[0U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U];
        vlSelf->__PVT__tag_mem_w_mask_li[1U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U];
        vlSelf->__PVT__tag_mem_w_mask_li[2U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U];
        vlSelf->__PVT__tag_mem_w_mask_li[3U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U];
        vlSelf->__PVT__tag_mem_w_mask_li[4U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U];
        vlSelf->__PVT__tag_mem_w_mask_li[5U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U];
    } else {
        vlSelf->__PVT__tag_mem_w_li = (((vlSelf->__PVT__decode 
                                         >> 0xeU) & (IData)(vlSelf->ready_o)) 
                                       & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li));
        vlSelf->__PVT__stat_mem_w_li = (((IData)((0U 
                                                  != 
                                                  (0x1c010U 
                                                   & vlSelf->__PVT__decode_v_r))) 
                                         & (IData)(vlSelf->v_o)) 
                                        & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li));
        vlSelf->__PVT__stat_mem_v_li = (((IData)((0U 
                                                  != 
                                                  (0x1c010U 
                                                   & vlSelf->__PVT__decode_v_r))) 
                                         & (IData)(vlSelf->v_o)) 
                                        & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li));
        vlSelf->__PVT__tag_mem_addr_li = (0x7fU & (
                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                      >> 0xeU)));
        if ((0x4000U & vlSelf->__PVT__decode_v_r)) {
            vlSelf->__PVT__stat_mem_w_mask_li = 0x7fffU;
        } else {
            vlSelf->__PVT__stat_mem_w_mask_li = ((0x7fU 
                                                  & (IData)(vlSelf->__PVT__stat_mem_w_mask_li)) 
                                                 | (((- (IData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x8010U 
                                                                          & vlSelf->__PVT__decode_v_r))))) 
                                                     & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                                    << 7U));
            vlSelf->__PVT__stat_mem_w_mask_li = ((0x7f80U 
                                                  & (IData)(vlSelf->__PVT__stat_mem_w_mask_li)) 
                                                 | (IData)(vlSelf->__PVT__plru_decode_mask_lo));
        }
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                >> 0x15U)))))));
        vlSelf->__PVT__tag_mem_w_mask_li[0U] = ((0xffc00000U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[0U]) 
                                                | vlSelf->__Vlvbound_h9121d6d9__0);
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 1U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[0U] = ((0x3fffffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[0U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0x16U));
        vlSelf->__PVT__tag_mem_w_mask_li[1U] = ((0xfffff000U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[1U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 0xaU));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 2U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[1U] = ((0xfffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[1U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0xcU));
        vlSelf->__PVT__tag_mem_w_mask_li[2U] = ((0xfffffffcU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[2U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 0x14U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 3U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[2U] = ((0xff000003U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[2U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 2U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 4U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[2U] = ((0xffffffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[2U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0x18U));
        vlSelf->__PVT__tag_mem_w_mask_li[3U] = ((0xffffc000U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[3U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 8U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 5U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[3U] = ((0x3fffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[3U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0xeU));
        vlSelf->__PVT__tag_mem_w_mask_li[4U] = ((0xfffffff0U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[4U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 0x12U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 6U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[4U] = ((0xfc00000fU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[4U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 4U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 7U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[4U] = ((0x3ffffffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[4U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0x1aU));
        vlSelf->__PVT__tag_mem_w_mask_li[5U] = (0xffffU 
                                                & (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 6U));
    }
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->__PVT__stat_mem_v_li) & 
           (~ (IData)(vlSelf->__PVT__stat_mem_w_li)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->__PVT__tag_mem_v_li) & (~ (IData)(vlSelf->__PVT__tag_mem_w_li)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7ffeU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                     ? (IData)(vlSelf->__PVT__stat_mem_data_li)
                     : vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__stat_mem_addr_li])));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7ffdU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (2U & (((2U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                      ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                         >> 1U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__stat_mem_addr_li] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7ffbU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (4U & (((4U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                      ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                         >> 2U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__stat_mem_addr_li] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7ff7U & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (8U & (((8U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                      ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                         >> 3U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__stat_mem_addr_li] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7fefU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                         ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                            >> 4U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__stat_mem_addr_li] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7fdfU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                         ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                            >> 5U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__stat_mem_addr_li] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7fbfU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                         ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                            >> 6U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__stat_mem_addr_li] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7f7fU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                         ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                            >> 7U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__stat_mem_addr_li] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7effU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x100U & (((0x100U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                          ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                             >> 8U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__stat_mem_addr_li] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7dffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x200U & (((0x200U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                          ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                             >> 9U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__stat_mem_addr_li] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7bffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x400U & (((0x400U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                          ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                             >> 0xaU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__stat_mem_addr_li] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x77ffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x800U & (((0x800U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                          ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                             >> 0xbU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__stat_mem_addr_li] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x6fffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x1000U & (((0x1000U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                           ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                              >> 0xcU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__stat_mem_addr_li] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x5fffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x2000U & (((0x2000U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                           ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                              >> 0xdU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__stat_mem_addr_li] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x3fffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x4000U & (((0x4000U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                           ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                              >> 0xeU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__stat_mem_addr_li] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                     ? vlSelf->__PVT__tag_mem_data_li[0U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][0U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                      ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                      ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                      ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                         ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                         ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                         ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                         ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                          ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                          ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                          ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                          ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                           ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                           ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                           ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                           ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                            ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                            ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                            ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                            ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                             ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                             ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                             ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                             ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                              ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                              ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                              ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                              ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                               ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                               ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                               ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[0U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                     ? vlSelf->__PVT__tag_mem_data_li[1U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][1U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                      ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                      ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                      ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                         ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                         ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                         ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                         ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                          ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                          ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                          ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                          ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                           ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                           ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                           ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                           ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                            ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                            ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                            ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                            ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                             ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                             ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                             ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                             ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                              ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                              ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                              ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                              ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                               ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                               ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                               ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[1U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                     ? vlSelf->__PVT__tag_mem_data_li[2U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][2U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                      ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                      ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                      ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                         ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                         ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                         ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                         ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                          ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                          ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                          ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                          ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                           ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                           ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                           ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                           ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                            ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                            ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                            ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                            ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                             ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                             ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                             ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                             ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                              ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                              ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                              ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                              ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                               ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                               ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                               ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[2U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                     ? vlSelf->__PVT__tag_mem_data_li[3U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][3U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                      ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                      ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                      ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                         ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                         ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                         ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                         ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                          ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                          ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                          ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                          ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                           ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                           ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                           ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                           ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                            ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                            ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                            ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                            ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                             ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                             ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                             ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                             ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                              ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                              ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                              ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                              ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                               ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                               ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                               ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[3U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                     ? vlSelf->__PVT__tag_mem_data_li[4U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][4U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                      ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                      ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                      ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                         ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                         ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                         ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                         ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                          ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                          ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                          ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                          ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                           ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                           ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                           ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                           ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                            ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                            ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                            ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                            ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                             ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                             ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                             ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                             ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                              ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                              ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                              ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                              ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                               ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                               ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                               ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[4U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                     ? vlSelf->__PVT__tag_mem_data_li[5U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][5U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                      ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                      ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                      ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                         ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                         ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                         ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                         ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                          ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                          ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                          ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xf7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                          ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0x7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                          >> 0xfU)) 
                         << 0xfU)));
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__2(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__2\n"); );
    // Body
    if (VL_UNLIKELY((((8U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                      & (IData)(vlSelf->__PVT__dma__DOT__counter_up)) 
                     & (~ (IData)(vlSymsp->TOP.reset_i))))) {
        VL_WRITEF("%Ntestbench.wrapper.unicore.dut.c[0].dut.l2s.bank[1].cache.dma.dma_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty) 
                      & (IData)(vlSelf->__PVT__dma__DOT__in_fifo_yumi_li)) 
                     & (~ (IData)(vlSymsp->TOP.reset_i))))) {
        VL_WRITEF("%Ntestbench.wrapper.unicore.dut.c[0].dut.l2s.bank[1].cache.dma.in_fifo.unhardened.un.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
    }
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__1(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__1\n"); );
    // Body
    vlSelf->__PVT__sbuf_v_li = (((IData)((0U != (0x8010U 
                                                 & vlSelf->__PVT__decode_v_r))) 
                                 & (IData)(vlSelf->v_o)) 
                                & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li) 
                                   >> 1U));
    vlSelf->__Vcellinp__miss__ack_i = ((IData)(vlSelf->v_o) 
                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li) 
                                          >> 1U));
    vlSelf->__PVT__v_we = (1U & ((~ (IData)(vlSelf->__PVT__v_v_r)) 
                                 | ((IData)(vlSelf->v_o) 
                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li) 
                                       >> 1U))));
    vlSelf->__PVT__sbuf__DOT__tag_hit2 = (((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__addr_tl_r 
                                                       >> 3U))) 
                                           == (0x3fffffffU 
                                               & ((vlSelf->__PVT__sbuf_entry_li[3U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__sbuf_entry_li[2U] 
                                                     >> 0xeU)))) 
                                          & (IData)(vlSelf->__PVT__sbuf_v_li));
    vlSelf->__PVT__bypass_v_li = (((IData)((0U != (0x10010U 
                                                   & vlSelf->__PVT__decode_tl_r))) 
                                   & (IData)(vlSelf->__PVT__v_tl_r)) 
                                  & (IData)(vlSelf->__PVT__v_we));
    vlSelf->ready_o = ((IData)(vlSelf->__PVT__v_tl_r)
                        ? ((IData)(vlSelf->__PVT__v_we) 
                           & (IData)(vlSelf->__PVT__tl_ready))
                        : (IData)(vlSelf->__PVT__tl_ready));
    vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i 
        = (0xffU & ((- (IData)((IData)(vlSelf->__PVT__sbuf__DOT__tag_hit2))) 
                    & ((vlSelf->__PVT__sbuf_entry_li[0U] 
                        << 0x1dU) | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                     >> 3U))));
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__2(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__2\n"); );
    // Init
    CData/*7:0*/ sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i;
    CData/*3:0*/ __Vtableidx4;
    // Body
    vlSelf->__PVT__sbuf_yumi_li = ((((IData)(vlSelf->__PVT__sbuf_v_lo) 
                                     & (~ (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x10010U 
                                                      & vlSelf->__PVT__decode))) 
                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                               >> 1U)) 
                                           & (IData)(vlSelf->ready_o)))) 
                                    & (~ (IData)(vlSelf->__PVT__dma_data_mem_v_lo))) 
                                   & (~ ((((IData)(vlSelf->__PVT__v_tl_r) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x10010U 
                                                       & vlSelf->__PVT__decode_tl_r)))) 
                                          & (~ (IData)(vlSelf->__PVT__v_we))) 
                                         & (~ (IData)(vlSelf->__PVT__miss_v)))));
    vlSelf->__PVT__data_mem_v_li = (((((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                         >> 1U) & (IData)(vlSelf->ready_o)) 
                                       & (IData)((0U 
                                                  != 
                                                  (0x10010U 
                                                   & vlSelf->__PVT__decode)))) 
                                      | (((IData)(vlSelf->__PVT__v_tl_r) 
                                          & (IData)(vlSelf->__PVT__recover_lo)) 
                                         & (IData)(
                                                   (0U 
                                                    != 
                                                    (0x10010U 
                                                     & vlSelf->__PVT__decode_tl_r))))) 
                                     | (IData)(vlSelf->__PVT__dma_data_mem_v_lo)) 
                                    | ((IData)(vlSelf->__PVT__sbuf_v_lo) 
                                       & (IData)(vlSelf->__PVT__sbuf_yumi_li)));
    vlSelf->__PVT__data_mem_w_li = ((IData)(vlSelf->__PVT__dma_data_mem_w_lo) 
                                    | ((IData)(vlSelf->__PVT__sbuf_v_lo) 
                                       & (IData)(vlSelf->__PVT__sbuf_yumi_li)));
    __Vtableidx4 = (((IData)(vlSelf->__PVT__sbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__sbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__sbuf__DOT__num_els_r)));
    vlSelf->__PVT__sbuf_v_lo = Vtestbench__ConstPool__TABLE_hec3dbc1a_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf_empty_li = Vtestbench__ConstPool__TABLE_h946a5157_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf_full_lo = Vtestbench__ConstPool__TABLE_h9e305796_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf__DOT__el0_valid = Vtestbench__ConstPool__TABLE_h9e305796_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf__DOT__el1_valid = Vtestbench__ConstPool__TABLE_h8dca61ff_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf__DOT__el0_enable = Vtestbench__ConstPool__TABLE_h69ef6335_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf__DOT__el1_enable = Vtestbench__ConstPool__TABLE_hec9e430c_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf__DOT__mux0_sel = Vtestbench__ConstPool__TABLE_h9e305796_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf__DOT__mux1_sel = Vtestbench__ConstPool__TABLE_h8dca61ff_0
        [__Vtableidx4];
    vlSelf->__PVT__sbuf_hazard = (((IData)(vlSelf->__PVT__sbuf_full_lo) 
                                   & (((IData)(vlSelf->v_o) 
                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li) 
                                          >> 1U)) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x8010U 
                                                              & vlSelf->__PVT__decode_v_r))))) 
                                  & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                      >> 1U) & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x10010U 
                                                         & vlSelf->__PVT__decode)))));
    vlSelf->__PVT__sbuf__DOT__tag_hit0 = (((0x3fffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__addr_tl_r 
                                                       >> 3U))) 
                                           == (0x3fffffffU 
                                               & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[3U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
                                                     >> 0xeU)))) 
                                          & (IData)(vlSelf->__PVT__sbuf__DOT__el0_valid));
    if (vlSelf->__PVT__sbuf__DOT__mux1_sel) {
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
            = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U] 
            = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U] 
            = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[3U] 
            = vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[3U];
    } else {
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
            = vlSelf->__PVT__sbuf_entry_li[0U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U] 
            = vlSelf->__PVT__sbuf_entry_li[1U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U] 
            = vlSelf->__PVT__sbuf_entry_li[2U];
        vlSelf->__Vcellout__sbuf__sbuf_entry_o[3U] 
            = vlSelf->__PVT__sbuf_entry_li[3U];
    }
    sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffU & ((- (IData)((IData)(vlSelf->__PVT__sbuf__DOT__tag_hit0))) 
                    & ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                        << 0x1dU) | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                     >> 3U))));
    vlSelf->__PVT__data_mem_addr_li = (0x3ffU & ((IData)(vlSelf->__PVT__recover_lo)
                                                  ? (IData)(
                                                            (vlSelf->__PVT__addr_tl_r 
                                                             >> 3U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__dma_data_mem_v_lo)
                                                   ? 
                                                  ((0x3f8U 
                                                    & ((IData)(
                                                               (vlSelf->__PVT__dma_addr_lo 
                                                                >> 6U)) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->__PVT__dma__DOT__counter_r)))
                                                   : 
                                                  ((((IData)(
                                                             (0U 
                                                              != 
                                                              (0x10010U 
                                                               & vlSelf->__PVT__decode))) 
                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                                        >> 1U)) 
                                                    & (IData)(vlSelf->ready_o))
                                                    ? 
                                                   ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                     << 0x15U) 
                                                    | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                       >> 0xbU))
                                                    : 
                                                   ((vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U] 
                                                     << 0x12U) 
                                                    | (vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U] 
                                                       >> 0xeU))))));
    vlSelf->__PVT__sbuf_data_mem_data[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[1U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[2U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[3U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[4U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[5U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[6U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[7U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[8U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                         << 0x15U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                           >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[9U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                          << 0x15U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                            >> 0xbU))) 
                                                     >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[0xaU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                           << 0x15U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                             >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[0xbU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                         << 0x35U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                            << 0x15U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                              >> 0xbU))) 
                                                       >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[0xcU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                           << 0x15U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                             >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[0xdU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                         << 0x35U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                            << 0x15U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                              >> 0xbU))) 
                                                       >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_data[0xeU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                           << 0x15U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                             >> 0xbU))));
    vlSelf->__PVT__sbuf_data_mem_data[0xfU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__Vcellout__sbuf__sbuf_entry_o[2U])) 
                                                         << 0x35U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__Vcellout__sbuf__sbuf_entry_o[1U])) 
                                                            << 0x15U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])) 
                                                              >> 0xbU))) 
                                                       >> 0x20U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffffffffff00ULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | (IData)((IData)(
                                                             ((1U 
                                                               & ((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                               ? 
                                                              (0xffU 
                                                               & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                  >> 3U))
                                                               : 0U))));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffffffff00ffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 8U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffffff00ffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x10U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffff00ffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((8U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x18U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffff00ffffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((0x10U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x20U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffff00ffffffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((0x20U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x28U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xff00ffffffffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((0x40U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x30U));
    vlSelf->__PVT__sbuf_data_mem_w_mask = ((0xffffffffffffffULL 
                                            & vlSelf->__PVT__sbuf_data_mem_w_mask) 
                                           | ((QData)((IData)(
                                                              ((0x80U 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U])))
                                                                ? 
                                                               (0xffU 
                                                                & (vlSelf->__Vcellout__sbuf__sbuf_entry_o[0U] 
                                                                   >> 3U))
                                                                : 0U))) 
                                              << 0x38U));
    vlSelf->__PVT__sbuf__DOT__el0or1_data = ((0xffffffffffff0000ULL 
                                              & vlSelf->__PVT__sbuf__DOT__el0or1_data) 
                                             | (IData)((IData)(
                                                               ((0xff00U 
                                                                 & (((2U 
                                                                      & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                      ? 
                                                                     ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                       << 0xdU) 
                                                                      | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                         >> 0x13U))
                                                                      : 
                                                                     ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                       << 0xdU) 
                                                                      | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                         >> 0x13U))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & ((1U 
                                                                       & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                        << 0x15U) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                          >> 0xbU))
                                                                       : 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                        << 0x15U) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                          >> 0xbU))))))));
    vlSelf->__PVT__sbuf__DOT__el0or1_data = ((0xffffffff0000ffffULL 
                                              & vlSelf->__PVT__sbuf__DOT__el0or1_data) 
                                             | ((QData)((IData)(
                                                                ((0xff00U 
                                                                  & (((8U 
                                                                       & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                          >> 3U))
                                                                       : 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                          >> 3U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((4U 
                                                                        & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[0U] 
                                                                           >> 0x1bU))
                                                                        : 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[0U] 
                                                                           >> 0x1bU))))))) 
                                                << 0x10U));
    vlSelf->__PVT__sbuf__DOT__el0or1_data = ((0xffff0000ffffffffULL 
                                              & vlSelf->__PVT__sbuf__DOT__el0or1_data) 
                                             | ((QData)((IData)(
                                                                ((0xff00U 
                                                                  & (((0x20U 
                                                                       & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                        << 0xdU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                          >> 0x13U))
                                                                       : 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                        << 0xdU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                          >> 0x13U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                         << 0x15U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                           >> 0xbU))
                                                                        : 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                         << 0x15U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                           >> 0xbU))))))) 
                                                << 0x20U));
    vlSelf->__PVT__sbuf__DOT__el0or1_data = ((0xffffffffffffULL 
                                              & vlSelf->__PVT__sbuf__DOT__el0or1_data) 
                                             | ((QData)((IData)(
                                                                ((0xff00U 
                                                                  & (((0x80U 
                                                                       & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                       ? 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
                                                                          >> 3U))
                                                                       : 
                                                                      ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                                                                          >> 3U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x40U 
                                                                        & (IData)(sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[2U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r[1U] 
                                                                           >> 0x1bU))
                                                                        : 
                                                                       ((vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[2U] 
                                                                         << 5U) 
                                                                        | (vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r[1U] 
                                                                           >> 0x1bU))))))) 
                                                << 0x30U));
    if (vlSelf->__PVT__dma_data_mem_w_lo) {
        vlSelf->__PVT__data_mem_data_li[0U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[1U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[2U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[3U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[4U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[5U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[6U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[7U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[8U] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[9U] = (IData)(
                                                      (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                       >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[0xaU] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[0xbU] = (IData)(
                                                        (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                         >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[0xcU] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[0xdU] = (IData)(
                                                        (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                         >> 0x20U));
        vlSelf->__PVT__data_mem_data_li[0xeU] = (IData)(vlSelf->__PVT__dma__DOT__in_fifo_data_lo);
        vlSelf->__PVT__data_mem_data_li[0xfU] = (IData)(
                                                        (vlSelf->__PVT__dma__DOT__in_fifo_data_lo 
                                                         >> 0x20U));
        vlSelf->__PVT__data_mem_w_mask_li = vlSelf->dma__DOT____Vcellout__expand0__o;
    } else {
        vlSelf->__PVT__data_mem_data_li[0U] = vlSelf->__PVT__sbuf_data_mem_data[0U];
        vlSelf->__PVT__data_mem_data_li[1U] = vlSelf->__PVT__sbuf_data_mem_data[1U];
        vlSelf->__PVT__data_mem_data_li[2U] = vlSelf->__PVT__sbuf_data_mem_data[2U];
        vlSelf->__PVT__data_mem_data_li[3U] = vlSelf->__PVT__sbuf_data_mem_data[3U];
        vlSelf->__PVT__data_mem_data_li[4U] = vlSelf->__PVT__sbuf_data_mem_data[4U];
        vlSelf->__PVT__data_mem_data_li[5U] = vlSelf->__PVT__sbuf_data_mem_data[5U];
        vlSelf->__PVT__data_mem_data_li[6U] = vlSelf->__PVT__sbuf_data_mem_data[6U];
        vlSelf->__PVT__data_mem_data_li[7U] = vlSelf->__PVT__sbuf_data_mem_data[7U];
        vlSelf->__PVT__data_mem_data_li[8U] = vlSelf->__PVT__sbuf_data_mem_data[8U];
        vlSelf->__PVT__data_mem_data_li[9U] = vlSelf->__PVT__sbuf_data_mem_data[9U];
        vlSelf->__PVT__data_mem_data_li[0xaU] = vlSelf->__PVT__sbuf_data_mem_data[0xaU];
        vlSelf->__PVT__data_mem_data_li[0xbU] = vlSelf->__PVT__sbuf_data_mem_data[0xbU];
        vlSelf->__PVT__data_mem_data_li[0xcU] = vlSelf->__PVT__sbuf_data_mem_data[0xcU];
        vlSelf->__PVT__data_mem_data_li[0xdU] = vlSelf->__PVT__sbuf_data_mem_data[0xdU];
        vlSelf->__PVT__data_mem_data_li[0xeU] = vlSelf->__PVT__sbuf_data_mem_data[0xeU];
        vlSelf->__PVT__data_mem_data_li[0xfU] = vlSelf->__PVT__sbuf_data_mem_data[0xfU];
        vlSelf->__PVT__data_mem_w_mask_li = vlSelf->__PVT__sbuf_data_mem_w_mask;
    }
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = ((0xffffffffffff0000ULL 
                                                & vlSelf->__PVT__sbuf__DOT__bypass_data_n) 
                                               | (IData)((IData)(
                                                                 ((0xff00U 
                                                                   & (((2U 
                                                                        & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                         << 0xdU) 
                                                                        | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                           >> 0x13U))
                                                                        : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 8U))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & ((1U 
                                                                         & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                          << 0x15U) 
                                                                         | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                            >> 0xbU))
                                                                         : (IData)(vlSelf->__PVT__sbuf__DOT__el0or1_data)))))));
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = ((0xffffffff0000ffffULL 
                                                & vlSelf->__PVT__sbuf__DOT__bypass_data_n) 
                                               | ((QData)((IData)(
                                                                  ((0xff00U 
                                                                    & (((8U 
                                                                         & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                          << 0x1dU) 
                                                                         | (vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                            >> 3U))
                                                                         : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x18U))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((4U 
                                                                          & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                          ? 
                                                                         ((vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                           << 5U) 
                                                                          | (vlSelf->__PVT__sbuf_entry_li[0U] 
                                                                             >> 0x1bU))
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x10U))))))) 
                                                  << 0x10U));
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = ((0xffff0000ffffffffULL 
                                                & vlSelf->__PVT__sbuf__DOT__bypass_data_n) 
                                               | ((QData)((IData)(
                                                                  ((0xff00U 
                                                                    & (((0x20U 
                                                                         & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                          << 0xdU) 
                                                                         | (vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                            >> 0x13U))
                                                                         : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x28U))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((0x10U 
                                                                          & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                          ? 
                                                                         ((vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                             >> 0xbU))
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x20U))))))) 
                                                  << 0x20U));
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = ((0xffffffffffffULL 
                                                & vlSelf->__PVT__sbuf__DOT__bypass_data_n) 
                                               | ((QData)((IData)(
                                                                  ((0xff00U 
                                                                    & (((0x80U 
                                                                         & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                         ? 
                                                                        ((vlSelf->__PVT__sbuf_entry_li[2U] 
                                                                          << 0x1dU) 
                                                                         | (vlSelf->__PVT__sbuf_entry_li[2U] 
                                                                            >> 3U))
                                                                         : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x38U))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & ((0x40U 
                                                                          & (IData)(vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                          ? 
                                                                         ((vlSelf->__PVT__sbuf_entry_li[2U] 
                                                                           << 5U) 
                                                                          | (vlSelf->__PVT__sbuf_entry_li[1U] 
                                                                             >> 0x1bU))
                                                                          : (IData)(
                                                                                (vlSelf->__PVT__sbuf__DOT__el0or1_data 
                                                                                >> 0x30U))))))) 
                                                  << 0x30U));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(vlSelf->__PVT__data_mem_w_mask_li));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 1U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 2U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 3U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 4U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 5U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 6U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 7U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 8U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 9U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xaU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xbU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xcU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xdU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xeU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0xfU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x10U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x11U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x12U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x13U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x14U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x15U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x16U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x17U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x18U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x19U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1aU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1bU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1cU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1dU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1eU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x1fU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x20U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x21U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x22U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x23U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x24U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x25U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x26U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x27U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x28U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x29U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2aU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2bU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2cU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2dU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2eU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x2fU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x30U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x31U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x32U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x33U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x34U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x35U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x36U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x37U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x38U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x39U)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3aU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3bU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3cU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3dU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3eU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i 
        = ((IData)(vlSelf->__PVT__data_mem_w_li) & (IData)(
                                                           (vlSelf->__PVT__data_mem_w_mask_li 
                                                            >> 0x3fU)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)(vlSelf->__PVT__data_mem_w_mask_li)));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 1U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 2U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 3U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 4U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 5U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 6U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 7U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 8U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 9U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xaU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xbU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xcU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xdU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xeU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0xfU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x10U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x11U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x12U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x13U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x14U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x15U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x16U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x17U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x18U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x19U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1aU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1bU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1cU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1dU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1eU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x1fU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x20U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x21U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x22U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x23U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x24U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x25U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x26U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x27U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x28U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x29U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2aU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2bU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2cU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2dU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2eU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x2fU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x30U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x31U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x32U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x33U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x34U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x35U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x36U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x37U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x38U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x39U))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3aU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3bU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3cU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3dU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3eU))));
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i 
        = ((IData)(vlSelf->__PVT__data_mem_v_li) & 
           ((~ (IData)(vlSelf->__PVT__data_mem_w_li)) 
            | (IData)((vlSelf->__PVT__data_mem_w_mask_li 
                       >> 0x3fU))));
}

VL_INLINE_OPT void Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__3(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__3\n"); );
    // Body
    vlSelf->__PVT__dma_done_li = 0U;
    if ((0U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_done_li 
                            = (1U & (((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_pkt_yumi_o) 
                                      & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)) 
                                     >> 1U));
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_done_li = (1U 
                                                  & (((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_pkt_yumi_o) 
                                                      & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)) 
                                                     >> 1U));
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = ((7U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = ((8U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)));
    }
    vlSelf->__PVT__miss__DOT__select_snoop_data_n = vlSelf->__PVT__miss__DOT__select_snoop_data_r;
    vlSelf->__PVT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__miss_stat_mem_v_lo = 0U;
    vlSelf->__PVT__miss_tag_mem_v_lo = 0U;
    vlSelf->__PVT__miss__DOT__chosen_way_n = vlSelf->__PVT__miss__DOT__chosen_way_r;
    vlSelf->__PVT__miss__DOT__flush_way_n = vlSelf->__PVT__miss__DOT__flush_way_r;
    if ((8U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__select_snoop_data_n 
                        = ((~ (IData)(vlSelf->__Vcellinp__miss__ack_i)) 
                           & (IData)(vlSelf->__PVT__miss__DOT__select_snoop_data_r));
                }
            }
        }
        vlSelf->__PVT__miss__DOT__miss_state_n = ((4U 
                                                   & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->__Vcellinp__miss__ack_i)
                                                      ? 0U
                                                      : 8U))));
    } else if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__miss__DOT__select_snoop_data_n 
                    = ((IData)(vlSelf->__PVT__dma_done_li) 
                       | (IData)(vlSelf->__PVT__miss__DOT__select_snoop_data_r));
            }
            vlSelf->__PVT__miss__DOT__miss_state_n 
                = ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                    ? 8U : ((IData)(vlSelf->__PVT__dma_done_li)
                             ? 7U : 6U));
        } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__miss__DOT__miss_state_n 
                = ((IData)(vlSelf->__PVT__dma_done_li)
                    ? ((IData)((0U != (0x2600U & vlSelf->__PVT__decode_v_r)))
                        ? 7U : 6U) : 5U);
        } else {
            vlSelf->__PVT__miss__DOT__chosen_way_n 
                = (7U & ((0x80U & (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo))
                          ? ((0U == (((IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__enc_lo) 
                                      - (IData)(1U)) 
                                     & (IData)(vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__enc_lo)))
                              ? (vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr 
                                 >> 0x18U) : 0U) : (IData)(vlSelf->__PVT__miss__DOT__lru_way_id)));
            vlSelf->__PVT__miss__DOT__miss_state_n 
                = ((IData)(vlSelf->__PVT__dma_done_li)
                    ? ((((0xeU >= ((IData)(7U) + (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n))) 
                         & ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                            >> ((IData)(7U) + (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)))) 
                        & ((IData)(vlSelf->__PVT__valid_v_r) 
                           >> (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)))
                        ? 3U : 6U) : 4U);
        }
    } else if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__miss__DOT__miss_state_n = ((1U 
                                                   & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__dma_done_li)
                                                    ? 5U
                                                    : 3U)
                                                   : 7U);
    } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
        vlSelf->__PVT__miss__DOT__flush_way_n = (7U 
                                                 & ((0x2000U 
                                                     & vlSelf->__PVT__decode_v_r)
                                                     ? (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 0xdU))
                                                     : (IData)(vlSelf->__PVT__tag_hit_way_id)));
        vlSelf->__PVT__miss__DOT__miss_state_n = ((
                                                   ((~ 
                                                     (vlSelf->__PVT__decode_v_r 
                                                      >> 8U)) 
                                                    & ((0xeU 
                                                        >= 
                                                        ((IData)(7U) 
                                                         + (IData)(vlSelf->__PVT__miss__DOT__flush_way_n))) 
                                                       & ((IData)(vlSelf->__Vcellout__stat_mem__data_o) 
                                                          >> 
                                                          ((IData)(7U) 
                                                           + (IData)(vlSelf->__PVT__miss__DOT__flush_way_n))))) 
                                                   & ((IData)(vlSelf->__PVT__valid_v_r) 
                                                      >> (IData)(vlSelf->__PVT__miss__DOT__flush_way_n)))
                                                   ? 3U
                                                   : 7U);
    } else {
        vlSelf->__PVT__miss__DOT__miss_state_n = ((IData)(vlSelf->__PVT__miss_v)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__miss__DOT__goto_flush_op)
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((vlSelf->__PVT__decode_v_r 
                                                         >> 6U) 
                                                        | ((vlSelf->__PVT__decode_v_r 
                                                            >> 7U) 
                                                           & ((IData)(vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo) 
                                                              >> 7U))))
                                                     ? 2U
                                                     : 4U))
                                                   : 0U);
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_tag_mem_w_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_stat_mem_w_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_stat_mem_v_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_tag_mem_v_lo 
                        = vlSelf->__PVT__dma_done_li;
                }
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_tag_mem_w_lo = 1U;
                    vlSelf->__PVT__miss_tag_mem_v_lo = 1U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__miss_tag_mem_v_lo = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss_stat_mem_w_lo = 1U;
                }
                vlSelf->__PVT__miss_stat_mem_v_lo = 
                    (1U & ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                           | (IData)(vlSelf->__PVT__miss_v)));
            }
        }
    }
    vlSelf->__PVT__tag_mem_v_li = ((((((vlSelf->__PVT__decode 
                                        >> 5U) & (IData)(vlSelf->ready_o)) 
                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                         >> 1U)) | 
                                     (((IData)(vlSelf->__PVT__recover_lo) 
                                       & (vlSelf->__PVT__decode_tl_r 
                                          >> 5U)) & (IData)(vlSelf->__PVT__v_tl_r))) 
                                    | (IData)(vlSelf->__PVT__miss_tag_mem_v_lo)) 
                                   | (((vlSelf->__PVT__decode 
                                        >> 0xeU) & (IData)(vlSelf->ready_o)) 
                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                         >> 1U)));
    vlSelf->__PVT__tl_ready = (1U & (((~ (IData)(vlSelf->__PVT__miss_v)) 
                                      | (((((~ ((vlSelf->__PVT__decode 
                                                 >> 0xeU) 
                                                & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                                   >> 1U))) 
                                            & (~ (IData)(vlSelf->__PVT__miss_tag_mem_v_lo))) 
                                           & (~ (IData)(vlSelf->__PVT__dma_data_mem_v_lo))) 
                                          & (~ (IData)(vlSelf->__PVT__recover_lo))) 
                                         & (~ (IData)(vlSelf->__PVT__dma_evict_lo)))) 
                                     & (~ (IData)(vlSelf->__PVT__sbuf_hazard))));
    vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] = 0U;
    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out 
                        = ((0x7f80U & (((IData)(1U) 
                                        << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                       << 7U)) | (IData)(vlSelf->__PVT__miss__DOT__chosen_way_lru_mask));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n))))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xfff00000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | vlSelf->miss__DOT____Vlvbound_h867f3837__0);
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xffefffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0x14U));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & ((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xffdfffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0x15U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 1U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0x16U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffffc00U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              >> 0xaU));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 1U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffffbffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0xaU));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 1U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffff7ffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0xbU));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 2U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0xcU));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 2U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xfffffffeU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 2U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xfffffffdU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 1U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 3U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xffc00003U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 2U));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 3U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xffbfffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0x16U));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 3U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xff7fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0x17U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 4U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0x18U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0xfffff000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              >> 8U));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 4U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0xffffefffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0xcU));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 4U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0xffffdfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0xdU));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 5U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0xeU));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfffffffcU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              >> 0x12U));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 5U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfffffffbU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 2U));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 5U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfffffff7U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 3U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 6U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xff00000fU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 4U));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 6U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfeffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                              << 0x18U));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 6U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfdffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                              << 0x19U));
                    vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                        = (0xfffffU & (- (IData)((1U 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                                     >> 7U)))));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                              << 0x1aU));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = ((0xc000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                           | (0xffffU & (vlSelf->miss__DOT____Vlvbound_h867f3837__0 
                                         >> 6U)));
                    vlSelf->miss__DOT____Vlvbound_h4915df73__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = ((0xbfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                           | (0xffffU & ((IData)(vlSelf->miss__DOT____Vlvbound_h4915df73__0) 
                                         << 0xeU)));
                    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 
                        = (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__miss__DOT__chosen_way_n)) 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = ((0x7fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                           | (0xffffU & ((IData)(vlSelf->miss__DOT____Vlvbound_h4d962d9f__0) 
                                         << 0xfU)));
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out 
                        = ((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                           << 7U);
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = (0xffdfffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & (IData)(vlSelf->__PVT__tag_hit_v));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = ((0xffe00000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                           | ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                              << 0x14U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = (0xfffff7ffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 1U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                        = (0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = ((0xfffff800U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                           | (0x3ffc00U & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                           << 0xaU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = (0xfffffffdU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 2U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                        = (0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xfffffffeU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (0xfffU & (IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = (0xff7fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 3U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = ((0xff800003U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                           | (0xfffffffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                             << 0x16U)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = (0xffffdfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 4U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                        = (0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = ((0xffffe000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                           | (0xfff000U & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                           << 0xcU)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = (0xfffffff7U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 5U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                        = (0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfffffff8U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (0x3ffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                         << 2U)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = (0xfdffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 6U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = ((0xfe00000fU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                           | (0xfffffff0U & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                             << 0x18U)));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = (0x7fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]);
                    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 
                        = (1U & ((IData)(vlSelf->__PVT__tag_hit_v) 
                                 >> 7U));
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                        = (0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]);
                    vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                        = ((0x8000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                           | (0xc000U & ((IData)(vlSelf->miss__DOT____Vlvbound_h70049ab2__0) 
                                         << 0xeU)));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = ((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                       & (0U != (0x300U & vlSelf->__PVT__decode_v_r)));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = ((0xffdfffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0x15U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = ((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                       & (0U != (0x300U & vlSelf->__PVT__decode_v_r)));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = ((0xffe00000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                          << 0x14U));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 1U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xfffff7ffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0xbU));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 1U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U] 
                    = (0x3fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = ((0xfffff800U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]) 
                       | (0x3ffc00U & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                       << 0xaU)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 2U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xfffffffdU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 1U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 2U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U] 
                    = (0xfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xfffffffeU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | (0xfffU & (IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 3U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xff7fffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0x17U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 3U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = ((0xff800003U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]) 
                       | (0xfffffffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                         << 0x16U)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 4U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                    = ((0xffffdfffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0xdU));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 4U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U] 
                    = (0xffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                    = ((0xffffe000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]) 
                       | (0xfff000U & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                       << 0xcU)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 5U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = ((0xfffffff7U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 3U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 5U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U] 
                    = (0x3fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = ((0xfffffff8U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                       | (0x3ffcU & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                     << 2U)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 6U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = ((0xfdffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                       | ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                          << 0x19U));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 6U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = ((0xfe00000fU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]) 
                       | (0xfffffff0U & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                         << 0x18U)));
                vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 7U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                    = ((0x7fffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                       | (0xffffU & ((IData)(vlSelf->miss__DOT____Vlvbound_hd30d7a31__0) 
                                     << 0xfU)));
                vlSelf->miss__DOT____Vlvbound_hd26467e9__0 
                    = (IData)((((IData)(vlSelf->__PVT__miss__DOT__flush_way_decode) 
                                >> 7U) & (0U != (0x300U 
                                                 & vlSelf->__PVT__decode_v_r))));
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U] 
                    = (0x3ffffffU & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U]);
                vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U] 
                    = ((0x8000U & vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U]) 
                       | (0xc000U & ((IData)(vlSelf->miss__DOT____Vlvbound_hd26467e9__0) 
                                     << 0xeU)));
            }
        }
    }
    if (vlSelf->__PVT__miss_v) {
        vlSelf->__PVT__tag_mem_w_li = vlSelf->__PVT__miss_tag_mem_w_lo;
        vlSelf->__PVT__stat_mem_w_li = vlSelf->__PVT__miss_stat_mem_w_lo;
        vlSelf->__PVT__stat_mem_v_li = vlSelf->__PVT__miss_stat_mem_v_lo;
        vlSelf->__PVT__tag_mem_addr_li = (0x7fU & ((IData)(vlSelf->__PVT__recover_lo)
                                                    ? (IData)(
                                                              (vlSelf->__PVT__addr_tl_r 
                                                               >> 6U))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__miss_tag_mem_v_lo)
                                                     ? (IData)(
                                                               (vlSelf->__PVT__addr_v_r 
                                                                >> 6U))
                                                     : 
                                                    ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                      << 0x12U) 
                                                     | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                        >> 0xeU)))));
        vlSelf->__PVT__stat_mem_w_mask_li = vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out;
        vlSelf->__PVT__tag_mem_w_mask_li[0U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[0U];
        vlSelf->__PVT__tag_mem_w_mask_li[1U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[1U];
        vlSelf->__PVT__tag_mem_w_mask_li[2U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[2U];
        vlSelf->__PVT__tag_mem_w_mask_li[3U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[3U];
        vlSelf->__PVT__tag_mem_w_mask_li[4U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[4U];
        vlSelf->__PVT__tag_mem_w_mask_li[5U] = vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out[5U];
    } else {
        vlSelf->__PVT__tag_mem_w_li = (((vlSelf->__PVT__decode 
                                         >> 0xeU) & (IData)(vlSelf->ready_o)) 
                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                          >> 1U));
        vlSelf->__PVT__stat_mem_w_li = (((IData)((0U 
                                                  != 
                                                  (0x1c010U 
                                                   & vlSelf->__PVT__decode_v_r))) 
                                         & (IData)(vlSelf->v_o)) 
                                        & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li) 
                                           >> 1U));
        vlSelf->__PVT__stat_mem_v_li = (((IData)((0U 
                                                  != 
                                                  (0x1c010U 
                                                   & vlSelf->__PVT__decode_v_r))) 
                                         & (IData)(vlSelf->v_o)) 
                                        & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li) 
                                           >> 1U));
        vlSelf->__PVT__tag_mem_addr_li = (0x7fU & (
                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                      >> 0xeU)));
        if ((0x4000U & vlSelf->__PVT__decode_v_r)) {
            vlSelf->__PVT__stat_mem_w_mask_li = 0x7fffU;
        } else {
            vlSelf->__PVT__stat_mem_w_mask_li = ((0x7fU 
                                                  & (IData)(vlSelf->__PVT__stat_mem_w_mask_li)) 
                                                 | (((- (IData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x8010U 
                                                                          & vlSelf->__PVT__decode_v_r))))) 
                                                     & (IData)(vlSelf->__PVT__tag_hit_v)) 
                                                    << 7U));
            vlSelf->__PVT__stat_mem_w_mask_li = ((0x7f80U 
                                                  & (IData)(vlSelf->__PVT__stat_mem_w_mask_li)) 
                                                 | (IData)(vlSelf->__PVT__plru_decode_mask_lo));
        }
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                >> 0x15U)))))));
        vlSelf->__PVT__tag_mem_w_mask_li[0U] = ((0xffc00000U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[0U]) 
                                                | vlSelf->__Vlvbound_h9121d6d9__0);
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 1U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[0U] = ((0x3fffffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[0U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0x16U));
        vlSelf->__PVT__tag_mem_w_mask_li[1U] = ((0xfffff000U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[1U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 0xaU));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 2U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[1U] = ((0xfffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[1U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0xcU));
        vlSelf->__PVT__tag_mem_w_mask_li[2U] = ((0xfffffffcU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[2U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 0x14U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 3U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[2U] = ((0xff000003U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[2U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 2U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 4U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[2U] = ((0xffffffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[2U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0x18U));
        vlSelf->__PVT__tag_mem_w_mask_li[3U] = ((0xffffc000U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[3U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 8U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 5U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[3U] = ((0x3fffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[3U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0xeU));
        vlSelf->__PVT__tag_mem_w_mask_li[4U] = ((0xfffffff0U 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[4U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 0x12U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 6U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[4U] = ((0xfc00000fU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[4U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 4U));
        vlSelf->__Vlvbound_h9121d6d9__0 = (0x3fffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cache_pkt[2U] 
                                                                 >> 0x15U))) 
                                                            >> 7U)))));
        vlSelf->__PVT__tag_mem_w_mask_li[4U] = ((0x3ffffffU 
                                                 & vlSelf->__PVT__tag_mem_w_mask_li[4U]) 
                                                | (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   << 0x1aU));
        vlSelf->__PVT__tag_mem_w_mask_li[5U] = (0xffffU 
                                                & (vlSelf->__Vlvbound_h9121d6d9__0 
                                                   >> 6U));
    }
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->__PVT__stat_mem_v_li) & 
           (~ (IData)(vlSelf->__PVT__stat_mem_w_li)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->__PVT__tag_mem_v_li) & (~ (IData)(vlSelf->__PVT__tag_mem_w_li)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7ffeU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                     ? (IData)(vlSelf->__PVT__stat_mem_data_li)
                     : vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__stat_mem_addr_li])));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7ffdU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (2U & (((2U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                      ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                         >> 1U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__stat_mem_addr_li] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7ffbU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (4U & (((4U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                      ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                         >> 2U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__stat_mem_addr_li] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7ff7U & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (8U & (((8U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                      ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                         >> 3U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__stat_mem_addr_li] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7fefU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                         ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                            >> 4U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__stat_mem_addr_li] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7fdfU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                         ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                            >> 5U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__stat_mem_addr_li] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7fbfU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                         ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                            >> 6U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__stat_mem_addr_li] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7f7fU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                         ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                            >> 7U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__stat_mem_addr_li] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7effU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x100U & (((0x100U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                          ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                             >> 8U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__stat_mem_addr_li] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7dffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x200U & (((0x200U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                          ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                             >> 9U) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__stat_mem_addr_li] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x7bffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x400U & (((0x400U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                          ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                             >> 0xaU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__stat_mem_addr_li] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x77ffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x800U & (((0x800U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                          ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                             >> 0xbU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__stat_mem_addr_li] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x6fffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x1000U & (((0x1000U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                           ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                              >> 0xcU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__stat_mem_addr_li] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x5fffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x2000U & (((0x2000U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                           ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                              >> 0xdU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__stat_mem_addr_li] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x3fffU & (IData)(vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n)) 
           | (0x4000U & (((0x4000U & (IData)(vlSelf->__PVT__stat_mem_w_mask_li))
                           ? ((IData)(vlSelf->__PVT__stat_mem_data_li) 
                              >> 0xeU) : (vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__stat_mem_addr_li] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                     ? vlSelf->__PVT__tag_mem_data_li[0U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][0U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                      ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                      ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                      ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                         ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                         ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                         ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                         ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                          ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                          ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                          ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                          ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                           ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                           ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                           ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                           ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                            ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                            ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                            ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                            ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                             ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                             ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                             ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                             ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                              ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                              ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                              ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                              ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                               ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                               ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[0U])
                               ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[0U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[0U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][0U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                     ? vlSelf->__PVT__tag_mem_data_li[1U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][1U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                      ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                      ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                      ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                         ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                         ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                         ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                         ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                          ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                          ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                          ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                          ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                           ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                           ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                           ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                           ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                            ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                            ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                            ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                            ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                             ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                             ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                             ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                             ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                              ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                              ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                              ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                              ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                               ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                               ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[1U])
                               ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[1U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[1U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][1U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                     ? vlSelf->__PVT__tag_mem_data_li[2U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][2U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                      ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                      ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                      ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                         ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                         ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                         ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                         ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                          ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                          ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                          ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                          ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                           ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                           ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                           ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                           ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                            ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                            ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                            ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                            ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                             ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                             ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                             ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                             ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                              ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                              ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                              ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                              ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                               ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                               ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[2U])
                               ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[2U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[2U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][2U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                     ? vlSelf->__PVT__tag_mem_data_li[3U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][3U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                      ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                      ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                      ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                         ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                         ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                         ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                         ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                          ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                          ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                          ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                          ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                           ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                           ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                           ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                           ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                            ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                            ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                            ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                            ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                             ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                             ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                             ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                             ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                              ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                              ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                              ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                              ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                               ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                               ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[3U])
                               ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[3U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[3U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][3U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                     ? vlSelf->__PVT__tag_mem_data_li[4U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][4U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                      ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                      ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                      ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                         ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                         ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                         ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                         ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                          ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                          ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffffbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                          ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                          ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                           ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                           ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffffbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                           ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffff7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                           ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0xfU)) 
                         << 0xfU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x10000U & (((0x10000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                            ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                               >> 0x10U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                            >> 0x10U)) 
                          << 0x10U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffdffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x20000U & (((0x20000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                            ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                               >> 0x11U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                            >> 0x11U)) 
                          << 0x11U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfffbffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x40000U & (((0x40000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                            ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                               >> 0x12U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                            >> 0x12U)) 
                          << 0x12U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfff7ffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x80000U & (((0x80000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                            ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                               >> 0x13U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                            [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                            >> 0x13U)) 
                          << 0x13U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffefffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x100000U & (((0x100000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                             ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                >> 0x14U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                             >> 0x14U)) 
                           << 0x14U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffdfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x200000U & (((0x200000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                             ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                >> 0x15U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                             >> 0x15U)) 
                           << 0x15U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xffbfffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x400000U & (((0x400000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                             ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                >> 0x16U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                             >> 0x16U)) 
                           << 0x16U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xff7fffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x800000U & (((0x800000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                             ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                >> 0x17U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                             [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                             >> 0x17U)) 
                           << 0x17U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x1000000U & (((0x1000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                              ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                 >> 0x18U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                              >> 0x18U)) 
                            << 0x18U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfdffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x2000000U & (((0x2000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                              ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                 >> 0x19U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                              >> 0x19U)) 
                            << 0x19U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xfbffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x4000000U & (((0x4000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                              ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                 >> 0x1aU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                              >> 0x1aU)) 
                            << 0x1aU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x8000000U & (((0x8000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                              ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                 >> 0x1bU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                              [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                              >> 0x1bU)) 
                            << 0x1bU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xefffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x10000000U & (((0x10000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                               ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                  >> 0x1cU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                               >> 0x1cU)) 
                             << 0x1cU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xdfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x20000000U & (((0x20000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                               ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                  >> 0x1dU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                               >> 0x1dU)) 
                             << 0x1dU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0xbfffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (0x40000000U & (((0x40000000U & vlSelf->__PVT__tag_mem_w_mask_li[4U])
                               ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                                  >> 0x1eU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                               [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                               >> 0x1eU)) 
                             << 0x1eU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((0x7fffffffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U]) 
           | (((vlSelf->__PVT__tag_mem_w_mask_li[4U] 
                >> 0x1fU) ? (vlSelf->__PVT__tag_mem_data_li[4U] 
                             >> 0x1fU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][4U] 
                                          >> 0x1fU)) 
              << 0x1fU));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfffeU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (1U & ((1U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                     ? vlSelf->__PVT__tag_mem_data_li[5U]
                     : vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                    [vlSelf->__PVT__tag_mem_addr_li][5U])));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfffdU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (2U & (((2U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                      ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                         >> 1U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                   >> 1U)) << 1U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfffbU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (4U & (((4U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                      ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                         >> 2U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                   >> 2U)) << 2U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfff7U & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (8U & (((8U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                      ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                         >> 3U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                   [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                   >> 3U)) << 3U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xffefU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x10U & (((0x10U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                         ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                            >> 4U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                      >> 4U)) << 4U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xffdfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x20U & (((0x20U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                         ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                            >> 5U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                      >> 5U)) << 5U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xffbfU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x40U & (((0x40U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                         ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                            >> 6U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xff7fU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x80U & (((0x80U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                         ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                            >> 7U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                      [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                      >> 7U)) << 7U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfeffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x100U & (((0x100U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                          ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                             >> 8U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                       >> 8U)) << 8U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfdffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x200U & (((0x200U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                          ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                             >> 9U) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                       [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                       >> 9U)) << 9U)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xfbffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x400U & (((0x400U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                          ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                             >> 0xaU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                         >> 0xaU)) 
                        << 0xaU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xf7ffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x800U & (((0x800U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                          ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                             >> 0xbU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                         [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                         >> 0xbU)) 
                        << 0xbU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xefffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x1000U & (((0x1000U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                              >> 0xcU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                          >> 0xcU)) 
                         << 0xcU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xdfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x2000U & (((0x2000U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                              >> 0xdU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                          >> 0xdU)) 
                         << 0xdU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0xbfffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x4000U & (((0x4000U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                              >> 0xeU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                          >> 0xeU)) 
                         << 0xeU)));
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0x7fffU & vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U]) 
           | (0x8000U & (((0x8000U & vlSelf->__PVT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tag_mem_data_li[5U] 
                              >> 0xfU) : (vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem
                                          [vlSelf->__PVT__tag_mem_addr_li][5U] 
                                          >> 0xfU)) 
                         << 0xfU)));
}
