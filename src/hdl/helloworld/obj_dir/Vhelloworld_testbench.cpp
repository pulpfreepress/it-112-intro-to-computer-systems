// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhelloworld_testbench__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhelloworld_testbench::Vhelloworld_testbench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhelloworld_testbench__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhelloworld_testbench::Vhelloworld_testbench(const char* _vcname__)
    : Vhelloworld_testbench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhelloworld_testbench::~Vhelloworld_testbench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhelloworld_testbench___024root___eval_debug_assertions(Vhelloworld_testbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vhelloworld_testbench___024root___eval_static(Vhelloworld_testbench___024root* vlSelf);
void Vhelloworld_testbench___024root___eval_initial(Vhelloworld_testbench___024root* vlSelf);
void Vhelloworld_testbench___024root___eval_settle(Vhelloworld_testbench___024root* vlSelf);
void Vhelloworld_testbench___024root___eval(Vhelloworld_testbench___024root* vlSelf);

void Vhelloworld_testbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhelloworld_testbench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhelloworld_testbench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhelloworld_testbench___024root___eval_static(&(vlSymsp->TOP));
        Vhelloworld_testbench___024root___eval_initial(&(vlSymsp->TOP));
        Vhelloworld_testbench___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhelloworld_testbench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vhelloworld_testbench::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhelloworld_testbench::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhelloworld_testbench::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vhelloworld_testbench::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhelloworld_testbench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhelloworld_testbench___024root___eval_final(Vhelloworld_testbench___024root* vlSelf);

VL_ATTR_COLD void Vhelloworld_testbench::final() {
    Vhelloworld_testbench___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhelloworld_testbench::hierName() const { return vlSymsp->name(); }
const char* Vhelloworld_testbench::modelName() const { return "Vhelloworld_testbench"; }
unsigned Vhelloworld_testbench::threads() const { return 1; }
void Vhelloworld_testbench::prepareClone() const { contextp()->prepareClone(); }
void Vhelloworld_testbench::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhelloworld_testbench::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhelloworld_testbench___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhelloworld_testbench___024root__trace_init_top(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhelloworld_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhelloworld_testbench___024root*>(voidSelf);
    Vhelloworld_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhelloworld_testbench___024root__trace_decl_types(tracep);
    Vhelloworld_testbench___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vhelloworld_testbench___024root__trace_register(Vhelloworld_testbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhelloworld_testbench::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhelloworld_testbench::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhelloworld_testbench___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
