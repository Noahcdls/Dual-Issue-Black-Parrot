// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024unit.h"
VlAssocArray<CData/*4:0*/, std::string> Vtestbench___024unit::__Venumtab_enum_name0;

void Vtestbench___024unit___ctor_var_reset(Vtestbench___024unit* vlSelf);

Vtestbench___024unit::Vtestbench___024unit(Vtestbench__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench___024unit___ctor_var_reset(this);
}

void Vtestbench___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench___024unit::~Vtestbench___024unit() {
}
