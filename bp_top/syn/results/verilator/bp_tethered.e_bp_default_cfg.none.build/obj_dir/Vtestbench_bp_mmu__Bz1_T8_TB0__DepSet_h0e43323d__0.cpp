// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bp_mmu__Bz1_T8_TB0.h"

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__0(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__0\n"); );
    // Init
    CData/*0:0*/ tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o;
    CData/*0:0*/ tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o;
    CData/*7:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    CData/*7:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    CData/*7:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    // Body
    tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                 >> (7U & ((IData)(1U) + (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo) 
                                                >> 2U))))));
    tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                 >> (7U & ((IData)(3U) + (3U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo) 
                                                >> 1U))))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo 
        = ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
           & (- (IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fU & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 1U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fU & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 0xaU));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfU & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                   >> 0x14U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo 
        = ((0xf8U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                          >> 0x1dU)) 
                                   | (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                      >> 0x1fU))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo 
        = ((0xc7U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               >> 0x19U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo)) 
           | ((0x80U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               >> 0x13U))));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v);
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                 >> 2U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                 >> 4U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                 >> 6U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                  >> 9U)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                                   >> 8U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                                     >> 0xcU)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                                      >> 0x10U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xfffffeffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | (0x100U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xfffffbffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | (0x400U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xffffefffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | (0x1000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xffffbfffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | (0x4000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo 
        = ((4U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                  << 2U)) | (((IData)(tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o) 
                              << 1U) | (IData)(tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffff00ffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff00U & ((vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                          | (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                         << 8U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xff00ffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff0000U & ((0xffff0000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                           << 8U)) 
                           | ((IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                              << 0x10U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff000000U & ((0xff000000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                             << 8U)) 
                             | ((IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted) 
                                << 0x18U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo 
        = ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo) 
           & (1U | (0xfeU & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo)) 
                             << 1U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xfffffeffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xfffffbffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffffefffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffffbfffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xfffeffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffefffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xfeffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xfffcffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x500U 
                                                   & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr))) 
                                         << 0x10U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xffcfffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr))) 
                                          << 0x14U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xf8ffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
                                               << 8U) 
                                              | (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
                                                 << 4U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li 
        = ((0U == (((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                    - (IData)(1U)) & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))
            ? (7U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
                     >> 0x18U)) : 0U);
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x7dU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (2U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                     & (~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                           >> 2U))) << 1U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x7bU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
               & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                  >> 2U)) << 2U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x77U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (8U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                     << 2U) & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                                   >> 1U)) << 3U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x6fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (0x10U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                        & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)) 
                       << 3U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x5fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (0x20U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                        << 3U) & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                                      >> 1U)) << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (0x40U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                        << 4U) & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                                  << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x7eU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                    & (~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                          >> 2U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x7dU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (2U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                    & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                           >> 1U)) << 1U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x7bU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (4U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                    & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                           >> 1U)) << 2U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x77U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (8U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                    & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)) 
                       << 3U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x6fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (0x10U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                       & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)) 
                          << 4U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x5fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (0x20U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                       & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)) 
                          << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | ((IData)((((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                        >> 6U) & (~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)))) 
              << 6U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v);
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                 >> 2U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                 >> 4U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                 >> 6U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                  >> 9U)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                                   >> 8U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                                     >> 0xcU)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                                      >> 0x10U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xfffffeffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | (0x100U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xfffffbffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | (0x400U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xffffefffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | (0x1000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xffffbfffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | (0x4000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo 
        = ((0x7cU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)) 
           | ((2U & (((2U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                       ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                          >> 1U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                    >> 1U)) << 1U)) 
              | (1U & ((1U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                        ? (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)
                        : (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo 
        = ((0x73U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)) 
           | ((8U & (((8U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                       ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                          >> 3U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                    >> 3U)) << 3U)) 
              | (4U & (((4U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                         ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                            >> 2U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                      >> 2U)) << 2U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo 
        = ((0x4fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)) 
           | ((0x20U & (((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                          ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                             >> 5U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                       >> 5U)) << 5U)) 
              | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                            ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                               >> 4U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                         >> 4U)) << 4U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                         ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                            >> 6U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xfffffeffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xfffffbffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xffffefffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xffffbfffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xfffeffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xffefffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xfeffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xfffcffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x500U 
                                                   & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr))) 
                                         << 0x10U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xffcfffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr))) 
                                          << 0x14U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xf8ffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
                                               << 8U) 
                                              | (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
                                                 << 4U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo 
        = (7U & ((0x80U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo))
                  ? ((0U == (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo) 
                              - (IData)(1U)) & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo)))
                      ? (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
                         >> 0x18U) : 0U) : (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x7dU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (2U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                     & (~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                           >> 2U))) << 1U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x7bU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
               & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                  >> 2U)) << 2U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x77U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (8U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                     << 2U) & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                                   >> 1U)) << 3U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x6fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (0x10U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                        & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)) 
                       << 3U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x5fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (0x20U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                        << 3U) & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                                      >> 1U)) << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (0x40U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                        << 4U) & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                                  << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x7eU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                    & (~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                          >> 2U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x7dU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (2U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                    & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                           >> 1U)) << 1U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x7bU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (4U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                    & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                           >> 1U)) << 2U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x77U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (8U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                    & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)) 
                       << 3U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x6fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (0x10U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                       & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)) 
                          << 4U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x5fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (0x20U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                       & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)) 
                          << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | ((IData)((((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                        >> 6U) & (~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)))) 
              << 6U));
}
