// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_mmu__Bz1_T8_TB0.h"

// Parameter definitions for Vtestbench_bp_mmu__Bz1_T8_TB0
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__io_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__tlb__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__tlb__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__tlb__DOT__io_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__pma__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__pma__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_mmu__Bz1_T8_TB0::__PVT__pma__DOT__io_noc_cord_markers_pos_p;


void Vtestbench_bp_mmu__Bz1_T8_TB0___ctor_var_reset(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf);

Vtestbench_bp_mmu__Bz1_T8_TB0::Vtestbench_bp_mmu__Bz1_T8_TB0(Vtestbench__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bp_mmu__Bz1_T8_TB0___ctor_var_reset(this);
}

void Vtestbench_bp_mmu__Bz1_T8_TB0::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bp_mmu__Bz1_T8_TB0::~Vtestbench_bp_mmu__Bz1_T8_TB0() {
}
