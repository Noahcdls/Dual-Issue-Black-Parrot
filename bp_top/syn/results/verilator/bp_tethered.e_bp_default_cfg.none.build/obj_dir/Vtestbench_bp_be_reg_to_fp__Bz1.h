// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_BE_REG_TO_FP__BZ1_H_
#define VERILATED_VTESTBENCH_BP_BE_REG_TO_FP__BZ1_H_  // guard

#include "verilated.h"

class Vtestbench__Syms;

class Vtestbench_bp_be_reg_to_fp__Bz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(fflags_o,4,0);
    CData/*0:0*/ __PVT__round__DOT__isInf;
    CData/*0:0*/ __PVT__round__DOT__isSigNaN;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra;
    CData/*0:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound;
    CData/*0:0*/ __PVT__out_sp_rec__DOT__isInf;
    CData/*0:0*/ __PVT__out_sp_rec__DOT__isSubnormal;
    CData/*0:0*/ __PVT__out_dp_rec__DOT__isInf;
    CData/*0:0*/ __PVT__out_dp_rec__DOT__isSubnormal;
    SData/*14:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp;
    VL_INW(reg_i,67,0,3);
    IData/*26:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig;
    IData/*24:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    IData/*26:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask;
    IData/*25:0*/ __PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig;
    IData/*24:0*/ __PVT__out_sp_rec__DOT__sig;
    VL_OUT64(raw_o,63,0);
    QData/*32:0*/ __PVT__dp2sp_rec;
    QData/*32:0*/ __Vcellout__round__out;
    QData/*53:0*/ __PVT__round__DOT__sigIn;
    QData/*53:0*/ __PVT__out_dp_rec__DOT__sig;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000001U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_be_reg_to_fp__Bz1(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench_bp_be_reg_to_fp__Bz1();
    VL_UNCOPYABLE(Vtestbench_bp_be_reg_to_fp__Bz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
