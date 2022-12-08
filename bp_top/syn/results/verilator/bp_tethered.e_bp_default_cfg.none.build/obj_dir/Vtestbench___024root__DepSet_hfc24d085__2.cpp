// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

extern const VlUnpacked<CData/*2:0*/, 1024> Vtestbench__ConstPool__TABLE_h98f2b951_0;

VL_INLINE_OPT void Vtestbench___024root___combo__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___combo__TOP__2\n"); );
    // Init
    CData/*3:0*/ testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    CData/*3:0*/ testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    SData/*9:0*/ __Vtableidx17;
    VlWide<3>/*95:0*/ __Vtemp_hb374fb98__0;
    VlWide<3>/*95:0*/ __Vtemp_h72ddf849__0;
    VlWide<3>/*95:0*/ __Vtemp_h94d00de7__0;
    VlWide<3>/*95:0*/ __Vtemp_h72ddf849__1;
    VlWide<3>/*95:0*/ __Vtemp_hfd2033d8__0;
    VlWide<3>/*95:0*/ __Vtemp_h09624aff__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d4fd67d__0;
    VlWide<3>/*95:0*/ __Vtemp_h3cab72b5__0;
    VlWide<3>/*95:0*/ __Vtemp_h3cab72b5__1;
    VlWide<4>/*127:0*/ __Vtemp_hdea2bafa__0;
    VlWide<4>/*127:0*/ __Vtemp_hbe2eca1b__0;
    VlWide<4>/*127:0*/ __Vtemp_h295f7f74__0;
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o 
        = ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.dma_pkt_v_o));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U] 
        = (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__dma__DOT__dma_pkt);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
        = ((0xfffffffcU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U]) 
           | (IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__dma__DOT__dma_pkt 
                      >> 0x20U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_v_lo 
        = ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_v_lo)) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.v_o));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[0U] 
        = (IData)(((IData)((0U != (0x11810U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r)))
                    ? ((0x1000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r)
                        ? (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__lock_v_r) 
                                                   >> 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                               >> 0xdU))))))) 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__valid_v_r) 
                                                         >> 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                     >> 0xdU))))))))
                        : ((0x800U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r)
                            ? (((QData)((IData)(((0x9fU 
                                                  >= 
                                                  (0xffU 
                                                   & ((IData)(0x14U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                  >> 0xdU))))))
                                                  ? 
                                                 (0xfffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           * 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                       >> 0xdU))))))
                                                       ? 0U
                                                       : 
                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__tag_v_r[
                                                       (((IData)(0x13U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x14U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 0xdU)))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                        >> 0xdU)))))))) 
                                                     | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__tag_v_r[
                                                        (7U 
                                                         & (((IData)(0x14U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 0xdU)))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                        >> 0xdU))))))))
                                                  : 0U))) 
                                << 0xdU) | (QData)((IData)(
                                                           (0x1fc0U 
                                                            & ((IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                        >> 6U)) 
                                                               << 6U)))))
                            : ((0x20000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r)
                                ? (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__snoop_or_ld_data 
                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__expanded_mask_v)
                                : (((QData)((IData)(
                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__ld_data_final_li[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0xc0U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r 
                                                          >> 0xdU))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__ld_data_final_li[
                                                                (6U 
                                                                 & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r 
                                                                    >> 0x12U))]))))))
                    : 0ULL));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[1U] 
        = (IData)((((IData)((0U != (0x11810U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r)))
                     ? ((0x1000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r)
                         ? (((QData)((IData)((1U & 
                                              ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__lock_v_r) 
                                               >> (7U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                              >> 0xdU))))))) 
                             << 1U) | (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__valid_v_r) 
                                                          >> 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                      >> 0xdU))))))))
                         : ((0x800U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r)
                             ? (((QData)((IData)(((0x9fU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x14U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                   >> 0xdU))))))
                                                   ? 
                                                  (0xfffffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                        >> 0xdU))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__tag_v_r[
                                                        (((IData)(0x13U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x14U) 
                                                              * 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                          >> 0xdU)))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x14U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 0xdU)))))))) 
                                                      | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__tag_v_r[
                                                         (7U 
                                                          & (((IData)(0x14U) 
                                                              * 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                          >> 0xdU)))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x14U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 0xdU))))))))
                                                   : 0U))) 
                                 << 0xdU) | (QData)((IData)(
                                                            (0x1fc0U 
                                                             & ((IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 6U)) 
                                                                << 6U)))))
                             : ((0x20000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r)
                                 ? (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__snoop_or_ld_data 
                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__expanded_mask_v)
                                 : (((QData)((IData)(
                                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__ld_data_final_li[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0xc0U 
                                                        & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r 
                                                           >> 0xdU))) 
                                                      >> 5U)])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__ld_data_final_li[
                                                                 (6U 
                                                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__decode_v_r 
                                                                     >> 0x12U))]))))))
                     : 0ULL) >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o 
        = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)) 
           | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.dma_pkt_v_o) 
              << 1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
        = ((3U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U]) 
           | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__dma__DOT__dma_pkt) 
              << 2U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[2U] 
        = (0xfU & (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__dma__DOT__dma_pkt) 
                    >> 0x1eU) | ((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__dma__DOT__dma_pkt 
                                          >> 0x20U)) 
                                 << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_v_lo 
        = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_v_lo)) 
           | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.v_o) 
              << 1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[2U] 
        = (IData)(((IData)((0U != (0x11810U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r)))
                    ? ((0x1000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r)
                        ? (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__lock_v_r) 
                                                   >> 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                               >> 0xdU))))))) 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__valid_v_r) 
                                                         >> 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                     >> 0xdU))))))))
                        : ((0x800U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r)
                            ? (((QData)((IData)(((0x9fU 
                                                  >= 
                                                  (0xffU 
                                                   & ((IData)(0x14U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                  >> 0xdU))))))
                                                  ? 
                                                 (0xfffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           * 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                       >> 0xdU))))))
                                                       ? 0U
                                                       : 
                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__tag_v_r[
                                                       (((IData)(0x13U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x14U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 0xdU)))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                        >> 0xdU)))))))) 
                                                     | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__tag_v_r[
                                                        (7U 
                                                         & (((IData)(0x14U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 0xdU)))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                        >> 0xdU))))))))
                                                  : 0U))) 
                                << 0xdU) | (QData)((IData)(
                                                           (0x1fc0U 
                                                            & ((IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                        >> 6U)) 
                                                               << 6U)))))
                            : ((0x20000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r)
                                ? (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__snoop_or_ld_data 
                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__expanded_mask_v)
                                : (((QData)((IData)(
                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__ld_data_final_li[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0xc0U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r 
                                                          >> 0xdU))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__ld_data_final_li[
                                                                (6U 
                                                                 & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r 
                                                                    >> 0x12U))]))))))
                    : 0ULL));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[3U] 
        = (IData)((((IData)((0U != (0x11810U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r)))
                     ? ((0x1000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r)
                         ? (((QData)((IData)((1U & 
                                              ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__lock_v_r) 
                                               >> (7U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                              >> 0xdU))))))) 
                             << 1U) | (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__valid_v_r) 
                                                          >> 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                      >> 0xdU))))))))
                         : ((0x800U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r)
                             ? (((QData)((IData)(((0x9fU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x14U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                   >> 0xdU))))))
                                                   ? 
                                                  (0xfffffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                        >> 0xdU))))))
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__tag_v_r[
                                                        (((IData)(0x13U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x14U) 
                                                              * 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                          >> 0xdU)))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x14U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 0xdU)))))))) 
                                                      | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__tag_v_r[
                                                         (7U 
                                                          & (((IData)(0x14U) 
                                                              * 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                          >> 0xdU)))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x14U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 0xdU))))))))
                                                   : 0U))) 
                                 << 0xdU) | (QData)((IData)(
                                                            (0x1fc0U 
                                                             & ((IData)(
                                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__addr_v_r 
                                                                         >> 6U)) 
                                                                << 6U)))))
                             : ((0x20000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r)
                                 ? (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__snoop_or_ld_data 
                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__expanded_mask_v)
                                 : (((QData)((IData)(
                                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__ld_data_final_li[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0xc0U 
                                                        & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r 
                                                           >> 0xdU))) 
                                                      >> 5U)])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__ld_data_final_li[
                                                                 (6U 
                                                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__decode_v_r 
                                                                     >> 0x12U))]))))))
                     : 0ULL) >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[2U] = 0U;
    if ((1U & (~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U] 
                  >> 0x19U)))) {
        if ((1U & (~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U] 
                      >> 0x18U)))) {
            VL_EXTEND_WQ(68,64, __Vtemp_hb374fb98__0, vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fclass_result);
            __Vtemp_h72ddf849__0[1U] = (((((0U == (7U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                              >> 0x1dU)))) 
                                           | (6U <= 
                                              (7U & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                             >> 0x1dU)))))
                                           ? ((0xe00U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                           >> 0x1dU)) 
                                                  << 9U)) 
                                              | (0x1ffU 
                                                 & ((IData)(0x100U) 
                                                    + (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                               >> 0x17U)))))
                                           : ((IData)(0x700U) 
                                              + (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                            >> 0x17U))))) 
                                         << 0x14U) 
                                        | (IData)((
                                                   ((QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out)))) 
                                                    << 0x1dU) 
                                                   >> 0x20U)));
            if ((0x400000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                if ((0x200000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                    if ((0x100000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                        __Vtemp_h94d00de7__0[0U] = 
                            __Vtemp_hb374fb98__0[0U];
                        __Vtemp_h94d00de7__0[1U] = 
                            __Vtemp_hb374fb98__0[1U];
                        __Vtemp_h94d00de7__0[2U] = 
                            __Vtemp_hb374fb98__0[2U];
                    } else {
                        __Vtemp_h94d00de7__0[0U] = 
                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U];
                        __Vtemp_h94d00de7__0[1U] = 
                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U];
                        __Vtemp_h94d00de7__0[2U] = 
                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[2U];
                    }
                } else if ((0x100000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                    __Vtemp_h94d00de7__0[0U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U];
                    __Vtemp_h94d00de7__0[1U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U];
                    __Vtemp_h94d00de7__0[2U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[2U];
                } else {
                    __Vtemp_h94d00de7__0[0U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[0U];
                    __Vtemp_h94d00de7__0[1U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[1U];
                    __Vtemp_h94d00de7__0[2U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[2U];
                }
            } else if ((0x200000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                __Vtemp_h94d00de7__0[0U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[0U];
                __Vtemp_h94d00de7__0[1U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[1U];
                __Vtemp_h94d00de7__0[2U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[2U];
            } else {
                if ((0xffffffffU == (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                             >> 0x20U)))) {
                    __Vtemp_h94d00de7__0[0U] = (IData)(
                                                       ((QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out)))) 
                                                        << 0x1dU));
                    __Vtemp_h94d00de7__0[1U] = __Vtemp_h72ddf849__0[1U];
                } else {
                    __Vtemp_h94d00de7__0[0U] = (IData)(
                                                       (((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__PVT__in64_rec__DOT__exp)) 
                                                         << 0x34U) 
                                                        | (0xfffffffffffffULL 
                                                           & ((0U 
                                                               == 
                                                               (0x7ffU 
                                                                & (IData)(
                                                                          (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                           >> 0x34U))))
                                                               ? 
                                                              ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                << (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__PVT__in64_rec__DOT__normDist)) 
                                                               << 1U)
                                                               : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw))));
                    __Vtemp_h94d00de7__0[1U] = (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__PVT__in64_rec__DOT__exp)) 
                                                          << 0x34U) 
                                                         | (0xfffffffffffffULL 
                                                            & ((0U 
                                                                == 
                                                                (0x7ffU 
                                                                 & (IData)(
                                                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                            >> 0x34U))))
                                                                ? 
                                                               ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                 << (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__PVT__in64_rec__DOT__normDist)) 
                                                                << 1U)
                                                                : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw))) 
                                                        >> 0x20U));
                }
                __Vtemp_h94d00de7__0[2U] = ((((0xffffffffU 
                                               == (IData)(
                                                          (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                           >> 0x20U)))
                                               ? 0U
                                               : 7U) 
                                             << 1U) 
                                            | ((0xffffffffU 
                                                == (IData)(
                                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                            >> 0x20U)))
                                                ? (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                              >> 0x20U)))
                                                : (1U 
                                                   & (IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x3fU)))));
            }
            __Vtemp_h72ddf849__1[1U] = (((((0U == (7U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                              >> 0x1dU)))) 
                                           | (6U <= 
                                              (7U & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                             >> 0x1dU)))))
                                           ? ((0xe00U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                           >> 0x1dU)) 
                                                  << 9U)) 
                                              | (0x1ffU 
                                                 & ((IData)(0x100U) 
                                                    + (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                               >> 0x17U)))))
                                           : ((IData)(0x700U) 
                                              + (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                            >> 0x17U))))) 
                                         << 0x14U) 
                                        | (IData)((
                                                   ((QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out)))) 
                                                    << 0x1dU) 
                                                   >> 0x20U)));
            VL_EXTEND_WQ(68,64, __Vtemp_hfd2033d8__0, 
                         ((0x8000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])
                           ? (((QData)((IData)((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_rec2raw.raw_o 
                                                                      >> 0x1fU))))))) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_rec2raw.raw_o)))
                           : vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_rec2raw.raw_o));
            __Vtemp_h09624aff__0[1U] = (((((0U == (7U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__Vcellout__in32_rec__out 
                                                              >> 0x1dU)))) 
                                           | (6U <= 
                                              (7U & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__Vcellout__in32_rec__out 
                                                             >> 0x1dU)))))
                                           ? ((0xe00U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__Vcellout__in32_rec__out 
                                                           >> 0x1dU)) 
                                                  << 9U)) 
                                              | (0x1ffU 
                                                 & ((IData)(0x100U) 
                                                    + (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__Vcellout__in32_rec__out 
                                                               >> 0x17U)))))
                                           : ((IData)(0x700U) 
                                              + (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__Vcellout__in32_rec__out 
                                                            >> 0x17U))))) 
                                         << 0x14U) 
                                        | (IData)((
                                                   ((QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__Vcellout__in32_rec__out)))) 
                                                    << 0x1dU) 
                                                   >> 0x20U)));
            if ((0x200000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                if ((0x100000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                    if ((0xffffffffU == (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                 >> 0x20U)))) {
                        __Vtemp_h3d4fd67d__0[0U] = (IData)(
                                                           ((QData)((IData)(
                                                                            (0x7fffffU 
                                                                             & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out)))) 
                                                            << 0x1dU));
                        __Vtemp_h3d4fd67d__0[1U] = 
                            __Vtemp_h72ddf849__1[1U];
                    } else {
                        __Vtemp_h3d4fd67d__0[0U] = (IData)(
                                                           (((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__PVT__in64_rec__DOT__exp)) 
                                                             << 0x34U) 
                                                            | (0xfffffffffffffULL 
                                                               & ((0U 
                                                                   == 
                                                                   (0x7ffU 
                                                                    & (IData)(
                                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                               >> 0x34U))))
                                                                   ? 
                                                                  ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                    << (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__PVT__in64_rec__DOT__normDist)) 
                                                                   << 1U)
                                                                   : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw))));
                        __Vtemp_h3d4fd67d__0[1U] = (IData)(
                                                           ((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__PVT__in64_rec__DOT__exp)) 
                                                              << 0x34U) 
                                                             | (0xfffffffffffffULL 
                                                                & ((0U 
                                                                    == 
                                                                    (0x7ffU 
                                                                     & (IData)(
                                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                                >> 0x34U))))
                                                                    ? 
                                                                   ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                     << (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__PVT__in64_rec__DOT__normDist)) 
                                                                    << 1U)
                                                                    : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw))) 
                                                            >> 0x20U));
                    }
                    __Vtemp_h3d4fd67d__0[2U] = ((((0xffffffffU 
                                                   == (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x20U)))
                                                   ? 0U
                                                   : 7U) 
                                                 << 1U) 
                                                | ((0xffffffffU 
                                                    == (IData)(
                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                >> 0x20U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg.__Vcellout__in32_rec__out 
                                                               >> 0x20U)))
                                                    : 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x3fU)))));
                } else {
                    __Vtemp_h3d4fd67d__0[0U] = __Vtemp_hfd2033d8__0[0U];
                    __Vtemp_h3d4fd67d__0[1U] = __Vtemp_hfd2033d8__0[1U];
                    __Vtemp_h3d4fd67d__0[2U] = __Vtemp_hfd2033d8__0[2U];
                }
            } else if ((0x100000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                if ((0xffffffffU == (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                             >> 0x20U)))) {
                    __Vtemp_h3d4fd67d__0[0U] = (IData)(
                                                       ((QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__Vcellout__in32_rec__out)))) 
                                                        << 0x1dU));
                    __Vtemp_h3d4fd67d__0[1U] = __Vtemp_h09624aff__0[1U];
                } else {
                    __Vtemp_h3d4fd67d__0[0U] = (IData)(
                                                       (((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__PVT__in64_rec__DOT__exp)) 
                                                         << 0x34U) 
                                                        | (0xfffffffffffffULL 
                                                           & ((0U 
                                                               == 
                                                               (0x7ffU 
                                                                & (IData)(
                                                                          (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                           >> 0x34U))))
                                                               ? 
                                                              ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                << (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__PVT__in64_rec__DOT__normDist)) 
                                                               << 1U)
                                                               : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src))));
                    __Vtemp_h3d4fd67d__0[1U] = (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__PVT__in64_rec__DOT__exp)) 
                                                          << 0x34U) 
                                                         | (0xfffffffffffffULL 
                                                            & ((0U 
                                                                == 
                                                                (0x7ffU 
                                                                 & (IData)(
                                                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                            >> 0x34U))))
                                                                ? 
                                                               ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                 << (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__PVT__in64_rec__DOT__normDist)) 
                                                                << 1U)
                                                                : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src))) 
                                                        >> 0x20U));
                }
                __Vtemp_h3d4fd67d__0[2U] = ((((0xffffffffU 
                                               == (IData)(
                                                          (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                           >> 0x20U)))
                                               ? 0U
                                               : 7U) 
                                             << 1U) 
                                            | ((0xffffffffU 
                                                == (IData)(
                                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                            >> 0x20U)))
                                                ? (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg.__Vcellout__in32_rec__out 
                                                              >> 0x20U)))
                                                : (1U 
                                                   & (IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x3fU)))));
            } else {
                __Vtemp_h3d4fd67d__0[0U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_result[0U];
                __Vtemp_h3d4fd67d__0[1U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_result[1U];
                __Vtemp_h3d4fd67d__0[2U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_result[2U];
            }
            VL_EXTEND_WQ(68,64, __Vtemp_h3cab72b5__0, vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2i_result);
            VL_EXTEND_WQ(68,64, __Vtemp_h3cab72b5__1, vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2i_result);
            if ((0x800000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
                    = __Vtemp_h94d00de7__0[0U];
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                    = __Vtemp_h94d00de7__0[1U];
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[2U] 
                    = __Vtemp_h94d00de7__0[2U];
            } else if ((0x400000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
                    = __Vtemp_h3d4fd67d__0[0U];
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                    = __Vtemp_h3d4fd67d__0[1U];
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[2U] 
                    = __Vtemp_h3d4fd67d__0[2U];
            } else if ((0x200000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                if ((0x100000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
                        = __Vtemp_h3cab72b5__0[0U];
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                        = __Vtemp_h3cab72b5__0[1U];
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[2U] 
                        = __Vtemp_h3cab72b5__0[2U];
                } else {
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
                        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_result[0U];
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_result[1U];
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[2U] 
                        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_result[2U];
                }
            } else if ((0x100000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
                    = __Vtemp_h3cab72b5__1[0U];
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                    = __Vtemp_h3cab72b5__1[1U];
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[2U] 
                    = __Vtemp_h3cab72b5__1[2U];
            } else {
                if ((0x4000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
                        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[0U];
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U];
                } else if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_is_nan) {
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] = 0U;
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] = 0xe0080000U;
                } else {
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
                        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[0U];
                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U];
                }
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[2U] 
                    = ((((0x4000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])
                          ? 7U : (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)) 
                        << 1U) | (1U & ((0x4000000U 
                                         & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])
                                         ? vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]
                                         : ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_is_nan)
                                             ? 0U : 
                                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]))));
            }
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x10U] 
        = ((0xffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x10U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[0U] 
              << 0x10U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x11U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[0U] 
            >> 0x10U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[1U] 
                         << 0x10U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x12U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[1U] 
            >> 0x10U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[2U] 
                         << 0x10U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x13U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[2U] 
            >> 0x10U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[3U] 
                         << 0x10U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x14U] 
        = (0xfffffU & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[3U] 
                        >> 0x10U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot.data_o[4U] 
                                     << 0x10U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0U] 
        = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[1U] 
        = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[2U] 
        = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[3U] 
        = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[3U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[4U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[0U] 
            << 4U) | vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[5U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[0U] 
            >> 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[1U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[6U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[1U] 
            >> 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[2U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[7U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[2U] 
            >> 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[3U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[8U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[0U] 
            << 8U) | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[3U] 
                       >> 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[4U] 
                                    << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[9U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[0U] 
            >> 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[1U] 
                         << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0xaU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[1U] 
            >> 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[2U] 
                         << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0xbU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[2U] 
            >> 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[3U] 
                         << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0xcU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[0U] 
            << 0xcU) | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[3U] 
                         >> 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[4U] 
                                      << 8U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0xdU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[0U] 
            >> 0x14U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[1U] 
                         << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0xeU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[1U] 
            >> 0x14U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[2U] 
                         << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0xfU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[2U] 
            >> 0x14U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[3U] 
                         << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x10U] 
        = ((0xffff0000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x10U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[3U] 
               >> 0x14U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.data_o[4U] 
                            << 0xcU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0U] 
        = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[1U] 
        = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[2U] 
        = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[3U] 
        = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[3U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[4U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[0U] 
            << 4U) | vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot.data_o[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[5U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[0U] 
            >> 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[1U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[6U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[1U] 
            >> 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[2U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[7U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[2U] 
            >> 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[3U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[8U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[0U] 
            << 8U) | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[3U] 
                       >> 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot.data_o[4U] 
                                    << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[9U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[0U] 
            >> 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[1U] 
                         << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xaU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[1U] 
            >> 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[2U] 
                         << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xbU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[2U] 
            >> 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[3U] 
                         << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xcU] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[3U] 
            >> 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot.data_o[4U] 
                         << 8U));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan_li 
        = ((((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__thermocode_r) 
             & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)) 
            << 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o));
    vlSelf->testbench__DOT__dram__DOT__dma_pkt[0U] 
        = (IData)((0x3ffffffffULL & (((QData)((IData)(
                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U])))));
    vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U] 
        = ((0xfffffffcU & vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U]) 
           | (IData)(((0x3ffffffffULL & (((QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U])))) 
                      >> 0x20U)));
    vlSelf->testbench__DOT__dram__DOT__dma_pkt[0U] 
        = (IData)((((QData)((IData)((0xfffffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                  << 0x13U) 
                                                 | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U] 
                                                    >> 0xdU))))) 
                    << 0xdU) | (QData)((IData)(((0x1f80U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U] 
                                                    << 1U)) 
                                                | ((0x40U 
                                                    & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U] 
                                                       >> 6U)) 
                                                   | (0x3fU 
                                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U])))))));
    vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U] 
        = ((0xfffffffeU & vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U]) 
           | (IData)(((((QData)((IData)((0xfffffU & 
                                         ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                           << 0x13U) 
                                          | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U] 
                                             >> 0xdU))))) 
                        << 0xdU) | (QData)((IData)(
                                                   ((0x1f80U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U] 
                                                        << 1U)) 
                                                    | ((0x40U 
                                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U] 
                                                           >> 6U)) 
                                                       | (0x3fU 
                                                          & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[0U])))))) 
                      >> 0x20U)));
    vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U] 
        = ((3U & vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U]) 
           | ((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[2U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U])) 
                                            >> 2U)))) 
              << 2U));
    vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U] 
        = (0xfU & (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[2U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U])) 
                                                  >> 2U)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[2U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U])) 
                                                 >> 2U))) 
                                          >> 0x20U)) 
                                 << 2U)));
    vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U] 
        = ((3U & vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U]) 
           | ((IData)((((QData)((IData)((0xfffffU & 
                                         ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[2U] 
                                           << 0x11U) 
                                          | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                             >> 0xfU))))) 
                        << 0xdU) | (QData)((IData)(
                                                   ((0x1f80U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                        >> 1U)) 
                                                    | ((0x40U 
                                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                           >> 8U)) 
                                                       | (0x3fU 
                                                          & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                             >> 2U)))))))) 
              << 2U));
    vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U] 
        = ((8U & vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U]) 
           | (0xfU & (((IData)((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[2U] 
                                                      << 0x11U) 
                                                     | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                        >> 0xfU))))) 
                                 << 0xdU) | (QData)((IData)(
                                                            ((0x1f80U 
                                                              & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                                 >> 1U)) 
                                                             | ((0x40U 
                                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                                    >> 8U)) 
                                                                | (0x3fU 
                                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                                      >> 2U)))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               (0xfffffU 
                                                                & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[2U] 
                                                                    << 0x11U) 
                                                                   | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                                      >> 0xfU))))) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                ((0x1f80U 
                                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                                     >> 1U)) 
                                                                 | ((0x40U 
                                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                                        >> 8U)) 
                                                                    | (0x3fU 
                                                                       & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__l2s__dma_pkt_o[1U] 
                                                                          >> 2U))))))) 
                                             >> 0x20U)) 
                                    << 2U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_v_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_received_n 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_received_r;
    if ((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__state_r))) {
        if ((1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li 
                = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_v_lo;
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_received_n 
                = (0xfffU & ((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li))
                              ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_received_r))
                              : (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_received_r)));
        } else if ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_v_li 
                = (1U & ((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                             & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                         & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_v_lo) 
                            >> (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                      >> 3U)))));
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li 
                = (((~ ((IData)(1U) << (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                              >> 3U)))) 
                    & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_yumi_li)) 
                   | (3U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_v_li) 
                             & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_ready_and_lo)) 
                            << (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                      >> 3U)))));
        }
    }
    __Vtemp_hdea2bafa__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x40U 
                                                            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                                               << 3U))) 
                                                          >> 5U)])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[
                                                          (2U 
                                                           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                                              >> 2U))]))));
    __Vtemp_hdea2bafa__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x40U 
                                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                                                << 3U))) 
                                                           >> 5U)])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[
                                                           (2U 
                                                            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                                               >> 2U))]))) 
                                        >> 0x20U));
    __Vtemp_hdea2bafa__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x40U 
                                                            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                                               << 3U))) 
                                                          >> 5U)])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[
                                                          (2U 
                                                           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                                              >> 2U))]))));
    __Vtemp_hdea2bafa__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x40U 
                                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                                                << 3U))) 
                                                           >> 5U)])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_data_lo[
                                                           (2U 
                                                            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[2U] 
                                                               >> 2U))]))) 
                                        >> 0x20U));
    VL_SHIFTR_WWI(128,128,6, __Vtemp_hbe2eca1b__0, __Vtemp_hdea2bafa__0, 
                  (((0x40000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U])
                     ? (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[0U] 
                              >> 8U)) : 0U) << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U] 
        = __Vtemp_hbe2eca1b__0[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[1U] 
        = __Vtemp_hbe2eca1b__0[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[2U] 
        = __Vtemp_hbe2eca1b__0[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[3U] 
        = __Vtemp_hbe2eca1b__0[3U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__data_delayed[0U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
            << 1U) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[8U] 
                       >> 0xbU) & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[0xaU] 
                                   >> 0x18U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__data_delayed[1U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[0U] 
            >> 0x1fU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                         << 1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__data_delayed[2U] 
        = ((0xfffffc00U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__data_delayed[2U]) 
           | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_fflags) 
               << 5U) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[1U] 
                          >> 0x1fU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__faux_result[2U] 
                                       << 1U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_last_li 
        = ((0x18U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_last_li)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0xcU] 
                     >> 9U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[8U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[4U] 
                                                     >> 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_last_li 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_last_li)) 
           | ((0x10U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x14U] 
                        >> 0xfU)) | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cb__o[0x10U] 
                                           >> 0xcU))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_data_o[0U] 
        = (IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0U]))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_data_o[1U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0U]))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_data_o[2U] 
        = (IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[6U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[5U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[4U])) 
                                               >> 4U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_data_o[3U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[6U])) 
                     << 0x3cU) | (((QData)((IData)(
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[5U])) 
                                   << 0x1cU) | ((QData)((IData)(
                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[4U])) 
                                                >> 4U))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_data_o[4U] 
        = (IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xaU])) 
                    << 0x38U) | (((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[9U])) 
                                  << 0x18U) | ((QData)((IData)(
                                                               vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[8U])) 
                                               >> 8U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_data_o[5U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xaU])) 
                     << 0x38U) | (((QData)((IData)(
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[9U])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[8U])) 
                                                >> 8U))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_header_o[0U] 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_header_o[1U] 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[3U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_header_o[2U] 
        = (((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[7U] 
             << 0x1fU) | (0x7ffffff8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[6U] 
                                         >> 1U))) | 
           (7U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[4U]));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_header_o[3U] 
        = ((7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[7U] 
                  >> 1U)) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[8U] 
                              << 0x1fU) | (0x7ffffff8U 
                                           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[7U] 
                                              >> 1U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_header_o[4U] 
        = (((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xbU] 
             << 0x1eU) | (0x3fffffc0U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xaU] 
                                         >> 2U))) | 
           ((7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[8U] 
                   >> 1U)) | (0x38U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[8U] 
                                       >> 1U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_header_o[5U] 
        = ((0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xbU] 
                     >> 2U)) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xcU] 
                                 << 0x1eU) | (0x3fffffc0U 
                                              & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xbU] 
                                                 >> 2U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_header_o[6U] 
        = ((0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xcU] 
                     >> 2U)) | (0x1c0U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xcU] 
                                          >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__proc_resp_last_li 
        = ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[0xcU] 
                  >> 9U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[8U] 
                                    >> 6U)) | (1U & 
                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cb__o[4U] 
                                                >> 3U))));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t 
        = ((0xff0U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t)) 
           | (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan_li));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cce_to_cache_pump_out__DOT__fsm_new_o 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_ready_and_lo) 
            & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_v_li)) 
           & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cce_to_cache_pump_out__DOT__state_r)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_done_lo 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_ready_and_lo) 
            & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_v_li)) 
           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cce_to_cache_pump_out__DOT__is_last_cnt));
    __Vtemp_h295f7f74__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                  << 0x20U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                     << 0x18U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                        << 0x10U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                           << 8U) 
                                                          | (QData)((IData)(
                                                                            (0xffU 
                                                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U])))))))))));
    __Vtemp_h295f7f74__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U])))))))))) 
                                        >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[0U] 
        = __Vtemp_h295f7f74__0[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[1U] 
        = __Vtemp_h295f7f74__0[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[2U] 
        = (IData)((((QData)((IData)((0xffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                    << 0x30U) | (((QData)((IData)((0xffffU 
                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                  << 0x20U) | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U])))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[3U] 
        = (IData)(((((QData)((IData)((0xffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                     << 0x30U) | (((QData)((IData)(
                                                   (0xffffU 
                                                    & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                   << 0x20U) | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U])))))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[4U] 
        = (IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[5U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[6U] 
        = (IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[7U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__rot__DOT__temp[0U]))) 
                   >> 0x20U));
    __Vtableidx17 = (((IData)(vlSelf->reset_i) << 9U) 
                     | (((IData)(vlSelf->testbench__DOT____Vcellinp__nbf_loader__io_cmd_yumi_i) 
                         << 8U) | (((IData)(vlSelf->testbench__DOT__nbf_loader__DOT__is_read_packet) 
                                    << 7U) | (((0xffU 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->testbench__DOT__nbf_loader__DOT__curr_nbf[3U] 
                                                    >> 8U))) 
                                               << 6U) 
                                              | (((0xfeU 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->testbench__DOT__nbf_loader__DOT__curr_nbf[3U] 
                                                       >> 8U))) 
                                                  << 5U) 
                                                 | (((0U 
                                                      == (IData)(vlSelf->testbench__DOT__nbf_loader__DOT__credit_count_lo)) 
                                                     << 4U) 
                                                    | (((IData)(
                                                                (((3U 
                                                                   == (IData)(vlSelf->testbench__DOT__nbf_loader__DOT__state_r)) 
                                                                  & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__proc_resp_v_li) 
                                                                     >> 2U)) 
                                                                 & (0x80U 
                                                                    == 
                                                                    (0x3c0U 
                                                                     & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__resp_xbar__msg_header_o[4U])))) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->testbench__DOT__nbf_loader__DOT__state_r))))))));
    vlSelf->testbench__DOT__nbf_loader__DOT__state_n 
        = Vtestbench__ConstPool__TABLE_h98f2b951_0[__Vtableidx17];
    testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (7U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t) 
                 >> 1U));
    testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (3U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t) 
                 >> 6U));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__edge_detect 
        = (0xfU & ((~ (7U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t) 
                             >> 9U))) & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t) 
                                         >> 8U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap 
        = (0xfU & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                    - (IData)(6U)) + (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_done_lo)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap 
        = (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_done_lo)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cce_to_cache_pump_out__DOT__state_n 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cce_to_cache_pump_out__DOT__state_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_done_lo))
                  : ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cce_to_cache_pump_out__DOT__fsm_new_o) 
                     & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cce_to_cache_pump_out__DOT__fsm_stream) 
                        | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__cce_to_cache_pump_out__DOT__msg_stream)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_data_lo[4U] 
        = (IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[
                                    (((IData)(0x3fU) 
                                      + (0xffU & ((
                                                   (8U 
                                                    < 
                                                    ((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                         >> 0x10U))))
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                       >> 0x10U))) 
                                                  << 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (((8U 
                                                          < 
                                                          ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                               >> 0x10U))))
                                                          ? 3U
                                                          : 
                                                         (3U 
                                                          & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                             >> 0x10U))) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((8U 
                                                          < 
                                                          ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                               >> 0x10U))))
                                                          ? 3U
                                                          : 
                                                         (3U 
                                                          & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                             >> 0x10U))) 
                                                        << 6U))))) 
                   | (((0U == (0x1fU & (((8U < ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                    >> 0x10U))))
                                          ? 3U : (3U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                     >> 0x10U))) 
                                        << 6U))) ? 0ULL
                        : ((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[
                                           (((IData)(0x1fU) 
                                             + (0xffU 
                                                & (((8U 
                                                     < 
                                                     ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                          >> 0x10U))))
                                                     ? 3U
                                                     : 
                                                    (3U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                        >> 0x10U))) 
                                                   << 6U))) 
                                            >> 5U)])) 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & (((8U 
                                                      < 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                           >> 0x10U))))
                                                      ? 3U
                                                      : 
                                                     (3U 
                                                      & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                         >> 0x10U))) 
                                                    << 6U))))) 
                      | ((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[
                                         (6U & (((8U 
                                                  < 
                                                  ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                       >> 0x10U))))
                                                  ? 3U
                                                  : 
                                                 (3U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                     >> 0x10U))) 
                                                << 1U))])) 
                         >> (0x1fU & (((8U < ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                     >> 0x10U))))
                                        ? 3U : (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                   >> 0x10U))) 
                                      << 6U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_data_lo[5U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[
                                     (((IData)(0x3fU) 
                                       + (0xffU & (
                                                   ((8U 
                                                     < 
                                                     ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                          >> 0x10U))))
                                                     ? 3U
                                                     : 
                                                    (3U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                        >> 0x10U))) 
                                                   << 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x1fU & (((8U < ((IData)(1U) 
                                               << (7U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                      >> 0x10U))))
                                         ? 3U : (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                    >> 0x10U))) 
                                       << 6U))) ? 0x20U
                       : ((IData)(0x40U) - (0x1fU & 
                                            (((8U < 
                                               ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                    >> 0x10U))))
                                               ? 3U
                                               : (3U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                     >> 0x10U))) 
                                             << 6U))))) 
                    | (((0U == (0x1fU & (((8U < ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                     >> 0x10U))))
                                           ? 3U : (3U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                      >> 0x10U))) 
                                         << 6U))) ? 0ULL
                         : ((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & (((8U 
                                                      < 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                           >> 0x10U))))
                                                      ? 3U
                                                      : 
                                                     (3U 
                                                      & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                         >> 0x10U))) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & (((8U 
                                                       < 
                                                       ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                            >> 0x10U))))
                                                       ? 3U
                                                       : 
                                                      (3U 
                                                       & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                          >> 0x10U))) 
                                                     << 6U))))) 
                       | ((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_resp_data_bus_pack__DOT__data_repl_lo[
                                          (6U & (((8U 
                                                   < 
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                        >> 0x10U))))
                                                   ? 3U
                                                   : 
                                                  (3U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                      >> 0x10U))) 
                                                 << 1U))])) 
                          >> (0x1fU & (((8U < ((IData)(1U) 
                                               << (7U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                      >> 0x10U))))
                                         ? 3U : (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT____Vcellout__stream_fifo__data_o[1U] 
                                                    >> 0x10U))) 
                                       << 6U))))) >> 0x20U));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t 
        = ((0xf0fU & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t)) 
           | (0xf0U & (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t) 
                        | (IData)(testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                       << 4U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t 
        = ((0xffU & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t)) 
           | (0xf00U & ((0xffffff00U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__t) 
                                        << 4U)) | ((IData)(testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                   << 8U))));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo 
        = (3U & (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__edge_detect) 
                  >> 2U) | (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__rr__DOT__fi2__DOT__edge_detect)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__enc__DOT__v 
        = ((0xcU & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__enc__DOT__v)) 
           | (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[0U] 
        = (IData)((0x3ffffffffULL & ((((QData)((IData)(
                                                       vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->testbench__DOT__dram__DOT__dma_pkt[0U]))) 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo))))))));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[1U] 
        = ((0xfffffffcU & vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[1U]) 
           | (IData)(((0x3ffffffffULL & ((((QData)((IData)(
                                                           vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->testbench__DOT__dram__DOT__dma_pkt[0U]))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo))))))) 
                      >> 0x20U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[1U] 
        = ((3U & vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[1U]) 
           | ((IData)((0x3ffffffffULL & ((((QData)((IData)(
                                                           vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U])) 
                                           << 0x3eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U])) 
                                                >> 2U))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo) 
                                                                  >> 1U)))))))) 
              << 2U));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[2U] 
        = (0xfU & (((IData)((0x3ffffffffULL & ((((QData)((IData)(
                                                                 vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U])) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U])) 
                                                      >> 2U))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo) 
                                                                        >> 1U)))))))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U])) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testbench__DOT__dram__DOT__dma_pkt[2U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testbench__DOT__dram__DOT__dma_pkt[1U])) 
                                                     >> 2U))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo) 
                                                                       >> 1U))))))) 
                                          >> 0x20U)) 
                                 << 2U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__enc__DOT__v));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__enc__DOT__addr 
        = ((0xbU & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__enc__DOT__addr)) 
           | (4U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__enc__DOT__v) 
                    << 1U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT____Vcellout__l__BRA__0__KET____DOT__mux_one_hot__data_o 
        = (0x3ffffffffULL & ((((QData)((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[2U])) 
                               << 0x3eU) | (((QData)((IData)(
                                                             vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[2U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[1U])) 
                                               >> 2U))) 
                             | (((QData)((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__xbar__DOT__l__BRA__0__KET____DOT__mux_one_hot__DOT__data_masked[0U])))));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr_tag_lo 
        = ((0U == (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo) 
                    - (IData)(1U)) & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__grants_lo))) 
           & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rr0__DOT__greedy__DOT__scan1__DOT__enc__DOT__addr) 
              >> 2U));
}

VL_INLINE_OPT void Vtestbench___024root___combo__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_ready_and_lo 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.ready_o) 
            << 1U) | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.ready_o));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_resp_ready_and_o 
        = ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_resp_ready_and_o)) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce.mem_resp_ready_and_o));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_cmd_yumi_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_sent_n 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_sent_r;
    if ((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__state_r))) {
        if ((1U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__state_r))) {
            if ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__state_r))) {
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_cmd_yumi_li 
                    = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_cmd_v_lo) 
                        & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__full))) 
                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_ready_and_lo) 
                          >> (1U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_cmd_stream_addr_lo 
                                            >> 6U)))));
            }
        }
        if ((1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li 
                = ((1U >= ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_sent_r) 
                           >> 0xaU)) ? (3U & ((0x800U 
                                               != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_sent_r)) 
                                              << ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_sent_r) 
                                                  >> 0xaU)))
                    : 0U);
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_sent_n 
                = (0xfffU & ((0U != ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li) 
                                     & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_ready_and_lo)))
                              ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_sent_r))
                              : (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__tagst_sent_r)));
        } else if ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li 
                = (((~ ((IData)(1U) << (1U & (IData)(
                                                     (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_cmd_stream_addr_lo 
                                                      >> 6U))))) 
                    & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cache_pkt_v_li)) 
                   | (3U & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__full)) 
                             & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_cmd_v_lo)) 
                            << (1U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__cce_to_cache__DOT__mem_cmd_stream_addr_lo 
                                              >> 6U))))));
        }
    }
}

VL_INLINE_OPT void Vtestbench___024root___multiclk__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___multiclk__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_pr[0U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_nr[0U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[1U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_pr[1U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_nr[1U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[2U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_pr[2U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_nr[2U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[3U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_pr[3U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_nr[3U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[4U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_pr[4U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__posedge_latch__DOT__data_r_nr[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_lo 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_reg__DOT__data_r_pr) 
           ^ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_reg__DOT__data_r_nr));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[0U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_pr[0U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_nr[0U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[1U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_pr[1U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_nr[1U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[2U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_pr[2U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_nr[2U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[3U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_pr[3U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_nr[3U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[4U] 
        = (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_pr[4U] 
           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__negedge_latch__DOT__data_r_nr[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_ready_lo 
        = ((~ (((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__dcache_uce.__PVT__state_r)) 
                | (1U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__dcache_uce.__PVT__state_r))) 
               | (8U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__dcache_uce.__PVT__credit_count_lo)))) 
           & (0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_cmd_data_o[2U] 
        = (IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[2U])) 
                    << 0x3dU) | (((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[1U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U])) 
                                               >> 3U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_cmd_data_o[3U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[2U])) 
                     << 0x3dU) | (((QData)((IData)(
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[1U])) 
                                   << 0x1dU) | ((QData)((IData)(
                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U])) 
                                                >> 3U))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_cmd_last_o 
        = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_cmd_last_o)) 
           | (2U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U]));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_cmd_v_o 
        = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_cmd_v_o)) 
           | (2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U] 
                    >> 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_resp_ready_and_o 
        = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__unicore_lite__mem_resp_ready_and_o)) 
           | (2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[0U] 
                    << 1U)));
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__20(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__20\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h4e992a57__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3b6570a8__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e361fb8__0;
    VlWide<3>/*95:0*/ __Vtemp_h35376c4d__0;
    VlWide<3>/*95:0*/ __Vtemp_he34c16a9__0;
    VlWide<4>/*127:0*/ __Vtemp_hed1bcc2d__0;
    CData/*31:0*/ __Vtemp_h6734e54e__0;
    // Body
    if (vlSelf->__Vdlyvset__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][7U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[7U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][8U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[8U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][9U] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[9U];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0xaU] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0xaU];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0xbU] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0xbU];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0xcU] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0xcU];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0xdU] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0xdU];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0xeU] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0xeU];
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[vlSelf->__Vdlyvdim0__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0xfU] 
            = vlSelf->__Vdlyvval__testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0xfU];
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_gray_r_rsync 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
            << 8U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fsqrt_v_li 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__v_li) 
           & (0x900000U == (0x3f00000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[7U])));
    if ((0x400e000U == (0x400e000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[7U]))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[0U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] = 0xe0080000U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
            = (0xfU & (((0x4000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[7U])
                         ? 0U : 7U) << 1U));
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[0U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[6U] 
                << 0x14U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[5U] 
                             >> 0xcU));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[7U] 
                << 0x14U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[6U] 
                             >> 0xcU));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
            = (0xfU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[8U] 
                        << 0x14U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[7U] 
                                     >> 0xcU)));
    }
    __Vtemp_h4e992a57__0[0U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0U];
    __Vtemp_h4e992a57__0[1U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[1U];
    __Vtemp_h4e992a57__0[2U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[2U];
    __Vtemp_h4e992a57__0[3U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[3U];
    __Vtemp_h4e992a57__0[4U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[4U];
    __Vtemp_h4e992a57__0[5U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[5U];
    __Vtemp_h4e992a57__0[6U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[6U];
    __Vtemp_h4e992a57__0[7U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[7U];
    __Vtemp_h4e992a57__0[8U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[8U];
    __Vtemp_h4e992a57__0[9U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[9U];
    __Vtemp_h4e992a57__0[0xaU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xaU];
    __Vtemp_h4e992a57__0[0xbU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xbU];
    __Vtemp_h4e992a57__0[0xcU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xcU];
    __Vtemp_h4e992a57__0[0xdU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xdU];
    __Vtemp_h4e992a57__0[0xeU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xeU];
    __Vtemp_h4e992a57__0[0xfU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xfU];
    __Vtemp_h4e992a57__0[0x10U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0U];
    __Vtemp_h4e992a57__0[0x11U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[1U];
    __Vtemp_h4e992a57__0[0x12U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[2U];
    __Vtemp_h4e992a57__0[0x13U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[3U];
    __Vtemp_h4e992a57__0[0x14U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[4U];
    __Vtemp_h4e992a57__0[0x15U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[5U];
    __Vtemp_h4e992a57__0[0x16U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[6U];
    __Vtemp_h4e992a57__0[0x17U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[7U];
    __Vtemp_h4e992a57__0[0x18U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[8U];
    __Vtemp_h4e992a57__0[0x19U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[9U];
    __Vtemp_h4e992a57__0[0x1aU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xaU];
    __Vtemp_h4e992a57__0[0x1bU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xbU];
    __Vtemp_h4e992a57__0[0x1cU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xcU];
    __Vtemp_h4e992a57__0[0x1dU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xdU];
    __Vtemp_h4e992a57__0[0x1eU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xeU];
    __Vtemp_h4e992a57__0[0x1fU] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_data_lo[0xfU];
    VL_SHIFTR_WWI(1024,1024,9, __Vtemp_h3b6570a8__0, __Vtemp_h4e992a57__0, 
                  (0x1ffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_pkt_way_reg__DOT__data_r) 
                             << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0U] 
        = __Vtemp_h3b6570a8__0[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[1U] 
        = __Vtemp_h3b6570a8__0[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[2U] 
        = __Vtemp_h3b6570a8__0[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[3U] 
        = __Vtemp_h3b6570a8__0[3U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[4U] 
        = __Vtemp_h3b6570a8__0[4U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[5U] 
        = __Vtemp_h3b6570a8__0[5U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[6U] 
        = __Vtemp_h3b6570a8__0[6U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[7U] 
        = __Vtemp_h3b6570a8__0[7U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[8U] 
        = __Vtemp_h3b6570a8__0[8U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[9U] 
        = __Vtemp_h3b6570a8__0[9U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xaU] 
        = __Vtemp_h3b6570a8__0[0xaU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xbU] 
        = __Vtemp_h3b6570a8__0[0xbU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xcU] 
        = __Vtemp_h3b6570a8__0[0xcU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xdU] 
        = __Vtemp_h3b6570a8__0[0xdU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xeU] 
        = __Vtemp_h3b6570a8__0[0xeU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xfU] 
        = __Vtemp_h3b6570a8__0[0xfU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x10U] 
        = __Vtemp_h3b6570a8__0[0x10U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x11U] 
        = __Vtemp_h3b6570a8__0[0x11U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x12U] 
        = __Vtemp_h3b6570a8__0[0x12U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x13U] 
        = __Vtemp_h3b6570a8__0[0x13U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x14U] 
        = __Vtemp_h3b6570a8__0[0x14U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x15U] 
        = __Vtemp_h3b6570a8__0[0x15U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x16U] 
        = __Vtemp_h3b6570a8__0[0x16U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x17U] 
        = __Vtemp_h3b6570a8__0[0x17U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x18U] 
        = __Vtemp_h3b6570a8__0[0x18U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x19U] 
        = __Vtemp_h3b6570a8__0[0x19U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x1aU] 
        = __Vtemp_h3b6570a8__0[0x1aU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x1bU] 
        = __Vtemp_h3b6570a8__0[0x1bU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x1cU] 
        = __Vtemp_h3b6570a8__0[0x1cU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x1dU] 
        = __Vtemp_h3b6570a8__0[0x1dU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x1eU] 
        = __Vtemp_h3b6570a8__0[0x1eU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0x1fU] 
        = __Vtemp_h3b6570a8__0[0x1fU];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_data_lo 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
             ? (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out)
             : (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
           << 8U);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__icache_tag_mem_o 
        = ((0xb7U >= (0xffU & ((IData)(0x17U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
            ? (0x7fffffU & (((0U == (0x1fU & ((IData)(0x17U) 
                                              * (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))
                              ? 0U : (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[
                                      (((IData)(0x16U) 
                                        + (0xffU & 
                                           ((IData)(0x17U) 
                                            * (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       * (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)))))) 
                            | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[
                               (7U & (((IData)(0x17U) 
                                       * (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r))))))
            : 0U);
    if ((0U != (0x1400U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[8U]))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[2U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[2U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[3U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[3U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[4U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[4U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[5U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[5U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[6U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[6U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[7U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[8U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[9U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[9U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0xaU] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[0xaU];
    } else if ((0U != (0x1400U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[8U]))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[2U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[2U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[3U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[3U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[4U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[4U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[5U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[5U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[6U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[6U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[7U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[8U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[9U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[9U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0xaU] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_2__DOT__data_r[0xaU];
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[2U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[2U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[3U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[3U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[4U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[4U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[5U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[5U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[6U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[6U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[7U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[8U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[9U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[9U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0xaU] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg_1__DOT__data_r[0xaU];
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_dm_reg__DOT__data_r 
        = vlSelf->__Vdly__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_dm_reg__DOT__data_r;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_ready_and_li 
        = ((0x18U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_ready_and_li)) 
           | ((4U & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__buffer__BRA__2__KET____DOT__in_fifo__DOT__full_r)) 
                     << 2U)) | ((2U & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_ready_and_li 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_ready_and_li)) 
           | ((0x10U & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__buffer__BRA__4__KET____DOT__in_fifo__DOT__full_r)) 
                        << 4U)) | (8U & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__buffer__BRA__3__KET____DOT__in_fifo__DOT__full_r)) 
                                         << 3U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r 
        = vlSelf->__Vdly__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__fifo_mem__DOT__mem
        [vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__rptr_tracker__DOT__ptr_r][0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U] 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__fifo_mem__DOT__mem
        [vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__rptr_tracker__DOT__ptr_r][1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[2U] 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__fifo_mem__DOT__mem
        [vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__rptr_tracker__DOT__ptr_r][2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
        = ((0xfffff3ffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]) 
           | (0xc00U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                        << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
        = ((0xfffffeffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]) 
           | (0x100U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                        << 7U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
        = ((0xffffefffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]) 
           | ((IData)((0U != (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                                    >> 2U)))) << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
        = ((0xfffffdffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]) 
           | (0x200U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                        << 9U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
        = ((0xffffdfffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]) 
           | (0x2000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                         >> 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
        = ((0xffffff00U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]) 
           | (((0xc0U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                         >> 0xbU)) | ((0x20U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                                                >> 9U)) 
                                      | (0x10U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                                                  >> 0xbU)))) 
              | ((8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                        >> 5U)) | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                                          >> 0xeU)) 
                                   | (3U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_pkt[0U] 
                                            >> 0xbU))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__inValid 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__v_li) 
            & (0x800000U == (0x3f00000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__long_reservation[7U]))) 
           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fsqrt_v_li));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isSigNaNA_S 
        = (IData)((0xe0000000U == (0xe0080000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div 
        = (0x3fffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                       >> 0x14U) + ((0x3800U & ((- (IData)(
                                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                            >> 0x1fU))) 
                                                << 0xbU)) 
                                    | (0x7ffU & (~ 
                                                 (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                  >> 0x14U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
        = (((QData)((IData)((0U != (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                    >> 0x1dU)))) << 0x34U) 
           | (0xfffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isInfA_S 
        = (IData)((0xc0000000U == (0xe0000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fsqrt_v_li) 
           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
              >> 0x14U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_v_reg__DOT__data_r 
        = ((~ (IData)(vlSelf->reset_i)) & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce.cache_req_yumi_o));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r 
        = ((~ (IData)(vlSelf->reset_i)) & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_we) 
                                            & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__poison_tl_i))) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce.cache_req_yumi_o))));
    if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_we) {
        __Vtemp_h5e361fb8__0[0U] = (((IData)(((((QData)((IData)(
                                                                (0xfffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                                            >> 7U))))) 
                                                << 0x24U) 
                                               | ((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                              >> 3U))))) 
                                                  << 0x18U)) 
                                              | (QData)((IData)(
                                                                ((0xff0000U 
                                                                  & (((IData)(1U) 
                                                                      << 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 6U)))) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl))))))) 
                                     << 6U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl))) 
                                                << 5U) 
                                               | ((0x10U 
                                                   & (((IData)(
                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                >> 2U)) 
                                                       | (~ (IData)(
                                                                    ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__r_v_reg__DOT__data_r) 
                                                                       >> 3U) 
                                                                      & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_v_lo)) 
                                                                     & ((((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x7f8000000ULL 
                                                                                & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo))) 
                                                                          | (0x80000U 
                                                                             > 
                                                                             (0xfffffffU 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                                                >> 7U))))) 
                                                                         | (0U 
                                                                            == 
                                                                            (3U 
                                                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                                                >> 0x12U)))) 
                                                                        | (2U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                                               >> 0x12U)))))))) 
                                                      << 4U)) 
                                                  | ((((IData)(
                                                               (0ULL 
                                                                != 
                                                                (6ULL 
                                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r))) 
                                                       & (IData)(
                                                                 (((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__r_v_reg__DOT__data_r) 
                                                                     >> 3U) 
                                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_v_lo)) 
                                                                   & (0ULL 
                                                                      == 
                                                                      (0x7f8000000ULL 
                                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo))) 
                                                                  & (0x80000U 
                                                                     <= 
                                                                     (0xfffffffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                                                >> 7U))))))) 
                                                      << 3U) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r) 
                                                            << 2U)) 
                                                        | ((((IData)(
                                                                     (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                      >> 1U)) 
                                                             & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.r_uncached_o)) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((IData)(
                                                                         (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                          >> 1U)) 
                                                                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.r_uncached_o))))))))));
        __Vtemp_h5e361fb8__0[1U] = (((IData)(((((QData)((IData)(
                                                                (0xfffffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                                            >> 7U))))) 
                                                << 0x24U) 
                                               | ((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                              >> 3U))))) 
                                                  << 0x18U)) 
                                              | (QData)((IData)(
                                                                ((0xff0000U 
                                                                  & (((IData)(1U) 
                                                                      << 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 6U)))) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl))))))) 
                                     >> 0x1aU) | ((IData)(
                                                          (((((QData)((IData)(
                                                                              (0xfffffffU 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                                                >> 7U))))) 
                                                              << 0x24U) 
                                                             | ((QData)((IData)(
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 3U))))) 
                                                                << 0x18U)) 
                                                            | (QData)((IData)(
                                                                              ((0xff0000U 
                                                                                & (((IData)(1U) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                                >> 6U)))) 
                                                                                << 0x10U)) 
                                                                               | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)))))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
            = __Vtemp_h5e361fb8__0[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[1U] 
            = __Vtemp_h5e361fb8__0[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[2U] 
            = ((IData)((((((QData)((IData)((0xfffffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                       >> 7U))))) 
                           << 0x24U) | ((QData)((IData)(
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                                    >> 3U))))) 
                                        << 0x18U)) 
                         | (QData)((IData)(((0xff0000U 
                                             & (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                             >> 6U)))) 
                                                << 0x10U)) 
                                            | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl) 
                                                << 8U) 
                                               | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)))))) 
                        >> 0x20U)) >> 0x1aU);
    }
    if (vlSelf->reset_i) {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r = 0ULL;
    } else {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_gray_n;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_wr__DOT__w_ptr_gray_n;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__w_ptr_gray_n) 
                     >> 8U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__w_ptr_gray_n));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_n;
        if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) {
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                = ((0x3fffffffff8ULL & (((QData)((IData)(
                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[2U])) 
                                         << 0x23U) 
                                        | ((QData)((IData)(
                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U])) 
                                           << 3U))) 
                   | (QData)((IData)((((2U == vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[0U]) 
                                       << 2U) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[0U]))))));
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__size 
        = ((0x2000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
            ? ((0x1000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                ? 3U : ((0x800000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                         ? 3U : ((0x400000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                  ? ((0x200000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                      ? 3U : ((0x100000U 
                                               & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                               ? 3U
                                               : 2U))
                                  : ((0x200000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                      ? ((0x100000U 
                                          & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                          ? 3U : 2U)
                                      : 3U)))) : ((0x1000000U 
                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                   ? 
                                                  ((0x800000U 
                                                    & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                     ? 3U
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                      ? 3U
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                       ? 3U
                                                       : 2U)))
                                                    : 2U)
                                                   : 
                                                  ((0x800000U 
                                                    & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                      ? 3U
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                       ? 3U
                                                       : 2U))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                      ? 2U
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])
                                                       ? 1U
                                                       : 0U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__data_delayed 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r) 
            << 1U) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
                       >> 0xcU) & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0xaU] 
                                   >> 0x18U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__data_delayed 
        = ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__data_delayed)) 
           | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r) 
               << 1U) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
                          >> 0xaU) & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0xaU] 
                                      >> 0x18U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__is_store 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
            >> 1U) & (0U != (0x1400U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__is_load 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
            >> 2U) & (0U != (0x1400U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
        = ((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])) 
             << 0x34U) | (((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[6U])) 
                           << 0x14U) | ((QData)((IData)(
                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[5U])) 
                                        >> 0xcU))) 
           + (((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[3U])) 
               << 0x3eU) | (((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[2U])) 
                             << 0x1eU) | ((QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[1U])) 
                                          >> 2U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_late_v 
        = ((3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r)) 
           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_dm_reg__DOT__data_r));
    if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
            = (IData)(((0x7fffffffff800000ULL & (((QData)((IData)(
                                                                  vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[2U])) 
                                                  << 0x35U) 
                                                 | (0xffffffffff800000ULL 
                                                    & ((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[1U])) 
                                                       << 0x15U)))) 
                       | (QData)((IData)((0x7fffffU 
                                          & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])))));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[1U] 
            = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_dword_merged) 
                << 0x1fU) | (IData)((((0x7fffffffff800000ULL 
                                       & (((QData)((IData)(
                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[2U])) 
                                           << 0x35U) 
                                          | (0xffffffffff800000ULL 
                                             & ((QData)((IData)(
                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[1U])) 
                                                << 0x15U)))) 
                                      | (QData)((IData)(
                                                        (0x7fffffU 
                                                         & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])))) 
                                     >> 0x20U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[2U] 
            = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_dword_merged) 
                >> 1U) | ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_dword_merged 
                                   >> 0x20U)) << 0x1fU));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[3U] 
            = ((0x80000000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__hit_tv_reg__DOT__data_r 
                               << 7U)) | ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_dword_merged 
                                                   >> 0x20U)) 
                                          >> 1U));
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__register__DOT__mem_cmd_yumi_li 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_ready_and_li) 
           & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__register__DOT__v_reg__DOT__data_r) 
              >> 0xaU));
    vlSelf->testbench__DOT__host__DOT__register__DOT__mem_cmd_yumi_li 
        = (IData)((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_ready_and_li) 
                    >> 3U) & ((IData)(vlSelf->testbench__DOT__host__DOT__register__DOT__v_reg__DOT__data_r) 
                              >> 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_last_lo 
        = ((0x1dU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_last_lo)) 
           | (2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 5U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_v_lo 
        = ((0x1dU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_v_lo)) 
           | (2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 5U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__mem_cmd_yumi_li 
        = (IData)((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_ready_and_li) 
                    >> 1U) & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                              >> 6U)));
    if ((1U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li) 
                >> 1U) & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r))))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_header_o[3U] 
                << 0x1dU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_header_o[2U] 
                             >> 3U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[1U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_header_o[4U] 
                << 0x1dU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_header_o[3U] 
                             >> 3U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[2U] 
            = (((IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_data_o[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_data_o[2U])))) 
                << 3U) | (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_header_o[4U] 
                                >> 3U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[3U] 
            = (((IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_data_o[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_data_o[2U])))) 
                >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_data_o[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_data_o[2U]))) 
                                      >> 0x20U)) << 3U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[4U] 
            = ((IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_data_o[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT____Vcellout__cmd_xbar__msg_data_o[2U]))) 
                        >> 0x20U)) >> 0x1dU);
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v 
        = ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__empty_lo)) 
           & (0x60000U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v 
        = ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__empty_lo)) 
           & (0x50000U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__state_reset_v 
        = ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__empty_lo)) 
           & (0U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_v 
        = ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__empty_lo)) 
           & (0x20000U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_fence_v 
        = ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__empty_lo)) 
           & (0x40000U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_fill_response_v 
        = ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__empty_lo)) 
           & (0x30000U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v 
        = ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__empty_lo)) 
           & (2U != (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U] 
                           >> 0x10U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_redirect_v 
        = ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__empty_lo)) 
           & (0x10000U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S)) 
            & (0U != (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                      >> 0x1dU))) & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[2U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div 
        = (((0U == (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                    >> 0x1dU)) & (0U == (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                         >> 0x1dU))) 
           | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isInfA_S) 
              & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isNaNA_S) 
            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isInfA_S)) 
           | (0U == (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                     >> 0x1dU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl)) 
           | (((0U != (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[1U] 
                             >> 0xbU))) << 1U) | (0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[0U] 
                                                      >> 0x14U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl)) 
           | (((0U != (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                             >> 0x19U))) << 3U) | (
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl)) 
           | (((0U != (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[4U] 
                             >> 7U))) << 5U) | ((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                     >> 0x10U))) 
                                                << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl)) 
           | (((0U != (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[5U] 
                             >> 0x15U))) << 7U) | (
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                         << 2U) 
                                                        | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                           >> 0x1eU)))) 
                                                   << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_v 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0xaU] 
            >> 0x18U) & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__is_store) 
                         | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__is_load)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT__chained__DOT__data_delayed 
        = ((6U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT__chained__DOT__data_delayed)) 
           | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[0xaU] 
               >> 0x18U) & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__is_store) 
                             | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__is_load)) 
                            | (IData)(((0x3f00000U 
                                        == (0x3f00000U 
                                            & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U])) 
                                       & (0U != (0x1400U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U])))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li 
        = ((0x18U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li)) 
           | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cbc__DOT__rr__BRA__2__KET____DOT__reqs_li))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cbc__DOT__rr__BRA__1__KET____DOT__reqs_li))) 
                          << 1U) | (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li)) 
           | ((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cbc__DOT__rr__BRA__4__KET____DOT__reqs_li))) 
                << 1U) | (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cbc__DOT__rr__BRA__3__KET____DOT__reqs_li))) 
              << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__pc_resume_reg__en_i 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v) 
           | (1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__state_r)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__trap_v 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_redirect_v) 
           & (0x6000U == (0xe000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__eret_v 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_redirect_v) 
           & (0U == (0xe000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li 
        = ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__state_r)) 
           | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_redirect_v) 
              | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_fill_response_v)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__br_miss_v 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_redirect_v) 
           & (0x4000U == (0xe000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_valid_o_tmp 
        = ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
           != (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__r_valid_o_tmp 
        = ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
           != (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__send_data 
        = (((~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__tag_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__empty_r)) 
            & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
               != ((6U & ((~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
                              >> 1U)) << 1U)) | (1U 
                                                 & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r))))) 
           & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_v_lo) 
              >> (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__tag_lo)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo_full 
        = ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
           == ((0xcU & ((~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
                            >> 2U)) << 2U)) | (3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__w_ptr_gray_r 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
            << 8U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__normalCase_S 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fsqrt_v_li)
                  ? ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
                     & (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[2U]))
                  : ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S)) 
                     & (~ (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isNaNB_S) 
                            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__isInfB_S)) 
                           | (0U == (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                     >> 0x1dU)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cached_req 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r) 
           & (0x11U == (0x31U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_req 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r) 
            & (0x12U == (0x12U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
           & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_pending_reg__DOT__data_r)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__v 
        = ((0xffffff00U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__v) 
           | (0xffU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                       >> 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_v_lo 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r) 
           & (((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                >> 1U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_pending_reg__DOT__data_r)) 
              | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                    >> 5U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffff00U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | VL_STREAML_FAST_III(8, (0xffU & (~ ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                                  << 0x12U) 
                                                 | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                                    >> 0xeU)))), 0));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)) 
           | (((IData)((0x20000080U == (0x20000080U 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 1U) | (IData)((0x400040U == (0x400040U 
                                               & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)) 
           | (((IData)((0x8000200U == (0x8000200U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 3U) | ((IData)((0x10000100U == (0x10000100U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)) 
           | (((IData)((0x2000800U == (0x2000800U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 5U) | ((IData)((0x4000400U == (0x4000400U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)) 
           | (((IData)((0x802000U == (0x802000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 7U) | ((IData)((0x1001000U == (0x1001000U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate)) 
           | (((IData)((0x400080U == (0x400080U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 1U) | (IData)((0x800040U == (0x800040U 
                                               & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate)) 
           | (((IData)((0x10000200U == (0x10000200U 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 3U) | ((IData)((0x20000100U == (0x20000100U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate)) 
           | (((IData)((0x4000800U == (0x4000800U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 5U) | ((IData)((0x8000400U == (0x8000400U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate)) 
           | (((IData)((0x1002000U == (0x1002000U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 7U) | ((IData)((0x2001000U == (0x2001000U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate)) 
           | (((IData)((0x800080U == (0x800080U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 1U) | (IData)((0x1000040U == (0x1000040U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate)) 
           | (((IData)((0x20000200U == (0x20000200U 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 3U) | ((IData)((0x400100U == (0x400100U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate)) 
           | (((IData)((0x8000800U == (0x8000800U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 5U) | ((IData)((0x10000400U == (0x10000400U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate)) 
           | (((IData)((0x2002000U == (0x2002000U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 7U) | ((IData)((0x4001000U == (0x4001000U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)) 
           | (((IData)((0x1000080U == (0x1000080U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 1U) | (IData)((0x2000040U == (0x2000040U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)) 
           | (((IData)((0x400200U == (0x400200U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 3U) | ((IData)((0x800100U == (0x800100U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)) 
           | (((IData)((0x10000800U == (0x10000800U 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 5U) | ((IData)((0x20000400U == (0x20000400U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)) 
           | (((IData)((0x4002000U == (0x4002000U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 7U) | ((IData)((0x8001000U == (0x8001000U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate)) 
           | (((IData)((0x2000080U == (0x2000080U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 1U) | (IData)((0x4000040U == (0x4000040U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate)) 
           | (((IData)((0x800200U == (0x800200U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 3U) | ((IData)((0x1000100U == (0x1000100U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate)) 
           | (((IData)((0x20000800U == (0x20000800U 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 5U) | ((IData)((0x400400U == (0x400400U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate)) 
           | (((IData)((0x8002000U == (0x8002000U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 7U) | ((IData)((0x10001000U == (0x10001000U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate)) 
           | (((IData)((0x4000080U == (0x4000080U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 1U) | (IData)((0x8000040U == (0x8000040U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate)) 
           | (((IData)((0x1000200U == (0x1000200U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 3U) | ((IData)((0x2000100U == (0x2000100U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate)) 
           | (((IData)((0x400800U == (0x400800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 5U) | ((IData)((0x800400U == (0x800400U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate)) 
           | (((IData)((0x10002000U == (0x10002000U 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 7U) | ((IData)((0x20001000U == (0x20001000U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate)) 
           | (((IData)((0x8000080U == (0x8000080U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 1U) | (IData)((0x10000040U == (0x10000040U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate)) 
           | (((IData)((0x2000200U == (0x2000200U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 3U) | ((IData)((0x4000100U == (0x4000100U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate)) 
           | (((IData)((0x800800U == (0x800800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 5U) | ((IData)((0x1000400U == (0x1000400U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate)) 
           | (((IData)((0x20002000U == (0x20002000U 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 7U) | ((IData)((0x401000U == (0x401000U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate)) 
           | (((IData)((0x10000080U == (0x10000080U 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 1U) | (IData)((0x20000040U == (0x20000040U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate)) 
           | (((IData)((0x4000200U == (0x4000200U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 3U) | ((IData)((0x8000100U == (0x8000100U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate)) 
           | (((IData)((0x1000800U == (0x1000800U & 
                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 5U) | ((IData)((0x2000400U == (0x2000400U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate)) 
           | (((IData)((0x402000U == (0x402000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
               << 7U) | ((IData)((0x801000U == (0x801000U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]))) 
                         << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[6U] 
        = (IData)((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[3U])) 
                    << 0x21U) | (((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[2U])) 
                                  << 1U) | ((QData)((IData)(
                                                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[1U])) 
                                            >> 0x1fU))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[7U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[3U])) 
                     << 0x21U) | (((QData)((IData)(
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[2U])) 
                                   << 1U) | ((QData)((IData)(
                                                             vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[1U])) 
                                             >> 0x1fU))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__0__KET____DOT__slice_data 
        = (0xffU & (((0U == (0x1fU & ((IData)(0x3fU) 
                                      + (0x38U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                  >> 0x14U)))))
                      ? 0U : (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[
                              (((IData)(0x46U) + (0x38U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                     >> 0x14U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x3fU) 
                                                 + 
                                                 (0x38U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                     >> 0x14U))))))) 
                    | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[
                       (((IData)(0x3fU) + (0x38U & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                            >> 0x14U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x3fU) 
                                             + (0x38U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                   >> 0x14U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__1__KET____DOT__slice_data 
        = (0xffffU & (((0U == (0x1fU & ((IData)(0x3fU) 
                                        + (0x30U & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                            >> 0x14U)))))
                        ? 0U : (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[
                                (((IData)(0x4eU) + 
                                  (0x30U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                            >> 0x14U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x3fU) 
                                                   + 
                                                   (0x30U 
                                                    & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                       >> 0x14U))))))) 
                      | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[
                         (((IData)(0x3fU) + (0x30U 
                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                >> 0x14U))) 
                          >> 5U)] >> (0x1fU & ((IData)(0x3fU) 
                                               + (0x30U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                     >> 0x14U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__2__KET____DOT__slice_data 
        = (((0U == (0x1fU & ((IData)(0x3fU) + (0x20U 
                                               & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                  >> 0x14U)))))
             ? 0U : (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[
                     (((IData)(0x5eU) + (0x20U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                  >> 0x14U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(0x3fU) 
                                            + (0x20U 
                                               & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                  >> 0x14U))))))) 
           | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[
              (((IData)(0x3fU) + (0x20U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                           >> 0x14U))) 
               >> 5U)] >> (0x1fU & ((IData)(0x3fU) 
                                    + (0x20U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                >> 0x14U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_iwb_pkt_v 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_late_v) 
           & (~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                 >> 0x13U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_fwb_pkt_v 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_late_v) 
           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
              >> 0x13U));
    if ((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__dcache_pkt_cast_o[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__dcache_pkt_cast_o[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[2U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__dcache_pkt_cast_o[2U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__dcache_pkt_cast_o[3U];
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[2U] 
            = ((0xfU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[2U]) 
               | ((IData)((((QData)((IData)((0x1fU 
                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
                                                >> 0x17U)))) 
                            << 0x2dU) | (((QData)((IData)(
                                                          (0x3fU 
                                                           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U] 
                                                              >> 0x14U)))) 
                                          << 0x27U) 
                                         | (0x7fffffffffULL 
                                            & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr)))) 
                  << 4U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
            = (0x3fffffU & (((IData)((((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
                                                           >> 0x17U)))) 
                                       << 0x2dU) | 
                                      (((QData)((IData)(
                                                        (0x3fU 
                                                         & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U] 
                                                            >> 0x14U)))) 
                                        << 0x27U) | 
                                       (0x7fffffffffULL 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr)))) 
                             >> 0x1cU) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[8U] 
                                                                         >> 0x17U)))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (0x3fU 
                                                                         & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[7U] 
                                                                            >> 0x14U)))) 
                                                        << 0x27U) 
                                                       | (0x7fffffffffULL 
                                                          & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr))) 
                                                   >> 0x20U)) 
                                          << 4U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[0U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[4U] 
                << 0x19U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[3U] 
                             >> 7U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[1U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[5U] 
                << 0x19U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[4U] 
                             >> 7U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[2U] 
            = ((0xfffffff0U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[2U]) 
               | (0xfU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__mem_reservation[5U] 
                          >> 7U)));
    }
    __Vtemp_h35376c4d__0[2U] = ((0xfffffc00U & ((((4U 
                                                   == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r)) 
                                                  << 0xfU) 
                                                 | ((0xffffc000U 
                                                     & (((4U 
                                                          == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r)) 
                                                         << 0xeU) 
                                                        & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__miss_pkt_reg__DOT__data_r[1U] 
                                                            << 5U) 
                                                           & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__page_fault_v)) 
                                                              << 0xeU)))) 
                                                    | (((4U 
                                                         == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r)) 
                                                        & ((~ 
                                                            (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__miss_pkt_reg__DOT__data_r[1U] 
                                                             >> 9U)) 
                                                           & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__page_fault_v)))) 
                                                       << 0xdU))) 
                                                | ((((4U 
                                                      == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r)) 
                                                     & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__instr_page_fault)) 
                                                    << 0xcU) 
                                                   | ((((4U 
                                                         == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r)) 
                                                        & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__load_page_fault)) 
                                                       << 0xbU) 
                                                      | (((4U 
                                                           == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__state_r)) 
                                                          & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__store_page_fault)) 
                                                         << 0xaU))))) 
                                | (((IData)((0x7fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__miss_pkt_reg__DOT__data_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__miss_pkt_reg__DOT__data_r[0U]))))) 
                                    >> 0x1dU) | ((IData)(
                                                         ((0x7fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__miss_pkt_reg__DOT__data_r[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__miss_pkt_reg__DOT__data_r[0U])))) 
                                                          >> 0x20U)) 
                                                 << 3U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__ptw_fill_pkt_cast_o[0U] 
        = (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__tlb_w_entry);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__ptw_fill_pkt_cast_o[1U] 
        = (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__miss_pkt_reg__DOT__data_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__miss_pkt_reg__DOT__data_r[0U]))))) 
            << 3U) | (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__tlb_w_entry 
                              >> 0x20U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__ptw__DOT__ptw_fill_pkt_cast_o[2U] 
        = __Vtemp_h35376c4d__0[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r 
        = ((~ (IData)(vlSelf->reset_i)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT____Vcellinp__dff_full__data_i));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__plic_n 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__plic_reg__DOT__data_r;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__plic_n 
        = (((~ ((IData)(1U) << (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U] 
                                      >> 0xaU)))) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__plic_n)) 
           | (3U & ((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[2U] 
                           >> 3U)) << (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U] 
                                             >> 0xaU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[2U] 
        = ((7U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[2U]) 
           | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U] 
              << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[3U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U] 
            >> 0x1dU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[1U] 
                         << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[4U] 
        = ((0xffffffc0U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[4U]) 
           | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[1U] 
               >> 0x1dU) | (0x38U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[2U] 
                                     << 3U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd 
        = ((1U == (0xfU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U])) 
           | (3U == (0xfU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__register__DOT__cmd_fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__register__DOT__mem_cmd_yumi_li))
                  : (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__loopback__DOT__loopback_buffer__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__loopback__DOT__loopback_buffer__DOT__dff_full__DOT__data_r)
                  ? (~ (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_ready_and_li) 
                         >> 4U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__loopback__DOT__loopback_buffer__DOT__dff_full__DOT__data_r)))
                  : ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li) 
                     >> 4U)));
    vlSelf->testbench__DOT__host__DOT__register__DOT__cmd_fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__host__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__host__DOT__register__DOT__mem_cmd_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li) 
                     >> 3U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_w 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__state_reset_v) 
            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__trap_v)) 
           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__eret_v));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_w 
        = ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__state_reset_v) 
             | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__trap_v)) 
            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__eret_v)) 
           | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_redirect_v) 
              & (0xa000U == (0xe000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U]))));
    __Vtemp_he34c16a9__0[2U] = ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__br_miss_v) 
                                  & (0x20U == (0x30U 
                                               & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U]))) 
                                 << 0xeU) | (((IData)(
                                                      (0x7fffffffffULL 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                               << 0x1aU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                 >> 6U)))
                                                           : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__br_metadata_site))) 
                                              >> 0x19U) 
                                             | ((IData)(
                                                        ((0x7fffffffffULL 
                                                          & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v)
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                                  << 0x1aU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                    >> 6U)))
                                                              : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__br_metadata_site)) 
                                                         >> 0x20U)) 
                                                << 7U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__pc_resume_reg__data_i[0U] 
        = (IData)((0x7fffffffffULL & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v)
                                       ? (((QData)((IData)(
                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[2U])) 
                                           << 0x2dU) 
                                          | (((QData)((IData)(
                                                              vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[2U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                >> 0x13U)))
                                       : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if2_reg1__DOT__data_r)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__pc_resume_reg__data_i[1U] 
        = (((IData)((0x7fffffffffULL & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v)
                                         ? (((QData)((IData)(
                                                             vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(
                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 6U)))
                                         : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__br_metadata_site))) 
            << 7U) | (IData)(((0x7fffffffffULL & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[2U])) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[2U])) 
                                                       << 0xdU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                         >> 0x13U)))
                                                   : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if2_reg1__DOT__data_r)) 
                              >> 0x20U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__pc_resume_reg__data_i[2U] 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__br_miss_v) 
            << 0x11U) | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__br_miss_v) 
                           & (0U == (0x30U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U]))) 
                          << 0x10U) | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__br_miss_v) 
                                         & (0x10U == 
                                            (0x30U 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U]))) 
                                        << 0xfU) | 
                                       __Vtemp_he34c16a9__0[2U])));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo_deq 
        = ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__r_valid_o_tmp) 
           & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_valid_o_tmp));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo_deq 
        = ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__r_valid_o_tmp) 
           & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_valid_o_tmp));
    if (vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__send_data) {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_p1_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_p1_r)));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_gray_n 
            = (7U & (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_p1_r) 
                      >> 1U) ^ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_p1_n 
            = (7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_p1_r));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__w_ptr_gray_n 
            = (7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r));
    }
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li 
        = (3U & ((- (IData)((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__send_data))) 
                 & ((IData)(1U) << (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__tag_lo))));
    VL_EXTEND_WQ(115,51, __Vtemp_hed1bcc2d__0, (((QData)((IData)(
                                                                 ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cached_req)
                                                                   ? 6U
                                                                   : 2U))) 
                                                 << 0x30U) 
                                                | ((0xffffffffff00ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[2U])) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[1U])) 
                                                           << 0xaU) 
                                                          | (0x3ffffffff00ULL 
                                                             & ((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])) 
                                                                >> 0x16U))))) 
                                                   | (QData)((IData)(
                                                                     (3U 
                                                                      | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cached_req)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_req)
                                                                            ? 3U
                                                                            : 7U)) 
                                                                         << 4U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_cast_o[0U] 
        = __Vtemp_hed1bcc2d__0[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_cast_o[1U] 
        = __Vtemp_hed1bcc2d__0[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_cast_o[2U] 
        = __Vtemp_hed1bcc2d__0[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_cast_o[3U] 
        = ((0x80000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                        << 0xeU)) | __Vtemp_hed1bcc2d__0[3U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_req_v_lo 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_req) 
           | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cached_req) 
              | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r) 
                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                    >> 2U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_read 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r) 
            & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_v_lo))) 
           & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r) 
            & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_v_lo)) 
           & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v2 
        = (IData)((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__v_reg2__DOT__data_r) 
                    >> 1U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_v_lo)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v 
        = (IData)((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__v_reg__DOT__data_r) 
                    >> 1U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_v_lo)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select 
        = ((0xf8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select)) 
           | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__2__KET____DOT__aggregate))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__1__KET____DOT__aggregate))) 
                          << 1U) | (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select 
        = ((0xc7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select)) 
           | ((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__5__KET____DOT__aggregate))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__4__KET____DOT__aggregate))) 
                           << 1U) | (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)))) 
              << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select)) 
           | ((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__7__KET____DOT__aggregate))) 
                << 1U) | (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__select_adder__DOT__rof__BRA__6__KET____DOT__aggregate))) 
              << 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[0U] 
        = (IData)((((- (QData)((IData)(((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                         >> 0x14U) 
                                        & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__0__KET____DOT__slice_data) 
                                           >> 7U))))) 
                    << 8U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__0__KET____DOT__slice_data))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[1U] 
        = (IData)(((((- (QData)((IData)(((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                          >> 0x14U) 
                                         & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__0__KET____DOT__slice_data) 
                                            >> 7U))))) 
                     << 8U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__0__KET____DOT__slice_data))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[2U] 
        = (IData)((((- (QData)((IData)(((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                         >> 0x14U) 
                                        & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__1__KET____DOT__slice_data) 
                                           >> 0xfU))))) 
                    << 0x10U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__1__KET____DOT__slice_data))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[3U] 
        = (IData)(((((- (QData)((IData)(((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                          >> 0x14U) 
                                         & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__1__KET____DOT__slice_data) 
                                            >> 0xfU))))) 
                     << 0x10U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__1__KET____DOT__slice_data))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[4U] 
        = (IData)((((QData)((IData)((- (IData)(((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                 >> 0x14U) 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__2__KET____DOT__slice_data 
                                                   >> 0x1fU)))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__2__KET____DOT__slice_data))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[5U] 
        = (IData)(((((QData)((IData)((- (IData)(((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                  >> 0x14U) 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__2__KET____DOT__slice_data 
                                                    >> 0x1fU)))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_alignment__BRA__2__KET____DOT__slice_data))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_iwb_pkt_yumi 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_iwb_pkt_v) 
           & ((~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg1__DOT__data_r[0xaU] 
                  >> 7U)) | (~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg2__DOT__data_r[0xaU] 
                                >> 7U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_lo_yumi 
        = (((((2U < (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__hazard_cnt)) 
              & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__wb_v_reg__DOT__data_r) 
                 >> 2U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__wb_v_reg__DOT__data_r)) 
            & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_iwb_pkt_v))) 
           & ((~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg1__DOT__data_r[0xaU] 
                  >> 7U)) | (~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg2__DOT__data_r[0xaU] 
                                >> 7U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_fwb_pkt_yumi 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_fwb_pkt_v) 
           & ((~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg1__DOT__data_r[0xcU] 
                  >> 0x18U)) | (~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg2__DOT__data_r[0xcU] 
                                   >> 0x18U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fdata_lo_yumi 
        = (((((3U < (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__hazard_cnt)) 
              & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__wb_v_reg__DOT__data_r) 
                 >> 1U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__wb_v_reg__DOT__data_r)) 
            & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_fwb_pkt_v))) 
           & (((~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg1__DOT__data_r[0xcU] 
                   >> 0x18U)) & (~ (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg1__DOT__data_r[0xaU] 
                                    >> 0xdU))) | ((~ 
                                                   (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg2__DOT__data_r[0xcU] 
                                                    >> 0x18U)) 
                                                  & (~ 
                                                     (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg2__DOT__data_r[0xaU] 
                                                      >> 0xdU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x6fffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | (0x100000U & ((~ (((6U == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                 >> 0xbU))) 
                                | (5U == (0x3fU & (
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                   >> 0xbU)))) 
                               | (4U == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                  >> 0xbU))))) 
                           << 0x14U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x77ffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | (((((0x22U == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                     >> 0xbU))) | (0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                       >> 0xbU)))) 
                | (0x24U == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                      >> 0xbU)))) | 
               (0x25U == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                   >> 0xbU)))) << 0x13U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x7fefffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | (((7U == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                >> 0xbU))) | (0xdU 
                                              == (0x3fU 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                     >> 0xbU)))) 
              << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x7ff7ffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | (((0xcU == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                  >> 0xbU))) | (0xeU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                    >> 0xbU)))) 
              << 0xbU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x7fbfffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | ((0x3fU == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                  >> 0xbU))) << 0xeU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x7ffe1fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | (((0x10000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                ? ((0x8000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                    ? 0U : ((0x4000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                             ? 0U : ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                      ? 0U : ((0x1000U 
                                               & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                               ? 0U
                                               : ((0x800U 
                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                                   ? 0xbU
                                                   : 0xaU)))))
                : ((0x8000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                    ? ((0x4000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                        ? ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                    ? 9U : 8U) : ((0x800U 
                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                                   ? 7U
                                                   : 6U))
                            : ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                    ? 5U : 4U) : ((0x800U 
                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                                   ? 3U
                                                   : 0xbU)))
                        : ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                    ? 0xaU : 9U) : 
                               ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                 ? 8U : 7U)) : ((0x1000U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                                 ? 
                                                ((0x800U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                                  ? 6U
                                                  : 5U)
                                                 : 
                                                ((0x800U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                                  ? 4U
                                                  : 3U))))
                    : ((0x4000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                        ? ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                    ? 0U : 2U) : ((0x800U 
                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                                   ? 1U
                                                   : 2U))
                            : 0U) : ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                      ? ((0x1000U & 
                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                          ? ((0x800U 
                                              & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                              ? 1U : 0U)
                                          : 0U) : 0U)))) 
              << 5U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x7ffdffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | ((0U != (0xfU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
                              >> 5U))) << 9U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = (0x7fdfffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o);
    __Vtemp_h6734e54e__0 = (IData)(((0U != (0x1200U 
                                            & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)) 
                                    | ((((((((((0x22U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                    >> 0xbU))) 
                                               | (0x23U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                      >> 0xbU)))) 
                                              | (3U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                     >> 0xbU)))) 
                                             | (2U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                    >> 0xbU)))) 
                                            | (1U == 
                                               (0x3fU 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                   >> 0xbU)))) 
                                           | (0U == 
                                              (0x3fU 
                                               & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                  >> 0xbU)))) 
                                          | (6U == 
                                             (0x3fU 
                                              & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                 >> 0xbU)))) 
                                         | (5U == (0x3fU 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                      >> 0xbU)))) 
                                        | (4U == (0x3fU 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                     >> 0xbU)))) 
                                       | (0x26U == 
                                          (0x3fU & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                            >> 0xbU))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x3fffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | (__Vtemp_h6734e54e__0 << 0x16U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x5fffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | (0x200000U & (((IData)((0x200U == (0x1200U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o))) 
                            | ((((((0xbU == (0x3fU 
                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                >> 0xbU))) 
                                   | (0xaU == (0x3fU 
                                               & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                  >> 0xbU)))) 
                                  | (9U == (0x3fU & 
                                            (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                             >> 0xbU)))) 
                                 | (8U == (0x3fU & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                            >> 0xbU)))) 
                                | (0x24U == (0x3fU 
                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                                >> 0xbU)))) 
                               | (0x25U == (0x3fU & 
                                            (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                             >> 0xbU))))) 
                           << 0x15U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x7ffbffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | ((0x26U == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                                  >> 0xbU))) << 0xaU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x10000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
            ? ((0x8000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                : ((0x4000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                    ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                    : ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                        ? ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                            : ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x20000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)))
                        : ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x20000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o))
                            : (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)))))
            : ((0x8000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                ? ((0x4000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                    ? ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                        ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                        : ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                            : ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x20000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o))))
                    : (0x20000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o))
                : ((0x4000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                    ? ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                        ? ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                            : ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x20000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)))
                        : ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x20000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o))
                            : ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x10000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x8000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o))))
                    : ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                        ? ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? (0x20000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                            : ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x10000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x8000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)))
                        : ((0x1000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                            ? ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x40000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x20000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o))
                            : ((0x800U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U])
                                ? (0x10000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)
                                : (0x8000U | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
        = ((0x7fffe0U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o) 
           | (0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt[3U] 
                       >> 0x11U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_dst_lo 
        = (((0x300U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[0xaU] 
                       << 3U)) | ((0xc0U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[8U] 
                                            << 4U)) 
                                  | (0x30U & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[6U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[5U] 
                                                    >> 0x1bU)))))) 
           | ((0xcU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[3U] 
                       >> 0x1aU)) | (3U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_resp_header_lo[1U] 
                                           >> 0x19U))));
    if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__pc_resume_reg__en_i) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__pc_resume_reg__data_i[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__pc_resume_reg__data_i[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[2U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__pc_resume_reg__data_i[2U];
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_resume_reg__DOT__dff__DOT__data_r[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_resume_reg__DOT__dff__DOT__data_r[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[2U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_resume_reg__DOT__dff__DOT__data_r[2U];
    }
    if (vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo_deq) {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n 
            = (7U & (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r) 
                      >> 1U) ^ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_n 
            = (7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n 
            = (7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r));
    }
    if (vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo_deq) {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_p1_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n 
            = (7U & (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r) 
                      >> 1U) ^ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_p1_n 
            = (7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n 
            = (7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r));
    }
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__1__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__1__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifo_valid_li) 
                     >> 1U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__2__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__2__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifo_valid_li) 
                     >> 2U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__3__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__3__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifo_valid_li) 
                     >> 3U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__4__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__4__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifo_valid_li) 
                     >> 4U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__5__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__5__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifo_valid_li) 
                     >> 5U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__6__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__6__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifo_valid_li) 
                     >> 6U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__7__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifos__BRA__7__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__0__KET____DOT__sipo__DOT__fifo_valid_li) 
                     >> 7U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__1__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__1__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li) 
                        >> 1U)) : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifo_valid_li) 
                                   >> 1U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__2__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__2__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li) 
                        >> 1U)) : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifo_valid_li) 
                                   >> 2U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__3__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__3__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li) 
                        >> 1U)) : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifo_valid_li) 
                                   >> 3U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__4__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__4__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li) 
                        >> 1U)) : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifo_valid_li) 
                                   >> 4U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__5__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__5__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li) 
                        >> 1U)) : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifo_valid_li) 
                                   >> 5U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__6__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__6__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li) 
                        >> 1U)) : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifo_valid_li) 
                                   >> 6U)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__7__KET____DOT__onefifo__DOT__fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifos__BRA__7__KET____DOT__onefifo__DOT__fifo__DOT__dff_full__DOT__data_r)
                  ? (~ ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__sipo_yumi_li) 
                        >> 1U)) : ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__genblk1__BRA__1__KET____DOT__sipo__DOT__fifo_valid_li) 
                                   >> 7U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[0U]))) 
                   & (- (QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                               >> 0xfU)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
        = (IData)((((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[0U]))) 
                    & (- (QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                >> 0xfU)))))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[2U]))) 
                   & (- (QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                               >> 0x10U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
        = (IData)((((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[2U]))) 
                    & (- (QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                >> 0x10U)))))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[4U]))) 
                   & (- (QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                               >> 0x11U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
        = (IData)((((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[5U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[4U]))) 
                    & (- (QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                >> 0x11U)))))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
        = (IData)(((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[6U]))) 
                   & (- (QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                               >> 0x12U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
        = (IData)((((((QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sigext_byte[6U]))) 
                    & (- (QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U] 
                                                >> 0x12U)))))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state = 0U;
    if (((((((((0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) {
            if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__idiv__v_i) {
                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state = 1U;
            }
        } else {
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state 
                = ((1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                    ? ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opC_reg__DOT__data_r[2U] 
                        & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__req_reg__DOT__data_r))
                        ? 2U : 3U) : ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                       ? 3U : ((3U 
                                                == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                    ? 
                                                   ((0x40U 
                                                     == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__calc_cnt))
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__add_out[2U])
                                                      ? 5U
                                                      : 6U)
                                                     : 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[0U] 
                                                                        | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[1U]) 
                                                                       | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[2U])))) 
                                                          | (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__q_neg))))
                                                       ? 8U
                                                       : 7U)
                                                      : 8U))))));
        }
    } else if ((8U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state 
            = (((8U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_lo_yumi))
                ? 0U : 8U);
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_late_yumi 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_fwb_pkt_yumi) 
           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_iwb_pkt_yumi));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__0__KET____DOT__addr_match 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r) 
           & (0U == (0xff00000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__1__KET____DOT__addr_match 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r) 
           & (0x400000U == (0xff00000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__2__KET____DOT__addr_match 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r) 
           & (0x800000U == (0xff00000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__3__KET____DOT__addr_match 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r) 
           & (0xbff800U == (0xfffff00U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__4__KET____DOT__addr_match 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r) 
           & (0xb00000U == (0xffff000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__5__KET____DOT__addr_match 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r) 
           & (0xc00000U == (0xff00000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff__DOT__data_r[0U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_ready_and_lo 
        = ((0x1dU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_ready_and_lo)) 
           | (2U & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r)) 
                    << 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r)
                  ? (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__mem_cmd_yumi_li))
                  : ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__dev_cmd_v_li) 
                     >> 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li) 
           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[2U] 
              >> 0x11U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     << 2U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       << 1U)) | (1U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U]))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    << 3U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     << 1U)) | ((2U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U]) 
                                | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                         >> 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U]) 
              | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                        >> 1U)) | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                         >> 2U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    << 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 1U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                                     >> 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (8U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U]));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 2U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                                     >> 4U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 3U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                                     >> 5U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 4U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                                     >> 6U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 3U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 5U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                                     >> 7U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 6U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                                     >> 8U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 5U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 7U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                                     >> 9U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 8U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                                     >> 0xaU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 7U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 9U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                       >> 0xbU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 8U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0xaU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 9U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0xbU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0xaU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0xcU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                           >> 0xeU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0xbU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0xdU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                           >> 0xfU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0xcU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0xeU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                           >> 0x10U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0xdU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0xfU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                           >> 0x11U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0xeU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x10U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x12U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0xfU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x11U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x13U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x10U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x12U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x14U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x11U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x13U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x15U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x12U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x14U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x16U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x13U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x15U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x17U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x14U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x16U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x18U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x15U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x17U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x19U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x16U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x18U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x1aU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x17U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x19U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x1bU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x18U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x1aU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x1cU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x19U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x1bU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x1dU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x1aU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x1cU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                            >> 0x1eU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x1bU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[4U] 
                     >> 0x1dU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[2U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[0U] 
                                      >> 0x1fU))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[6U] 
                    >> 0x1cU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     << 2U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       << 1U)) | (1U 
                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U]))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    << 3U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     << 1U)) | ((2U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U]) 
                                | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                         >> 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | ((4U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U]) 
              | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                        >> 1U)) | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                         >> 2U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    << 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 1U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                                     >> 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (8U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U]));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 2U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                                     >> 4U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 3U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                                     >> 5U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 4U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                                     >> 6U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 3U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 5U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                                     >> 7U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 6U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                                     >> 8U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 5U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 7U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                                     >> 9U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 8U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                                     >> 0xaU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 7U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 9U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                       >> 0xbU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 8U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0xaU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                           >> 0xcU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 9U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0xbU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                           >> 0xdU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0xaU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0xcU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                           >> 0xeU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0xbU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0xdU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                           >> 0xfU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0xcU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0xeU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                           >> 0x10U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0xdU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__49__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__49__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0xfU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                           >> 0x11U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__49__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__49__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0xeU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__50__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__50__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x10U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x12U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__50__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__50__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0xfU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__51__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__51__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x11U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x13U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__51__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__51__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x10U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__52__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__52__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x12U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x14U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__52__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__52__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x11U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__53__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__53__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x13U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x15U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__53__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__53__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x12U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__54__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__54__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x14U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x16U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__54__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__54__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x13U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__55__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__55__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x15U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x17U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__55__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__55__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x14U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__56__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__56__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x16U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x18U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__56__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__56__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x15U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__57__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__57__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x17U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x19U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__57__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__57__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x16U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__58__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__58__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x18U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__58__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__58__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x17U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__59__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__59__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x19U)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__59__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__59__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x18U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__60__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__60__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x1aU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__60__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__60__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x19U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__61__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__61__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x1bU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x1dU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__61__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__61__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x1aU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__62__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__62__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x1cU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                            >> 0x1eU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__62__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__62__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x1bU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__63__KET____DOT__gather 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__63__KET____DOT__gather)) 
           | ((4U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[5U] 
                     >> 0x1dU)) | ((2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[3U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[1U] 
                                      >> 0x1fU))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__63__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__63__KET____DOT__gather)) 
           | (8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__data_masked[7U] 
                    >> 0x1cU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o 
        = ((0x3eU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o)) 
           | (((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                   >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__0__KET____DOT__addr_match)) 
              & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o 
        = ((0x3eU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o)) 
           | (((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                   >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__0__KET____DOT__addr_match)) 
              & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o 
        = ((0x3dU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__1__KET____DOT__addr_match)) 
               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd)) 
              << 1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o 
        = ((0x3dU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__1__KET____DOT__addr_match)) 
               & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd))) 
              << 1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o 
        = ((0x3bU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__2__KET____DOT__addr_match)) 
               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd)) 
              << 2U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o 
        = ((0x3bU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__2__KET____DOT__addr_match)) 
               & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd))) 
              << 2U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o 
        = ((0x37U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__3__KET____DOT__addr_match)) 
               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd)) 
              << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o 
        = ((0x37U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__3__KET____DOT__addr_match)) 
               & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd))) 
              << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o 
        = ((0x2fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__4__KET____DOT__addr_match)) 
               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd)) 
              << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o 
        = ((0x2fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__4__KET____DOT__addr_match)) 
               & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd))) 
              << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o 
        = ((0x1fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT____Vcellout__register__w_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__5__KET____DOT__addr_match)) 
               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd)) 
              << 5U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o 
        = ((0x1fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o)) 
           | ((((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                    >> 6U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__dec__BRA__5__KET____DOT__addr_match)) 
               & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__wr_not_rd))) 
              << 5U));
    if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li 
            = (0xffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                         << 0x17U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                                      >> 9U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_idx_li 
            = (0x3fU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                         << 8U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                                   >> 0x18U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n 
            = (3U & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                      << 0x19U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                                   >> 7U)));
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li 
            = (0xffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                         << 0x16U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                                      >> 0xaU)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_idx_li 
            = (0x3fU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                         << 7U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                                   >> 0x19U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n 
            = (3U & ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghist_reg__DOT__data_r) 
                            << 1U)) | (1U & (IData)(
                                                    (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if2_reg1__DOT__data_r 
                                                     >> 0x34U)))));
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_idx_li 
        = (0x1ffU & ((1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r))
                      ? (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__init_cnt)
                      : ((0x1fcU & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li)
                                      ? ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                                          << 0xfU) 
                                         | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                                            >> 0x11U))
                                      : ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                                          << 0xeU) 
                                         | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                                            >> 0x12U))) 
                                    << 2U)) | (3U & 
                                               ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li)
                                                 ? 
                                                ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                                                  << 0x19U) 
                                                 | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U] 
                                                    >> 7U))
                                                 : 
                                                ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                                                  << 0x18U) 
                                                 | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                                                    >> 8U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li) 
            & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[2U] 
                >> 0xfU) | (0x10100U == (0x10100U & 
                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[2U])))) 
           | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_v) 
              & (0x8000U == (0x8200U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U]))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li) 
            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[2U] 
               >> 0xdU)) | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_v) 
                            & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U] 
                               >> 0xeU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfffffffffffffff8ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | (IData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__2__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__1__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__0__KET____DOT__gather)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffffffffffffffc7ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__5__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__4__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__3__KET____DOT__gather)))))) 
              << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfffffffffffffe3fULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__8__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__7__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__6__KET____DOT__gather)))))) 
              << 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfffffffffffff1ffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__11__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__10__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__9__KET____DOT__gather)))))) 
              << 9U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffffffffffff8fffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__14__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__13__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__12__KET____DOT__gather)))))) 
              << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfffffffffffc7fffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__17__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__16__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__15__KET____DOT__gather)))))) 
              << 0xfU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffffffffffe3ffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__20__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__19__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__18__KET____DOT__gather)))))) 
              << 0x12U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffffffffff1fffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__23__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__22__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__21__KET____DOT__gather)))))) 
              << 0x15U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfffffffff8ffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__26__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__25__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__24__KET____DOT__gather)))))) 
              << 0x18U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffffffffc7ffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__29__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__28__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__27__KET____DOT__gather)))))) 
              << 0x1bU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfffffffe3fffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__32__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__31__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__30__KET____DOT__gather)))))) 
              << 0x1eU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfffffff1ffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__35__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__34__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__33__KET____DOT__gather)))))) 
              << 0x21U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffffff8fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__38__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__37__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__36__KET____DOT__gather)))))) 
              << 0x24U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfffffc7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__41__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__40__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__39__KET____DOT__gather)))))) 
              << 0x27U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffffe3ffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__44__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__43__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__42__KET____DOT__gather)))))) 
              << 0x2aU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffff1fffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__47__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__46__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__45__KET____DOT__gather)))))) 
              << 0x2dU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfff8ffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__50__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__49__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__48__KET____DOT__gather)))))) 
              << 0x30U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xffc7ffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__53__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__52__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__51__KET____DOT__gather)))))) 
              << 0x33U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xfe3fffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__56__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__55__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__54__KET____DOT__gather)))))) 
              << 0x36U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0xf1ffffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__59__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__58__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__57__KET____DOT__gather)))))) 
              << 0x39U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0x8fffffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__62__KET____DOT__gather))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__61__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__60__KET____DOT__gather)))))) 
              << 0x3cU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data 
        = ((0x7fffffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data) 
           | ((QData)((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__byte_mux__DOT__reduce__BRA__63__KET____DOT__gather)))) 
              << 0x3fU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT____Vcellinp__v_reg__set_i 
        = ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__cmd_fifo__DOT__dff_full__DOT__data_r) 
             & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__v_reg__DOT__data_r) 
                   >> 6U))) << 6U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__register__DOT__r_v_o));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li) 
           & ((0x3fU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc_o 
                                >> 2U))) == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_idx_li)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
        = ((0x20000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dm_stage_reg__DOT__data_r[0U])
            ? (0xffffffff00000000ULL | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data)))
            : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_int_data);
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__21(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__21\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo 
        = ((0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r)) 
           & (~ (((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce.__PVT__state_r)) 
                  | (1U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce.__PVT__state_r))) 
                 | (8U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce.__PVT__credit_count_lo)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_r 
        = (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_w)
                  ? ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                      << 0x1fU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                                   >> 1U)) : (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_reg__DOT__dff__DOT__data_r)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_r 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_w)
                  ? (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U] 
                     >> 3U) : (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_reg__DOT__dff__DOT__data_r)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl 
        = ((0xfeU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)) 
           | (((0xfffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[0U]) 
               == (0xfffffffU & (IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                         >> 7U)))) 
              & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl 
        = ((0xfdU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)) 
           | (0xfffffffeU & ((((0xfffffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[1U] 
                                             << 9U) 
                                            | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[0U] 
                                               >> 0x17U))) 
                               == (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                         >> 7U)))) 
                              << 1U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl 
        = ((0xfbU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)) 
           | (0xfffffffcU & ((((0xfffffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                                             << 0x12U) 
                                            | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[1U] 
                                               >> 0xeU))) 
                               == (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                         >> 7U)))) 
                              << 2U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl 
        = ((0xf7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)) 
           | (0xfffffff8U & ((((0xfffffU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                                            >> 5U)) 
                               == (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                         >> 7U)))) 
                              << 3U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl 
        = ((0xefU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)) 
           | (0xfffffff0U & ((((0xfffffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[3U] 
                                             << 4U) 
                                            | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                                               >> 0x1cU))) 
                               == (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                         >> 7U)))) 
                              << 4U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl 
        = ((0xdfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)) 
           | (0xffffffe0U & ((((0xfffffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[4U] 
                                             << 0xdU) 
                                            | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[3U] 
                                               >> 0x13U))) 
                               == (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                         >> 7U)))) 
                              << 5U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl 
        = ((0xbfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)) 
           | (0xffffffc0U & ((((0xfffffU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[4U] 
                                            >> 0xaU)) 
                               == (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                         >> 7U)))) 
                              << 6U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl 
        = ((0x7fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl)) 
           | (0xffffff80U & ((((0xfffffU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[5U] 
                                            >> 1U)) 
                               == (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1.__PVT__tlb_entry_lo 
                                                         >> 7U)))) 
                              << 7U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__way_v_tl))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
        = (IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux2.data_o 
                   >> (0x20U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[1U] 
                                << 5U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
        = (IData)(((2U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])
                    ? vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_data_reg__DOT__data_r
                    : (QData)((IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux.data_o 
                                       >> (0x20U & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[1U] 
                                            << 5U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o = 0ULL;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
        = ((0x3ffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x63U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2)) 
                                << 1U) | (0x6fU == 
                                          (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2))))) 
              << 0x2aU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
        = ((0xdffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o) 
           | ((QData)((IData)((0x67U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2)))) 
              << 0x29U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
        = ((0xeffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x6fU == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2))) 
                               & ((1U == (0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                   >> 7U))) 
                                  | (5U == (0x1fU & 
                                            (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                             >> 7U))))))) 
              << 0x28U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
        = ((0xf7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x67U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2)) 
                                & ((1U == (0x1fU & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                            >> 0xfU))) 
                                   | (5U == (0x1fU 
                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                >> 0xfU))))) 
                               & ((0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                            >> 7U)) 
                                  != (0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                               >> 0xfU)))))) 
              << 0x27U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
        = ((0xf8000000000ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o) 
           | ((0x63U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2))
               ? (((QData)((IData)((0x7ffffffU & (IData)(
                                                         (0xfffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                                                >> 0x1fU))))))))) 
                   << 0xcU) | (QData)((IData)(((0x800U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                        >> 7U)))))))
               : ((0x6fU == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2))
                   ? (((QData)((IData)((0x7ffffU & (IData)(
                                                           (0xfffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                                                >> 0x1fU))))))))) 
                       << 0x14U) | (QData)((IData)(
                                                   ((0xff000U 
                                                     & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2) 
                                                    | ((0x800U 
                                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__final_data2 
                                                             >> 0x14U)))))))
                   : 0ULL)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o = 0ULL;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o 
        = ((0x3ffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x63U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1)) 
                                << 1U) | (0x6fU == 
                                          (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1))))) 
              << 0x2aU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o 
        = ((0xdffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o) 
           | ((QData)((IData)((0x67U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1)))) 
              << 0x29U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o 
        = ((0xeffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x6fU == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1))) 
                               & ((1U == (0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                   >> 7U))) 
                                  | (5U == (0x1fU & 
                                            (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                             >> 7U))))))) 
              << 0x28U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o 
        = ((0xf7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x67U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1)) 
                                & ((1U == (0x1fU & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                            >> 0xfU))) 
                                   | (5U == (0x1fU 
                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                >> 0xfU))))) 
                               & ((0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                            >> 7U)) 
                                  != (0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                               >> 0xfU)))))) 
              << 0x27U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o 
        = ((0xf8000000000ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fetch_scan1__DOT__scan_cast_o) 
           | ((0x63U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1))
               ? (((QData)((IData)((0x7ffffffU & (IData)(
                                                         (0xfffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                                                >> 0x1fU))))))))) 
                   << 0xcU) | (QData)((IData)(((0x800U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                        >> 7U)))))))
               : ((0x6fU == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1))
                   ? (((QData)((IData)((0x7ffffU & (IData)(
                                                           (0xfffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                                                >> 0x1fU))))))))) 
                       << 0x14U) | (QData)((IData)(
                                                   ((0xff000U 
                                                     & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1) 
                                                    | ((0x800U 
                                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                             >> 0x14U)))))))
                   : 0ULL)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o = 0ULL;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
        = ((0x3ffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x63U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1)) 
                                << 1U) | (0x6fU == 
                                          (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1))))) 
              << 0x2aU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
        = ((0xdffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o) 
           | ((QData)((IData)((0x67U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1)))) 
              << 0x29U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
        = ((0xeffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x6fU == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1))) 
                               & ((1U == (0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                   >> 7U))) 
                                  | (5U == (0x1fU & 
                                            (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                             >> 7U))))))) 
              << 0x28U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
        = ((0xf7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o) 
           | ((QData)((IData)((((0x67U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1)) 
                                & ((1U == (0x1fU & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                            >> 0xfU))) 
                                   | (5U == (0x1fU 
                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                >> 0xfU))))) 
                               & ((0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                            >> 7U)) 
                                  != (0x1fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                               >> 0xfU)))))) 
              << 0x27U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
        = ((0xf8000000000ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o) 
           | ((0x63U == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1))
               ? (((QData)((IData)((0x7ffffffU & (IData)(
                                                         (0xfffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                                                >> 0x1fU))))))))) 
                   << 0xcU) | (QData)((IData)(((0x800U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                        >> 7U)))))))
               : ((0x6fU == (0x7fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1))
                   ? (((QData)((IData)((0x7ffffU & (IData)(
                                                           (0xfffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                                                >> 0x1fU))))))))) 
                       << 0x14U) | (QData)((IData)(
                                                   ((0xff000U 
                                                     & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1) 
                                                    | ((0x800U 
                                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_data_lo1 
                                                             >> 0x14U)))))))
                   : 0ULL)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jalr2 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v2) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
                      >> 0x29U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_call2 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v2) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
                      >> 0x28U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_ret2 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v2) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
                      >> 0x27U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_br2 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v2) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
                      >> 0x2bU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jal2 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v2) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o 
                      >> 0x2aU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jalr1 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
                      >> 0x29U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_call1 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
                      >> 0x28U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_ret1 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
                      >> 0x27U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_br1 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
                      >> 0x2bU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jal1 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__fe_instr_v) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
                      >> 0x2aU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__br_tgt_lo 
        = (0x7fffffffffULL & ((1U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o 
                                             >> 0x2bU)))
                               ? (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if2_reg1__DOT__data_r 
                                  + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan1__DOT__scan_cast_o)
                               : (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if2_reg2__DOT__data_r 
                                  + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__instr_scan2__DOT__scan_cast_o)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_br_op2 
        = (((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_br2) 
              | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jal2)) 
             | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jalr2)) 
            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_call2)) 
           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_ret2));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret 
        = (((0x7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_reg1__DOT__data_r) 
            != (QData)((IData)((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras1__DOT__data_r))))) 
           & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_ret1) 
              | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_ret2)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_br_op1 
        = (((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_br1) 
              | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jal1)) 
             | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jalr1)) 
            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_call1)) 
           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_ret1));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_taken 
        = (((0x7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_reg1__DOT__data_r) 
            != vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__br_tgt_lo) 
           & (((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_br1) 
                 & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if2_reg1__DOT__data_r 
                            >> 0x35U))) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jal1)) 
               | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_br2) 
                  & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if2_reg2__DOT__data_r 
                             >> 0x35U)))) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__is_jal2)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2 = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2 
        = ((0x7ffcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2)) 
           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2 
        = ((0x6fffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2)) 
           | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li) 
              << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2 
        = ((0x5fffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2)) 
           | (((0x3fffe000U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li) 
                                << 0xdU) & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[2U] 
                                            >> 2U))) 
               | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret) 
                  << 0xdU)) | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_taken) 
                               << 0xdU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2 
        = ((0x77ffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n2)) 
           | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret) 
               & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li))) 
              << 0xbU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_taken) 
           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1 = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1 
        = ((0x7ffcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1)) 
           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1 
        = ((0x6fffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1)) 
           | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li) 
              << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1 
        = ((0x5fffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1)) 
           | (((0x3fffe000U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_br_v_li) 
                                << 0xdU) & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[2U] 
                                            >> 2U))) 
               | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret) 
                  << 0xdU)) | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_taken) 
                               << 0xdU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1 
        = ((0x77ffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1)) 
           | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret) 
               & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li))) 
              << 0xbU));
    if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2 
            = (0x7fffffffffULL & (4ULL + (((QData)((IData)(
                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[0U])))));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1 
            = (0x7fffffffffULL & (((QData)((IData)(
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellout__pc_resume_reg__data_o[0U]))));
    } else if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2 
            = (0x7fffffffffULL & (4ULL + (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras1__DOT__data_r))))));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1 
            = (0x7fffffffffULL & (QData)((IData)((1U 
                                                  & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras1__DOT__data_r)))));
    } else if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_taken) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2 
            = (0x7fffffffffULL & (4ULL + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__br_tgt_lo));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1 
            = (0x7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__br_tgt_lo);
    } else if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_taken) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2 
            = (0x7fffffffffULL & (4ULL + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT____Vcellout__tag_mem__r_data_o));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1 
            = (0x7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT____Vcellout__tag_mem__r_data_o);
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2 
            = (0x7fffffffffULL & (0xcULL + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_reg1__DOT__data_r));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1 
            = (0x7fffffffffULL & (8ULL + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_reg1__DOT__data_r));
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__v_reg__data_i 
        = (1U | (2U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__v_reg__DOT__data_r) 
                        & (~ (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo) 
                               | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__v_reg__DOT__data_r) 
                                   >> 1U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fe_queue_fifo__DOT__full))) 
                              | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v)))) 
                       << 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT____Vcellinp__v_reg2__data_i 
        = (1U | (2U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__v_reg2__DOT__data_r) 
                        & (~ (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo) 
                               | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__v_reg2__DOT__data_r) 
                                   >> 1U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fe_queue_fifo__DOT__full))) 
                              | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v)))) 
                       << 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_idx_li 
        = ((0x1fcU & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc_o 
                               >> 2U)) << 2U)) | (3U 
                                                  & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__pred_if1_n1)));
    if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_fence_v) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[0U] = 1U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[0U] = 1U;
    } else if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_fill_response_v) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[0U] = 2U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[0U] = 2U;
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[0U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[0U] = 0U;
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
        = (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[2U] 
        = (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li2 
        = (((QData)((IData)((0x1ffffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2 
                                                                 >> 0x26U)))))))) 
            << 0x27U) | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo2);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li1 
        = (((QData)((IData)((0x1ffffffU & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1 
                                                                 >> 0x26U)))))))) 
            << 0x27U) | vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
        = (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[2U] 
        = (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__next_pc_lo1 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li) 
           & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_idx_li) 
              == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_idx_li)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[0U] 
        = ((0xfffc0000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[0U]) 
           | (((0x3f000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                            << 6U)) | (0xe00U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                 << 6U))) 
              | ((0x1f8U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                            >> 3U)) | (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                             >> 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[0U] 
        = ((0x3ffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[0U]) 
           | (0xfffc0000U & (((0xc0000000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                                              << 0x18U)) 
                              | (0x38000000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                << 0x18U))) 
                             | ((0x7e00000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                                               << 0xfU)) 
                                | (0x1c0000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                << 0xfU))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[1U] 
        = ((0xfffffff0U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[1U]) 
           | (0xfU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                      >> 8U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[1U] 
        = ((0xffc0000fU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[1U]) 
           | (0xfffffff0U & (((0x3f0000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                                            << 0xaU)) 
                              | (0xe000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                            << 0xaU))) 
                             | ((0x1f80U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                                            << 1U)) 
                                | (0x70U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                            << 1U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[1U] 
        = ((0x3fffffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[1U]) 
           | (0xffc00000U & ((0x80000000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                             << 0x1cU)) 
                             | ((0x7e000000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                                                << 0x13U)) 
                                | (0x1c00000U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                 << 0x13U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_addr_li2[2U] 
        = (0xffU & ((0xfcU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt2[1U] 
                              >> 4U)) | (3U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 4U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
           & (~ (((0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                            >> 6U)) == (0x3fU & (IData)(
                                                        (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                         >> 9U)))) 
                 & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_last_read_reg__DOT__data_r))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch 
        = ((0U == vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[0U]) 
           | (2U == vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[0U]));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass 
        = ((((0x7ffffffU & ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[2U] 
                             << 0x14U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                          >> 0xcU))) 
             == (0x7ffffffU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                       >> 0xfU)))) 
            & ((0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                         >> 6U)) == (0x3fU & (IData)(
                                                     (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                      >> 9U))))) 
           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tl_reg__DOT__data_r));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)) 
           | ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 6U))) | (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                    >> 3U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)) 
           | ((8U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 2U))) | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 4U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)) 
           | ((0x20U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 2U))) | (0x10U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                       >> 3U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)) 
           | ((0x80U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 6U))) | (0x40U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 4U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate)) 
           | ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        << 1U))) | (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate)) 
           | ((8U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 3U))) | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 5U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate)) 
           | ((0x20U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 1U))) | (0x10U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   >> 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate)) 
           | ((0x80U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 5U))) | (0x40U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate)) 
           | ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & ((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                              >> 3U))))) 
              | (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                       & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                 >> 3U))) 
                          >> 2U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate)) 
           | ((8U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 4U))) | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             << 2U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate)) 
           | ((0x20U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & ((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                 >> 3U))))) 
              | (0x10U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                          & (((IData)(1U) << (7U & 
                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                             >> 2U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate)) 
           | ((0x80U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 4U))) | (0x40U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 2U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)) 
           | ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 1U))) | (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)) 
           | ((8U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        << 3U))) | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             << 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)) 
           | ((0x20U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           >> 1U))) | (0x10U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   >> 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)) 
           | ((0x80U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 3U))) | (0x40U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate)) 
           | ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 2U))) | (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 4U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate)) 
           | ((8U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        << 2U))) | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                    >> 3U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate)) 
           | ((0x20U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           >> 2U))) | (0x10U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 4U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate)) 
           | ((0x80U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 2U))) | (0x40U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                       >> 3U)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate)) 
           | ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 3U))) | (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 5U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate)) 
           | ((8U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        << 1U))) | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate)) 
           | ((0x20U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 5U))) | (0x10U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate)) 
           | ((0x80U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 1U))) | (0x40U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   >> 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate)) 
           | ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 4U))) | (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 6U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate)) 
           | ((8U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & ((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                              >> 3U))))) 
              | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                       & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                 >> 3U))) 
                          >> 2U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate)) 
           | ((0x20U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 4U))) | (0x10U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 2U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate)) 
           | ((0x80U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & ((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                 >> 3U))))) 
              | (0x40U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                          & (((IData)(1U) << (7U & 
                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                             << 6U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate 
        = ((0xfcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate)) 
           | ((2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 5U))) | (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 7U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate 
        = ((0xf3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate)) 
           | ((8U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                     & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                               >> 3U))) 
                        >> 1U))) | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                          & (((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                     >> 3U))) 
                                             >> 3U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate 
        = ((0xcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate)) 
           | ((0x20U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 3U))) | (0x10U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate)) 
           | ((0x80U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                        & (((IData)(1U) << (7U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                  >> 3U))) 
                           << 7U))) | (0x40U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_v_tl) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_pkt1[1U] 
                                                        >> 3U))) 
                                                   << 5U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_v) 
            & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li) 
                  & (~ (((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                         & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li)) 
                        & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr))))))) 
           & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li) 
                 & (~ (((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r)) 
                        & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li)) 
                       & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select 
        = ((0xf8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)) 
           | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__2__KET____DOT__aggregate))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__1__KET____DOT__aggregate))) 
                          << 1U) | (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__0__KET____DOT__aggregate)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select 
        = ((0xc7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)) 
           | ((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__5__KET____DOT__aggregate))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__4__KET____DOT__aggregate))) 
                           << 1U) | (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__3__KET____DOT__aggregate)))) 
              << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select 
        = ((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)) 
           | ((((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__7__KET____DOT__aggregate))) 
                << 1U) | (0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT__rof__BRA__6__KET____DOT__aggregate))) 
              << 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((0xfeU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li)) 
           | (1U & ((1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                    | (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((0xfbU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li)) 
           | (4U & (((1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                     | (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))) 
                    << 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((0xefU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li)) 
           | (0x10U & (((1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                        | (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))) 
                       << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((0xbfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li)) 
           | (0x40U & (((1U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                        | (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))) 
                       << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((0xfdU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li)) 
           | (((1U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
               << 1U) & ((0xfffffffeU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)) 
                         ^ (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                             & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)) 
                            << 1U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((0xf7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li)) 
           | (((1U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
               << 3U) & ((0xfffffff8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)) 
                         ^ (0xfffffff8U & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                            << 3U) 
                                           & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                              << 1U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((0xdfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li)) 
           | (((1U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
               << 5U) & ((0xffffffe0U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)) 
                         ^ (0xffffffe0U & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                            << 5U) 
                                           & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                              << 1U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((0x7fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li)) 
           | (((1U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
               << 7U) & ((0xffffff80U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)) 
                         ^ (0xffffff80U & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                            << 7U) 
                                           & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                              << 1U))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
        = (((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
            & (2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r))) 
           & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__cmd_nonattaboy_v) 
              | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read 
        = ((0xfeU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read)) 
           | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch)) 
              & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read 
        = ((0xfdU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read)) 
           | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch)) 
               << 1U) & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                          << 1U) | (0xfffffffeU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read 
        = ((0xfbU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read)) 
           | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch)) 
               << 2U) & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                          << 2U) | (0xfffffffcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read 
        = ((0xf7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read)) 
           | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch)) 
               << 3U) & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                          << 3U) | (0xfffffff8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read 
        = ((0xefU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read)) 
           | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch)) 
               << 4U) & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                          << 4U) | (0xfffffff0U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read 
        = ((0xdfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read)) 
           | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch)) 
               << 5U) & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                          << 5U) | (0xffffffe0U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read 
        = ((0xbfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read)) 
           | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch)) 
               << 6U) & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                          << 6U) | (0xffffffc0U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read 
        = ((0x7fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_read)) 
           | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache_ready_lo) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__is_fetch)) 
               << 7U) & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                          << 7U) | (0xffffff80U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass_select)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__rptr_tracker__DOT__ptr_n 
        = (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__rptr_tracker__DOT__ptr_r) 
                 + (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__branch_profiler__DOT__attaboy_v 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li) 
           & (0x20000U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__branch_profiler__DOT__pc_redirect_v 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li) 
           & (0x10000U == (0x70000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT____Vcellinp__core_profiler__fe_cmd_nonattaboy_i 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li) 
           & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_v)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__branch_profiler__DOT__branch_metadata 
        = (0x7fffffffffULL & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__branch_profiler__DOT__pc_redirect_v)
                               ? (((QData)((IData)(
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                   << 0x3aU) | (((QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                   >> 6U)))
                               : (((QData)((IData)(
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                   >> 8U)))));
}
