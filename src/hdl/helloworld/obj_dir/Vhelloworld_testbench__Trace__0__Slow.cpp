// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhelloworld_testbench__Syms.h"


VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_init_sub__TOP__0(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("helloworld_testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"in_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"out_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_init_top(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhelloworld_testbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhelloworld_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhelloworld_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_register(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhelloworld_testbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vhelloworld_testbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vhelloworld_testbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vhelloworld_testbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_const_0\n"); );
    // Init
    Vhelloworld_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhelloworld_testbench___024root*>(voidSelf);
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_full_0_sub_0(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_full_0\n"); );
    // Init
    Vhelloworld_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhelloworld_testbench___024root*>(voidSelf);
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhelloworld_testbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_full_0_sub_0(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.helloworld_testbench__DOT__in_a));
    bufp->fullBit(oldp+2,(vlSelfRef.helloworld_testbench__DOT__in_b));
    bufp->fullBit(oldp+3,(vlSelfRef.helloworld_testbench__DOT__in_c));
    bufp->fullBit(oldp+4,((1U & (((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_a)) 
                                  & ((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_b)) 
                                     & (~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)))) 
                                 | (((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)) 
                                     & (IData)(vlSelfRef.helloworld_testbench__DOT__dut__DOT____VdfgRegularize_hc27bac09_0_2)) 
                                    | ((IData)(vlSelfRef.helloworld_testbench__DOT__dut__DOT____VdfgRegularize_hc27bac09_0_2) 
                                       & (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)))))));
}
