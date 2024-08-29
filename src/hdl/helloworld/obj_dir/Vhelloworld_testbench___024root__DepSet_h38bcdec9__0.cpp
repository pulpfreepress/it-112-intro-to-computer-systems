// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhelloworld_testbench.h for the primary calling header

#include "Vhelloworld_testbench__pch.h"
#include "Vhelloworld_testbench___024root.h"

VlCoroutine Vhelloworld_testbench___024root___eval_initial__TOP__Vtiming__0(Vhelloworld_testbench___024root* vlSelf);
VlCoroutine Vhelloworld_testbench___024root___eval_initial__TOP__Vtiming__1(Vhelloworld_testbench___024root* vlSelf);

void Vhelloworld_testbench___024root___eval_initial(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhelloworld_testbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vhelloworld_testbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vhelloworld_testbench___024root___eval_initial__TOP__Vtiming__0(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.helloworld_testbench__DOT__in_a = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "helloworld.tb.sv", 
                                             23);
        vlSelfRef.helloworld_testbench__DOT__in_a = 
            (1U & (~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_a)));
    }
}

void Vhelloworld_testbench___024root___act_sequent__TOP__0(Vhelloworld_testbench___024root* vlSelf);

void Vhelloworld_testbench___024root___eval_act(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vhelloworld_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhelloworld_testbench___024root___act_sequent__TOP__0(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.helloworld_testbench__DOT__dut__DOT____VdfgRegularize_hc27bac09_0_2 
        = ((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_b)) 
           & (IData)(vlSelfRef.helloworld_testbench__DOT__in_a));
    vlSelfRef.helloworld_testbench__DOT__out_y = (1U 
                                                  & (((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_a)) 
                                                      & ((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_b)) 
                                                         & (~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)))) 
                                                     | (((~ (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)) 
                                                         & (IData)(vlSelfRef.helloworld_testbench__DOT__dut__DOT____VdfgRegularize_hc27bac09_0_2)) 
                                                        | ((IData)(vlSelfRef.helloworld_testbench__DOT__dut__DOT____VdfgRegularize_hc27bac09_0_2) 
                                                           & (IData)(vlSelfRef.helloworld_testbench__DOT__in_c)))));
}

void Vhelloworld_testbench___024root___eval_nba(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhelloworld_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vhelloworld_testbench___024root___timing_resume(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vhelloworld_testbench___024root___eval_triggers__act(Vhelloworld_testbench___024root* vlSelf);

bool Vhelloworld_testbench___024root___eval_phase__act(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhelloworld_testbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhelloworld_testbench___024root___timing_resume(vlSelf);
        Vhelloworld_testbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhelloworld_testbench___024root___eval_phase__nba(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhelloworld_testbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhelloworld_testbench___024root___dump_triggers__nba(Vhelloworld_testbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhelloworld_testbench___024root___dump_triggers__act(Vhelloworld_testbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vhelloworld_testbench___024root___eval(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vhelloworld_testbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("helloworld.tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vhelloworld_testbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("helloworld.tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhelloworld_testbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhelloworld_testbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhelloworld_testbench___024root___eval_debug_assertions(Vhelloworld_testbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhelloworld_testbench___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
