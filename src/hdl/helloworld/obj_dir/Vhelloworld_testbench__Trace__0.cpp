// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhelloworld_testbench__Syms.h"


void Vhelloworld_testbench___024root__trace_chg_0_sub_0(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhelloworld_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_chg_0\n"); );
    // Init
    Vhelloworld_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhelloworld_testbench___024root*>(voidSelf);
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhelloworld_testbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhelloworld_testbench___024root__trace_chg_0_sub_0(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.helloworld_testbench__DOT__in_a));
    bufp->chgBit(oldp+1,(vlSelfRef.helloworld_testbench__DOT__in_b));
    bufp->chgBit(oldp+2,(vlSelfRef.helloworld_testbench__DOT__in_c));
    bufp->chgBit(oldp+3,((1U & (((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_a)) 
                                 & ((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_b)) 
                                    & (~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)))) 
                                | (((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)) 
                                    & (IData)(vlSelfRef.helloworld_testbench__DOT__dut__DOT____VdfgRegularize_hc27bac09_0_2)) 
                                   | ((IData)(vlSelfRef.helloworld_testbench__DOT__dut__DOT____VdfgRegularize_hc27bac09_0_2) 
                                      & (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)))))));
}

void Vhelloworld_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_cleanup\n"); );
    // Init
    Vhelloworld_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhelloworld_testbench___024root*>(voidSelf);
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
