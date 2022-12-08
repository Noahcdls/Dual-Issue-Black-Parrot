// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bp_be_reg_to_fp__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_be_reg_to_fp__Bz1___ctor_var_reset(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___ctor_var_reset\n"); );
    // Body
    VL_ZERO_RESET_W(68, vlSelf->reg_i);
    vlSelf->raw_o = 0;
    vlSelf->fflags_o = 0;
    vlSelf->__PVT__dp2sp_rec = 0;
    vlSelf->__Vcellout__round__out = 0;
    vlSelf->__PVT__round__DOT__isInf = 0;
    vlSelf->__PVT__round__DOT__sigIn = 0;
    vlSelf->__PVT__round__DOT__isSigNaN = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig = 0;
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp = 0;
    vlSelf->__PVT__out_sp_rec__DOT__isInf = 0;
    vlSelf->__PVT__out_sp_rec__DOT__sig = 0;
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = 0;
    vlSelf->__PVT__out_dp_rec__DOT__isInf = 0;
    vlSelf->__PVT__out_dp_rec__DOT__sig = 0;
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = 0;
}
