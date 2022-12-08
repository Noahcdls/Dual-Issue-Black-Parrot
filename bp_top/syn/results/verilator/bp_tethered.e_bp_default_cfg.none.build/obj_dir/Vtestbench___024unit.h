// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024UNIT_H_
#define VERILATED_VTESTBENCH___024UNIT_H_  // guard

#include "verilated.h"

class Vtestbench__Syms;

class Vtestbench___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlAssocArray<CData/*4:0*/, std::string> __Venumtab_enum_name0;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024unit(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench___024unit();
    VL_UNCOPYABLE(Vtestbench___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
