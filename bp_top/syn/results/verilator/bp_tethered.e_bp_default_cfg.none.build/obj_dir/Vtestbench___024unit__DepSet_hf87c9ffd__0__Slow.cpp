// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench___024unit.h"

VL_ATTR_COLD void Vtestbench___024unit___ctor_var_reset(Vtestbench___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__Venumtab_enum_name0.atDefault() = std::string("");
    vlSelf->__Venumtab_enum_name0.at(0) = std::string("unknown");
    vlSelf->__Venumtab_enum_name0.at(1) = std::string("dcache_miss");
    vlSelf->__Venumtab_enum_name0.at(2) = std::string("dtlb_miss");
    vlSelf->__Venumtab_enum_name0.at(3) = std::string("itlb_miss");
    vlSelf->__Venumtab_enum_name0.at(4) = std::string("_interrupt");
    vlSelf->__Venumtab_enum_name0.at(5) = std::string("exception");
    vlSelf->__Venumtab_enum_name0.at(6) = std::string("replay");
    vlSelf->__Venumtab_enum_name0.at(7) = std::string("special");
    vlSelf->__Venumtab_enum_name0.at(8) = std::string("ptw_busy");
    vlSelf->__Venumtab_enum_name0.at(9) = std::string("fdiv_haz");
    vlSelf->__Venumtab_enum_name0.at(10) = std::string("idiv_haz");
    vlSelf->__Venumtab_enum_name0.at(11) = std::string("struct_haz");
    vlSelf->__Venumtab_enum_name0.at(12) = std::string("sb_fwaw_dep");
    vlSelf->__Venumtab_enum_name0.at(13) = std::string("sb_iwaw_dep");
    vlSelf->__Venumtab_enum_name0.at(14) = std::string("sb_fraw_dep");
    vlSelf->__Venumtab_enum_name0.at(15) = std::string("sb_iraw_dep");
    vlSelf->__Venumtab_enum_name0.at(16) = std::string("fma_dep");
    vlSelf->__Venumtab_enum_name0.at(17) = std::string("mul_dep");
    vlSelf->__Venumtab_enum_name0.at(18) = std::string("load_dep");
    vlSelf->__Venumtab_enum_name0.at(19) = std::string("aux_dep");
    vlSelf->__Venumtab_enum_name0.at(20) = std::string("data_haz");
    vlSelf->__Venumtab_enum_name0.at(21) = std::string("long_haz");
    vlSelf->__Venumtab_enum_name0.at(22) = std::string("control_haz");
    vlSelf->__Venumtab_enum_name0.at(23) = std::string("mispredict");
    vlSelf->__Venumtab_enum_name0.at(24) = std::string("fe_cmd_fence");
    vlSelf->__Venumtab_enum_name0.at(25) = std::string("fe_cmd");
    vlSelf->__Venumtab_enum_name0.at(26) = std::string("ret_override");
    vlSelf->__Venumtab_enum_name0.at(27) = std::string("branch_override");
    vlSelf->__Venumtab_enum_name0.at(28) = std::string("icache_miss");
}
