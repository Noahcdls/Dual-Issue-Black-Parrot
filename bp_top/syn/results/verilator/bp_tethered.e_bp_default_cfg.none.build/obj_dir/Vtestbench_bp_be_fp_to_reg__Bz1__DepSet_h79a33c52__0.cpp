// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_to_reg__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_be_fp_to_reg__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg__0(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg__0\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                              >> 0x14U)) << 2U)) | 
              ((2U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                               >> 0x15U)) << 1U)) | 
               (1U & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                              >> 0x16U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xffffc7U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x20U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                 >> 0x11U)) << 5U)) 
              | ((0x10U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                    >> 0x12U)) << 4U)) 
                 | (8U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                   >> 0x13U)) << 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfffe3fU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x100U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                  >> 0xeU)) << 8U)) 
              | ((0x80U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                    >> 0xfU)) << 7U)) 
                 | (0x40U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                      >> 0x10U)) << 6U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfff1ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x800U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                  >> 0xbU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                     >> 0xcU)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                       >> 0xdU)) << 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xff8fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x4000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                   >> 8U)) << 0xeU)) 
              | ((0x2000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                      >> 9U)) << 0xdU)) 
                 | (0x1000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                        >> 0xaU)) << 0xcU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfc7fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x20000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                    >> 5U)) << 0x11U)) 
              | ((0x10000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                       >> 6U)) << 0x10U)) 
                 | (0x8000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                        >> 7U)) << 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xe3ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x100000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                     >> 2U)) << 0x14U)) 
              | ((0x80000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                       >> 3U)) << 0x13U)) 
                 | (0x40000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                         >> 4U)) << 0x12U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src) 
                                         << 0x16U)) 
                           | (0x200000U & ((IData)(
                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                    >> 1U)) 
                                           << 0x15U)))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffffff8ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | (IData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                              >> 0x31U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                             >> 0x32U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x33U))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffffffc7ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x30U))))))) 
              << 3U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffffe3fULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x2dU))))))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffff1ffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x2aU))))))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffff8fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x27U))))))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffc7fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x24U))))))) 
              << 0xfU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffe3ffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x21U))))))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffff1fffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x1eU))))))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffff8ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x1bU))))))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffc7ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x18U))))))) 
              << 0x1bU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffe3fffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x15U))))))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffff1ffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0x12U))))))) 
              << 0x21U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fff8fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0xfU))))))) 
              << 0x24U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffc7fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 0xcU))))))) 
              << 0x27U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fe3ffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 9U))))))) 
              << 0x2aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1f1fffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 6U))))))) 
              << 0x2dU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x18ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                               >> 3U))))))) 
              << 0x30U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x7ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)((2U | (1U & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src))))) 
              << 0x33U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = ((0xff000000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
           | VL_STREAML_FAST_III(24, vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffe00000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (IData)((VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0) 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_to_reg__Bz1___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg__0(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fp_to_reg__0\n"); );
    // Init
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs;
    IData/*31:0*/ __Vtemp_hb998e033__0;
    IData/*31:0*/ __Vtemp_ha688839e__0;
    IData/*31:0*/ __Vtemp_h6d6ad134__0;
    QData/*63:0*/ __Vtemp_h9d496f02__0;
    QData/*63:0*/ __Vtemp_ha0be417a__0;
    QData/*63:0*/ __Vtemp_hef059be5__0;
    QData/*63:0*/ __Vtemp_hd1d73fec__0;
    QData/*63:0*/ __Vtemp_h5bbba722__0;
    QData/*63:0*/ __Vtemp_hf5ef4333__0;
    // Body
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                        >> 1U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                         << 6U) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                   >> 0x1aU)));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                        << 0xcU) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                    >> 0x14U)));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
           >> 0x10U);
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0xffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                    >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((4U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xffffc7U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x20U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                            >> 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfffe3fU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x100U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                         << 1U)) | ((0x80U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                              >> 1U)) 
                                    | (0x40U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                >> 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfff1ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x800U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                         << 7U)) | ((0x400U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                               << 5U)) 
                                    | (0x200U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                 << 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xff8fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x4000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                          << 0xdU)) | ((0x2000U & (
                                                   vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                   << 0xbU)) 
                                       | (0x1000U & 
                                          (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                           << 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfc7fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x20000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                           >> 0xdU)) | ((0x10000U & 
                                         (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                          >> 0xfU)) 
                                        | (0x8000U 
                                           & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                              << 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xe3ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x100000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                            >> 7U)) | ((0x80000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 9U)) | 
                                       (0x40000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 0xbU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x800000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                            >> 1U)) | ((0x400000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 3U)) | 
                                       (0x200000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 5U)))));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U])) 
                                               >> 1U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x7ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                  << 0x29U) | (((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                  >> 0x17U))));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0x1ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               >> 0xeU)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (0x1fffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                 << 0x19U) | ((QData)((IData)(
                                                              vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                              >> 7U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                            >> 4U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)((0x1fffffU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                        >> 9U))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffffff8ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | (IData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                     >> 0xeU)) | ((2U 
                                                   & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                        >> 0x12U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffffffc7ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 0xdU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                         >> 0xfU)))))) 
              << 3U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffffe3fULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 0xaU)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 0xcU)))))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffff1ffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 7U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 9U)))))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffff8fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 2U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 6U)))))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffc7fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      << 1U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 3U)))))) 
              << 0xfU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffe3ffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x1cU)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1eU)) | 
                                (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU]))))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffff1fffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x19U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1dU)))))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffff8ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x16U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1aU)))))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffc7ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x13U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x17U)))))) 
              << 0x1bU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffe3fffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x10U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x14U)))))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffff1ffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xfU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                         >> 0x11U)))))) 
              << 0x21U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fff8fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0xaU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                         >> 0xeU)))))) 
              << 0x24U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffc7fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 9U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xbU)))))) 
              << 0x27U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fe3ffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 8U)))))) 
              << 0x2aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1f1fffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 1U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 3U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 5U)))))) 
              << 0x2dU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x18ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      << 2U)) | ((2U 
                                                  & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU]) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 2U)))))) 
              << 0x30U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x7ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                      >> 0x1dU)) | 
                               (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                >> 0x1fU)))) << 0x33U));
    __Vtemp_hb998e033__0 = (0xffffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = ((0xffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
               | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffff0000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (__Vtemp_hb998e033__0 >> 8U));
    __Vtemp_ha688839e__0 = (0xffffffU & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                           << 8U) | 
                                          (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                           >> 0x18U)) 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (0xffff0000U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                               << 0x18U) | (0xff0000U 
                                            & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                               >> 8U))) 
                             | (__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
                                << 0x10U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = ((0xffffff00U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U]) 
           | (__Vtemp_ha688839e__0 >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = ((0xffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U]) 
           | (0xffffff00U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                               << 0x18U) | (0xffff00U 
                                            & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                               >> 8U))) 
                             | (__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
                                << 8U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xff000000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | (0xffffffU & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                             << 0x18U) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                          >> 8U)) | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)));
    __Vtemp_h6d6ad134__0 = (0xffffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
               | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = (0xffffU & (__Vtemp_h6d6ad134__0 >> 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
           & (1U | (0xfffffeU & ((~ vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
                                 << 1U))));
    __Vtemp_h9d496f02__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0x1fffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = (((IData)(__Vtemp_h9d496f02__0) >> 0xbU) 
           | ((IData)((__Vtemp_h9d496f02__0 >> 0x20U)) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xfffffc00U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((IData)((__Vtemp_h9d496f02__0 >> 0x20U)) 
              >> 0xbU));
    __Vtemp_ha0be417a__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                        << 0xbU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                          >> 0x15U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0x3ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                     >> 0x15U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = ((0x80000000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U]) 
           | (((IData)(__Vtemp_ha0be417a__0) >> 0x16U) 
              | ((IData)((__Vtemp_ha0be417a__0 >> 0x20U)) 
                 << 0xaU)));
    __Vtemp_hef059be5__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                        << 0x16U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                          >> 0xaU))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = ((0x7fffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                     >> 0xaU))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
              << 0x1fU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = (((IData)(__Vtemp_hef059be5__0) >> 1U) | 
           ((IData)((__Vtemp_hef059be5__0 >> 0x20U)) 
            << 0x1fU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = ((0xfff00000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U]) 
           | ((IData)((__Vtemp_hef059be5__0 >> 0x20U)) 
              >> 1U));
    __Vtemp_hd1d73fec__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                        << 1U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                          >> 0x1fU))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = ((0xfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                     >> 0x1fU))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = (((IData)(__Vtemp_hd1d73fec__0) >> 0xcU) 
           | ((IData)((__Vtemp_hd1d73fec__0 >> 0x20U)) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = ((0xfffffe00U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U]) 
           | ((IData)((__Vtemp_hd1d73fec__0 >> 0x20U)) 
              >> 0xcU));
    __Vtemp_h5bbba722__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                        << 0xcU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                          >> 0x14U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = ((0x1ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                     >> 0x14U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = ((0xc0000000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U]) 
           | (((IData)(__Vtemp_h5bbba722__0) >> 0x17U) 
              | ((IData)((__Vtemp_h5bbba722__0 >> 0x20U)) 
                 << 9U)));
    __Vtemp_hf5ef4333__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                          >> 9U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = ((0x3fffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                << 0x37U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                     >> 9U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
        = (((IData)(__Vtemp_hf5ef4333__0) >> 2U) | 
           ((IData)((__Vtemp_hf5ef4333__0 >> 0x20U)) 
            << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
        = (0x7ffffU & ((IData)((__Vtemp_hf5ef4333__0 
                                >> 0x20U)) >> 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
           & (1ULL | (0x1ffffffffffffeULL & ((~ vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
                                             << 1U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
        = vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
        = (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = (IData)((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                   >> 0x20U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U]);
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                   >> 4U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                   >> 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (4U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x100U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x400U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x1000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x4000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x100000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x400000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x1000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x4000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U]);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 2U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 4U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 6U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 8U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xaU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xcU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xeU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x10U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x12U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x14U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x16U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x18U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1aU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1cU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
           >> 0x1eU);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                     >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                     >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU] 
                  << 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | (0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffcU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((2U & (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U])))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffcfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                   << 4U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffcffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                    << 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffcfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffcffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffcfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfcffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xcfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                            >> 4U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffff0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                            >> 8U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffe0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in32_rec__DOT__normDist = ((0U == 
                                               ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                 - (IData)(1U)) 
                                                & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo))
                                               ? (0x1fU 
                                                  & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U])
                                               : 0U);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xcU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xcU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U])))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                   << 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                    << 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U])))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                   << 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                    << 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                            >> 4U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                            >> 4U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                            >> 8U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                            >> 8U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU] 
        = ((0xffffffc0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 4U)) | (0x1fU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
                                            | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]))));
    vlSelf->__PVT__in64_rec__DOT__normDist = ((0ULL 
                                               == (
                                                   (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                    - 1ULL) 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo))
                                               ? (0x3fU 
                                                  & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU])
                                               : 0U);
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1ffU 
                                                      ^ (IData)(vlSelf->__PVT__in32_rec__DOT__normDist))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfffU 
                                                      ^ (IData)(vlSelf->__PVT__in64_rec__DOT__normDist))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in32_rec__DOT__exp = ((0x1c0U & 
                                          (((3U == 
                                             (3U & 
                                              ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x7fffffU 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src))))
                                             : ((IData)(
                                                        (0ULL 
                                                         == 
                                                         (0x7fffffffULL 
                                                          & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src)))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                 >> 6U))) 
                                           << 6U)) 
                                         | (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
    vlSelf->__PVT__in64_rec__DOT__exp = ((0xe00U & 
                                          (((3U == 
                                             (3U & 
                                              ((IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp) 
                                               >> 0xaU)))
                                             ? (6U 
                                                | (0ULL 
                                                   != 
                                                   (0xfffffffffffffULL 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src)))
                                             : ((IData)(
                                                        (0ULL 
                                                         == 
                                                         (0x7fffffffffffffffULL 
                                                          & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src)))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp) 
                                                 >> 9U))) 
                                           << 9U)) 
                                         | (0x1ffU 
                                            & (IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp)));
    vlSelf->__Vcellout__in32_rec__out = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelf->__PVT__in32_rec__DOT__exp) 
                                                             << 0x17U) 
                                                            | (0x7fffffU 
                                                               & ((0U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src 
                                                                               >> 0x17U))))
                                                                   ? 
                                                                  (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src) 
                                                                    << (IData)(vlSelf->__PVT__in32_rec__DOT__normDist)) 
                                                                   << 1U)
                                                                   : (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__imvf_src)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_to_reg__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg__0(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg__0\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                              >> 0x14U)) << 2U)) | 
              ((2U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                               >> 0x15U)) << 1U)) | 
               (1U & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                              >> 0x16U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xffffc7U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x20U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                 >> 0x11U)) << 5U)) 
              | ((0x10U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                    >> 0x12U)) << 4U)) 
                 | (8U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                   >> 0x13U)) << 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfffe3fU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x100U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                  >> 0xeU)) << 8U)) 
              | ((0x80U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                    >> 0xfU)) << 7U)) 
                 | (0x40U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                      >> 0x10U)) << 6U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfff1ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x800U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                  >> 0xbU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                     >> 0xcU)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                       >> 0xdU)) << 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xff8fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x4000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                   >> 8U)) << 0xeU)) 
              | ((0x2000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                      >> 9U)) << 0xdU)) 
                 | (0x1000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                        >> 0xaU)) << 0xcU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfc7fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x20000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                    >> 5U)) << 0x11U)) 
              | ((0x10000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                       >> 6U)) << 0x10U)) 
                 | (0x8000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                        >> 7U)) << 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xe3ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x100000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                     >> 2U)) << 0x14U)) 
              | ((0x80000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                       >> 3U)) << 0x13U)) 
                 | (0x40000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                         >> 4U)) << 0x12U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw) 
                                         << 0x16U)) 
                           | (0x200000U & ((IData)(
                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                    >> 1U)) 
                                           << 0x15U)))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffffff8ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | (IData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                              >> 0x31U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                             >> 0x32U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x33U))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffffffc7ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x30U))))))) 
              << 3U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffffe3fULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x2dU))))))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffff1ffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x2aU))))))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffff8fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x27U))))))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffc7fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x24U))))))) 
              << 0xfU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffe3ffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x21U))))))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffff1fffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x1eU))))))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffff8ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x1bU))))))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffc7ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x18U))))))) 
              << 0x1bU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffe3fffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x15U))))))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffff1ffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0x12U))))))) 
              << 0x21U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fff8fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0xfU))))))) 
              << 0x24U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffc7fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 0xcU))))))) 
              << 0x27U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fe3ffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 9U))))))) 
              << 0x2aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1f1fffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 6U))))))) 
              << 0x2dU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x18ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                               >> 3U))))))) 
              << 0x30U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x7ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)((2U | (1U & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw))))) 
              << 0x33U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = ((0xff000000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
           | VL_STREAML_FAST_III(24, vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffe00000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (IData)((VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0) 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_to_reg__Bz1___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg__0(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg__0\n"); );
    // Init
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs;
    IData/*31:0*/ __Vtemp_hb998e033__0;
    IData/*31:0*/ __Vtemp_ha688839e__0;
    IData/*31:0*/ __Vtemp_h6d6ad134__0;
    QData/*63:0*/ __Vtemp_h9d496f02__0;
    QData/*63:0*/ __Vtemp_ha0be417a__0;
    QData/*63:0*/ __Vtemp_hef059be5__0;
    QData/*63:0*/ __Vtemp_hd1d73fec__0;
    QData/*63:0*/ __Vtemp_h5bbba722__0;
    QData/*63:0*/ __Vtemp_hf5ef4333__0;
    // Body
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                        >> 1U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                         << 6U) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                   >> 0x1aU)));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                        << 0xcU) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                    >> 0x14U)));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
           >> 0x10U);
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0xffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                    >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((4U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xffffc7U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x20U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                            >> 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfffe3fU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x100U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                         << 1U)) | ((0x80U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                              >> 1U)) 
                                    | (0x40U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                >> 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfff1ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x800U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                         << 7U)) | ((0x400U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                               << 5U)) 
                                    | (0x200U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                 << 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xff8fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x4000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                          << 0xdU)) | ((0x2000U & (
                                                   vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                   << 0xbU)) 
                                       | (0x1000U & 
                                          (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                           << 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfc7fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x20000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                           >> 0xdU)) | ((0x10000U & 
                                         (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                          >> 0xfU)) 
                                        | (0x8000U 
                                           & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                              << 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xe3ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x100000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                            >> 7U)) | ((0x80000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 9U)) | 
                                       (0x40000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 0xbU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x800000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                            >> 1U)) | ((0x400000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 3U)) | 
                                       (0x200000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 5U)))));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U])) 
                                               >> 1U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x7ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                  << 0x29U) | (((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                  >> 0x17U))));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0x1ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               >> 0xeU)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (0x1fffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                 << 0x19U) | ((QData)((IData)(
                                                              vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                              >> 7U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                            >> 4U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)((0x1fffffU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                        >> 9U))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffffff8ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | (IData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                     >> 0xeU)) | ((2U 
                                                   & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                        >> 0x12U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffffffc7ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 0xdU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                         >> 0xfU)))))) 
              << 3U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffffe3fULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 0xaU)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 0xcU)))))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffff1ffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 7U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 9U)))))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffff8fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 2U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 6U)))))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffc7fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      << 1U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 3U)))))) 
              << 0xfU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffe3ffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x1cU)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1eU)) | 
                                (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU]))))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffff1fffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x19U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1dU)))))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffff8ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x16U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1aU)))))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffc7ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x13U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x17U)))))) 
              << 0x1bU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffe3fffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x10U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x14U)))))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffff1ffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xfU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                         >> 0x11U)))))) 
              << 0x21U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fff8fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0xaU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                         >> 0xeU)))))) 
              << 0x24U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffc7fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 9U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xbU)))))) 
              << 0x27U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fe3ffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 8U)))))) 
              << 0x2aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1f1fffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 1U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 3U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 5U)))))) 
              << 0x2dU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x18ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      << 2U)) | ((2U 
                                                  & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU]) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 2U)))))) 
              << 0x30U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x7ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                      >> 0x1dU)) | 
                               (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                >> 0x1fU)))) << 0x33U));
    __Vtemp_hb998e033__0 = (0xffffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = ((0xffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
               | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffff0000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (__Vtemp_hb998e033__0 >> 8U));
    __Vtemp_ha688839e__0 = (0xffffffU & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                           << 8U) | 
                                          (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                           >> 0x18U)) 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (0xffff0000U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                               << 0x18U) | (0xff0000U 
                                            & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                               >> 8U))) 
                             | (__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
                                << 0x10U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = ((0xffffff00U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U]) 
           | (__Vtemp_ha688839e__0 >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = ((0xffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U]) 
           | (0xffffff00U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                               << 0x18U) | (0xffff00U 
                                            & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                               >> 8U))) 
                             | (__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
                                << 8U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xff000000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | (0xffffffU & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                             << 0x18U) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                          >> 8U)) | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)));
    __Vtemp_h6d6ad134__0 = (0xffffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
               | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = (0xffffU & (__Vtemp_h6d6ad134__0 >> 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
           & (1U | (0xfffffeU & ((~ vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
                                 << 1U))));
    __Vtemp_h9d496f02__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0x1fffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = (((IData)(__Vtemp_h9d496f02__0) >> 0xbU) 
           | ((IData)((__Vtemp_h9d496f02__0 >> 0x20U)) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xfffffc00U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((IData)((__Vtemp_h9d496f02__0 >> 0x20U)) 
              >> 0xbU));
    __Vtemp_ha0be417a__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                        << 0xbU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                          >> 0x15U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0x3ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                     >> 0x15U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = ((0x80000000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U]) 
           | (((IData)(__Vtemp_ha0be417a__0) >> 0x16U) 
              | ((IData)((__Vtemp_ha0be417a__0 >> 0x20U)) 
                 << 0xaU)));
    __Vtemp_hef059be5__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                        << 0x16U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                          >> 0xaU))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = ((0x7fffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                     >> 0xaU))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
              << 0x1fU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = (((IData)(__Vtemp_hef059be5__0) >> 1U) | 
           ((IData)((__Vtemp_hef059be5__0 >> 0x20U)) 
            << 0x1fU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = ((0xfff00000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U]) 
           | ((IData)((__Vtemp_hef059be5__0 >> 0x20U)) 
              >> 1U));
    __Vtemp_hd1d73fec__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                        << 1U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                          >> 0x1fU))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = ((0xfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                     >> 0x1fU))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = (((IData)(__Vtemp_hd1d73fec__0) >> 0xcU) 
           | ((IData)((__Vtemp_hd1d73fec__0 >> 0x20U)) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = ((0xfffffe00U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U]) 
           | ((IData)((__Vtemp_hd1d73fec__0 >> 0x20U)) 
              >> 0xcU));
    __Vtemp_h5bbba722__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                        << 0xcU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                          >> 0x14U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = ((0x1ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                     >> 0x14U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = ((0xc0000000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U]) 
           | (((IData)(__Vtemp_h5bbba722__0) >> 0x17U) 
              | ((IData)((__Vtemp_h5bbba722__0 >> 0x20U)) 
                 << 9U)));
    __Vtemp_hf5ef4333__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                          >> 9U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = ((0x3fffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                << 0x37U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                     >> 9U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
        = (((IData)(__Vtemp_hf5ef4333__0) >> 2U) | 
           ((IData)((__Vtemp_hf5ef4333__0 >> 0x20U)) 
            << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
        = (0x7ffffU & ((IData)((__Vtemp_hf5ef4333__0 
                                >> 0x20U)) >> 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
           & (1ULL | (0x1ffffffffffffeULL & ((~ vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
                                             << 1U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
        = vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
        = (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = (IData)((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                   >> 0x20U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U]);
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                   >> 4U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                   >> 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (4U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x100U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x400U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x1000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x4000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x100000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x400000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x1000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x4000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U]);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 2U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 4U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 6U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 8U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xaU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xcU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xeU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x10U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x12U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x14U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x16U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x18U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1aU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1cU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
           >> 0x1eU);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                     >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                     >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU] 
                  << 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | (0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffcU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((2U & (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U])))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffcfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                   << 4U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffcffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                    << 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffcfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffcffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffcfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfcffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xcfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                            >> 4U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffff0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                            >> 8U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffe0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in32_rec__DOT__normDist = ((0U == 
                                               ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                 - (IData)(1U)) 
                                                & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo))
                                               ? (0x1fU 
                                                  & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U])
                                               : 0U);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xcU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xcU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U])))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                   << 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                    << 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U])))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                   << 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                    << 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                            >> 4U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                            >> 4U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                            >> 8U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                            >> 8U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU] 
        = ((0xffffffc0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 4U)) | (0x1fU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
                                            | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]))));
    vlSelf->__PVT__in64_rec__DOT__normDist = ((0ULL 
                                               == (
                                                   (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                    - 1ULL) 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo))
                                               ? (0x3fU 
                                                  & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU])
                                               : 0U);
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1ffU 
                                                      ^ (IData)(vlSelf->__PVT__in32_rec__DOT__normDist))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfffU 
                                                      ^ (IData)(vlSelf->__PVT__in64_rec__DOT__normDist))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in32_rec__DOT__exp = ((0x1c0U & 
                                          (((3U == 
                                             (3U & 
                                              ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x7fffffU 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw))))
                                             : ((IData)(
                                                        (0ULL 
                                                         == 
                                                         (0x7fffffffULL 
                                                          & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw)))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                 >> 6U))) 
                                           << 6U)) 
                                         | (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
    vlSelf->__PVT__in64_rec__DOT__exp = ((0xe00U & 
                                          (((3U == 
                                             (3U & 
                                              ((IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp) 
                                               >> 0xaU)))
                                             ? (6U 
                                                | (0ULL 
                                                   != 
                                                   (0xfffffffffffffULL 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw)))
                                             : ((IData)(
                                                        (0ULL 
                                                         == 
                                                         (0x7fffffffffffffffULL 
                                                          & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw)))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp) 
                                                 >> 9U))) 
                                           << 9U)) 
                                         | (0x1ffU 
                                            & (IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp)));
    vlSelf->__Vcellout__in32_rec__out = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelf->__PVT__in32_rec__DOT__exp) 
                                                             << 0x17U) 
                                                            | (0x7fffffU 
                                                               & ((0U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw 
                                                                               >> 0x17U))))
                                                                   ? 
                                                                  (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw) 
                                                                    << (IData)(vlSelf->__PVT__in32_rec__DOT__normDist)) 
                                                                   << 1U)
                                                                   : (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_raw)))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_to_reg__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__fp_to_reg__0(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__fp_to_reg__0\n"); );
    // Body
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                              >> 0x14U)) << 2U)) | 
              ((2U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                               >> 0x15U)) << 1U)) | 
               (1U & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                              >> 0x16U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xffffc7U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x20U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                 >> 0x11U)) << 5U)) 
              | ((0x10U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                    >> 0x12U)) << 4U)) 
                 | (8U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                   >> 0x13U)) << 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfffe3fU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x100U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                  >> 0xeU)) << 8U)) 
              | ((0x80U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                    >> 0xfU)) << 7U)) 
                 | (0x40U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                      >> 0x10U)) << 6U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfff1ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x800U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                  >> 0xbU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                     >> 0xcU)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                       >> 0xdU)) << 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xff8fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x4000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                   >> 8U)) << 0xeU)) 
              | ((0x2000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                      >> 9U)) << 0xdU)) 
                 | (0x1000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                        >> 0xaU)) << 0xcU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xfc7fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x20000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                    >> 5U)) << 0x11U)) 
              | ((0x10000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                       >> 6U)) << 0x10U)) 
                 | (0x8000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                        >> 7U)) << 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0xe3ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | ((0x100000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                     >> 2U)) << 0x14U)) 
              | ((0x80000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                       >> 3U)) << 0x13U)) 
                 | (0x40000U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                         >> 4U)) << 0x12U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed) 
           | (0x800000U | ((0x400000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data) 
                                         << 0x16U)) 
                           | (0x200000U & ((IData)(
                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                    >> 1U)) 
                                           << 0x15U)))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffffff8ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | (IData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                              >> 0x31U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                             >> 0x32U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x33U))))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffffffc7ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x30U))))))) 
              << 3U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffffe3fULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x2dU))))))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffff1ffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x2aU))))))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffff8fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x27U))))))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffffffc7fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x24U))))))) 
              << 0xfU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffffe3ffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x21U))))))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffff1fffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x1eU))))))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffff8ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x1bU))))))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fffffc7ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x18U))))))) 
              << 0x1bU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffffe3fffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x15U))))))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffff1ffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0x12U))))))) 
              << 0x21U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fff8fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0xfU))))))) 
              << 0x24U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1ffc7fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 0xcU))))))) 
              << 0x27U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1fe3ffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 9U))))))) 
              << 0x2aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x1f1fffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 6U))))))) 
              << 0x2dU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x18ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                               >> 3U))))))) 
              << 0x30U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed 
        = ((0x7ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed) 
           | ((QData)((IData)((2U | (1U & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data))))) 
              << 0x33U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = ((0xff000000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
           | VL_STREAML_FAST_III(24, vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffe00000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (IData)((VL_STREAML_FAST_QQI(53, vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed, 0) 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_to_reg__Bz1___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__fp_to_reg__0(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__fp_to_reg__0\n"); );
    // Init
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
    IData/*23:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
    CData/*1:0*/ __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted;
    QData/*52:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs;
    CData/*1:0*/ __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs;
    IData/*31:0*/ __Vtemp_hb998e033__0;
    IData/*31:0*/ __Vtemp_ha688839e__0;
    IData/*31:0*/ __Vtemp_h6d6ad134__0;
    QData/*63:0*/ __Vtemp_h9d496f02__0;
    QData/*63:0*/ __Vtemp_ha0be417a__0;
    QData/*63:0*/ __Vtemp_hef059be5__0;
    QData/*63:0*/ __Vtemp_hd1d73fec__0;
    QData/*63:0*/ __Vtemp_h5bbba722__0;
    QData/*63:0*/ __Vtemp_hf5ef4333__0;
    // Body
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                        >> 1U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                         << 6U) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                   >> 0x1aU)));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfffffU & ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                        << 0xcU) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                    >> 0x14U)));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
           >> 0x10U);
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0xffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                    >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((4U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xffffc7U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x20U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                            >> 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfffe3fU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x100U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                         << 1U)) | ((0x80U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                              >> 1U)) 
                                    | (0x40U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                >> 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfff1ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x800U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                         << 7U)) | ((0x400U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                               << 5U)) 
                                    | (0x200U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                 << 3U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xff8fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x4000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                          << 0xdU)) | ((0x2000U & (
                                                   vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                   << 0xbU)) 
                                       | (0x1000U & 
                                          (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                           << 9U)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xfc7fffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x20000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                           >> 0xdU)) | ((0x10000U & 
                                         (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                          >> 0xfU)) 
                                        | (0x8000U 
                                           & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                              << 0xfU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0xe3ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x100000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                            >> 7U)) | ((0x80000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 9U)) | 
                                       (0x40000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 0xbU)))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((0x800000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                            >> 1U)) | ((0x400000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 3U)) | 
                                       (0x200000U & 
                                        (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         >> 5U)))));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U])) 
                                               >> 1U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x7ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                  << 0x29U) | (((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                  >> 0x17U))));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0x1ffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               >> 0xeU)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (0x1fffffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                 << 0x19U) | ((QData)((IData)(
                                                              vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                              >> 7U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                            >> 4U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)((0x1fffffU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                        >> 9U))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffffff8ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | (IData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                     >> 0xeU)) | ((2U 
                                                   & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                        >> 0x12U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffffffc7ULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 0xdU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                         >> 0xfU)))))) 
              << 3U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffffe3fULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 0xaU)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 0xcU)))))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffff1ffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 7U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 9U)))))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffff8fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      >> 2U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 6U)))))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffffffc7fffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                      << 1U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                       >> 3U)))))) 
              << 0xfU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffffe3ffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x1cU)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1eU)) | 
                                (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU]))))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffff1fffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x19U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1dU)))))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffff8ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x16U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1aU)))))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fffffc7ffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x13U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x17U)))))) 
              << 0x1bU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffffe3fffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0x10U)) | 
                               ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x14U)))))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffff1ffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xfU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                         >> 0x11U)))))) 
              << 0x21U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fff8fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 0xaU)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                         >> 0xeU)))))) 
              << 0x24U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1ffc7fffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 9U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 0xbU)))))) 
              << 0x27U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1fe3ffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 8U)))))) 
              << 0x2aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x1f1fffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      >> 1U)) | ((2U 
                                                  & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                     >> 3U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 5U)))))) 
              << 0x2dU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x18ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                      << 2U)) | ((2U 
                                                  & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU]) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       >> 2U)))))) 
              << 0x30U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
        = ((0x7ffffffffffffULL & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
           | ((QData)((IData)(((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                      >> 0x1dU)) | 
                               (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                >> 0x1fU)))) << 0x33U));
    __Vtemp_hb998e033__0 = (0xffffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = ((0xffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
               | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffff0000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (__Vtemp_hb998e033__0 >> 8U));
    __Vtemp_ha688839e__0 = (0xffffffU & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                           << 8U) | 
                                          (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                           >> 0x18U)) 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (0xffff0000U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                               << 0x18U) | (0xff0000U 
                                            & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                               >> 8U))) 
                             | (__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
                                << 0x10U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = ((0xffffff00U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U]) 
           | (__Vtemp_ha688839e__0 >> 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = ((0xffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U]) 
           | (0xffffff00U & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                               << 0x18U) | (0xffff00U 
                                            & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                               >> 8U))) 
                             | (__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
                                << 8U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xff000000U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | (0xffffffU & (((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                             << 0x18U) | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                          >> 8U)) | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)));
    __Vtemp_h6d6ad134__0 = (0xffffffU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
               | __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = (0xffffU & (__Vtemp_h6d6ad134__0 >> 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
           & (1U | (0xfffffeU & ((~ vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
                                 << 1U))));
    __Vtemp_h9d496f02__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0x1fffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = (((IData)(__Vtemp_h9d496f02__0) >> 0xbU) 
           | ((IData)((__Vtemp_h9d496f02__0 >> 0x20U)) 
              << 0x15U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0xfffffc00U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((IData)((__Vtemp_h9d496f02__0 >> 0x20U)) 
              >> 0xbU));
    __Vtemp_ha0be417a__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                        << 0xbU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                          >> 0x15U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = ((0x3ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                     >> 0x15U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = ((0x80000000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U]) 
           | (((IData)(__Vtemp_ha0be417a__0) >> 0x16U) 
              | ((IData)((__Vtemp_ha0be417a__0 >> 0x20U)) 
                 << 0xaU)));
    __Vtemp_hef059be5__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                        << 0x16U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                          >> 0xaU))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = ((0x7fffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                << 0x36U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                     >> 0xaU))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
              << 0x1fU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = (((IData)(__Vtemp_hef059be5__0) >> 1U) | 
           ((IData)((__Vtemp_hef059be5__0 >> 0x20U)) 
            << 0x1fU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = ((0xfff00000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U]) 
           | ((IData)((__Vtemp_hef059be5__0 >> 0x20U)) 
              >> 1U));
    __Vtemp_hd1d73fec__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                        << 1U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                          >> 0x1fU))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = ((0xfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                     >> 0x1fU))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = (((IData)(__Vtemp_hd1d73fec__0) >> 0xcU) 
           | ((IData)((__Vtemp_hd1d73fec__0 >> 0x20U)) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = ((0xfffffe00U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U]) 
           | ((IData)((__Vtemp_hd1d73fec__0 >> 0x20U)) 
              >> 0xcU));
    __Vtemp_h5bbba722__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                        << 0xcU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                          >> 0x14U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = ((0x1ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                     >> 0x14U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
              << 9U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = ((0xc0000000U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U]) 
           | (((IData)(__Vtemp_h5bbba722__0) >> 0x17U) 
              | ((IData)((__Vtemp_h5bbba722__0 >> 0x20U)) 
                 << 9U)));
    __Vtemp_hf5ef4333__0 = (0x1fffffffffffffULL & (
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                          >> 9U))) 
                                                   | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = ((0x3fffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U]) 
           | ((IData)((0x1fffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                << 0x37U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                     >> 9U))) 
                                              | __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
        = (((IData)(__Vtemp_hf5ef4333__0) >> 2U) | 
           ((IData)((__Vtemp_hf5ef4333__0 >> 0x20U)) 
            << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
        = (0x7ffffU & ((IData)((__Vtemp_hf5ef4333__0 
                                >> 0x20U)) >> 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo 
           & (1ULL | (0x1ffffffffffffeULL & ((~ vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo) 
                                             << 1U))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
        = vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
        = (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = (IData)((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                   >> 0x20U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U]);
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    __PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                   >> 4U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                   >> 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (1U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (4U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x100U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x400U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x1000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x4000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x100000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x400000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x1000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x4000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x10000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]) 
           | (0x40000000U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U]);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 2U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 4U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 6U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 8U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xaU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xcU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0xeU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x10U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x12U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x14U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x16U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x18U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1aU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                 >> 0x1cU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
           >> 0x1eU);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs 
        = (3U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]);
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 2U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 4U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 6U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 8U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xaU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xcU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0xeU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x10U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x12U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x14U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x16U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x18U));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1aU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                 >> 0x1cU));
    __PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs 
        = (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
           >> 0x1eU);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                   >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                   >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                     >> 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                     >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 3U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                     >> 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
                                      >> 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 7U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
                                      >> 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU] 
                  << 1U)) | (1U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU]));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x100000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x400000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x1000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x4000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x10000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | (0x40000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (1U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (4U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x100000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x400000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x1000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x4000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x10000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | (0x40000000U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | (0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[1U]) 
           | ((IData)((0U != (IData)(__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffcU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((2U & (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U])))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffcfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                   << 4U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffcffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                    << 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffcfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffcffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffcfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfcffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xcfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                            >> 4U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffff0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                            >> 8U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffe0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in32_rec__DOT__normDist = ((0U == 
                                               ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                 - (IData)(1U)) 
                                                & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo))
                                               ? (0x1fU 
                                                  & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U])
                                               : 0U);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | (0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | (0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[4U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffffefU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffffefffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xffefffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U] 
        = ((0xefffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[5U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[6U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[7U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[8U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U] 
        = ((0xfffeffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[9U]) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xaU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xbU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xcU] 
        = ((0xfffffffeU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v[0xcU]) 
           | (0U != (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U])))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                   << 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                    << 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U])))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                   << 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                    << 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                            >> 4U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                            >> 4U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                            >> 8U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                            >> 8U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU] 
        = ((0xffffffc0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 4U)) | (0x1fU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
                                            | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]))));
    vlSelf->__PVT__in64_rec__DOT__normDist = ((0ULL 
                                               == (
                                                   (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                    - 1ULL) 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo))
                                               ? (0x3fU 
                                                  & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU])
                                               : 0U);
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1ffU 
                                                      ^ (IData)(vlSelf->__PVT__in32_rec__DOT__normDist))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfffU 
                                                      ^ (IData)(vlSelf->__PVT__in64_rec__DOT__normDist))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in32_rec__DOT__exp = ((0x1c0U & 
                                          (((3U == 
                                             (3U & 
                                              ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x7fffffU 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data))))
                                             : ((IData)(
                                                        (0ULL 
                                                         == 
                                                         (0x7fffffffULL 
                                                          & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data)))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                 >> 6U))) 
                                           << 6U)) 
                                         | (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
    vlSelf->__PVT__in64_rec__DOT__exp = ((0xe00U & 
                                          (((3U == 
                                             (3U & 
                                              ((IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp) 
                                               >> 0xaU)))
                                             ? (6U 
                                                | (0ULL 
                                                   != 
                                                   (0xfffffffffffffULL 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data)))
                                             : ((IData)(
                                                        (0ULL 
                                                         == 
                                                         (0x7fffffffffffffffULL 
                                                          & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data)))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp) 
                                                 >> 9U))) 
                                           << 9U)) 
                                         | (0x1ffU 
                                            & (IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp)));
    vlSelf->__Vcellout__in32_rec__out = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelf->__PVT__in32_rec__DOT__exp) 
                                                             << 0x17U) 
                                                            | (0x7fffffU 
                                                               & ((0U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                               >> 0x17U))))
                                                                   ? 
                                                                  (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data) 
                                                                    << (IData)(vlSelf->__PVT__in32_rec__DOT__normDist)) 
                                                                   << 1U)
                                                                   : (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data)))))));
}
