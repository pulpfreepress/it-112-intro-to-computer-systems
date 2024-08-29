// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhelloworld_testbench.h for the primary calling header

#include "Vhelloworld_testbench__pch.h"
#include "Vhelloworld_testbench__Syms.h"
#include "Vhelloworld_testbench___024root.h"

VL_INLINE_OPT VlCoroutine Vhelloworld_testbench___024root___eval_initial__TOP__Vtiming__1(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.helloworld_testbench__DOT__in_b = 0U;
    vlSelfRef.helloworld_testbench__DOT__in_c = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "helloworld.tb.sv", 
                                         30);
    VL_WRITEF_NX("%1#\n",0,1,vlSelfRef.helloworld_testbench__DOT__out_y);
    vlSelfRef.helloworld_testbench__DOT__in_b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "helloworld.tb.sv", 
                                         33);
    VL_WRITEF_NX("%1#\n",0,1,vlSelfRef.helloworld_testbench__DOT__out_y);
    vlSelfRef.helloworld_testbench__DOT__in_c = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "helloworld.tb.sv", 
                                         36);
    VL_WRITEF_NX("%1#\n",0,1,vlSelfRef.helloworld_testbench__DOT__out_y);
    vlSelfRef.helloworld_testbench__DOT__in_b = 0U;
    vlSelfRef.helloworld_testbench__DOT__in_c = 1U;
    VL_WRITEF_NX("%1#\n",0,1,vlSelfRef.helloworld_testbench__DOT__out_y);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_FINISH_MT("helloworld.tb.sv", 43, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhelloworld_testbench___024root___dump_triggers__act(Vhelloworld_testbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vhelloworld_testbench___024root___eval_triggers__act(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhelloworld_testbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
