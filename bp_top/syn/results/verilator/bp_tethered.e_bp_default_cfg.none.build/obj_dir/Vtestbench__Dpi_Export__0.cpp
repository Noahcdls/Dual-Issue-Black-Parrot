// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtestbench.h"
#include "Vtestbench__Syms.h"
#include "verilated_dpi.h"


int Vtestbench::get_dram_period() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root::get_dram_period\n"); );
    // Init
    IData/*31:0*/ get_dram_period__Vfuncrtn__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_dram_period");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtestbench__Vcb_get_dram_period_t __Vcb = (Vtestbench__Vcb_get_dram_period_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtestbench__Syms*)(__Vscopep->symsp()), get_dram_period__Vfuncrtn__Vcvt);
    int get_dram_period__Vfuncrtn;
    for (size_t get_dram_period__Vfuncrtn__Vidx = 0; get_dram_period__Vfuncrtn__Vidx < 1; ++get_dram_period__Vfuncrtn__Vidx) get_dram_period__Vfuncrtn = get_dram_period__Vfuncrtn__Vcvt;
    return get_dram_period__Vfuncrtn;
}

int Vtestbench::get_sim_period() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root::get_sim_period\n"); );
    // Init
    IData/*31:0*/ get_sim_period__Vfuncrtn__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_sim_period");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtestbench__Vcb_get_sim_period_t __Vcb = (Vtestbench__Vcb_get_sim_period_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtestbench__Syms*)(__Vscopep->symsp()), get_sim_period__Vfuncrtn__Vcvt);
    int get_sim_period__Vfuncrtn;
    for (size_t get_sim_period__Vfuncrtn__Vidx = 0; get_sim_period__Vfuncrtn__Vidx < 1; ++get_sim_period__Vfuncrtn__Vidx) get_sim_period__Vfuncrtn = get_sim_period__Vfuncrtn__Vcvt;
    return get_sim_period__Vfuncrtn;
}

svBit Vtestbench::bsg_dpi_clock_gen_set_level(svBit clkval) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root::bsg_dpi_clock_gen_set_level\n"); );
    // Init
    CData/*0:0*/ clkval__Vcvt;
    CData/*0:0*/ bsg_dpi_clock_gen_set_level__Vfuncrtn__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("bsg_dpi_clock_gen_set_level");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtestbench__Vcb_bsg_dpi_clock_gen_set_level_t __Vcb = (Vtestbench__Vcb_bsg_dpi_clock_gen_set_level_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    clkval__Vcvt = (1U & clkval);
    (*__Vcb)((Vtestbench__Syms*)(__Vscopep->symsp()), clkval__Vcvt, bsg_dpi_clock_gen_set_level__Vfuncrtn__Vcvt);
    svBit bsg_dpi_clock_gen_set_level__Vfuncrtn;
    for (size_t bsg_dpi_clock_gen_set_level__Vfuncrtn__Vidx = 0; bsg_dpi_clock_gen_set_level__Vfuncrtn__Vidx < 1; ++bsg_dpi_clock_gen_set_level__Vfuncrtn__Vidx) bsg_dpi_clock_gen_set_level__Vfuncrtn = bsg_dpi_clock_gen_set_level__Vfuncrtn__Vcvt;
    return bsg_dpi_clock_gen_set_level__Vfuncrtn;
}
