#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// MoonSharp.Interpreter.ScriptExecutionContext
struct ScriptExecutionContext_t1101131097;
// MoonSharp.Interpreter.DynValue[]
struct DynValueU5BU5D_t370998360;
// MoonSharp.Interpreter.Execution.VM.Processor
struct Processor_t1734942896;
// MoonSharp.Interpreter.Script
struct Script_t454308935;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3457507972;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef>
struct List_1_t2535021387;
// MoonSharp.Interpreter.DynValue
struct DynValue_t2222874421;
// MoonSharp.Interpreter.SymbolRef
struct SymbolRef_t2475304184;
// MoonSharp.Interpreter.Debugging.SourceRef
struct SourceRef_t3827830669;
// MoonSharp.Interpreter.Diagnostics.PerformanceResult
struct PerformanceResult_t3601565594;
// System.Diagnostics.Stopwatch
struct Stopwatch_t3568258844;
// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch
struct GlobalPerformanceStopwatch_t2396865958;
// MoonSharp.Interpreter.Tree.Expressions.DynamicExprExpression
struct DynamicExprExpression_t1779642483;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame>
struct List_1_t1627526362;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.IClosureBuilder>
struct List_1_t522056441;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock>
struct List_1_t93862779;
// MoonSharp.Interpreter.Execution.RuntimeScopeBlock
struct RuntimeScopeBlock_t854770072;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.SymbolRef>
struct Dictionary_2_t2422667415;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Tree.Statements.GotoStatement>
struct List_1_t589112250;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Tree.Statements.LabelStatement>
struct Dictionary_2_t414421279;
// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock
struct BuildTimeScopeBlock_t1386672061;
// MoonSharp.Interpreter.Execution.RuntimeScopeFrame
struct RuntimeScopeFrame_t2464632172;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.ILoop>
struct FastStack_1_t1767126675;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.SymbolRef>
struct List_1_t1182494902;
// MoonSharp.Interpreter.CallbackFunction
struct CallbackFunction_t1839439212;
// MoonSharp.Interpreter.Execution.BuildTimeScope
struct BuildTimeScope_t159247152;
// MoonSharp.Interpreter.Debugging.SourceCode
struct SourceCode_t1164375887;
// MoonSharp.Interpreter.Tree.Lexer
struct Lexer_t246105359;
// MoonSharp.Interpreter.Execution.VM.ByteCode
struct ByteCode_t1511227056;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor>
struct Dictionary_2_t2921112705;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2979567747;
// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor
struct DispatchingUserDataDescriptor_t1769900806;
// System.IntPtr[]
struct IntPtrU5BU5D_t433772155;
// System.Collections.IDictionary
struct IDictionary_t3458008553;
// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[]
struct IPerformanceStopwatchU5BU5D_t3409204658;
// MoonSharp.Interpreter.Coroutine
struct Coroutine_t3333720231;
// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue>
struct IEnumerator_1_t1871568966;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_t4249116836;
// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32>
struct Func_2_t72509793;
// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue>
struct Func_3_t3824004487;
// System.Collections.Generic.IList`1<MoonSharp.Interpreter.DynValue>
struct IList_1_t1787973785;
// System.Collections.Generic.IList`1<MoonSharp.Interpreter.Debugging.WatchItem>
struct IList_1_t1711288044;
// System.Void
struct Void_t761274262;
// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String>
struct Func_2_t2885058645;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Instruction>
struct List_1_t2171361267;
// MoonSharp.Interpreter.Execution.LoopTracker
struct LoopTracker_t3246466408;
// MoonSharp.Interpreter.Execution.ClosureContext
struct ClosureContext_t2663877541;
// System.Char[]
struct CharU5BU5D_t848310312;
// System.Collections.Generic.LinkedList`1<MoonSharp.Interpreter.TablePair>
struct LinkedList_1_t1748592608;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<MoonSharp.Interpreter.DynValue,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t1941116097;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.String,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t732658413;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.Int32,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t58183542;
// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.TablePair>
struct Func_2_t1554043460;
// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue>
struct Func_2_t1852579261;
// MoonSharp.Interpreter.Interop.IUserDataDescriptor
struct IUserDataDescriptor_t3350410285;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,MoonSharp.Interpreter.Interop.IUserDataDescriptor>,System.Type>
struct Func_2_t2990924837;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1920067483;
// MoonSharp.Interpreter.Tree.Token
struct Token_t598049124;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue>
struct FastStack_1_t4116499783;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem>
struct FastStack_1_t2799645675;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Processor>
struct List_1_t442133614;
// MoonSharp.Interpreter.Table
struct Table_t1685905556;
// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext
struct DebugContext_t3504958478;
// System.Func`2<MoonSharp.Interpreter.Execution.VM.Processor,MoonSharp.Interpreter.Debugging.WatchItem>
struct Func_2_t1276213452;
// System.Int32[]
struct Int32U5BU5D_t2783033101;
// MoonSharp.Interpreter.SymbolRef[]
struct SymbolRefU5BU5D_t3703738409;
// System.Func`2<MoonSharp.Interpreter.DynValue,System.Boolean>
struct Func_2_t3446586894;
// System.Func`2<MoonSharp.Interpreter.DynValue,System.String>
struct Func_2_t3847285892;
// MoonSharp.Interpreter.Debugging.IDebugger
struct IDebugger_t1766339845;
// System.Object[]
struct ObjectU5BU5D_t4111892338;
// System.IAsyncResult
struct IAsyncResult_t2228575507;
// System.AsyncCallback
struct AsyncCallback_t2901717597;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CGMATCH_AUX_2U3EC__ANONSTOREY0_T3768330070_H
#define U3CGMATCH_AUX_2U3EC__ANONSTOREY0_T3768330070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.StringLib.KopiLua_StringLib/<gmatch_aux_2>c__AnonStorey0
struct  U3Cgmatch_aux_2U3Ec__AnonStorey0_t3768330070  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.ScriptExecutionContext MoonSharp.Interpreter.CoreLib.StringLib.KopiLua_StringLib/<gmatch_aux_2>c__AnonStorey0::executionContext
	ScriptExecutionContext_t1101131097 * ___executionContext_0;

public:
	inline static int32_t get_offset_of_executionContext_0() { return static_cast<int32_t>(offsetof(U3Cgmatch_aux_2U3Ec__AnonStorey0_t3768330070, ___executionContext_0)); }
	inline ScriptExecutionContext_t1101131097 * get_executionContext_0() const { return ___executionContext_0; }
	inline ScriptExecutionContext_t1101131097 ** get_address_of_executionContext_0() { return &___executionContext_0; }
	inline void set_executionContext_0(ScriptExecutionContext_t1101131097 * value)
	{
		___executionContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___executionContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGMATCH_AUX_2U3EC__ANONSTOREY0_T3768330070_H
#ifndef YIELDREQUEST_T1424729498_H
#define YIELDREQUEST_T1424729498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.YieldRequest
struct  YieldRequest_t1424729498  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.YieldRequest::ReturnValues
	DynValueU5BU5D_t370998360* ___ReturnValues_0;
	// System.Boolean MoonSharp.Interpreter.YieldRequest::<Forced>k__BackingField
	bool ___U3CForcedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_ReturnValues_0() { return static_cast<int32_t>(offsetof(YieldRequest_t1424729498, ___ReturnValues_0)); }
	inline DynValueU5BU5D_t370998360* get_ReturnValues_0() const { return ___ReturnValues_0; }
	inline DynValueU5BU5D_t370998360** get_address_of_ReturnValues_0() { return &___ReturnValues_0; }
	inline void set_ReturnValues_0(DynValueU5BU5D_t370998360* value)
	{
		___ReturnValues_0 = value;
		Il2CppCodeGenWriteBarrier((&___ReturnValues_0), value);
	}

	inline static int32_t get_offset_of_U3CForcedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(YieldRequest_t1424729498, ___U3CForcedU3Ek__BackingField_1)); }
	inline bool get_U3CForcedU3Ek__BackingField_1() const { return ___U3CForcedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CForcedU3Ek__BackingField_1() { return &___U3CForcedU3Ek__BackingField_1; }
	inline void set_U3CForcedU3Ek__BackingField_1(bool value)
	{
		___U3CForcedU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YIELDREQUEST_T1424729498_H
#ifndef DEBUGSERVICE_T1737950749_H
#define DEBUGSERVICE_T1737950749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebugService
struct  DebugService_t1737950749  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Debugging.DebugService::m_Processor
	Processor_t1734942896 * ___m_Processor_0;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Debugging.DebugService::<OwnerScript>k__BackingField
	Script_t454308935 * ___U3COwnerScriptU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Processor_0() { return static_cast<int32_t>(offsetof(DebugService_t1737950749, ___m_Processor_0)); }
	inline Processor_t1734942896 * get_m_Processor_0() const { return ___m_Processor_0; }
	inline Processor_t1734942896 ** get_address_of_m_Processor_0() { return &___m_Processor_0; }
	inline void set_m_Processor_0(Processor_t1734942896 * value)
	{
		___m_Processor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_0), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebugService_t1737950749, ___U3COwnerScriptU3Ek__BackingField_1)); }
	inline Script_t454308935 * get_U3COwnerScriptU3Ek__BackingField_1() const { return ___U3COwnerScriptU3Ek__BackingField_1; }
	inline Script_t454308935 ** get_address_of_U3COwnerScriptU3Ek__BackingField_1() { return &___U3COwnerScriptU3Ek__BackingField_1; }
	inline void set_U3COwnerScriptU3Ek__BackingField_1(Script_t454308935 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGSERVICE_T1737950749_H
#ifndef SOURCECODE_T1164375887_H
#define SOURCECODE_T1164375887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.SourceCode
struct  SourceCode_t1164375887  : public RuntimeObject
{
public:
	// System.String MoonSharp.Interpreter.Debugging.SourceCode::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String MoonSharp.Interpreter.Debugging.SourceCode::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_1;
	// System.String[] MoonSharp.Interpreter.Debugging.SourceCode::<Lines>k__BackingField
	StringU5BU5D_t3457507972* ___U3CLinesU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Debugging.SourceCode::<OwnerScript>k__BackingField
	Script_t454308935 * ___U3COwnerScriptU3Ek__BackingField_3;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceCode::<SourceID>k__BackingField
	int32_t ___U3CSourceIDU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Debugging.SourceCode::<Refs>k__BackingField
	List_1_t2535021387 * ___U3CRefsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SourceCode_t1164375887, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SourceCode_t1164375887, ___U3CCodeU3Ek__BackingField_1)); }
	inline String_t* get_U3CCodeU3Ek__BackingField_1() const { return ___U3CCodeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCodeU3Ek__BackingField_1() { return &___U3CCodeU3Ek__BackingField_1; }
	inline void set_U3CCodeU3Ek__BackingField_1(String_t* value)
	{
		___U3CCodeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCodeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CLinesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SourceCode_t1164375887, ___U3CLinesU3Ek__BackingField_2)); }
	inline StringU5BU5D_t3457507972* get_U3CLinesU3Ek__BackingField_2() const { return ___U3CLinesU3Ek__BackingField_2; }
	inline StringU5BU5D_t3457507972** get_address_of_U3CLinesU3Ek__BackingField_2() { return &___U3CLinesU3Ek__BackingField_2; }
	inline void set_U3CLinesU3Ek__BackingField_2(StringU5BU5D_t3457507972* value)
	{
		___U3CLinesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLinesU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SourceCode_t1164375887, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t454308935 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t454308935 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t454308935 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSourceIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SourceCode_t1164375887, ___U3CSourceIDU3Ek__BackingField_4)); }
	inline int32_t get_U3CSourceIDU3Ek__BackingField_4() const { return ___U3CSourceIDU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSourceIDU3Ek__BackingField_4() { return &___U3CSourceIDU3Ek__BackingField_4; }
	inline void set_U3CSourceIDU3Ek__BackingField_4(int32_t value)
	{
		___U3CSourceIDU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRefsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceCode_t1164375887, ___U3CRefsU3Ek__BackingField_5)); }
	inline List_1_t2535021387 * get_U3CRefsU3Ek__BackingField_5() const { return ___U3CRefsU3Ek__BackingField_5; }
	inline List_1_t2535021387 ** get_address_of_U3CRefsU3Ek__BackingField_5() { return &___U3CRefsU3Ek__BackingField_5; }
	inline void set_U3CRefsU3Ek__BackingField_5(List_1_t2535021387 * value)
	{
		___U3CRefsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRefsU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECODE_T1164375887_H
#ifndef SOURCEREF_T3827830669_H
#define SOURCEREF_T3827830669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.SourceRef
struct  SourceRef_t3827830669  : public RuntimeObject
{
public:
	// System.Boolean MoonSharp.Interpreter.Debugging.SourceRef::<IsClrLocation>k__BackingField
	bool ___U3CIsClrLocationU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<SourceIdx>k__BackingField
	int32_t ___U3CSourceIdxU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<FromChar>k__BackingField
	int32_t ___U3CFromCharU3Ek__BackingField_2;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<ToChar>k__BackingField
	int32_t ___U3CToCharU3Ek__BackingField_3;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<FromLine>k__BackingField
	int32_t ___U3CFromLineU3Ek__BackingField_4;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceRef::<ToLine>k__BackingField
	int32_t ___U3CToLineU3Ek__BackingField_5;
	// System.Boolean MoonSharp.Interpreter.Debugging.SourceRef::<IsStepStop>k__BackingField
	bool ___U3CIsStepStopU3Ek__BackingField_6;
	// System.Boolean MoonSharp.Interpreter.Debugging.SourceRef::Breakpoint
	bool ___Breakpoint_7;
	// System.Boolean MoonSharp.Interpreter.Debugging.SourceRef::<CannotBreakpoint>k__BackingField
	bool ___U3CCannotBreakpointU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CIsClrLocationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___U3CIsClrLocationU3Ek__BackingField_0)); }
	inline bool get_U3CIsClrLocationU3Ek__BackingField_0() const { return ___U3CIsClrLocationU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsClrLocationU3Ek__BackingField_0() { return &___U3CIsClrLocationU3Ek__BackingField_0; }
	inline void set_U3CIsClrLocationU3Ek__BackingField_0(bool value)
	{
		___U3CIsClrLocationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdxU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___U3CSourceIdxU3Ek__BackingField_1)); }
	inline int32_t get_U3CSourceIdxU3Ek__BackingField_1() const { return ___U3CSourceIdxU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSourceIdxU3Ek__BackingField_1() { return &___U3CSourceIdxU3Ek__BackingField_1; }
	inline void set_U3CSourceIdxU3Ek__BackingField_1(int32_t value)
	{
		___U3CSourceIdxU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFromCharU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___U3CFromCharU3Ek__BackingField_2)); }
	inline int32_t get_U3CFromCharU3Ek__BackingField_2() const { return ___U3CFromCharU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFromCharU3Ek__BackingField_2() { return &___U3CFromCharU3Ek__BackingField_2; }
	inline void set_U3CFromCharU3Ek__BackingField_2(int32_t value)
	{
		___U3CFromCharU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CToCharU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___U3CToCharU3Ek__BackingField_3)); }
	inline int32_t get_U3CToCharU3Ek__BackingField_3() const { return ___U3CToCharU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CToCharU3Ek__BackingField_3() { return &___U3CToCharU3Ek__BackingField_3; }
	inline void set_U3CToCharU3Ek__BackingField_3(int32_t value)
	{
		___U3CToCharU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFromLineU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___U3CFromLineU3Ek__BackingField_4)); }
	inline int32_t get_U3CFromLineU3Ek__BackingField_4() const { return ___U3CFromLineU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFromLineU3Ek__BackingField_4() { return &___U3CFromLineU3Ek__BackingField_4; }
	inline void set_U3CFromLineU3Ek__BackingField_4(int32_t value)
	{
		___U3CFromLineU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CToLineU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___U3CToLineU3Ek__BackingField_5)); }
	inline int32_t get_U3CToLineU3Ek__BackingField_5() const { return ___U3CToLineU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CToLineU3Ek__BackingField_5() { return &___U3CToLineU3Ek__BackingField_5; }
	inline void set_U3CToLineU3Ek__BackingField_5(int32_t value)
	{
		___U3CToLineU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsStepStopU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___U3CIsStepStopU3Ek__BackingField_6)); }
	inline bool get_U3CIsStepStopU3Ek__BackingField_6() const { return ___U3CIsStepStopU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsStepStopU3Ek__BackingField_6() { return &___U3CIsStepStopU3Ek__BackingField_6; }
	inline void set_U3CIsStepStopU3Ek__BackingField_6(bool value)
	{
		___U3CIsStepStopU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_Breakpoint_7() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___Breakpoint_7)); }
	inline bool get_Breakpoint_7() const { return ___Breakpoint_7; }
	inline bool* get_address_of_Breakpoint_7() { return &___Breakpoint_7; }
	inline void set_Breakpoint_7(bool value)
	{
		___Breakpoint_7 = value;
	}

	inline static int32_t get_offset_of_U3CCannotBreakpointU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SourceRef_t3827830669, ___U3CCannotBreakpointU3Ek__BackingField_8)); }
	inline bool get_U3CCannotBreakpointU3Ek__BackingField_8() const { return ___U3CCannotBreakpointU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CCannotBreakpointU3Ek__BackingField_8() { return &___U3CCannotBreakpointU3Ek__BackingField_8; }
	inline void set_U3CCannotBreakpointU3Ek__BackingField_8(bool value)
	{
		___U3CCannotBreakpointU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEREF_T3827830669_H
#ifndef WATCHITEM_T2146188680_H
#define WATCHITEM_T2146188680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.WatchItem
struct  WatchItem_t2146188680  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchItem::<Address>k__BackingField
	int32_t ___U3CAddressU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchItem::<BasePtr>k__BackingField
	int32_t ___U3CBasePtrU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchItem::<RetAddress>k__BackingField
	int32_t ___U3CRetAddressU3Ek__BackingField_2;
	// System.String MoonSharp.Interpreter.Debugging.WatchItem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Debugging.WatchItem::<Value>k__BackingField
	DynValue_t2222874421 * ___U3CValueU3Ek__BackingField_4;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.Debugging.WatchItem::<LValue>k__BackingField
	SymbolRef_t2475304184 * ___U3CLValueU3Ek__BackingField_5;
	// System.Boolean MoonSharp.Interpreter.Debugging.WatchItem::<IsError>k__BackingField
	bool ___U3CIsErrorU3Ek__BackingField_6;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Debugging.WatchItem::<Location>k__BackingField
	SourceRef_t3827830669 * ___U3CLocationU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CAddressU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WatchItem_t2146188680, ___U3CAddressU3Ek__BackingField_0)); }
	inline int32_t get_U3CAddressU3Ek__BackingField_0() const { return ___U3CAddressU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CAddressU3Ek__BackingField_0() { return &___U3CAddressU3Ek__BackingField_0; }
	inline void set_U3CAddressU3Ek__BackingField_0(int32_t value)
	{
		___U3CAddressU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CBasePtrU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WatchItem_t2146188680, ___U3CBasePtrU3Ek__BackingField_1)); }
	inline int32_t get_U3CBasePtrU3Ek__BackingField_1() const { return ___U3CBasePtrU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CBasePtrU3Ek__BackingField_1() { return &___U3CBasePtrU3Ek__BackingField_1; }
	inline void set_U3CBasePtrU3Ek__BackingField_1(int32_t value)
	{
		___U3CBasePtrU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRetAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WatchItem_t2146188680, ___U3CRetAddressU3Ek__BackingField_2)); }
	inline int32_t get_U3CRetAddressU3Ek__BackingField_2() const { return ___U3CRetAddressU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CRetAddressU3Ek__BackingField_2() { return &___U3CRetAddressU3Ek__BackingField_2; }
	inline void set_U3CRetAddressU3Ek__BackingField_2(int32_t value)
	{
		___U3CRetAddressU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WatchItem_t2146188680, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WatchItem_t2146188680, ___U3CValueU3Ek__BackingField_4)); }
	inline DynValue_t2222874421 * get_U3CValueU3Ek__BackingField_4() const { return ___U3CValueU3Ek__BackingField_4; }
	inline DynValue_t2222874421 ** get_address_of_U3CValueU3Ek__BackingField_4() { return &___U3CValueU3Ek__BackingField_4; }
	inline void set_U3CValueU3Ek__BackingField_4(DynValue_t2222874421 * value)
	{
		___U3CValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CLValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WatchItem_t2146188680, ___U3CLValueU3Ek__BackingField_5)); }
	inline SymbolRef_t2475304184 * get_U3CLValueU3Ek__BackingField_5() const { return ___U3CLValueU3Ek__BackingField_5; }
	inline SymbolRef_t2475304184 ** get_address_of_U3CLValueU3Ek__BackingField_5() { return &___U3CLValueU3Ek__BackingField_5; }
	inline void set_U3CLValueU3Ek__BackingField_5(SymbolRef_t2475304184 * value)
	{
		___U3CLValueU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLValueU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CIsErrorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WatchItem_t2146188680, ___U3CIsErrorU3Ek__BackingField_6)); }
	inline bool get_U3CIsErrorU3Ek__BackingField_6() const { return ___U3CIsErrorU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsErrorU3Ek__BackingField_6() { return &___U3CIsErrorU3Ek__BackingField_6; }
	inline void set_U3CIsErrorU3Ek__BackingField_6(bool value)
	{
		___U3CIsErrorU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLocationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WatchItem_t2146188680, ___U3CLocationU3Ek__BackingField_7)); }
	inline SourceRef_t3827830669 * get_U3CLocationU3Ek__BackingField_7() const { return ___U3CLocationU3Ek__BackingField_7; }
	inline SourceRef_t3827830669 ** get_address_of_U3CLocationU3Ek__BackingField_7() { return &___U3CLocationU3Ek__BackingField_7; }
	inline void set_U3CLocationU3Ek__BackingField_7(SourceRef_t3827830669 * value)
	{
		___U3CLocationU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocationU3Ek__BackingField_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATCHITEM_T2146188680_H
#ifndef DUMMYPERFORMANCESTOPWATCH_T3635296135_H
#define DUMMYPERFORMANCESTOPWATCH_T3635296135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch
struct  DummyPerformanceStopwatch_t3635296135  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceResult MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch::m_Result
	PerformanceResult_t3601565594 * ___m_Result_1;

public:
	inline static int32_t get_offset_of_m_Result_1() { return static_cast<int32_t>(offsetof(DummyPerformanceStopwatch_t3635296135, ___m_Result_1)); }
	inline PerformanceResult_t3601565594 * get_m_Result_1() const { return ___m_Result_1; }
	inline PerformanceResult_t3601565594 ** get_address_of_m_Result_1() { return &___m_Result_1; }
	inline void set_m_Result_1(PerformanceResult_t3601565594 * value)
	{
		___m_Result_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Result_1), value);
	}
};

struct DummyPerformanceStopwatch_t3635296135_StaticFields
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch::Instance
	DummyPerformanceStopwatch_t3635296135 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(DummyPerformanceStopwatch_t3635296135_StaticFields, ___Instance_0)); }
	inline DummyPerformanceStopwatch_t3635296135 * get_Instance_0() const { return ___Instance_0; }
	inline DummyPerformanceStopwatch_t3635296135 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(DummyPerformanceStopwatch_t3635296135 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUMMYPERFORMANCESTOPWATCH_T3635296135_H
#ifndef GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T551336511_H
#define GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T551336511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject
struct  GlobalPerformanceStopwatch_StopwatchObject_t551336511  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject::m_Stopwatch
	Stopwatch_t3568258844 * ___m_Stopwatch_0;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject::m_Parent
	GlobalPerformanceStopwatch_t2396865958 * ___m_Parent_1;

public:
	inline static int32_t get_offset_of_m_Stopwatch_0() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_StopwatchObject_t551336511, ___m_Stopwatch_0)); }
	inline Stopwatch_t3568258844 * get_m_Stopwatch_0() const { return ___m_Stopwatch_0; }
	inline Stopwatch_t3568258844 ** get_address_of_m_Stopwatch_0() { return &___m_Stopwatch_0; }
	inline void set_m_Stopwatch_0(Stopwatch_t3568258844 * value)
	{
		___m_Stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatch_0), value);
	}

	inline static int32_t get_offset_of_m_Parent_1() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_StopwatchObject_t551336511, ___m_Parent_1)); }
	inline GlobalPerformanceStopwatch_t2396865958 * get_m_Parent_1() const { return ___m_Parent_1; }
	inline GlobalPerformanceStopwatch_t2396865958 ** get_address_of_m_Parent_1() { return &___m_Parent_1; }
	inline void set_m_Parent_1(GlobalPerformanceStopwatch_t2396865958 * value)
	{
		___m_Parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T551336511_H
#ifndef DYNAMICEXPRESSION_T83100786_H
#define DYNAMICEXPRESSION_T83100786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynamicExpression
struct  DynamicExpression_t83100786  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Tree.Expressions.DynamicExprExpression MoonSharp.Interpreter.DynamicExpression::m_Exp
	DynamicExprExpression_t1779642483 * ___m_Exp_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynamicExpression::m_Constant
	DynValue_t2222874421 * ___m_Constant_1;
	// System.String MoonSharp.Interpreter.DynamicExpression::ExpressionCode
	String_t* ___ExpressionCode_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.DynamicExpression::<OwnerScript>k__BackingField
	Script_t454308935 * ___U3COwnerScriptU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Exp_0() { return static_cast<int32_t>(offsetof(DynamicExpression_t83100786, ___m_Exp_0)); }
	inline DynamicExprExpression_t1779642483 * get_m_Exp_0() const { return ___m_Exp_0; }
	inline DynamicExprExpression_t1779642483 ** get_address_of_m_Exp_0() { return &___m_Exp_0; }
	inline void set_m_Exp_0(DynamicExprExpression_t1779642483 * value)
	{
		___m_Exp_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exp_0), value);
	}

	inline static int32_t get_offset_of_m_Constant_1() { return static_cast<int32_t>(offsetof(DynamicExpression_t83100786, ___m_Constant_1)); }
	inline DynValue_t2222874421 * get_m_Constant_1() const { return ___m_Constant_1; }
	inline DynValue_t2222874421 ** get_address_of_m_Constant_1() { return &___m_Constant_1; }
	inline void set_m_Constant_1(DynValue_t2222874421 * value)
	{
		___m_Constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Constant_1), value);
	}

	inline static int32_t get_offset_of_ExpressionCode_2() { return static_cast<int32_t>(offsetof(DynamicExpression_t83100786, ___ExpressionCode_2)); }
	inline String_t* get_ExpressionCode_2() const { return ___ExpressionCode_2; }
	inline String_t** get_address_of_ExpressionCode_2() { return &___ExpressionCode_2; }
	inline void set_ExpressionCode_2(String_t* value)
	{
		___ExpressionCode_2 = value;
		Il2CppCodeGenWriteBarrier((&___ExpressionCode_2), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DynamicExpression_t83100786, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t454308935 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t454308935 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t454308935 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSION_T83100786_H
#ifndef INSTRUCTIONFIELDUSAGE_EXTENSIONS_T1575649520_H
#define INSTRUCTIONFIELDUSAGE_EXTENSIONS_T1575649520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.InstructionFieldUsage_Extensions
struct  InstructionFieldUsage_Extensions_t1575649520  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTIONFIELDUSAGE_EXTENSIONS_T1575649520_H
#ifndef BUILDTIMESCOPE_T159247152_H
#define BUILDTIMESCOPE_T159247152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.BuildTimeScope
struct  BuildTimeScope_t159247152  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame> MoonSharp.Interpreter.Execution.BuildTimeScope::m_Frames
	List_1_t1627526362 * ___m_Frames_0;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.IClosureBuilder> MoonSharp.Interpreter.Execution.BuildTimeScope::m_ClosureBuilders
	List_1_t522056441 * ___m_ClosureBuilders_1;

public:
	inline static int32_t get_offset_of_m_Frames_0() { return static_cast<int32_t>(offsetof(BuildTimeScope_t159247152, ___m_Frames_0)); }
	inline List_1_t1627526362 * get_m_Frames_0() const { return ___m_Frames_0; }
	inline List_1_t1627526362 ** get_address_of_m_Frames_0() { return &___m_Frames_0; }
	inline void set_m_Frames_0(List_1_t1627526362 * value)
	{
		___m_Frames_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Frames_0), value);
	}

	inline static int32_t get_offset_of_m_ClosureBuilders_1() { return static_cast<int32_t>(offsetof(BuildTimeScope_t159247152, ___m_ClosureBuilders_1)); }
	inline List_1_t522056441 * get_m_ClosureBuilders_1() const { return ___m_ClosureBuilders_1; }
	inline List_1_t522056441 ** get_address_of_m_ClosureBuilders_1() { return &___m_ClosureBuilders_1; }
	inline void set_m_ClosureBuilders_1(List_1_t522056441 * value)
	{
		___m_ClosureBuilders_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClosureBuilders_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTIMESCOPE_T159247152_H
#ifndef BUILDTIMESCOPEBLOCK_T1386672061_H
#define BUILDTIMESCOPEBLOCK_T1386672061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock
struct  BuildTimeScopeBlock_t1386672061  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<Parent>k__BackingField
	BuildTimeScopeBlock_t1386672061 * ___U3CParentU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<ChildNodes>k__BackingField
	List_1_t93862779 * ___U3CChildNodesU3Ek__BackingField_1;
	// MoonSharp.Interpreter.Execution.RuntimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<ScopeBlock>k__BackingField
	RuntimeScopeBlock_t854770072 * ___U3CScopeBlockU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.SymbolRef> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_DefinedNames
	Dictionary_2_t2422667415 * ___m_DefinedNames_3;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Tree.Statements.GotoStatement> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_PendingGotos
	List_1_t589112250 * ___m_PendingGotos_4;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Tree.Statements.LabelStatement> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_LocalLabels
	Dictionary_2_t414421279 * ___m_LocalLabels_5;
	// System.String MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_LastDefinedName
	String_t* ___m_LastDefinedName_6;

public:
	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t1386672061, ___U3CParentU3Ek__BackingField_0)); }
	inline BuildTimeScopeBlock_t1386672061 * get_U3CParentU3Ek__BackingField_0() const { return ___U3CParentU3Ek__BackingField_0; }
	inline BuildTimeScopeBlock_t1386672061 ** get_address_of_U3CParentU3Ek__BackingField_0() { return &___U3CParentU3Ek__BackingField_0; }
	inline void set_U3CParentU3Ek__BackingField_0(BuildTimeScopeBlock_t1386672061 * value)
	{
		___U3CParentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParentU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CChildNodesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t1386672061, ___U3CChildNodesU3Ek__BackingField_1)); }
	inline List_1_t93862779 * get_U3CChildNodesU3Ek__BackingField_1() const { return ___U3CChildNodesU3Ek__BackingField_1; }
	inline List_1_t93862779 ** get_address_of_U3CChildNodesU3Ek__BackingField_1() { return &___U3CChildNodesU3Ek__BackingField_1; }
	inline void set_U3CChildNodesU3Ek__BackingField_1(List_1_t93862779 * value)
	{
		___U3CChildNodesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CChildNodesU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CScopeBlockU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t1386672061, ___U3CScopeBlockU3Ek__BackingField_2)); }
	inline RuntimeScopeBlock_t854770072 * get_U3CScopeBlockU3Ek__BackingField_2() const { return ___U3CScopeBlockU3Ek__BackingField_2; }
	inline RuntimeScopeBlock_t854770072 ** get_address_of_U3CScopeBlockU3Ek__BackingField_2() { return &___U3CScopeBlockU3Ek__BackingField_2; }
	inline void set_U3CScopeBlockU3Ek__BackingField_2(RuntimeScopeBlock_t854770072 * value)
	{
		___U3CScopeBlockU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScopeBlockU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_DefinedNames_3() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t1386672061, ___m_DefinedNames_3)); }
	inline Dictionary_2_t2422667415 * get_m_DefinedNames_3() const { return ___m_DefinedNames_3; }
	inline Dictionary_2_t2422667415 ** get_address_of_m_DefinedNames_3() { return &___m_DefinedNames_3; }
	inline void set_m_DefinedNames_3(Dictionary_2_t2422667415 * value)
	{
		___m_DefinedNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefinedNames_3), value);
	}

	inline static int32_t get_offset_of_m_PendingGotos_4() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t1386672061, ___m_PendingGotos_4)); }
	inline List_1_t589112250 * get_m_PendingGotos_4() const { return ___m_PendingGotos_4; }
	inline List_1_t589112250 ** get_address_of_m_PendingGotos_4() { return &___m_PendingGotos_4; }
	inline void set_m_PendingGotos_4(List_1_t589112250 * value)
	{
		___m_PendingGotos_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PendingGotos_4), value);
	}

	inline static int32_t get_offset_of_m_LocalLabels_5() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t1386672061, ___m_LocalLabels_5)); }
	inline Dictionary_2_t414421279 * get_m_LocalLabels_5() const { return ___m_LocalLabels_5; }
	inline Dictionary_2_t414421279 ** get_address_of_m_LocalLabels_5() { return &___m_LocalLabels_5; }
	inline void set_m_LocalLabels_5(Dictionary_2_t414421279 * value)
	{
		___m_LocalLabels_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalLabels_5), value);
	}

	inline static int32_t get_offset_of_m_LastDefinedName_6() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t1386672061, ___m_LastDefinedName_6)); }
	inline String_t* get_m_LastDefinedName_6() const { return ___m_LastDefinedName_6; }
	inline String_t** get_address_of_m_LastDefinedName_6() { return &___m_LastDefinedName_6; }
	inline void set_m_LastDefinedName_6(String_t* value)
	{
		___m_LastDefinedName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDefinedName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTIMESCOPEBLOCK_T1386672061_H
#ifndef BUILDTIMESCOPEFRAME_T2920335644_H
#define BUILDTIMESCOPEFRAME_T2920335644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame
struct  BuildTimeScopeFrame_t2920335644  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeTreeRoot
	BuildTimeScopeBlock_t1386672061 * ___m_ScopeTreeRoot_0;
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeTreeHead
	BuildTimeScopeBlock_t1386672061 * ___m_ScopeTreeHead_1;
	// MoonSharp.Interpreter.Execution.RuntimeScopeFrame MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeFrame
	RuntimeScopeFrame_t2464632172 * ___m_ScopeFrame_2;
	// System.Boolean MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::<HasVarArgs>k__BackingField
	bool ___U3CHasVarArgsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_ScopeTreeRoot_0() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t2920335644, ___m_ScopeTreeRoot_0)); }
	inline BuildTimeScopeBlock_t1386672061 * get_m_ScopeTreeRoot_0() const { return ___m_ScopeTreeRoot_0; }
	inline BuildTimeScopeBlock_t1386672061 ** get_address_of_m_ScopeTreeRoot_0() { return &___m_ScopeTreeRoot_0; }
	inline void set_m_ScopeTreeRoot_0(BuildTimeScopeBlock_t1386672061 * value)
	{
		___m_ScopeTreeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeTreeRoot_0), value);
	}

	inline static int32_t get_offset_of_m_ScopeTreeHead_1() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t2920335644, ___m_ScopeTreeHead_1)); }
	inline BuildTimeScopeBlock_t1386672061 * get_m_ScopeTreeHead_1() const { return ___m_ScopeTreeHead_1; }
	inline BuildTimeScopeBlock_t1386672061 ** get_address_of_m_ScopeTreeHead_1() { return &___m_ScopeTreeHead_1; }
	inline void set_m_ScopeTreeHead_1(BuildTimeScopeBlock_t1386672061 * value)
	{
		___m_ScopeTreeHead_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeTreeHead_1), value);
	}

	inline static int32_t get_offset_of_m_ScopeFrame_2() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t2920335644, ___m_ScopeFrame_2)); }
	inline RuntimeScopeFrame_t2464632172 * get_m_ScopeFrame_2() const { return ___m_ScopeFrame_2; }
	inline RuntimeScopeFrame_t2464632172 ** get_address_of_m_ScopeFrame_2() { return &___m_ScopeFrame_2; }
	inline void set_m_ScopeFrame_2(RuntimeScopeFrame_t2464632172 * value)
	{
		___m_ScopeFrame_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeFrame_2), value);
	}

	inline static int32_t get_offset_of_U3CHasVarArgsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t2920335644, ___U3CHasVarArgsU3Ek__BackingField_3)); }
	inline bool get_U3CHasVarArgsU3Ek__BackingField_3() const { return ___U3CHasVarArgsU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasVarArgsU3Ek__BackingField_3() { return &___U3CHasVarArgsU3Ek__BackingField_3; }
	inline void set_U3CHasVarArgsU3Ek__BackingField_3(bool value)
	{
		___U3CHasVarArgsU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTIMESCOPEFRAME_T2920335644_H
#ifndef LOOPTRACKER_T3246466408_H
#define LOOPTRACKER_T3246466408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.LoopTracker
struct  LoopTracker_t3246466408  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.ILoop> MoonSharp.Interpreter.Execution.LoopTracker::Loops
	FastStack_1_t1767126675 * ___Loops_0;

public:
	inline static int32_t get_offset_of_Loops_0() { return static_cast<int32_t>(offsetof(LoopTracker_t3246466408, ___Loops_0)); }
	inline FastStack_1_t1767126675 * get_Loops_0() const { return ___Loops_0; }
	inline FastStack_1_t1767126675 ** get_address_of_Loops_0() { return &___Loops_0; }
	inline void set_Loops_0(FastStack_1_t1767126675 * value)
	{
		___Loops_0 = value;
		Il2CppCodeGenWriteBarrier((&___Loops_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPTRACKER_T3246466408_H
#ifndef RUNTIMESCOPEBLOCK_T854770072_H
#define RUNTIMESCOPEBLOCK_T854770072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.RuntimeScopeBlock
struct  RuntimeScopeBlock_t854770072  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<From>k__BackingField
	int32_t ___U3CFromU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<To>k__BackingField
	int32_t ___U3CToU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<ToInclusive>k__BackingField
	int32_t ___U3CToInclusiveU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFromU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t854770072, ___U3CFromU3Ek__BackingField_0)); }
	inline int32_t get_U3CFromU3Ek__BackingField_0() const { return ___U3CFromU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CFromU3Ek__BackingField_0() { return &___U3CFromU3Ek__BackingField_0; }
	inline void set_U3CFromU3Ek__BackingField_0(int32_t value)
	{
		___U3CFromU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CToU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t854770072, ___U3CToU3Ek__BackingField_1)); }
	inline int32_t get_U3CToU3Ek__BackingField_1() const { return ___U3CToU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CToU3Ek__BackingField_1() { return &___U3CToU3Ek__BackingField_1; }
	inline void set_U3CToU3Ek__BackingField_1(int32_t value)
	{
		___U3CToU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CToInclusiveU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t854770072, ___U3CToInclusiveU3Ek__BackingField_2)); }
	inline int32_t get_U3CToInclusiveU3Ek__BackingField_2() const { return ___U3CToInclusiveU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CToInclusiveU3Ek__BackingField_2() { return &___U3CToInclusiveU3Ek__BackingField_2; }
	inline void set_U3CToInclusiveU3Ek__BackingField_2(int32_t value)
	{
		___U3CToInclusiveU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESCOPEBLOCK_T854770072_H
#ifndef RUNTIMESCOPEFRAME_T2464632172_H
#define RUNTIMESCOPEFRAME_T2464632172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.RuntimeScopeFrame
struct  RuntimeScopeFrame_t2464632172  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.SymbolRef> MoonSharp.Interpreter.Execution.RuntimeScopeFrame::<DebugSymbols>k__BackingField
	List_1_t1182494902 * ___U3CDebugSymbolsU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeFrame::<ToFirstBlock>k__BackingField
	int32_t ___U3CToFirstBlockU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CDebugSymbolsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeScopeFrame_t2464632172, ___U3CDebugSymbolsU3Ek__BackingField_0)); }
	inline List_1_t1182494902 * get_U3CDebugSymbolsU3Ek__BackingField_0() const { return ___U3CDebugSymbolsU3Ek__BackingField_0; }
	inline List_1_t1182494902 ** get_address_of_U3CDebugSymbolsU3Ek__BackingField_0() { return &___U3CDebugSymbolsU3Ek__BackingField_0; }
	inline void set_U3CDebugSymbolsU3Ek__BackingField_0(List_1_t1182494902 * value)
	{
		___U3CDebugSymbolsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDebugSymbolsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CToFirstBlockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RuntimeScopeFrame_t2464632172, ___U3CToFirstBlockU3Ek__BackingField_1)); }
	inline int32_t get_U3CToFirstBlockU3Ek__BackingField_1() const { return ___U3CToFirstBlockU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CToFirstBlockU3Ek__BackingField_1() { return &___U3CToFirstBlockU3Ek__BackingField_1; }
	inline void set_U3CToFirstBlockU3Ek__BackingField_1(int32_t value)
	{
		___U3CToFirstBlockU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESCOPEFRAME_T2464632172_H
#ifndef SCRIPTEXECUTIONCONTEXT_T1101131097_H
#define SCRIPTEXECUTIONCONTEXT_T1101131097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptExecutionContext
struct  ScriptExecutionContext_t1101131097  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.ScriptExecutionContext::m_Processor
	Processor_t1734942896 * ___m_Processor_0;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.ScriptExecutionContext::m_Callback
	CallbackFunction_t1839439212 * ___m_Callback_1;
	// System.Boolean MoonSharp.Interpreter.ScriptExecutionContext::<IsDynamicExecution>k__BackingField
	bool ___U3CIsDynamicExecutionU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.ScriptExecutionContext::<CallingLocation>k__BackingField
	SourceRef_t3827830669 * ___U3CCallingLocationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Processor_0() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t1101131097, ___m_Processor_0)); }
	inline Processor_t1734942896 * get_m_Processor_0() const { return ___m_Processor_0; }
	inline Processor_t1734942896 ** get_address_of_m_Processor_0() { return &___m_Processor_0; }
	inline void set_m_Processor_0(Processor_t1734942896 * value)
	{
		___m_Processor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_0), value);
	}

	inline static int32_t get_offset_of_m_Callback_1() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t1101131097, ___m_Callback_1)); }
	inline CallbackFunction_t1839439212 * get_m_Callback_1() const { return ___m_Callback_1; }
	inline CallbackFunction_t1839439212 ** get_address_of_m_Callback_1() { return &___m_Callback_1; }
	inline void set_m_Callback_1(CallbackFunction_t1839439212 * value)
	{
		___m_Callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Callback_1), value);
	}

	inline static int32_t get_offset_of_U3CIsDynamicExecutionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t1101131097, ___U3CIsDynamicExecutionU3Ek__BackingField_2)); }
	inline bool get_U3CIsDynamicExecutionU3Ek__BackingField_2() const { return ___U3CIsDynamicExecutionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsDynamicExecutionU3Ek__BackingField_2() { return &___U3CIsDynamicExecutionU3Ek__BackingField_2; }
	inline void set_U3CIsDynamicExecutionU3Ek__BackingField_2(bool value)
	{
		___U3CIsDynamicExecutionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCallingLocationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t1101131097, ___U3CCallingLocationU3Ek__BackingField_3)); }
	inline SourceRef_t3827830669 * get_U3CCallingLocationU3Ek__BackingField_3() const { return ___U3CCallingLocationU3Ek__BackingField_3; }
	inline SourceRef_t3827830669 ** get_address_of_U3CCallingLocationU3Ek__BackingField_3() { return &___U3CCallingLocationU3Ek__BackingField_3; }
	inline void set_U3CCallingLocationU3Ek__BackingField_3(SourceRef_t3827830669 * value)
	{
		___U3CCallingLocationU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCallingLocationU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTEXECUTIONCONTEXT_T1101131097_H
#ifndef SCRIPTLOADINGCONTEXT_T3598415562_H
#define SCRIPTLOADINGCONTEXT_T3598415562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.ScriptLoadingContext
struct  ScriptLoadingContext_t3598415562  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Script>k__BackingField
	Script_t454308935 * ___U3CScriptU3Ek__BackingField_0;
	// MoonSharp.Interpreter.Execution.BuildTimeScope MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Scope>k__BackingField
	BuildTimeScope_t159247152 * ___U3CScopeU3Ek__BackingField_1;
	// MoonSharp.Interpreter.Debugging.SourceCode MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Source>k__BackingField
	SourceCode_t1164375887 * ___U3CSourceU3Ek__BackingField_2;
	// System.Boolean MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Anonymous>k__BackingField
	bool ___U3CAnonymousU3Ek__BackingField_3;
	// System.Boolean MoonSharp.Interpreter.Execution.ScriptLoadingContext::<IsDynamicExpression>k__BackingField
	bool ___U3CIsDynamicExpressionU3Ek__BackingField_4;
	// MoonSharp.Interpreter.Tree.Lexer MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Lexer>k__BackingField
	Lexer_t246105359 * ___U3CLexerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CScriptU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t3598415562, ___U3CScriptU3Ek__BackingField_0)); }
	inline Script_t454308935 * get_U3CScriptU3Ek__BackingField_0() const { return ___U3CScriptU3Ek__BackingField_0; }
	inline Script_t454308935 ** get_address_of_U3CScriptU3Ek__BackingField_0() { return &___U3CScriptU3Ek__BackingField_0; }
	inline void set_U3CScriptU3Ek__BackingField_0(Script_t454308935 * value)
	{
		___U3CScriptU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScriptU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CScopeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t3598415562, ___U3CScopeU3Ek__BackingField_1)); }
	inline BuildTimeScope_t159247152 * get_U3CScopeU3Ek__BackingField_1() const { return ___U3CScopeU3Ek__BackingField_1; }
	inline BuildTimeScope_t159247152 ** get_address_of_U3CScopeU3Ek__BackingField_1() { return &___U3CScopeU3Ek__BackingField_1; }
	inline void set_U3CScopeU3Ek__BackingField_1(BuildTimeScope_t159247152 * value)
	{
		___U3CScopeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScopeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t3598415562, ___U3CSourceU3Ek__BackingField_2)); }
	inline SourceCode_t1164375887 * get_U3CSourceU3Ek__BackingField_2() const { return ___U3CSourceU3Ek__BackingField_2; }
	inline SourceCode_t1164375887 ** get_address_of_U3CSourceU3Ek__BackingField_2() { return &___U3CSourceU3Ek__BackingField_2; }
	inline void set_U3CSourceU3Ek__BackingField_2(SourceCode_t1164375887 * value)
	{
		___U3CSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CAnonymousU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t3598415562, ___U3CAnonymousU3Ek__BackingField_3)); }
	inline bool get_U3CAnonymousU3Ek__BackingField_3() const { return ___U3CAnonymousU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAnonymousU3Ek__BackingField_3() { return &___U3CAnonymousU3Ek__BackingField_3; }
	inline void set_U3CAnonymousU3Ek__BackingField_3(bool value)
	{
		___U3CAnonymousU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsDynamicExpressionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t3598415562, ___U3CIsDynamicExpressionU3Ek__BackingField_4)); }
	inline bool get_U3CIsDynamicExpressionU3Ek__BackingField_4() const { return ___U3CIsDynamicExpressionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsDynamicExpressionU3Ek__BackingField_4() { return &___U3CIsDynamicExpressionU3Ek__BackingField_4; }
	inline void set_U3CIsDynamicExpressionU3Ek__BackingField_4(bool value)
	{
		___U3CIsDynamicExpressionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLexerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t3598415562, ___U3CLexerU3Ek__BackingField_5)); }
	inline Lexer_t246105359 * get_U3CLexerU3Ek__BackingField_5() const { return ___U3CLexerU3Ek__BackingField_5; }
	inline Lexer_t246105359 ** get_address_of_U3CLexerU3Ek__BackingField_5() { return &___U3CLexerU3Ek__BackingField_5; }
	inline void set_U3CLexerU3Ek__BackingField_5(Lexer_t246105359 * value)
	{
		___U3CLexerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLexerU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTLOADINGCONTEXT_T3598415562_H
#ifndef SOURCECODESTACKGUARD_T300475048_H
#define SOURCECODESTACKGUARD_T300475048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ByteCode/SourceCodeStackGuard
struct  SourceCodeStackGuard_t300475048  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.ByteCode MoonSharp.Interpreter.Execution.VM.ByteCode/SourceCodeStackGuard::m_Bc
	ByteCode_t1511227056 * ___m_Bc_0;

public:
	inline static int32_t get_offset_of_m_Bc_0() { return static_cast<int32_t>(offsetof(SourceCodeStackGuard_t300475048, ___m_Bc_0)); }
	inline ByteCode_t1511227056 * get_m_Bc_0() const { return ___m_Bc_0; }
	inline ByteCode_t1511227056 ** get_address_of_m_Bc_0() { return &___m_Bc_0; }
	inline void set_m_Bc_0(ByteCode_t1511227056 * value)
	{
		___m_Bc_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Bc_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECODESTACKGUARD_T300475048_H
#ifndef U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T2683219178_H
#define U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T2683219178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0
struct  U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t2683219178  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.ScriptExecutionContext MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0::context
	ScriptExecutionContext_t1101131097 * ___context_0;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0::$this
	Processor_t1734942896 * ___U24this_1;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t2683219178, ___context_0)); }
	inline ScriptExecutionContext_t1101131097 * get_context_0() const { return ___context_0; }
	inline ScriptExecutionContext_t1101131097 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(ScriptExecutionContext_t1101131097 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t2683219178, ___U24this_1)); }
	inline Processor_t1734942896 * get_U24this_1() const { return ___U24this_1; }
	inline Processor_t1734942896 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Processor_t1734942896 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T2683219178_H
#ifndef DISPATCHINGUSERDATADESCRIPTOR_T1769900806_H
#define DISPATCHINGUSERDATADESCRIPTOR_T1769900806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor
struct  DispatchingUserDataDescriptor_t1769900806  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_ExtMethodsVersion
	int32_t ___m_ExtMethodsVersion_0;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_MetaMembers
	Dictionary_2_t2921112705 * ___m_MetaMembers_1;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_Members
	Dictionary_2_t2921112705 * ___m_Members_2;
	// System.String MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
	// System.Type MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_8;
	// System.String MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<FriendlyName>k__BackingField
	String_t* ___U3CFriendlyNameU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_ExtMethodsVersion_0() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1769900806, ___m_ExtMethodsVersion_0)); }
	inline int32_t get_m_ExtMethodsVersion_0() const { return ___m_ExtMethodsVersion_0; }
	inline int32_t* get_address_of_m_ExtMethodsVersion_0() { return &___m_ExtMethodsVersion_0; }
	inline void set_m_ExtMethodsVersion_0(int32_t value)
	{
		___m_ExtMethodsVersion_0 = value;
	}

	inline static int32_t get_offset_of_m_MetaMembers_1() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1769900806, ___m_MetaMembers_1)); }
	inline Dictionary_2_t2921112705 * get_m_MetaMembers_1() const { return ___m_MetaMembers_1; }
	inline Dictionary_2_t2921112705 ** get_address_of_m_MetaMembers_1() { return &___m_MetaMembers_1; }
	inline void set_m_MetaMembers_1(Dictionary_2_t2921112705 * value)
	{
		___m_MetaMembers_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaMembers_1), value);
	}

	inline static int32_t get_offset_of_m_Members_2() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1769900806, ___m_Members_2)); }
	inline Dictionary_2_t2921112705 * get_m_Members_2() const { return ___m_Members_2; }
	inline Dictionary_2_t2921112705 ** get_address_of_m_Members_2() { return &___m_Members_2; }
	inline void set_m_Members_2(Dictionary_2_t2921112705 * value)
	{
		___m_Members_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Members_2), value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1769900806, ___U3CNameU3Ek__BackingField_7)); }
	inline String_t* get_U3CNameU3Ek__BackingField_7() const { return ___U3CNameU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_7() { return &___U3CNameU3Ek__BackingField_7; }
	inline void set_U3CNameU3Ek__BackingField_7(String_t* value)
	{
		___U3CNameU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1769900806, ___U3CTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_8() const { return ___U3CTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_8() { return &___U3CTypeU3Ek__BackingField_8; }
	inline void set_U3CTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CFriendlyNameU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1769900806, ___U3CFriendlyNameU3Ek__BackingField_9)); }
	inline String_t* get_U3CFriendlyNameU3Ek__BackingField_9() const { return ___U3CFriendlyNameU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CFriendlyNameU3Ek__BackingField_9() { return &___U3CFriendlyNameU3Ek__BackingField_9; }
	inline void set_U3CFriendlyNameU3Ek__BackingField_9(String_t* value)
	{
		___U3CFriendlyNameU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFriendlyNameU3Ek__BackingField_9), value);
	}
};

struct DispatchingUserDataDescriptor_t1769900806_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<>f__switch$map4
	Dictionary_2_t2979567747 * ___U3CU3Ef__switchU24map4_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_10() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1769900806_StaticFields, ___U3CU3Ef__switchU24map4_10)); }
	inline Dictionary_2_t2979567747 * get_U3CU3Ef__switchU24map4_10() const { return ___U3CU3Ef__switchU24map4_10; }
	inline Dictionary_2_t2979567747 ** get_address_of_U3CU3Ef__switchU24map4_10() { return &___U3CU3Ef__switchU24map4_10; }
	inline void set_U3CU3Ef__switchU24map4_10(Dictionary_2_t2979567747 * value)
	{
		___U3CU3Ef__switchU24map4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHINGUSERDATADESCRIPTOR_T1769900806_H
#ifndef U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T2242919992_H
#define U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T2242919992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0
struct  U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t2242919992  : public RuntimeObject
{
public:
	// System.Object MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0::obj
	RuntimeObject * ___obj_0;
	// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0::$this
	DispatchingUserDataDescriptor_t1769900806 * ___U24this_1;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t2242919992, ___obj_0)); }
	inline RuntimeObject * get_obj_0() const { return ___obj_0; }
	inline RuntimeObject ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(RuntimeObject * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((&___obj_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t2242919992, ___U24this_1)); }
	inline DispatchingUserDataDescriptor_t1769900806 * get_U24this_1() const { return ___U24this_1; }
	inline DispatchingUserDataDescriptor_t1769900806 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(DispatchingUserDataDescriptor_t1769900806 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T2242919992_H
#ifndef VALUETYPE_T1744134830_H
#define VALUETYPE_T1744134830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1744134830  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1744134830_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1744134830_marshaled_com
{
};
#endif // VALUETYPE_T1744134830_H
#ifndef EXCEPTION_T1092093850_H
#define EXCEPTION_T1092093850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1092093850  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t433772155* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1092093850 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t433772155* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t433772155** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t433772155* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___inner_exception_1)); }
	inline Exception_t1092093850 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1092093850 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1092093850 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1092093850, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1092093850_H
#ifndef LIST_1_T930065139_H
#define LIST_1_T930065139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MoonSharp.Interpreter.DynValue>
struct  List_1_t930065139  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DynValueU5BU5D_t370998360* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t930065139, ____items_1)); }
	inline DynValueU5BU5D_t370998360* get__items_1() const { return ____items_1; }
	inline DynValueU5BU5D_t370998360** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DynValueU5BU5D_t370998360* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t930065139, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t930065139, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t930065139_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DynValueU5BU5D_t370998360* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t930065139_StaticFields, ___EmptyArray_4)); }
	inline DynValueU5BU5D_t370998360* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DynValueU5BU5D_t370998360** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DynValueU5BU5D_t370998360* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T930065139_H
#ifndef ATTRIBUTE_T911517180_H
#define ATTRIBUTE_T911517180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t911517180  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T911517180_H
#ifndef WELLKNOWNSYMBOLS_T3880468344_H
#define WELLKNOWNSYMBOLS_T3880468344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.WellKnownSymbols
struct  WellKnownSymbols_t3880468344  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSYMBOLS_T3880468344_H
#ifndef TAILCALLDATA_T197920250_H
#define TAILCALLDATA_T197920250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TailCallData
struct  TailCallData_t197920250  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TailCallData::<Function>k__BackingField
	DynValue_t2222874421 * ___U3CFunctionU3Ek__BackingField_0;
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.TailCallData::<Args>k__BackingField
	DynValueU5BU5D_t370998360* ___U3CArgsU3Ek__BackingField_1;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.TailCallData::<Continuation>k__BackingField
	CallbackFunction_t1839439212 * ___U3CContinuationU3Ek__BackingField_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.TailCallData::<ErrorHandler>k__BackingField
	CallbackFunction_t1839439212 * ___U3CErrorHandlerU3Ek__BackingField_3;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TailCallData::<ErrorHandlerBeforeUnwind>k__BackingField
	DynValue_t2222874421 * ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CFunctionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TailCallData_t197920250, ___U3CFunctionU3Ek__BackingField_0)); }
	inline DynValue_t2222874421 * get_U3CFunctionU3Ek__BackingField_0() const { return ___U3CFunctionU3Ek__BackingField_0; }
	inline DynValue_t2222874421 ** get_address_of_U3CFunctionU3Ek__BackingField_0() { return &___U3CFunctionU3Ek__BackingField_0; }
	inline void set_U3CFunctionU3Ek__BackingField_0(DynValue_t2222874421 * value)
	{
		___U3CFunctionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFunctionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CArgsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TailCallData_t197920250, ___U3CArgsU3Ek__BackingField_1)); }
	inline DynValueU5BU5D_t370998360* get_U3CArgsU3Ek__BackingField_1() const { return ___U3CArgsU3Ek__BackingField_1; }
	inline DynValueU5BU5D_t370998360** get_address_of_U3CArgsU3Ek__BackingField_1() { return &___U3CArgsU3Ek__BackingField_1; }
	inline void set_U3CArgsU3Ek__BackingField_1(DynValueU5BU5D_t370998360* value)
	{
		___U3CArgsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CContinuationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TailCallData_t197920250, ___U3CContinuationU3Ek__BackingField_2)); }
	inline CallbackFunction_t1839439212 * get_U3CContinuationU3Ek__BackingField_2() const { return ___U3CContinuationU3Ek__BackingField_2; }
	inline CallbackFunction_t1839439212 ** get_address_of_U3CContinuationU3Ek__BackingField_2() { return &___U3CContinuationU3Ek__BackingField_2; }
	inline void set_U3CContinuationU3Ek__BackingField_2(CallbackFunction_t1839439212 * value)
	{
		___U3CContinuationU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContinuationU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CErrorHandlerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TailCallData_t197920250, ___U3CErrorHandlerU3Ek__BackingField_3)); }
	inline CallbackFunction_t1839439212 * get_U3CErrorHandlerU3Ek__BackingField_3() const { return ___U3CErrorHandlerU3Ek__BackingField_3; }
	inline CallbackFunction_t1839439212 ** get_address_of_U3CErrorHandlerU3Ek__BackingField_3() { return &___U3CErrorHandlerU3Ek__BackingField_3; }
	inline void set_U3CErrorHandlerU3Ek__BackingField_3(CallbackFunction_t1839439212 * value)
	{
		___U3CErrorHandlerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorHandlerU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TailCallData_t197920250, ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4)); }
	inline DynValue_t2222874421 * get_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() const { return ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4; }
	inline DynValue_t2222874421 ** get_address_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() { return &___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4; }
	inline void set_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4(DynValue_t2222874421 * value)
	{
		___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILCALLDATA_T197920250_H
#ifndef PERFORMANCESTATISTICS_T2083900831_H
#define PERFORMANCESTATISTICS_T2083900831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceStatistics
struct  PerformanceStatistics_t2083900831  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[] MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_Stopwatches
	IPerformanceStopwatchU5BU5D_t3409204658* ___m_Stopwatches_0;
	// System.Boolean MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_Enabled
	bool ___m_Enabled_2;

public:
	inline static int32_t get_offset_of_m_Stopwatches_0() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t2083900831, ___m_Stopwatches_0)); }
	inline IPerformanceStopwatchU5BU5D_t3409204658* get_m_Stopwatches_0() const { return ___m_Stopwatches_0; }
	inline IPerformanceStopwatchU5BU5D_t3409204658** get_address_of_m_Stopwatches_0() { return &___m_Stopwatches_0; }
	inline void set_m_Stopwatches_0(IPerformanceStopwatchU5BU5D_t3409204658* value)
	{
		___m_Stopwatches_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatches_0), value);
	}

	inline static int32_t get_offset_of_m_Enabled_2() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t2083900831, ___m_Enabled_2)); }
	inline bool get_m_Enabled_2() const { return ___m_Enabled_2; }
	inline bool* get_address_of_m_Enabled_2() { return &___m_Enabled_2; }
	inline void set_m_Enabled_2(bool value)
	{
		___m_Enabled_2 = value;
	}
};

struct PerformanceStatistics_t2083900831_StaticFields
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[] MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_GlobalStopwatches
	IPerformanceStopwatchU5BU5D_t3409204658* ___m_GlobalStopwatches_1;

public:
	inline static int32_t get_offset_of_m_GlobalStopwatches_1() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t2083900831_StaticFields, ___m_GlobalStopwatches_1)); }
	inline IPerformanceStopwatchU5BU5D_t3409204658* get_m_GlobalStopwatches_1() const { return ___m_GlobalStopwatches_1; }
	inline IPerformanceStopwatchU5BU5D_t3409204658** get_address_of_m_GlobalStopwatches_1() { return &___m_GlobalStopwatches_1; }
	inline void set_m_GlobalStopwatches_1(IPerformanceStopwatchU5BU5D_t3409204658* value)
	{
		___m_GlobalStopwatches_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GlobalStopwatches_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCESTATISTICS_T2083900831_H
#ifndef REFIDOBJECT_T2239295642_H
#define REFIDOBJECT_T2239295642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.RefIdObject
struct  RefIdObject_t2239295642  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.RefIdObject::m_RefID
	int32_t ___m_RefID_1;

public:
	inline static int32_t get_offset_of_m_RefID_1() { return static_cast<int32_t>(offsetof(RefIdObject_t2239295642, ___m_RefID_1)); }
	inline int32_t get_m_RefID_1() const { return ___m_RefID_1; }
	inline int32_t* get_address_of_m_RefID_1() { return &___m_RefID_1; }
	inline void set_m_RefID_1(int32_t value)
	{
		___m_RefID_1 = value;
	}
};

struct RefIdObject_t2239295642_StaticFields
{
public:
	// System.Int32 MoonSharp.Interpreter.RefIdObject::s_RefIDCounter
	int32_t ___s_RefIDCounter_0;

public:
	inline static int32_t get_offset_of_s_RefIDCounter_0() { return static_cast<int32_t>(offsetof(RefIdObject_t2239295642_StaticFields, ___s_RefIDCounter_0)); }
	inline int32_t get_s_RefIDCounter_0() const { return ___s_RefIDCounter_0; }
	inline int32_t* get_address_of_s_RefIDCounter_0() { return &___s_RefIDCounter_0; }
	inline void set_s_RefIDCounter_0(int32_t value)
	{
		___s_RefIDCounter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFIDOBJECT_T2239295642_H
#ifndef U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T1365674214_H
#define U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T1365674214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0
struct  U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$this
	Coroutine_t3333720231 * ___U24this_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$current
	DynValue_t2222874421 * ___U24current_1;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214, ___U24this_0)); }
	inline Coroutine_t3333720231 * get_U24this_0() const { return ___U24this_0; }
	inline Coroutine_t3333720231 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Coroutine_t3333720231 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214, ___U24current_1)); }
	inline DynValue_t2222874421 * get_U24current_1() const { return ___U24current_1; }
	inline DynValue_t2222874421 ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(DynValue_t2222874421 * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T1365674214_H
#ifndef U3CASENUMERABLEU3EC__ITERATOR1_T3984748052_H
#define U3CASENUMERABLEU3EC__ITERATOR1_T3984748052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1
struct  U3CAsEnumerableU3Ec__Iterator1_t3984748052  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::<v>__1
	DynValue_t2222874421 * ___U3CvU3E__1_1;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$this
	Coroutine_t3333720231 * ___U24this_2;
	// System.Object MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t3984748052, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CvU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t3984748052, ___U3CvU3E__1_1)); }
	inline DynValue_t2222874421 * get_U3CvU3E__1_1() const { return ___U3CvU3E__1_1; }
	inline DynValue_t2222874421 ** get_address_of_U3CvU3E__1_1() { return &___U3CvU3E__1_1; }
	inline void set_U3CvU3E__1_1(DynValue_t2222874421 * value)
	{
		___U3CvU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t3984748052, ___U24this_2)); }
	inline Coroutine_t3333720231 * get_U24this_2() const { return ___U24this_2; }
	inline Coroutine_t3333720231 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Coroutine_t3333720231 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t3984748052, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t3984748052, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t3984748052, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CASENUMERABLEU3EC__ITERATOR1_T3984748052_H
#ifndef U3CASUNITYCOROUTINEU3EC__ITERATOR3_T285561106_H
#define U3CASUNITYCOROUTINEU3EC__ITERATOR3_T285561106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3
struct  U3CAsUnityCoroutineU3Ec__Iterator3_t285561106  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::<v>__1
	DynValue_t2222874421 * ___U3CvU3E__1_1;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$this
	Coroutine_t3333720231 * ___U24this_2;
	// System.Object MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$disposing
	bool ___U24disposing_4;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t285561106, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CvU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t285561106, ___U3CvU3E__1_1)); }
	inline DynValue_t2222874421 * get_U3CvU3E__1_1() const { return ___U3CvU3E__1_1; }
	inline DynValue_t2222874421 ** get_address_of_U3CvU3E__1_1() { return &___U3CvU3E__1_1; }
	inline void set_U3CvU3E__1_1(DynValue_t2222874421 * value)
	{
		___U3CvU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t285561106, ___U24this_2)); }
	inline Coroutine_t3333720231 * get_U24this_2() const { return ___U24this_2; }
	inline Coroutine_t3333720231 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Coroutine_t3333720231 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t285561106, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t285561106, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t285561106, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CASUNITYCOROUTINEU3EC__ITERATOR3_T285561106_H
#ifndef STRINGRANGE_T4202265764_H
#define STRINGRANGE_T4202265764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.StringLib.StringRange
struct  StringRange_t4202265764  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.CoreLib.StringLib.StringRange::<Start>k__BackingField
	int32_t ___U3CStartU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.CoreLib.StringLib.StringRange::<End>k__BackingField
	int32_t ___U3CEndU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStartU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StringRange_t4202265764, ___U3CStartU3Ek__BackingField_0)); }
	inline int32_t get_U3CStartU3Ek__BackingField_0() const { return ___U3CStartU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStartU3Ek__BackingField_0() { return &___U3CStartU3Ek__BackingField_0; }
	inline void set_U3CStartU3Ek__BackingField_0(int32_t value)
	{
		___U3CStartU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CEndU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StringRange_t4202265764, ___U3CEndU3Ek__BackingField_1)); }
	inline int32_t get_U3CEndU3Ek__BackingField_1() const { return ___U3CEndU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CEndU3Ek__BackingField_1() { return &___U3CEndU3Ek__BackingField_1; }
	inline void set_U3CEndU3Ek__BackingField_1(int32_t value)
	{
		___U3CEndU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGRANGE_T4202265764_H
#ifndef STRINGMODULE_T1717828019_H
#define STRINGMODULE_T1717828019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.StringModule
struct  StringModule_t1717828019  : public RuntimeObject
{
public:

public:
};

struct StringModule_t1717828019_StaticFields
{
public:
	// System.Func`2<System.Int32,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache0
	Func_2_t4249116836 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.Int32,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__am$cache0
	Func_2_t4249116836 * ___U3CU3Ef__amU24cache0_2;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache1
	Func_2_t72509793 * ___U3CU3Ef__mgU24cache1_3;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache2
	Func_2_t72509793 * ___U3CU3Ef__mgU24cache2_4;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache3
	Func_2_t72509793 * ___U3CU3Ef__mgU24cache3_5;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache4
	Func_2_t72509793 * ___U3CU3Ef__mgU24cache4_6;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache5
	Func_2_t72509793 * ___U3CU3Ef__mgU24cache5_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(StringModule_t1717828019_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t4249116836 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t4249116836 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t4249116836 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(StringModule_t1717828019_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_2_t4249116836 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_2_t4249116836 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_2_t4249116836 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_3() { return static_cast<int32_t>(offsetof(StringModule_t1717828019_StaticFields, ___U3CU3Ef__mgU24cache1_3)); }
	inline Func_2_t72509793 * get_U3CU3Ef__mgU24cache1_3() const { return ___U3CU3Ef__mgU24cache1_3; }
	inline Func_2_t72509793 ** get_address_of_U3CU3Ef__mgU24cache1_3() { return &___U3CU3Ef__mgU24cache1_3; }
	inline void set_U3CU3Ef__mgU24cache1_3(Func_2_t72509793 * value)
	{
		___U3CU3Ef__mgU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_4() { return static_cast<int32_t>(offsetof(StringModule_t1717828019_StaticFields, ___U3CU3Ef__mgU24cache2_4)); }
	inline Func_2_t72509793 * get_U3CU3Ef__mgU24cache2_4() const { return ___U3CU3Ef__mgU24cache2_4; }
	inline Func_2_t72509793 ** get_address_of_U3CU3Ef__mgU24cache2_4() { return &___U3CU3Ef__mgU24cache2_4; }
	inline void set_U3CU3Ef__mgU24cache2_4(Func_2_t72509793 * value)
	{
		___U3CU3Ef__mgU24cache2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_5() { return static_cast<int32_t>(offsetof(StringModule_t1717828019_StaticFields, ___U3CU3Ef__mgU24cache3_5)); }
	inline Func_2_t72509793 * get_U3CU3Ef__mgU24cache3_5() const { return ___U3CU3Ef__mgU24cache3_5; }
	inline Func_2_t72509793 ** get_address_of_U3CU3Ef__mgU24cache3_5() { return &___U3CU3Ef__mgU24cache3_5; }
	inline void set_U3CU3Ef__mgU24cache3_5(Func_2_t72509793 * value)
	{
		___U3CU3Ef__mgU24cache3_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_6() { return static_cast<int32_t>(offsetof(StringModule_t1717828019_StaticFields, ___U3CU3Ef__mgU24cache4_6)); }
	inline Func_2_t72509793 * get_U3CU3Ef__mgU24cache4_6() const { return ___U3CU3Ef__mgU24cache4_6; }
	inline Func_2_t72509793 ** get_address_of_U3CU3Ef__mgU24cache4_6() { return &___U3CU3Ef__mgU24cache4_6; }
	inline void set_U3CU3Ef__mgU24cache4_6(Func_2_t72509793 * value)
	{
		___U3CU3Ef__mgU24cache4_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_7() { return static_cast<int32_t>(offsetof(StringModule_t1717828019_StaticFields, ___U3CU3Ef__mgU24cache5_7)); }
	inline Func_2_t72509793 * get_U3CU3Ef__mgU24cache5_7() const { return ___U3CU3Ef__mgU24cache5_7; }
	inline Func_2_t72509793 ** get_address_of_U3CU3Ef__mgU24cache5_7() { return &___U3CU3Ef__mgU24cache5_7; }
	inline void set_U3CU3Ef__mgU24cache5_7(Func_2_t72509793 * value)
	{
		___U3CU3Ef__mgU24cache5_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGMODULE_T1717828019_H
#ifndef TABLEITERATORSMODULE_T3302990458_H
#define TABLEITERATORSMODULE_T3302990458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.TableIteratorsModule
struct  TableIteratorsModule_t3302990458  : public RuntimeObject
{
public:

public:
};

struct TableIteratorsModule_t3302990458_StaticFields
{
public:
	// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CoreLib.TableIteratorsModule::<>f__mg$cache0
	Func_3_t3824004487 * ___U3CU3Ef__mgU24cache0_0;
	// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CoreLib.TableIteratorsModule::<>f__mg$cache1
	Func_3_t3824004487 * ___U3CU3Ef__mgU24cache1_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(TableIteratorsModule_t3302990458_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline Func_3_t3824004487 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline Func_3_t3824004487 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(Func_3_t3824004487 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_1() { return static_cast<int32_t>(offsetof(TableIteratorsModule_t3302990458_StaticFields, ___U3CU3Ef__mgU24cache1_1)); }
	inline Func_3_t3824004487 * get_U3CU3Ef__mgU24cache1_1() const { return ___U3CU3Ef__mgU24cache1_1; }
	inline Func_3_t3824004487 ** get_address_of_U3CU3Ef__mgU24cache1_1() { return &___U3CU3Ef__mgU24cache1_1; }
	inline void set_U3CU3Ef__mgU24cache1_1(Func_3_t3824004487 * value)
	{
		___U3CU3Ef__mgU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEITERATORSMODULE_T3302990458_H
#ifndef TABLEMODULE_T591508582_H
#define TABLEMODULE_T591508582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.TableModule
struct  TableModule_t591508582  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEMODULE_T591508582_H
#ifndef REFERENCEEQUALITYCOMPARER_T2728542929_H
#define REFERENCEEQUALITYCOMPARER_T2728542929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DataStructs.ReferenceEqualityComparer
struct  ReferenceEqualityComparer_t2728542929  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCEEQUALITYCOMPARER_T2728542929_H
#ifndef SCRIPTPRIVATERESOURCE_EXTENSION_T1525137011_H
#define SCRIPTPRIVATERESOURCE_EXTENSION_T1525137011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptPrivateResource_Extension
struct  ScriptPrivateResource_Extension_t1525137011  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPRIVATERESOURCE_EXTENSION_T1525137011_H
#ifndef EXTENSION_METHODS_T3757483984_H
#define EXTENSION_METHODS_T3757483984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Extension_Methods
struct  Extension_Methods_t3757483984  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSION_METHODS_T3757483984_H
#ifndef CALLBACKARGUMENTS_T697896535_H
#define CALLBACKARGUMENTS_T697896535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CallbackArguments
struct  CallbackArguments_t697896535  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CallbackArguments::m_Args
	RuntimeObject* ___m_Args_0;
	// System.Int32 MoonSharp.Interpreter.CallbackArguments::m_Count
	int32_t ___m_Count_1;
	// System.Boolean MoonSharp.Interpreter.CallbackArguments::m_LastIsTuple
	bool ___m_LastIsTuple_2;
	// System.Boolean MoonSharp.Interpreter.CallbackArguments::<IsMethodCall>k__BackingField
	bool ___U3CIsMethodCallU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Args_0() { return static_cast<int32_t>(offsetof(CallbackArguments_t697896535, ___m_Args_0)); }
	inline RuntimeObject* get_m_Args_0() const { return ___m_Args_0; }
	inline RuntimeObject** get_address_of_m_Args_0() { return &___m_Args_0; }
	inline void set_m_Args_0(RuntimeObject* value)
	{
		___m_Args_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Args_0), value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(CallbackArguments_t697896535, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}

	inline static int32_t get_offset_of_m_LastIsTuple_2() { return static_cast<int32_t>(offsetof(CallbackArguments_t697896535, ___m_LastIsTuple_2)); }
	inline bool get_m_LastIsTuple_2() const { return ___m_LastIsTuple_2; }
	inline bool* get_address_of_m_LastIsTuple_2() { return &___m_LastIsTuple_2; }
	inline void set_m_LastIsTuple_2(bool value)
	{
		___m_LastIsTuple_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsMethodCallU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CallbackArguments_t697896535, ___U3CIsMethodCallU3Ek__BackingField_3)); }
	inline bool get_U3CIsMethodCallU3Ek__BackingField_3() const { return ___U3CIsMethodCallU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsMethodCallU3Ek__BackingField_3() { return &___U3CIsMethodCallU3Ek__BackingField_3; }
	inline void set_U3CIsMethodCallU3Ek__BackingField_3(bool value)
	{
		___U3CIsMethodCallU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKARGUMENTS_T697896535_H
#ifndef U3CSORTU3EC__ANONSTOREY0_T3351752004_H
#define U3CSORTU3EC__ANONSTOREY0_T3351752004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.TableModule/<sort>c__AnonStorey0
struct  U3CsortU3Ec__AnonStorey0_t3351752004  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.ScriptExecutionContext MoonSharp.Interpreter.CoreLib.TableModule/<sort>c__AnonStorey0::executionContext
	ScriptExecutionContext_t1101131097 * ___executionContext_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.CoreLib.TableModule/<sort>c__AnonStorey0::lt
	DynValue_t2222874421 * ___lt_1;

public:
	inline static int32_t get_offset_of_executionContext_0() { return static_cast<int32_t>(offsetof(U3CsortU3Ec__AnonStorey0_t3351752004, ___executionContext_0)); }
	inline ScriptExecutionContext_t1101131097 * get_executionContext_0() const { return ___executionContext_0; }
	inline ScriptExecutionContext_t1101131097 ** get_address_of_executionContext_0() { return &___executionContext_0; }
	inline void set_executionContext_0(ScriptExecutionContext_t1101131097 * value)
	{
		___executionContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___executionContext_0), value);
	}

	inline static int32_t get_offset_of_lt_1() { return static_cast<int32_t>(offsetof(U3CsortU3Ec__AnonStorey0_t3351752004, ___lt_1)); }
	inline DynValue_t2222874421 * get_lt_1() const { return ___lt_1; }
	inline DynValue_t2222874421 ** get_address_of_lt_1() { return &___lt_1; }
	inline void set_lt_1(DynValue_t2222874421 * value)
	{
		___lt_1 = value;
		Il2CppCodeGenWriteBarrier((&___lt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSORTU3EC__ANONSTOREY0_T3351752004_H
#ifndef TABLEMODULE_GLOBALS_T2369367181_H
#define TABLEMODULE_GLOBALS_T2369367181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.TableModule_Globals
struct  TableModule_Globals_t2369367181  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEMODULE_GLOBALS_T2369367181_H
#ifndef INTERPRETEREXCEPTION_T4252557503_H
#define INTERPRETEREXCEPTION_T4252557503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InterpreterException
struct  InterpreterException_t4252557503  : public Exception_t1092093850
{
public:
	// System.Int32 MoonSharp.Interpreter.InterpreterException::<InstructionPtr>k__BackingField
	int32_t ___U3CInstructionPtrU3Ek__BackingField_11;
	// System.Collections.Generic.IList`1<MoonSharp.Interpreter.Debugging.WatchItem> MoonSharp.Interpreter.InterpreterException::<CallStack>k__BackingField
	RuntimeObject* ___U3CCallStackU3Ek__BackingField_12;
	// System.String MoonSharp.Interpreter.InterpreterException::<DecoratedMessage>k__BackingField
	String_t* ___U3CDecoratedMessageU3Ek__BackingField_13;
	// System.Boolean MoonSharp.Interpreter.InterpreterException::<DoNotDecorateMessage>k__BackingField
	bool ___U3CDoNotDecorateMessageU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CInstructionPtrU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InterpreterException_t4252557503, ___U3CInstructionPtrU3Ek__BackingField_11)); }
	inline int32_t get_U3CInstructionPtrU3Ek__BackingField_11() const { return ___U3CInstructionPtrU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CInstructionPtrU3Ek__BackingField_11() { return &___U3CInstructionPtrU3Ek__BackingField_11; }
	inline void set_U3CInstructionPtrU3Ek__BackingField_11(int32_t value)
	{
		___U3CInstructionPtrU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CCallStackU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InterpreterException_t4252557503, ___U3CCallStackU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CCallStackU3Ek__BackingField_12() const { return ___U3CCallStackU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CCallStackU3Ek__BackingField_12() { return &___U3CCallStackU3Ek__BackingField_12; }
	inline void set_U3CCallStackU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CCallStackU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCallStackU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CDecoratedMessageU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InterpreterException_t4252557503, ___U3CDecoratedMessageU3Ek__BackingField_13)); }
	inline String_t* get_U3CDecoratedMessageU3Ek__BackingField_13() const { return ___U3CDecoratedMessageU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CDecoratedMessageU3Ek__BackingField_13() { return &___U3CDecoratedMessageU3Ek__BackingField_13; }
	inline void set_U3CDecoratedMessageU3Ek__BackingField_13(String_t* value)
	{
		___U3CDecoratedMessageU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDecoratedMessageU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CDoNotDecorateMessageU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InterpreterException_t4252557503, ___U3CDoNotDecorateMessageU3Ek__BackingField_14)); }
	inline bool get_U3CDoNotDecorateMessageU3Ek__BackingField_14() const { return ___U3CDoNotDecorateMessageU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CDoNotDecorateMessageU3Ek__BackingField_14() { return &___U3CDoNotDecorateMessageU3Ek__BackingField_14; }
	inline void set_U3CDoNotDecorateMessageU3Ek__BackingField_14(bool value)
	{
		___U3CDoNotDecorateMessageU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETEREXCEPTION_T4252557503_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef CLOSURECONTEXT_T2663877541_H
#define CLOSURECONTEXT_T2663877541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.ClosureContext
struct  ClosureContext_t2663877541  : public List_1_t930065139
{
public:
	// System.String[] MoonSharp.Interpreter.Execution.ClosureContext::<Symbols>k__BackingField
	StringU5BU5D_t3457507972* ___U3CSymbolsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSymbolsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ClosureContext_t2663877541, ___U3CSymbolsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t3457507972* get_U3CSymbolsU3Ek__BackingField_5() const { return ___U3CSymbolsU3Ek__BackingField_5; }
	inline StringU5BU5D_t3457507972** get_address_of_U3CSymbolsU3Ek__BackingField_5() { return &___U3CSymbolsU3Ek__BackingField_5; }
	inline void set_U3CSymbolsU3Ek__BackingField_5(StringU5BU5D_t3457507972* value)
	{
		___U3CSymbolsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSymbolsU3Ek__BackingField_5), value);
	}
};

struct ClosureContext_t2663877541_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String> MoonSharp.Interpreter.Execution.ClosureContext::<>f__am$cache0
	Func_2_t2885058645 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(ClosureContext_t2663877541_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_2_t2885058645 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_2_t2885058645 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_2_t2885058645 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOSURECONTEXT_T2663877541_H
#ifndef BYTECODE_T1511227056_H
#define BYTECODE_T1511227056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ByteCode
struct  ByteCode_t1511227056  : public RefIdObject_t2239295642
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Instruction> MoonSharp.Interpreter.Execution.VM.ByteCode::Code
	List_1_t2171361267 * ___Code_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.VM.ByteCode::<Script>k__BackingField
	Script_t454308935 * ___U3CScriptU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Execution.VM.ByteCode::m_SourceRefStack
	List_1_t2535021387 * ___m_SourceRefStack_4;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.ByteCode::m_CurrentSourceRef
	SourceRef_t3827830669 * ___m_CurrentSourceRef_5;
	// MoonSharp.Interpreter.Execution.LoopTracker MoonSharp.Interpreter.Execution.VM.ByteCode::LoopTracker
	LoopTracker_t3246466408 * ___LoopTracker_6;

public:
	inline static int32_t get_offset_of_Code_2() { return static_cast<int32_t>(offsetof(ByteCode_t1511227056, ___Code_2)); }
	inline List_1_t2171361267 * get_Code_2() const { return ___Code_2; }
	inline List_1_t2171361267 ** get_address_of_Code_2() { return &___Code_2; }
	inline void set_Code_2(List_1_t2171361267 * value)
	{
		___Code_2 = value;
		Il2CppCodeGenWriteBarrier((&___Code_2), value);
	}

	inline static int32_t get_offset_of_U3CScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ByteCode_t1511227056, ___U3CScriptU3Ek__BackingField_3)); }
	inline Script_t454308935 * get_U3CScriptU3Ek__BackingField_3() const { return ___U3CScriptU3Ek__BackingField_3; }
	inline Script_t454308935 ** get_address_of_U3CScriptU3Ek__BackingField_3() { return &___U3CScriptU3Ek__BackingField_3; }
	inline void set_U3CScriptU3Ek__BackingField_3(Script_t454308935 * value)
	{
		___U3CScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_m_SourceRefStack_4() { return static_cast<int32_t>(offsetof(ByteCode_t1511227056, ___m_SourceRefStack_4)); }
	inline List_1_t2535021387 * get_m_SourceRefStack_4() const { return ___m_SourceRefStack_4; }
	inline List_1_t2535021387 ** get_address_of_m_SourceRefStack_4() { return &___m_SourceRefStack_4; }
	inline void set_m_SourceRefStack_4(List_1_t2535021387 * value)
	{
		___m_SourceRefStack_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceRefStack_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentSourceRef_5() { return static_cast<int32_t>(offsetof(ByteCode_t1511227056, ___m_CurrentSourceRef_5)); }
	inline SourceRef_t3827830669 * get_m_CurrentSourceRef_5() const { return ___m_CurrentSourceRef_5; }
	inline SourceRef_t3827830669 ** get_address_of_m_CurrentSourceRef_5() { return &___m_CurrentSourceRef_5; }
	inline void set_m_CurrentSourceRef_5(SourceRef_t3827830669 * value)
	{
		___m_CurrentSourceRef_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSourceRef_5), value);
	}

	inline static int32_t get_offset_of_LoopTracker_6() { return static_cast<int32_t>(offsetof(ByteCode_t1511227056, ___LoopTracker_6)); }
	inline LoopTracker_t3246466408 * get_LoopTracker_6() const { return ___LoopTracker_6; }
	inline LoopTracker_t3246466408 ** get_address_of_LoopTracker_6() { return &___LoopTracker_6; }
	inline void set_LoopTracker_6(LoopTracker_t3246466408 * value)
	{
		___LoopTracker_6 = value;
		Il2CppCodeGenWriteBarrier((&___LoopTracker_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECODE_T1511227056_H
#ifndef MOONSHARPHIDDENATTRIBUTE_T3865089914_H
#define MOONSHARPHIDDENATTRIBUTE_T3865089914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpHiddenAttribute
struct  MoonSharpHiddenAttribute_t3865089914  : public Attribute_t911517180
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPHIDDENATTRIBUTE_T3865089914_H
#ifndef MOONSHARPVISIBLEATTRIBUTE_T480830366_H
#define MOONSHARPVISIBLEATTRIBUTE_T480830366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.MoonSharpVisibleAttribute
struct  MoonSharpVisibleAttribute_t480830366  : public Attribute_t911517180
{
public:
	// System.Boolean MoonSharp.Interpreter.Interop.MoonSharpVisibleAttribute::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVisibleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpVisibleAttribute_t480830366, ___U3CVisibleU3Ek__BackingField_0)); }
	inline bool get_U3CVisibleU3Ek__BackingField_0() const { return ___U3CVisibleU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CVisibleU3Ek__BackingField_0() { return &___U3CVisibleU3Ek__BackingField_0; }
	inline void set_U3CVisibleU3Ek__BackingField_0(bool value)
	{
		___U3CVisibleU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPVISIBLEATTRIBUTE_T480830366_H
#ifndef MOONSHARPPROPERTYATTRIBUTE_T63301656_H
#define MOONSHARPPROPERTYATTRIBUTE_T63301656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpPropertyAttribute
struct  MoonSharpPropertyAttribute_t63301656  : public Attribute_t911517180
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpPropertyAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpPropertyAttribute_t63301656, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPPROPERTYATTRIBUTE_T63301656_H
#ifndef MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T3070558883_H
#define MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T3070558883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpUserDataMetamethodAttribute
struct  MoonSharpUserDataMetamethodAttribute_t3070558883  : public Attribute_t911517180
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpUserDataMetamethodAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpUserDataMetamethodAttribute_t3070558883, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T3070558883_H
#ifndef CLOSURE_T885440028_H
#define CLOSURE_T885440028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Closure
struct  Closure_t885440028  : public RefIdObject_t2239295642
{
public:
	// System.Int32 MoonSharp.Interpreter.Closure::<EntryPointByteCodeLocation>k__BackingField
	int32_t ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Closure::<OwnerScript>k__BackingField
	Script_t454308935 * ___U3COwnerScriptU3Ek__BackingField_3;
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Closure::<ClosureContext>k__BackingField
	ClosureContext_t2663877541 * ___U3CClosureContextU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Closure_t885440028, ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2)); }
	inline int32_t get_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() const { return ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() { return &___U3CEntryPointByteCodeLocationU3Ek__BackingField_2; }
	inline void set_U3CEntryPointByteCodeLocationU3Ek__BackingField_2(int32_t value)
	{
		___U3CEntryPointByteCodeLocationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Closure_t885440028, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t454308935 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t454308935 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t454308935 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CClosureContextU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Closure_t885440028, ___U3CClosureContextU3Ek__BackingField_5)); }
	inline ClosureContext_t2663877541 * get_U3CClosureContextU3Ek__BackingField_5() const { return ___U3CClosureContextU3Ek__BackingField_5; }
	inline ClosureContext_t2663877541 ** get_address_of_U3CClosureContextU3Ek__BackingField_5() { return &___U3CClosureContextU3Ek__BackingField_5; }
	inline void set_U3CClosureContextU3Ek__BackingField_5(ClosureContext_t2663877541 * value)
	{
		___U3CClosureContextU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClosureContextU3Ek__BackingField_5), value);
	}
};

struct Closure_t885440028_StaticFields
{
public:
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Closure::emptyClosure
	ClosureContext_t2663877541 * ___emptyClosure_4;

public:
	inline static int32_t get_offset_of_emptyClosure_4() { return static_cast<int32_t>(offsetof(Closure_t885440028_StaticFields, ___emptyClosure_4)); }
	inline ClosureContext_t2663877541 * get_emptyClosure_4() const { return ___emptyClosure_4; }
	inline ClosureContext_t2663877541 ** get_address_of_emptyClosure_4() { return &___emptyClosure_4; }
	inline void set_emptyClosure_4(ClosureContext_t2663877541 * value)
	{
		___emptyClosure_4 = value;
		Il2CppCodeGenWriteBarrier((&___emptyClosure_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOSURE_T885440028_H
#ifndef ENUM_T2135086523_H
#define ENUM_T2135086523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2135086523  : public ValueType_t1744134830
{
public:

public:
};

struct Enum_t2135086523_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t848310312* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2135086523_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t848310312* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t848310312** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t848310312* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2135086523_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2135086523_marshaled_com
{
};
#endif // ENUM_T2135086523_H
#ifndef TIMESPAN_T145230524_H
#define TIMESPAN_T145230524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t145230524 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t145230524, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t145230524_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t145230524  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t145230524  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t145230524  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t145230524_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t145230524  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t145230524 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t145230524  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t145230524_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t145230524  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t145230524 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t145230524  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t145230524_StaticFields, ___Zero_7)); }
	inline TimeSpan_t145230524  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t145230524 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t145230524  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T145230524_H
#ifndef TABLE_T1685905556_H
#define TABLE_T1685905556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Table
struct  Table_t1685905556  : public RefIdObject_t2239295642
{
public:
	// System.Collections.Generic.LinkedList`1<MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_Values
	LinkedList_1_t1748592608 * ___m_Values_2;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<MoonSharp.Interpreter.DynValue,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_ValueMap
	LinkedListIndex_2_t1941116097 * ___m_ValueMap_3;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.String,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_StringMap
	LinkedListIndex_2_t732658413 * ___m_StringMap_4;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.Int32,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_ArrayMap
	LinkedListIndex_2_t58183542 * ___m_ArrayMap_5;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Table::m_Owner
	Script_t454308935 * ___m_Owner_6;
	// System.Int32 MoonSharp.Interpreter.Table::m_InitArray
	int32_t ___m_InitArray_7;
	// System.Int32 MoonSharp.Interpreter.Table::m_CachedLength
	int32_t ___m_CachedLength_8;
	// System.Boolean MoonSharp.Interpreter.Table::m_ContainsNilEntries
	bool ___m_ContainsNilEntries_9;
	// MoonSharp.Interpreter.Table MoonSharp.Interpreter.Table::m_MetaTable
	Table_t1685905556 * ___m_MetaTable_10;

public:
	inline static int32_t get_offset_of_m_Values_2() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_Values_2)); }
	inline LinkedList_1_t1748592608 * get_m_Values_2() const { return ___m_Values_2; }
	inline LinkedList_1_t1748592608 ** get_address_of_m_Values_2() { return &___m_Values_2; }
	inline void set_m_Values_2(LinkedList_1_t1748592608 * value)
	{
		___m_Values_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Values_2), value);
	}

	inline static int32_t get_offset_of_m_ValueMap_3() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_ValueMap_3)); }
	inline LinkedListIndex_2_t1941116097 * get_m_ValueMap_3() const { return ___m_ValueMap_3; }
	inline LinkedListIndex_2_t1941116097 ** get_address_of_m_ValueMap_3() { return &___m_ValueMap_3; }
	inline void set_m_ValueMap_3(LinkedListIndex_2_t1941116097 * value)
	{
		___m_ValueMap_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueMap_3), value);
	}

	inline static int32_t get_offset_of_m_StringMap_4() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_StringMap_4)); }
	inline LinkedListIndex_2_t732658413 * get_m_StringMap_4() const { return ___m_StringMap_4; }
	inline LinkedListIndex_2_t732658413 ** get_address_of_m_StringMap_4() { return &___m_StringMap_4; }
	inline void set_m_StringMap_4(LinkedListIndex_2_t732658413 * value)
	{
		___m_StringMap_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringMap_4), value);
	}

	inline static int32_t get_offset_of_m_ArrayMap_5() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_ArrayMap_5)); }
	inline LinkedListIndex_2_t58183542 * get_m_ArrayMap_5() const { return ___m_ArrayMap_5; }
	inline LinkedListIndex_2_t58183542 ** get_address_of_m_ArrayMap_5() { return &___m_ArrayMap_5; }
	inline void set_m_ArrayMap_5(LinkedListIndex_2_t58183542 * value)
	{
		___m_ArrayMap_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_ArrayMap_5), value);
	}

	inline static int32_t get_offset_of_m_Owner_6() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_Owner_6)); }
	inline Script_t454308935 * get_m_Owner_6() const { return ___m_Owner_6; }
	inline Script_t454308935 ** get_address_of_m_Owner_6() { return &___m_Owner_6; }
	inline void set_m_Owner_6(Script_t454308935 * value)
	{
		___m_Owner_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Owner_6), value);
	}

	inline static int32_t get_offset_of_m_InitArray_7() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_InitArray_7)); }
	inline int32_t get_m_InitArray_7() const { return ___m_InitArray_7; }
	inline int32_t* get_address_of_m_InitArray_7() { return &___m_InitArray_7; }
	inline void set_m_InitArray_7(int32_t value)
	{
		___m_InitArray_7 = value;
	}

	inline static int32_t get_offset_of_m_CachedLength_8() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_CachedLength_8)); }
	inline int32_t get_m_CachedLength_8() const { return ___m_CachedLength_8; }
	inline int32_t* get_address_of_m_CachedLength_8() { return &___m_CachedLength_8; }
	inline void set_m_CachedLength_8(int32_t value)
	{
		___m_CachedLength_8 = value;
	}

	inline static int32_t get_offset_of_m_ContainsNilEntries_9() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_ContainsNilEntries_9)); }
	inline bool get_m_ContainsNilEntries_9() const { return ___m_ContainsNilEntries_9; }
	inline bool* get_address_of_m_ContainsNilEntries_9() { return &___m_ContainsNilEntries_9; }
	inline void set_m_ContainsNilEntries_9(bool value)
	{
		___m_ContainsNilEntries_9 = value;
	}

	inline static int32_t get_offset_of_m_MetaTable_10() { return static_cast<int32_t>(offsetof(Table_t1685905556, ___m_MetaTable_10)); }
	inline Table_t1685905556 * get_m_MetaTable_10() const { return ___m_MetaTable_10; }
	inline Table_t1685905556 ** get_address_of_m_MetaTable_10() { return &___m_MetaTable_10; }
	inline void set_m_MetaTable_10(Table_t1685905556 * value)
	{
		___m_MetaTable_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaTable_10), value);
	}
};

struct Table_t1685905556_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::<>f__am$cache0
	Func_2_t1554043460 * ___U3CU3Ef__amU24cache0_11;
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Table::<>f__am$cache1
	Func_2_t1852579261 * ___U3CU3Ef__amU24cache1_12;
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Table::<>f__am$cache2
	Func_2_t1852579261 * ___U3CU3Ef__amU24cache2_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(Table_t1685905556_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t1554043460 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t1554043460 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t1554043460 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(Table_t1685905556_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_2_t1852579261 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_2_t1852579261 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_2_t1852579261 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(Table_t1685905556_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Func_2_t1852579261 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Func_2_t1852579261 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Func_2_t1852579261 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLE_T1685905556_H
#ifndef USERDATA_T533344875_H
#define USERDATA_T533344875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.UserData
struct  UserData_t533344875  : public RefIdObject_t2239295642
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.UserData::<UserValue>k__BackingField
	DynValue_t2222874421 * ___U3CUserValueU3Ek__BackingField_2;
	// System.Object MoonSharp.Interpreter.UserData::<Object>k__BackingField
	RuntimeObject * ___U3CObjectU3Ek__BackingField_3;
	// MoonSharp.Interpreter.Interop.IUserDataDescriptor MoonSharp.Interpreter.UserData::<Descriptor>k__BackingField
	RuntimeObject* ___U3CDescriptorU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CUserValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UserData_t533344875, ___U3CUserValueU3Ek__BackingField_2)); }
	inline DynValue_t2222874421 * get_U3CUserValueU3Ek__BackingField_2() const { return ___U3CUserValueU3Ek__BackingField_2; }
	inline DynValue_t2222874421 ** get_address_of_U3CUserValueU3Ek__BackingField_2() { return &___U3CUserValueU3Ek__BackingField_2; }
	inline void set_U3CUserValueU3Ek__BackingField_2(DynValue_t2222874421 * value)
	{
		___U3CUserValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserValueU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UserData_t533344875, ___U3CObjectU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CDescriptorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UserData_t533344875, ___U3CDescriptorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CDescriptorU3Ek__BackingField_4() const { return ___U3CDescriptorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CDescriptorU3Ek__BackingField_4() { return &___U3CDescriptorU3Ek__BackingField_4; }
	inline void set_U3CDescriptorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CDescriptorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptorU3Ek__BackingField_4), value);
	}
};

struct UserData_t533344875_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,MoonSharp.Interpreter.Interop.IUserDataDescriptor>,System.Type> MoonSharp.Interpreter.UserData::<>f__am$cache0
	Func_2_t2990924837 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(UserData_t533344875_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t2990924837 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t2990924837 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t2990924837 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDATA_T533344875_H
#ifndef MOONSHARPHIDEMEMBERATTRIBUTE_T1371673299_H
#define MOONSHARPHIDEMEMBERATTRIBUTE_T1371673299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpHideMemberAttribute
struct  MoonSharpHideMemberAttribute_t1371673299  : public Attribute_t911517180
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpHideMemberAttribute::<MemberName>k__BackingField
	String_t* ___U3CMemberNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMemberNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpHideMemberAttribute_t1371673299, ___U3CMemberNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CMemberNameU3Ek__BackingField_0() const { return ___U3CMemberNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMemberNameU3Ek__BackingField_0() { return &___U3CMemberNameU3Ek__BackingField_0; }
	inline void set_U3CMemberNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CMemberNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMemberNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPHIDEMEMBERATTRIBUTE_T1371673299_H
#ifndef TABLEPAIR_T1924338620_H
#define TABLEPAIR_T1924338620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TablePair
struct  TablePair_t1924338620 
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TablePair::key
	DynValue_t2222874421 * ___key_1;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TablePair::value
	DynValue_t2222874421 * ___value_2;

public:
	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(TablePair_t1924338620, ___key_1)); }
	inline DynValue_t2222874421 * get_key_1() const { return ___key_1; }
	inline DynValue_t2222874421 ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(DynValue_t2222874421 * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(TablePair_t1924338620, ___value_2)); }
	inline DynValue_t2222874421 * get_value_2() const { return ___value_2; }
	inline DynValue_t2222874421 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(DynValue_t2222874421 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

struct TablePair_t1924338620_StaticFields
{
public:
	// MoonSharp.Interpreter.TablePair MoonSharp.Interpreter.TablePair::s_NilNode
	TablePair_t1924338620  ___s_NilNode_0;

public:
	inline static int32_t get_offset_of_s_NilNode_0() { return static_cast<int32_t>(offsetof(TablePair_t1924338620_StaticFields, ___s_NilNode_0)); }
	inline TablePair_t1924338620  get_s_NilNode_0() const { return ___s_NilNode_0; }
	inline TablePair_t1924338620 * get_address_of_s_NilNode_0() { return &___s_NilNode_0; }
	inline void set_s_NilNode_0(TablePair_t1924338620  value)
	{
		___s_NilNode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MoonSharp.Interpreter.TablePair
struct TablePair_t1924338620_marshaled_pinvoke
{
	DynValue_t2222874421 * ___key_1;
	DynValue_t2222874421 * ___value_2;
};
// Native definition for COM marshalling of MoonSharp.Interpreter.TablePair
struct TablePair_t1924338620_marshaled_com
{
	DynValue_t2222874421 * ___key_1;
	DynValue_t2222874421 * ___value_2;
};
#endif // TABLEPAIR_T1924338620_H
#ifndef OPCODEMETADATATYPE_T124784290_H
#define OPCODEMETADATATYPE_T124784290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.OpCodeMetadataType
struct  OpCodeMetadataType_t124784290 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.OpCodeMetadataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCodeMetadataType_t124784290, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODEMETADATATYPE_T124784290_H
#ifndef OPCODE_T486190955_H
#define OPCODE_T486190955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.OpCode
struct  OpCode_t486190955 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.OpCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCode_t486190955, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T486190955_H
#ifndef CALLSTACKITEMFLAGS_T1528723934_H
#define CALLSTACKITEMFLAGS_T1528723934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.CallStackItemFlags
struct  CallStackItemFlags_t1528723934 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItemFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallStackItemFlags_t1528723934, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLSTACKITEMFLAGS_T1528723934_H
#ifndef INTEROPACCESSMODE_T26608830_H
#define INTEROPACCESSMODE_T26608830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InteropAccessMode
struct  InteropAccessMode_t26608830 
{
public:
	// System.Int32 MoonSharp.Interpreter.InteropAccessMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InteropAccessMode_t26608830, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEROPACCESSMODE_T26608830_H
#ifndef DELEGATE_T554323164_H
#define DELEGATE_T554323164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t554323164  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1920067483 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t554323164, ___data_8)); }
	inline DelegateData_t1920067483 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1920067483 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1920067483 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T554323164_H
#ifndef UPVALUESTYPE_T1994474836_H
#define UPVALUESTYPE_T1994474836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Closure/UpvaluesType
struct  UpvaluesType_t1994474836 
{
public:
	// System.Int32 MoonSharp.Interpreter.Closure/UpvaluesType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpvaluesType_t1994474836, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPVALUESTYPE_T1994474836_H
#ifndef COROUTINETYPE_T805425899_H
#define COROUTINETYPE_T805425899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/CoroutineType
struct  CoroutineType_t805425899 
{
public:
	// System.Int32 MoonSharp.Interpreter.Coroutine/CoroutineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoroutineType_t805425899, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COROUTINETYPE_T805425899_H
#ifndef SYMBOLREFTYPE_T615808884_H
#define SYMBOLREFTYPE_T615808884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SymbolRefType
struct  SymbolRefType_t615808884 
{
public:
	// System.Int32 MoonSharp.Interpreter.SymbolRefType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SymbolRefType_t615808884, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLREFTYPE_T615808884_H
#ifndef ACTIONTYPE_T1060779767_H
#define ACTIONTYPE_T1060779767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType
struct  ActionType_t1060779767 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActionType_t1060779767, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIONTYPE_T1060779767_H
#ifndef DEBUGGERCAPS_T1591294098_H
#define DEBUGGERCAPS_T1591294098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerCaps
struct  DebuggerCaps_t1591294098 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerCaps::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggerCaps_t1591294098, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERCAPS_T1591294098_H
#ifndef WATCHTYPE_T2412608760_H
#define WATCHTYPE_T2412608760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.WatchType
struct  WatchType_t2412608760 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WatchType_t2412608760, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATCHTYPE_T2412608760_H
#ifndef PERFORMANCECOUNTER_T1633585215_H
#define PERFORMANCECOUNTER_T1633585215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounter
struct  PerformanceCounter_t1633585215 
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounter::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PerformanceCounter_t1633585215, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCECOUNTER_T1633585215_H
#ifndef PERFORMANCECOUNTERTYPE_T3743885816_H
#define PERFORMANCECOUNTERTYPE_T3743885816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounterType
struct  PerformanceCounterType_t3743885816 
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PerformanceCounterType_t3743885816, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCECOUNTERTYPE_T3743885816_H
#ifndef DATETIMEKIND_T3857535566_H
#define DATETIMEKIND_T3857535566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3857535566 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3857535566, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3857535566_H
#ifndef INTERNALERROREXCEPTION_T2704734215_H
#define INTERNALERROREXCEPTION_T2704734215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InternalErrorException
struct  InternalErrorException_t2704734215  : public InterpreterException_t4252557503
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALERROREXCEPTION_T2704734215_H
#ifndef TYPEVALIDATIONFLAGS_T373687445_H
#define TYPEVALIDATIONFLAGS_T373687445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TypeValidationFlags
struct  TypeValidationFlags_t373687445 
{
public:
	// System.Int32 MoonSharp.Interpreter.TypeValidationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeValidationFlags_t373687445, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEVALIDATIONFLAGS_T373687445_H
#ifndef SYNTAXERROREXCEPTION_T3349067502_H
#define SYNTAXERROREXCEPTION_T3349067502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SyntaxErrorException
struct  SyntaxErrorException_t3349067502  : public InterpreterException_t4252557503
{
public:
	// MoonSharp.Interpreter.Tree.Token MoonSharp.Interpreter.SyntaxErrorException::<Token>k__BackingField
	Token_t598049124 * ___U3CTokenU3Ek__BackingField_15;
	// System.Boolean MoonSharp.Interpreter.SyntaxErrorException::<IsPrematureStreamTermination>k__BackingField
	bool ___U3CIsPrematureStreamTerminationU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SyntaxErrorException_t3349067502, ___U3CTokenU3Ek__BackingField_15)); }
	inline Token_t598049124 * get_U3CTokenU3Ek__BackingField_15() const { return ___U3CTokenU3Ek__BackingField_15; }
	inline Token_t598049124 ** get_address_of_U3CTokenU3Ek__BackingField_15() { return &___U3CTokenU3Ek__BackingField_15; }
	inline void set_U3CTokenU3Ek__BackingField_15(Token_t598049124 * value)
	{
		___U3CTokenU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTokenU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CIsPrematureStreamTerminationU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SyntaxErrorException_t3349067502, ___U3CIsPrematureStreamTerminationU3Ek__BackingField_16)); }
	inline bool get_U3CIsPrematureStreamTerminationU3Ek__BackingField_16() const { return ___U3CIsPrematureStreamTerminationU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsPrematureStreamTerminationU3Ek__BackingField_16() { return &___U3CIsPrematureStreamTerminationU3Ek__BackingField_16; }
	inline void set_U3CIsPrematureStreamTerminationU3Ek__BackingField_16(bool value)
	{
		___U3CIsPrematureStreamTerminationU3Ek__BackingField_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNTAXERROREXCEPTION_T3349067502_H
#ifndef COROUTINESTATE_T965548856_H
#define COROUTINESTATE_T965548856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoroutineState
struct  CoroutineState_t965548856 
{
public:
	// System.Int32 MoonSharp.Interpreter.CoroutineState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoroutineState_t965548856, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COROUTINESTATE_T965548856_H
#ifndef INSTRUCTIONFIELDUSAGE_T389248056_H
#define INSTRUCTIONFIELDUSAGE_T389248056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.InstructionFieldUsage
struct  InstructionFieldUsage_t389248056 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.InstructionFieldUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstructionFieldUsage_t389248056, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTIONFIELDUSAGE_T389248056_H
#ifndef DATATYPE_T4234805284_H
#define DATATYPE_T4234805284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DataType
struct  DataType_t4234805284 
{
public:
	// System.Int32 MoonSharp.Interpreter.DataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataType_t4234805284, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_T4234805284_H
#ifndef SCRIPTRUNTIMEEXCEPTION_T2167236282_H
#define SCRIPTRUNTIMEEXCEPTION_T2167236282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptRuntimeException
struct  ScriptRuntimeException_t2167236282  : public InterpreterException_t4252557503
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNTIMEEXCEPTION_T2167236282_H
#ifndef PROCESSOR_T1734942896_H
#define PROCESSOR_T1734942896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor
struct  Processor_t1734942896  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.ByteCode MoonSharp.Interpreter.Execution.VM.Processor::m_RootChunk
	ByteCode_t1511227056 * ___m_RootChunk_0;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Execution.VM.Processor::m_ValueStack
	FastStack_1_t4116499783 * ___m_ValueStack_1;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem> MoonSharp.Interpreter.Execution.VM.Processor::m_ExecutionStack
	FastStack_1_t2799645675 * ___m_ExecutionStack_2;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Processor> MoonSharp.Interpreter.Execution.VM.Processor::m_CoroutinesStack
	List_1_t442133614 * ___m_CoroutinesStack_3;
	// MoonSharp.Interpreter.Table MoonSharp.Interpreter.Execution.VM.Processor::m_GlobalTable
	Table_t1685905556 * ___m_GlobalTable_4;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.VM.Processor::m_Script
	Script_t454308935 * ___m_Script_5;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Execution.VM.Processor::m_Parent
	Processor_t1734942896 * ___m_Parent_6;
	// MoonSharp.Interpreter.CoroutineState MoonSharp.Interpreter.Execution.VM.Processor::m_State
	int32_t ___m_State_7;
	// System.Boolean MoonSharp.Interpreter.Execution.VM.Processor::m_CanYield
	bool ___m_CanYield_8;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_SavedInstructionPtr
	int32_t ___m_SavedInstructionPtr_9;
	// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext MoonSharp.Interpreter.Execution.VM.Processor::m_Debug
	DebugContext_t3504958478 * ___m_Debug_10;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_OwningThreadID
	int32_t ___m_OwningThreadID_11;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_ExecutionNesting
	int32_t ___m_ExecutionNesting_12;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Execution.VM.Processor::<AssociatedCoroutine>k__BackingField
	Coroutine_t3333720231 * ___U3CAssociatedCoroutineU3Ek__BackingField_15;
	// System.Int64 MoonSharp.Interpreter.Execution.VM.Processor::AutoYieldCounter
	int64_t ___AutoYieldCounter_17;

public:
	inline static int32_t get_offset_of_m_RootChunk_0() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_RootChunk_0)); }
	inline ByteCode_t1511227056 * get_m_RootChunk_0() const { return ___m_RootChunk_0; }
	inline ByteCode_t1511227056 ** get_address_of_m_RootChunk_0() { return &___m_RootChunk_0; }
	inline void set_m_RootChunk_0(ByteCode_t1511227056 * value)
	{
		___m_RootChunk_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RootChunk_0), value);
	}

	inline static int32_t get_offset_of_m_ValueStack_1() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_ValueStack_1)); }
	inline FastStack_1_t4116499783 * get_m_ValueStack_1() const { return ___m_ValueStack_1; }
	inline FastStack_1_t4116499783 ** get_address_of_m_ValueStack_1() { return &___m_ValueStack_1; }
	inline void set_m_ValueStack_1(FastStack_1_t4116499783 * value)
	{
		___m_ValueStack_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueStack_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutionStack_2() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_ExecutionStack_2)); }
	inline FastStack_1_t2799645675 * get_m_ExecutionStack_2() const { return ___m_ExecutionStack_2; }
	inline FastStack_1_t2799645675 ** get_address_of_m_ExecutionStack_2() { return &___m_ExecutionStack_2; }
	inline void set_m_ExecutionStack_2(FastStack_1_t2799645675 * value)
	{
		___m_ExecutionStack_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionStack_2), value);
	}

	inline static int32_t get_offset_of_m_CoroutinesStack_3() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_CoroutinesStack_3)); }
	inline List_1_t442133614 * get_m_CoroutinesStack_3() const { return ___m_CoroutinesStack_3; }
	inline List_1_t442133614 ** get_address_of_m_CoroutinesStack_3() { return &___m_CoroutinesStack_3; }
	inline void set_m_CoroutinesStack_3(List_1_t442133614 * value)
	{
		___m_CoroutinesStack_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutinesStack_3), value);
	}

	inline static int32_t get_offset_of_m_GlobalTable_4() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_GlobalTable_4)); }
	inline Table_t1685905556 * get_m_GlobalTable_4() const { return ___m_GlobalTable_4; }
	inline Table_t1685905556 ** get_address_of_m_GlobalTable_4() { return &___m_GlobalTable_4; }
	inline void set_m_GlobalTable_4(Table_t1685905556 * value)
	{
		___m_GlobalTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_GlobalTable_4), value);
	}

	inline static int32_t get_offset_of_m_Script_5() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_Script_5)); }
	inline Script_t454308935 * get_m_Script_5() const { return ___m_Script_5; }
	inline Script_t454308935 ** get_address_of_m_Script_5() { return &___m_Script_5; }
	inline void set_m_Script_5(Script_t454308935 * value)
	{
		___m_Script_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Script_5), value);
	}

	inline static int32_t get_offset_of_m_Parent_6() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_Parent_6)); }
	inline Processor_t1734942896 * get_m_Parent_6() const { return ___m_Parent_6; }
	inline Processor_t1734942896 ** get_address_of_m_Parent_6() { return &___m_Parent_6; }
	inline void set_m_Parent_6(Processor_t1734942896 * value)
	{
		___m_Parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_6), value);
	}

	inline static int32_t get_offset_of_m_State_7() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_State_7)); }
	inline int32_t get_m_State_7() const { return ___m_State_7; }
	inline int32_t* get_address_of_m_State_7() { return &___m_State_7; }
	inline void set_m_State_7(int32_t value)
	{
		___m_State_7 = value;
	}

	inline static int32_t get_offset_of_m_CanYield_8() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_CanYield_8)); }
	inline bool get_m_CanYield_8() const { return ___m_CanYield_8; }
	inline bool* get_address_of_m_CanYield_8() { return &___m_CanYield_8; }
	inline void set_m_CanYield_8(bool value)
	{
		___m_CanYield_8 = value;
	}

	inline static int32_t get_offset_of_m_SavedInstructionPtr_9() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_SavedInstructionPtr_9)); }
	inline int32_t get_m_SavedInstructionPtr_9() const { return ___m_SavedInstructionPtr_9; }
	inline int32_t* get_address_of_m_SavedInstructionPtr_9() { return &___m_SavedInstructionPtr_9; }
	inline void set_m_SavedInstructionPtr_9(int32_t value)
	{
		___m_SavedInstructionPtr_9 = value;
	}

	inline static int32_t get_offset_of_m_Debug_10() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_Debug_10)); }
	inline DebugContext_t3504958478 * get_m_Debug_10() const { return ___m_Debug_10; }
	inline DebugContext_t3504958478 ** get_address_of_m_Debug_10() { return &___m_Debug_10; }
	inline void set_m_Debug_10(DebugContext_t3504958478 * value)
	{
		___m_Debug_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Debug_10), value);
	}

	inline static int32_t get_offset_of_m_OwningThreadID_11() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_OwningThreadID_11)); }
	inline int32_t get_m_OwningThreadID_11() const { return ___m_OwningThreadID_11; }
	inline int32_t* get_address_of_m_OwningThreadID_11() { return &___m_OwningThreadID_11; }
	inline void set_m_OwningThreadID_11(int32_t value)
	{
		___m_OwningThreadID_11 = value;
	}

	inline static int32_t get_offset_of_m_ExecutionNesting_12() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___m_ExecutionNesting_12)); }
	inline int32_t get_m_ExecutionNesting_12() const { return ___m_ExecutionNesting_12; }
	inline int32_t* get_address_of_m_ExecutionNesting_12() { return &___m_ExecutionNesting_12; }
	inline void set_m_ExecutionNesting_12(int32_t value)
	{
		___m_ExecutionNesting_12 = value;
	}

	inline static int32_t get_offset_of_U3CAssociatedCoroutineU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___U3CAssociatedCoroutineU3Ek__BackingField_15)); }
	inline Coroutine_t3333720231 * get_U3CAssociatedCoroutineU3Ek__BackingField_15() const { return ___U3CAssociatedCoroutineU3Ek__BackingField_15; }
	inline Coroutine_t3333720231 ** get_address_of_U3CAssociatedCoroutineU3Ek__BackingField_15() { return &___U3CAssociatedCoroutineU3Ek__BackingField_15; }
	inline void set_U3CAssociatedCoroutineU3Ek__BackingField_15(Coroutine_t3333720231 * value)
	{
		___U3CAssociatedCoroutineU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAssociatedCoroutineU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_AutoYieldCounter_17() { return static_cast<int32_t>(offsetof(Processor_t1734942896, ___AutoYieldCounter_17)); }
	inline int64_t get_AutoYieldCounter_17() const { return ___AutoYieldCounter_17; }
	inline int64_t* get_address_of_AutoYieldCounter_17() { return &___AutoYieldCounter_17; }
	inline void set_AutoYieldCounter_17(int64_t value)
	{
		___AutoYieldCounter_17 = value;
	}
};

struct Processor_t1734942896_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.Execution.VM.Processor,MoonSharp.Interpreter.Debugging.WatchItem> MoonSharp.Interpreter.Execution.VM.Processor::<>f__am$cache0
	Func_2_t1276213452 * ___U3CU3Ef__amU24cache0_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_18() { return static_cast<int32_t>(offsetof(Processor_t1734942896_StaticFields, ___U3CU3Ef__amU24cache0_18)); }
	inline Func_2_t1276213452 * get_U3CU3Ef__amU24cache0_18() const { return ___U3CU3Ef__amU24cache0_18; }
	inline Func_2_t1276213452 ** get_address_of_U3CU3Ef__amU24cache0_18() { return &___U3CU3Ef__amU24cache0_18; }
	inline void set_U3CU3Ef__amU24cache0_18(Func_2_t1276213452 * value)
	{
		___U3CU3Ef__amU24cache0_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSOR_T1734942896_H
#ifndef CALLBACKFUNCTION_T1839439212_H
#define CALLBACKFUNCTION_T1839439212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CallbackFunction
struct  CallbackFunction_t1839439212  : public RefIdObject_t2239295642
{
public:
	// System.String MoonSharp.Interpreter.CallbackFunction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CallbackFunction::<ClrCallback>k__BackingField
	Func_3_t3824004487 * ___U3CClrCallbackU3Ek__BackingField_4;
	// System.Object MoonSharp.Interpreter.CallbackFunction::<AdditionalData>k__BackingField
	RuntimeObject * ___U3CAdditionalDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CallbackFunction_t1839439212, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CClrCallbackU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CallbackFunction_t1839439212, ___U3CClrCallbackU3Ek__BackingField_4)); }
	inline Func_3_t3824004487 * get_U3CClrCallbackU3Ek__BackingField_4() const { return ___U3CClrCallbackU3Ek__BackingField_4; }
	inline Func_3_t3824004487 ** get_address_of_U3CClrCallbackU3Ek__BackingField_4() { return &___U3CClrCallbackU3Ek__BackingField_4; }
	inline void set_U3CClrCallbackU3Ek__BackingField_4(Func_3_t3824004487 * value)
	{
		___U3CClrCallbackU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClrCallbackU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CAdditionalDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CallbackFunction_t1839439212, ___U3CAdditionalDataU3Ek__BackingField_5)); }
	inline RuntimeObject * get_U3CAdditionalDataU3Ek__BackingField_5() const { return ___U3CAdditionalDataU3Ek__BackingField_5; }
	inline RuntimeObject ** get_address_of_U3CAdditionalDataU3Ek__BackingField_5() { return &___U3CAdditionalDataU3Ek__BackingField_5; }
	inline void set_U3CAdditionalDataU3Ek__BackingField_5(RuntimeObject * value)
	{
		___U3CAdditionalDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAdditionalDataU3Ek__BackingField_5), value);
	}
};

struct CallbackFunction_t1839439212_StaticFields
{
public:
	// MoonSharp.Interpreter.InteropAccessMode MoonSharp.Interpreter.CallbackFunction::m_DefaultAccessMode
	int32_t ___m_DefaultAccessMode_2;

public:
	inline static int32_t get_offset_of_m_DefaultAccessMode_2() { return static_cast<int32_t>(offsetof(CallbackFunction_t1839439212_StaticFields, ___m_DefaultAccessMode_2)); }
	inline int32_t get_m_DefaultAccessMode_2() const { return ___m_DefaultAccessMode_2; }
	inline int32_t* get_address_of_m_DefaultAccessMode_2() { return &___m_DefaultAccessMode_2; }
	inline void set_m_DefaultAccessMode_2(int32_t value)
	{
		___m_DefaultAccessMode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKFUNCTION_T1839439212_H
#ifndef SYMBOLREF_T2475304184_H
#define SYMBOLREF_T2475304184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SymbolRef
struct  SymbolRef_t2475304184  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.SymbolRefType MoonSharp.Interpreter.SymbolRef::i_Type
	int32_t ___i_Type_1;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.SymbolRef::i_Env
	SymbolRef_t2475304184 * ___i_Env_2;
	// System.Int32 MoonSharp.Interpreter.SymbolRef::i_Index
	int32_t ___i_Index_3;
	// System.String MoonSharp.Interpreter.SymbolRef::i_Name
	String_t* ___i_Name_4;

public:
	inline static int32_t get_offset_of_i_Type_1() { return static_cast<int32_t>(offsetof(SymbolRef_t2475304184, ___i_Type_1)); }
	inline int32_t get_i_Type_1() const { return ___i_Type_1; }
	inline int32_t* get_address_of_i_Type_1() { return &___i_Type_1; }
	inline void set_i_Type_1(int32_t value)
	{
		___i_Type_1 = value;
	}

	inline static int32_t get_offset_of_i_Env_2() { return static_cast<int32_t>(offsetof(SymbolRef_t2475304184, ___i_Env_2)); }
	inline SymbolRef_t2475304184 * get_i_Env_2() const { return ___i_Env_2; }
	inline SymbolRef_t2475304184 ** get_address_of_i_Env_2() { return &___i_Env_2; }
	inline void set_i_Env_2(SymbolRef_t2475304184 * value)
	{
		___i_Env_2 = value;
		Il2CppCodeGenWriteBarrier((&___i_Env_2), value);
	}

	inline static int32_t get_offset_of_i_Index_3() { return static_cast<int32_t>(offsetof(SymbolRef_t2475304184, ___i_Index_3)); }
	inline int32_t get_i_Index_3() const { return ___i_Index_3; }
	inline int32_t* get_address_of_i_Index_3() { return &___i_Index_3; }
	inline void set_i_Index_3(int32_t value)
	{
		___i_Index_3 = value;
	}

	inline static int32_t get_offset_of_i_Name_4() { return static_cast<int32_t>(offsetof(SymbolRef_t2475304184, ___i_Name_4)); }
	inline String_t* get_i_Name_4() const { return ___i_Name_4; }
	inline String_t** get_address_of_i_Name_4() { return &___i_Name_4; }
	inline void set_i_Name_4(String_t* value)
	{
		___i_Name_4 = value;
		Il2CppCodeGenWriteBarrier((&___i_Name_4), value);
	}
};

struct SymbolRef_t2475304184_StaticFields
{
public:
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.SymbolRef::s_DefaultEnv
	SymbolRef_t2475304184 * ___s_DefaultEnv_0;

public:
	inline static int32_t get_offset_of_s_DefaultEnv_0() { return static_cast<int32_t>(offsetof(SymbolRef_t2475304184_StaticFields, ___s_DefaultEnv_0)); }
	inline SymbolRef_t2475304184 * get_s_DefaultEnv_0() const { return ___s_DefaultEnv_0; }
	inline SymbolRef_t2475304184 ** get_address_of_s_DefaultEnv_0() { return &___s_DefaultEnv_0; }
	inline void set_s_DefaultEnv_0(SymbolRef_t2475304184 * value)
	{
		___s_DefaultEnv_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultEnv_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLREF_T2475304184_H
#ifndef DATETIME_T3865810556_H
#define DATETIME_T3865810556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3865810556 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t145230524  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3865810556, ___ticks_10)); }
	inline TimeSpan_t145230524  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t145230524 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t145230524  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3865810556, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3865810556_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3865810556  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3865810556  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t3457507972* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t3457507972* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t3457507972* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t3457507972* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t3457507972* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t3457507972* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t3457507972* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2783033101* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2783033101* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3865810556  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3865810556 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3865810556  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___MinValue_13)); }
	inline DateTime_t3865810556  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3865810556 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3865810556  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t3457507972* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t3457507972** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t3457507972* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t3457507972* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t3457507972** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t3457507972* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t3457507972* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t3457507972** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t3457507972* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t3457507972* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t3457507972** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t3457507972* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t3457507972* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t3457507972** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t3457507972* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t3457507972* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t3457507972** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t3457507972* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t3457507972* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t3457507972** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t3457507972* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t2783033101* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t2783033101** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t2783033101* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t2783033101* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t2783033101** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t2783033101* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3865810556_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3865810556_H
#ifndef MULTICASTDELEGATE_T1465476639_H
#define MULTICASTDELEGATE_T1465476639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1465476639  : public Delegate_t554323164
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1465476639 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1465476639 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1465476639, ___prev_9)); }
	inline MulticastDelegate_t1465476639 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1465476639 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1465476639 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1465476639, ___kpm_next_10)); }
	inline MulticastDelegate_t1465476639 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1465476639 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1465476639 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1465476639_H
#ifndef CALLSTACKITEM_T906020313_H
#define CALLSTACKITEM_T906020313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.CallStackItem
struct  CallStackItem_t906020313  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::Debug_EntryPoint
	int32_t ___Debug_EntryPoint_0;
	// MoonSharp.Interpreter.SymbolRef[] MoonSharp.Interpreter.Execution.VM.CallStackItem::Debug_Symbols
	SymbolRefU5BU5D_t3703738409* ___Debug_Symbols_1;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.CallStackItem::CallingSourceRef
	SourceRef_t3827830669 * ___CallingSourceRef_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::ClrFunction
	CallbackFunction_t1839439212 * ___ClrFunction_3;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::Continuation
	CallbackFunction_t1839439212 * ___Continuation_4;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::ErrorHandler
	CallbackFunction_t1839439212 * ___ErrorHandler_5;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Execution.VM.CallStackItem::ErrorHandlerBeforeUnwind
	DynValue_t2222874421 * ___ErrorHandlerBeforeUnwind_6;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::BasePointer
	int32_t ___BasePointer_7;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::ReturnAddress
	int32_t ___ReturnAddress_8;
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.Execution.VM.CallStackItem::LocalScope
	DynValueU5BU5D_t370998360* ___LocalScope_9;
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Execution.VM.CallStackItem::ClosureScope
	ClosureContext_t2663877541 * ___ClosureScope_10;
	// MoonSharp.Interpreter.Execution.VM.CallStackItemFlags MoonSharp.Interpreter.Execution.VM.CallStackItem::Flags
	int32_t ___Flags_11;

public:
	inline static int32_t get_offset_of_Debug_EntryPoint_0() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___Debug_EntryPoint_0)); }
	inline int32_t get_Debug_EntryPoint_0() const { return ___Debug_EntryPoint_0; }
	inline int32_t* get_address_of_Debug_EntryPoint_0() { return &___Debug_EntryPoint_0; }
	inline void set_Debug_EntryPoint_0(int32_t value)
	{
		___Debug_EntryPoint_0 = value;
	}

	inline static int32_t get_offset_of_Debug_Symbols_1() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___Debug_Symbols_1)); }
	inline SymbolRefU5BU5D_t3703738409* get_Debug_Symbols_1() const { return ___Debug_Symbols_1; }
	inline SymbolRefU5BU5D_t3703738409** get_address_of_Debug_Symbols_1() { return &___Debug_Symbols_1; }
	inline void set_Debug_Symbols_1(SymbolRefU5BU5D_t3703738409* value)
	{
		___Debug_Symbols_1 = value;
		Il2CppCodeGenWriteBarrier((&___Debug_Symbols_1), value);
	}

	inline static int32_t get_offset_of_CallingSourceRef_2() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___CallingSourceRef_2)); }
	inline SourceRef_t3827830669 * get_CallingSourceRef_2() const { return ___CallingSourceRef_2; }
	inline SourceRef_t3827830669 ** get_address_of_CallingSourceRef_2() { return &___CallingSourceRef_2; }
	inline void set_CallingSourceRef_2(SourceRef_t3827830669 * value)
	{
		___CallingSourceRef_2 = value;
		Il2CppCodeGenWriteBarrier((&___CallingSourceRef_2), value);
	}

	inline static int32_t get_offset_of_ClrFunction_3() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___ClrFunction_3)); }
	inline CallbackFunction_t1839439212 * get_ClrFunction_3() const { return ___ClrFunction_3; }
	inline CallbackFunction_t1839439212 ** get_address_of_ClrFunction_3() { return &___ClrFunction_3; }
	inline void set_ClrFunction_3(CallbackFunction_t1839439212 * value)
	{
		___ClrFunction_3 = value;
		Il2CppCodeGenWriteBarrier((&___ClrFunction_3), value);
	}

	inline static int32_t get_offset_of_Continuation_4() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___Continuation_4)); }
	inline CallbackFunction_t1839439212 * get_Continuation_4() const { return ___Continuation_4; }
	inline CallbackFunction_t1839439212 ** get_address_of_Continuation_4() { return &___Continuation_4; }
	inline void set_Continuation_4(CallbackFunction_t1839439212 * value)
	{
		___Continuation_4 = value;
		Il2CppCodeGenWriteBarrier((&___Continuation_4), value);
	}

	inline static int32_t get_offset_of_ErrorHandler_5() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___ErrorHandler_5)); }
	inline CallbackFunction_t1839439212 * get_ErrorHandler_5() const { return ___ErrorHandler_5; }
	inline CallbackFunction_t1839439212 ** get_address_of_ErrorHandler_5() { return &___ErrorHandler_5; }
	inline void set_ErrorHandler_5(CallbackFunction_t1839439212 * value)
	{
		___ErrorHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorHandler_5), value);
	}

	inline static int32_t get_offset_of_ErrorHandlerBeforeUnwind_6() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___ErrorHandlerBeforeUnwind_6)); }
	inline DynValue_t2222874421 * get_ErrorHandlerBeforeUnwind_6() const { return ___ErrorHandlerBeforeUnwind_6; }
	inline DynValue_t2222874421 ** get_address_of_ErrorHandlerBeforeUnwind_6() { return &___ErrorHandlerBeforeUnwind_6; }
	inline void set_ErrorHandlerBeforeUnwind_6(DynValue_t2222874421 * value)
	{
		___ErrorHandlerBeforeUnwind_6 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorHandlerBeforeUnwind_6), value);
	}

	inline static int32_t get_offset_of_BasePointer_7() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___BasePointer_7)); }
	inline int32_t get_BasePointer_7() const { return ___BasePointer_7; }
	inline int32_t* get_address_of_BasePointer_7() { return &___BasePointer_7; }
	inline void set_BasePointer_7(int32_t value)
	{
		___BasePointer_7 = value;
	}

	inline static int32_t get_offset_of_ReturnAddress_8() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___ReturnAddress_8)); }
	inline int32_t get_ReturnAddress_8() const { return ___ReturnAddress_8; }
	inline int32_t* get_address_of_ReturnAddress_8() { return &___ReturnAddress_8; }
	inline void set_ReturnAddress_8(int32_t value)
	{
		___ReturnAddress_8 = value;
	}

	inline static int32_t get_offset_of_LocalScope_9() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___LocalScope_9)); }
	inline DynValueU5BU5D_t370998360* get_LocalScope_9() const { return ___LocalScope_9; }
	inline DynValueU5BU5D_t370998360** get_address_of_LocalScope_9() { return &___LocalScope_9; }
	inline void set_LocalScope_9(DynValueU5BU5D_t370998360* value)
	{
		___LocalScope_9 = value;
		Il2CppCodeGenWriteBarrier((&___LocalScope_9), value);
	}

	inline static int32_t get_offset_of_ClosureScope_10() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___ClosureScope_10)); }
	inline ClosureContext_t2663877541 * get_ClosureScope_10() const { return ___ClosureScope_10; }
	inline ClosureContext_t2663877541 ** get_address_of_ClosureScope_10() { return &___ClosureScope_10; }
	inline void set_ClosureScope_10(ClosureContext_t2663877541 * value)
	{
		___ClosureScope_10 = value;
		Il2CppCodeGenWriteBarrier((&___ClosureScope_10), value);
	}

	inline static int32_t get_offset_of_Flags_11() { return static_cast<int32_t>(offsetof(CallStackItem_t906020313, ___Flags_11)); }
	inline int32_t get_Flags_11() const { return ___Flags_11; }
	inline int32_t* get_address_of_Flags_11() { return &___Flags_11; }
	inline void set_Flags_11(int32_t value)
	{
		___Flags_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLSTACKITEM_T906020313_H
#ifndef DYNVALUE_T2222874421_H
#define DYNVALUE_T2222874421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynValue
struct  DynValue_t2222874421  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.DynValue::m_RefID
	int32_t ___m_RefID_1;
	// System.Int32 MoonSharp.Interpreter.DynValue::m_HashCode
	int32_t ___m_HashCode_2;
	// System.Boolean MoonSharp.Interpreter.DynValue::m_ReadOnly
	bool ___m_ReadOnly_3;
	// System.Double MoonSharp.Interpreter.DynValue::m_Number
	double ___m_Number_4;
	// System.Object MoonSharp.Interpreter.DynValue::m_Object
	RuntimeObject * ___m_Object_5;
	// MoonSharp.Interpreter.DataType MoonSharp.Interpreter.DynValue::m_Type
	int32_t ___m_Type_6;

public:
	inline static int32_t get_offset_of_m_RefID_1() { return static_cast<int32_t>(offsetof(DynValue_t2222874421, ___m_RefID_1)); }
	inline int32_t get_m_RefID_1() const { return ___m_RefID_1; }
	inline int32_t* get_address_of_m_RefID_1() { return &___m_RefID_1; }
	inline void set_m_RefID_1(int32_t value)
	{
		___m_RefID_1 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_2() { return static_cast<int32_t>(offsetof(DynValue_t2222874421, ___m_HashCode_2)); }
	inline int32_t get_m_HashCode_2() const { return ___m_HashCode_2; }
	inline int32_t* get_address_of_m_HashCode_2() { return &___m_HashCode_2; }
	inline void set_m_HashCode_2(int32_t value)
	{
		___m_HashCode_2 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_3() { return static_cast<int32_t>(offsetof(DynValue_t2222874421, ___m_ReadOnly_3)); }
	inline bool get_m_ReadOnly_3() const { return ___m_ReadOnly_3; }
	inline bool* get_address_of_m_ReadOnly_3() { return &___m_ReadOnly_3; }
	inline void set_m_ReadOnly_3(bool value)
	{
		___m_ReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_m_Number_4() { return static_cast<int32_t>(offsetof(DynValue_t2222874421, ___m_Number_4)); }
	inline double get_m_Number_4() const { return ___m_Number_4; }
	inline double* get_address_of_m_Number_4() { return &___m_Number_4; }
	inline void set_m_Number_4(double value)
	{
		___m_Number_4 = value;
	}

	inline static int32_t get_offset_of_m_Object_5() { return static_cast<int32_t>(offsetof(DynValue_t2222874421, ___m_Object_5)); }
	inline RuntimeObject * get_m_Object_5() const { return ___m_Object_5; }
	inline RuntimeObject ** get_address_of_m_Object_5() { return &___m_Object_5; }
	inline void set_m_Object_5(RuntimeObject * value)
	{
		___m_Object_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Object_5), value);
	}

	inline static int32_t get_offset_of_m_Type_6() { return static_cast<int32_t>(offsetof(DynValue_t2222874421, ___m_Type_6)); }
	inline int32_t get_m_Type_6() const { return ___m_Type_6; }
	inline int32_t* get_address_of_m_Type_6() { return &___m_Type_6; }
	inline void set_m_Type_6(int32_t value)
	{
		___m_Type_6 = value;
	}
};

struct DynValue_t2222874421_StaticFields
{
public:
	// System.Int32 MoonSharp.Interpreter.DynValue::s_RefIDCounter
	int32_t ___s_RefIDCounter_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<Void>k__BackingField
	DynValue_t2222874421 * ___U3CVoidU3Ek__BackingField_7;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<Nil>k__BackingField
	DynValue_t2222874421 * ___U3CNilU3Ek__BackingField_8;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<True>k__BackingField
	DynValue_t2222874421 * ___U3CTrueU3Ek__BackingField_9;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<False>k__BackingField
	DynValue_t2222874421 * ___U3CFalseU3Ek__BackingField_10;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.Boolean> MoonSharp.Interpreter.DynValue::<>f__am$cache0
	Func_2_t3446586894 * ___U3CU3Ef__amU24cache0_11;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache1
	Func_2_t3847285892 * ___U3CU3Ef__amU24cache1_12;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache2
	Func_2_t3847285892 * ___U3CU3Ef__amU24cache2_13;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache3
	Func_2_t3847285892 * ___U3CU3Ef__amU24cache3_14;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache4
	Func_2_t3847285892 * ___U3CU3Ef__amU24cache4_15;

public:
	inline static int32_t get_offset_of_s_RefIDCounter_0() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___s_RefIDCounter_0)); }
	inline int32_t get_s_RefIDCounter_0() const { return ___s_RefIDCounter_0; }
	inline int32_t* get_address_of_s_RefIDCounter_0() { return &___s_RefIDCounter_0; }
	inline void set_s_RefIDCounter_0(int32_t value)
	{
		___s_RefIDCounter_0 = value;
	}

	inline static int32_t get_offset_of_U3CVoidU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CVoidU3Ek__BackingField_7)); }
	inline DynValue_t2222874421 * get_U3CVoidU3Ek__BackingField_7() const { return ___U3CVoidU3Ek__BackingField_7; }
	inline DynValue_t2222874421 ** get_address_of_U3CVoidU3Ek__BackingField_7() { return &___U3CVoidU3Ek__BackingField_7; }
	inline void set_U3CVoidU3Ek__BackingField_7(DynValue_t2222874421 * value)
	{
		___U3CVoidU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVoidU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CNilU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CNilU3Ek__BackingField_8)); }
	inline DynValue_t2222874421 * get_U3CNilU3Ek__BackingField_8() const { return ___U3CNilU3Ek__BackingField_8; }
	inline DynValue_t2222874421 ** get_address_of_U3CNilU3Ek__BackingField_8() { return &___U3CNilU3Ek__BackingField_8; }
	inline void set_U3CNilU3Ek__BackingField_8(DynValue_t2222874421 * value)
	{
		___U3CNilU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNilU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CTrueU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CTrueU3Ek__BackingField_9)); }
	inline DynValue_t2222874421 * get_U3CTrueU3Ek__BackingField_9() const { return ___U3CTrueU3Ek__BackingField_9; }
	inline DynValue_t2222874421 ** get_address_of_U3CTrueU3Ek__BackingField_9() { return &___U3CTrueU3Ek__BackingField_9; }
	inline void set_U3CTrueU3Ek__BackingField_9(DynValue_t2222874421 * value)
	{
		___U3CTrueU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrueU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CFalseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CFalseU3Ek__BackingField_10)); }
	inline DynValue_t2222874421 * get_U3CFalseU3Ek__BackingField_10() const { return ___U3CFalseU3Ek__BackingField_10; }
	inline DynValue_t2222874421 ** get_address_of_U3CFalseU3Ek__BackingField_10() { return &___U3CFalseU3Ek__BackingField_10; }
	inline void set_U3CFalseU3Ek__BackingField_10(DynValue_t2222874421 * value)
	{
		___U3CFalseU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFalseU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t3446586894 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t3446586894 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t3446586894 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_2_t3847285892 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_2_t3847285892 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_2_t3847285892 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Func_2_t3847285892 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Func_2_t3847285892 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Func_2_t3847285892 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_14() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CU3Ef__amU24cache3_14)); }
	inline Func_2_t3847285892 * get_U3CU3Ef__amU24cache3_14() const { return ___U3CU3Ef__amU24cache3_14; }
	inline Func_2_t3847285892 ** get_address_of_U3CU3Ef__amU24cache3_14() { return &___U3CU3Ef__amU24cache3_14; }
	inline void set_U3CU3Ef__amU24cache3_14(Func_2_t3847285892 * value)
	{
		___U3CU3Ef__amU24cache3_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_15() { return static_cast<int32_t>(offsetof(DynValue_t2222874421_StaticFields, ___U3CU3Ef__amU24cache4_15)); }
	inline Func_2_t3847285892 * get_U3CU3Ef__amU24cache4_15() const { return ___U3CU3Ef__amU24cache4_15; }
	inline Func_2_t3847285892 ** get_address_of_U3CU3Ef__amU24cache4_15() { return &___U3CU3Ef__amU24cache4_15; }
	inline void set_U3CU3Ef__amU24cache4_15(Func_2_t3847285892 * value)
	{
		___U3CU3Ef__amU24cache4_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNVALUE_T2222874421_H
#ifndef LUATYPEEXTENSIONS_T3076574148_H
#define LUATYPEEXTENSIONS_T3076574148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.LuaTypeExtensions
struct  LuaTypeExtensions_t3076574148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUATYPEEXTENSIONS_T3076574148_H
#ifndef PERFORMANCESTOPWATCH_T145047256_H
#define PERFORMANCESTOPWATCH_T145047256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch
struct  PerformanceStopwatch_t145047256  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Stopwatch
	Stopwatch_t3568258844 * ___m_Stopwatch_0;
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Count
	int32_t ___m_Count_1;
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Reentrant
	int32_t ___m_Reentrant_2;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounter MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Counter
	int32_t ___m_Counter_3;

public:
	inline static int32_t get_offset_of_m_Stopwatch_0() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t145047256, ___m_Stopwatch_0)); }
	inline Stopwatch_t3568258844 * get_m_Stopwatch_0() const { return ___m_Stopwatch_0; }
	inline Stopwatch_t3568258844 ** get_address_of_m_Stopwatch_0() { return &___m_Stopwatch_0; }
	inline void set_m_Stopwatch_0(Stopwatch_t3568258844 * value)
	{
		___m_Stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatch_0), value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t145047256, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}

	inline static int32_t get_offset_of_m_Reentrant_2() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t145047256, ___m_Reentrant_2)); }
	inline int32_t get_m_Reentrant_2() const { return ___m_Reentrant_2; }
	inline int32_t* get_address_of_m_Reentrant_2() { return &___m_Reentrant_2; }
	inline void set_m_Reentrant_2(int32_t value)
	{
		___m_Reentrant_2 = value;
	}

	inline static int32_t get_offset_of_m_Counter_3() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t145047256, ___m_Counter_3)); }
	inline int32_t get_m_Counter_3() const { return ___m_Counter_3; }
	inline int32_t* get_address_of_m_Counter_3() { return &___m_Counter_3; }
	inline void set_m_Counter_3(int32_t value)
	{
		___m_Counter_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCESTOPWATCH_T145047256_H
#ifndef EXECUTIONSTATE_T1404222033_H
#define EXECUTIONSTATE_T1404222033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ExecutionState
struct  ExecutionState_t1404222033  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Execution.VM.ExecutionState::ValueStack
	FastStack_1_t4116499783 * ___ValueStack_0;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem> MoonSharp.Interpreter.Execution.VM.ExecutionState::ExecutionStack
	FastStack_1_t2799645675 * ___ExecutionStack_1;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.ExecutionState::InstructionPtr
	int32_t ___InstructionPtr_2;
	// MoonSharp.Interpreter.CoroutineState MoonSharp.Interpreter.Execution.VM.ExecutionState::State
	int32_t ___State_3;

public:
	inline static int32_t get_offset_of_ValueStack_0() { return static_cast<int32_t>(offsetof(ExecutionState_t1404222033, ___ValueStack_0)); }
	inline FastStack_1_t4116499783 * get_ValueStack_0() const { return ___ValueStack_0; }
	inline FastStack_1_t4116499783 ** get_address_of_ValueStack_0() { return &___ValueStack_0; }
	inline void set_ValueStack_0(FastStack_1_t4116499783 * value)
	{
		___ValueStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___ValueStack_0), value);
	}

	inline static int32_t get_offset_of_ExecutionStack_1() { return static_cast<int32_t>(offsetof(ExecutionState_t1404222033, ___ExecutionStack_1)); }
	inline FastStack_1_t2799645675 * get_ExecutionStack_1() const { return ___ExecutionStack_1; }
	inline FastStack_1_t2799645675 ** get_address_of_ExecutionStack_1() { return &___ExecutionStack_1; }
	inline void set_ExecutionStack_1(FastStack_1_t2799645675 * value)
	{
		___ExecutionStack_1 = value;
		Il2CppCodeGenWriteBarrier((&___ExecutionStack_1), value);
	}

	inline static int32_t get_offset_of_InstructionPtr_2() { return static_cast<int32_t>(offsetof(ExecutionState_t1404222033, ___InstructionPtr_2)); }
	inline int32_t get_InstructionPtr_2() const { return ___InstructionPtr_2; }
	inline int32_t* get_address_of_InstructionPtr_2() { return &___InstructionPtr_2; }
	inline void set_InstructionPtr_2(int32_t value)
	{
		___InstructionPtr_2 = value;
	}

	inline static int32_t get_offset_of_State_3() { return static_cast<int32_t>(offsetof(ExecutionState_t1404222033, ___State_3)); }
	inline int32_t get_State_3() const { return ___State_3; }
	inline int32_t* get_address_of_State_3() { return &___State_3; }
	inline void set_State_3(int32_t value)
	{
		___State_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONSTATE_T1404222033_H
#ifndef COROUTINE_T3333720231_H
#define COROUTINE_T3333720231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine
struct  Coroutine_t3333720231  : public RefIdObject_t2239295642
{
public:
	// MoonSharp.Interpreter.Coroutine/CoroutineType MoonSharp.Interpreter.Coroutine::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Coroutine::m_ClrCallback
	CallbackFunction_t1839439212 * ___m_ClrCallback_3;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Coroutine::m_Processor
	Processor_t1734942896 * ___m_Processor_4;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Coroutine::<OwnerScript>k__BackingField
	Script_t454308935 * ___U3COwnerScriptU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Coroutine_t3333720231, ___U3CTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_2() const { return ___U3CTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_2() { return &___U3CTypeU3Ek__BackingField_2; }
	inline void set_U3CTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_ClrCallback_3() { return static_cast<int32_t>(offsetof(Coroutine_t3333720231, ___m_ClrCallback_3)); }
	inline CallbackFunction_t1839439212 * get_m_ClrCallback_3() const { return ___m_ClrCallback_3; }
	inline CallbackFunction_t1839439212 ** get_address_of_m_ClrCallback_3() { return &___m_ClrCallback_3; }
	inline void set_m_ClrCallback_3(CallbackFunction_t1839439212 * value)
	{
		___m_ClrCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClrCallback_3), value);
	}

	inline static int32_t get_offset_of_m_Processor_4() { return static_cast<int32_t>(offsetof(Coroutine_t3333720231, ___m_Processor_4)); }
	inline Processor_t1734942896 * get_m_Processor_4() const { return ___m_Processor_4; }
	inline Processor_t1734942896 ** get_address_of_m_Processor_4() { return &___m_Processor_4; }
	inline void set_m_Processor_4(Processor_t1734942896 * value)
	{
		___m_Processor_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_4), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Coroutine_t3333720231, ___U3COwnerScriptU3Ek__BackingField_5)); }
	inline Script_t454308935 * get_U3COwnerScriptU3Ek__BackingField_5() const { return ___U3COwnerScriptU3Ek__BackingField_5; }
	inline Script_t454308935 ** get_address_of_U3COwnerScriptU3Ek__BackingField_5() { return &___U3COwnerScriptU3Ek__BackingField_5; }
	inline void set_U3COwnerScriptU3Ek__BackingField_5(Script_t454308935 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COROUTINE_T3333720231_H
#ifndef PERFORMANCERESULT_T3601565594_H
#define PERFORMANCERESULT_T3601565594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceResult
struct  PerformanceResult_t3601565594  : public RuntimeObject
{
public:
	// System.String MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int64 MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Counter>k__BackingField
	int64_t ___U3CCounterU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Instances>k__BackingField
	int32_t ___U3CInstancesU3Ek__BackingField_2;
	// System.Boolean MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Global>k__BackingField
	bool ___U3CGlobalU3Ek__BackingField_3;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounterType MoonSharp.Interpreter.Diagnostics.PerformanceResult::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PerformanceResult_t3601565594, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCounterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PerformanceResult_t3601565594, ___U3CCounterU3Ek__BackingField_1)); }
	inline int64_t get_U3CCounterU3Ek__BackingField_1() const { return ___U3CCounterU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CCounterU3Ek__BackingField_1() { return &___U3CCounterU3Ek__BackingField_1; }
	inline void set_U3CCounterU3Ek__BackingField_1(int64_t value)
	{
		___U3CCounterU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CInstancesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PerformanceResult_t3601565594, ___U3CInstancesU3Ek__BackingField_2)); }
	inline int32_t get_U3CInstancesU3Ek__BackingField_2() const { return ___U3CInstancesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CInstancesU3Ek__BackingField_2() { return &___U3CInstancesU3Ek__BackingField_2; }
	inline void set_U3CInstancesU3Ek__BackingField_2(int32_t value)
	{
		___U3CInstancesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGlobalU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PerformanceResult_t3601565594, ___U3CGlobalU3Ek__BackingField_3)); }
	inline bool get_U3CGlobalU3Ek__BackingField_3() const { return ___U3CGlobalU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CGlobalU3Ek__BackingField_3() { return &___U3CGlobalU3Ek__BackingField_3; }
	inline void set_U3CGlobalU3Ek__BackingField_3(bool value)
	{
		___U3CGlobalU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PerformanceResult_t3601565594, ___U3CTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCERESULT_T3601565594_H
#ifndef INSTRUCTION_T3464170549_H
#define INSTRUCTION_T3464170549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Instruction
struct  Instruction_t3464170549  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.OpCode MoonSharp.Interpreter.Execution.VM.Instruction::OpCode
	int32_t ___OpCode_0;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.Execution.VM.Instruction::Symbol
	SymbolRef_t2475304184 * ___Symbol_1;
	// MoonSharp.Interpreter.SymbolRef[] MoonSharp.Interpreter.Execution.VM.Instruction::SymbolList
	SymbolRefU5BU5D_t3703738409* ___SymbolList_2;
	// System.String MoonSharp.Interpreter.Execution.VM.Instruction::Name
	String_t* ___Name_3;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Execution.VM.Instruction::Value
	DynValue_t2222874421 * ___Value_4;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Instruction::NumVal
	int32_t ___NumVal_5;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Instruction::NumVal2
	int32_t ___NumVal2_6;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.Instruction::SourceCodeRef
	SourceRef_t3827830669 * ___SourceCodeRef_7;

public:
	inline static int32_t get_offset_of_OpCode_0() { return static_cast<int32_t>(offsetof(Instruction_t3464170549, ___OpCode_0)); }
	inline int32_t get_OpCode_0() const { return ___OpCode_0; }
	inline int32_t* get_address_of_OpCode_0() { return &___OpCode_0; }
	inline void set_OpCode_0(int32_t value)
	{
		___OpCode_0 = value;
	}

	inline static int32_t get_offset_of_Symbol_1() { return static_cast<int32_t>(offsetof(Instruction_t3464170549, ___Symbol_1)); }
	inline SymbolRef_t2475304184 * get_Symbol_1() const { return ___Symbol_1; }
	inline SymbolRef_t2475304184 ** get_address_of_Symbol_1() { return &___Symbol_1; }
	inline void set_Symbol_1(SymbolRef_t2475304184 * value)
	{
		___Symbol_1 = value;
		Il2CppCodeGenWriteBarrier((&___Symbol_1), value);
	}

	inline static int32_t get_offset_of_SymbolList_2() { return static_cast<int32_t>(offsetof(Instruction_t3464170549, ___SymbolList_2)); }
	inline SymbolRefU5BU5D_t3703738409* get_SymbolList_2() const { return ___SymbolList_2; }
	inline SymbolRefU5BU5D_t3703738409** get_address_of_SymbolList_2() { return &___SymbolList_2; }
	inline void set_SymbolList_2(SymbolRefU5BU5D_t3703738409* value)
	{
		___SymbolList_2 = value;
		Il2CppCodeGenWriteBarrier((&___SymbolList_2), value);
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(Instruction_t3464170549, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___Name_3), value);
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(Instruction_t3464170549, ___Value_4)); }
	inline DynValue_t2222874421 * get_Value_4() const { return ___Value_4; }
	inline DynValue_t2222874421 ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(DynValue_t2222874421 * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((&___Value_4), value);
	}

	inline static int32_t get_offset_of_NumVal_5() { return static_cast<int32_t>(offsetof(Instruction_t3464170549, ___NumVal_5)); }
	inline int32_t get_NumVal_5() const { return ___NumVal_5; }
	inline int32_t* get_address_of_NumVal_5() { return &___NumVal_5; }
	inline void set_NumVal_5(int32_t value)
	{
		___NumVal_5 = value;
	}

	inline static int32_t get_offset_of_NumVal2_6() { return static_cast<int32_t>(offsetof(Instruction_t3464170549, ___NumVal2_6)); }
	inline int32_t get_NumVal2_6() const { return ___NumVal2_6; }
	inline int32_t* get_address_of_NumVal2_6() { return &___NumVal2_6; }
	inline void set_NumVal2_6(int32_t value)
	{
		___NumVal2_6 = value;
	}

	inline static int32_t get_offset_of_SourceCodeRef_7() { return static_cast<int32_t>(offsetof(Instruction_t3464170549, ___SourceCodeRef_7)); }
	inline SourceRef_t3827830669 * get_SourceCodeRef_7() const { return ___SourceCodeRef_7; }
	inline SourceRef_t3827830669 ** get_address_of_SourceCodeRef_7() { return &___SourceCodeRef_7; }
	inline void set_SourceCodeRef_7(SourceRef_t3827830669 * value)
	{
		___SourceCodeRef_7 = value;
		Il2CppCodeGenWriteBarrier((&___SourceCodeRef_7), value);
	}
};

struct Instruction_t3464170549_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String> MoonSharp.Interpreter.Execution.VM.Instruction::<>f__am$cache0
	Func_2_t2885058645 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(Instruction_t3464170549_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Func_2_t2885058645 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Func_2_t2885058645 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Func_2_t2885058645 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTION_T3464170549_H
#ifndef DYNAMICEXPRESSIONEXCEPTION_T3388764631_H
#define DYNAMICEXPRESSIONEXCEPTION_T3388764631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynamicExpressionException
struct  DynamicExpressionException_t3388764631  : public ScriptRuntimeException_t2167236282
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSIONEXCEPTION_T3388764631_H
#ifndef DEBUGCONTEXT_T3504958478_H
#define DEBUGCONTEXT_T3504958478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext
struct  DebugContext_t3504958478  : public RuntimeObject
{
public:
	// System.Boolean MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::DebuggerEnabled
	bool ___DebuggerEnabled_0;
	// MoonSharp.Interpreter.Debugging.IDebugger MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::DebuggerAttached
	RuntimeObject* ___DebuggerAttached_1;
	// MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::DebuggerCurrentAction
	int32_t ___DebuggerCurrentAction_2;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::DebuggerCurrentActionTarget
	int32_t ___DebuggerCurrentActionTarget_3;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::LastHlRef
	SourceRef_t3827830669 * ___LastHlRef_4;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::ExStackDepthAtStep
	int32_t ___ExStackDepthAtStep_5;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::BreakPoints
	List_1_t2535021387 * ___BreakPoints_6;
	// System.Boolean MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::LineBasedBreakPoints
	bool ___LineBasedBreakPoints_7;

public:
	inline static int32_t get_offset_of_DebuggerEnabled_0() { return static_cast<int32_t>(offsetof(DebugContext_t3504958478, ___DebuggerEnabled_0)); }
	inline bool get_DebuggerEnabled_0() const { return ___DebuggerEnabled_0; }
	inline bool* get_address_of_DebuggerEnabled_0() { return &___DebuggerEnabled_0; }
	inline void set_DebuggerEnabled_0(bool value)
	{
		___DebuggerEnabled_0 = value;
	}

	inline static int32_t get_offset_of_DebuggerAttached_1() { return static_cast<int32_t>(offsetof(DebugContext_t3504958478, ___DebuggerAttached_1)); }
	inline RuntimeObject* get_DebuggerAttached_1() const { return ___DebuggerAttached_1; }
	inline RuntimeObject** get_address_of_DebuggerAttached_1() { return &___DebuggerAttached_1; }
	inline void set_DebuggerAttached_1(RuntimeObject* value)
	{
		___DebuggerAttached_1 = value;
		Il2CppCodeGenWriteBarrier((&___DebuggerAttached_1), value);
	}

	inline static int32_t get_offset_of_DebuggerCurrentAction_2() { return static_cast<int32_t>(offsetof(DebugContext_t3504958478, ___DebuggerCurrentAction_2)); }
	inline int32_t get_DebuggerCurrentAction_2() const { return ___DebuggerCurrentAction_2; }
	inline int32_t* get_address_of_DebuggerCurrentAction_2() { return &___DebuggerCurrentAction_2; }
	inline void set_DebuggerCurrentAction_2(int32_t value)
	{
		___DebuggerCurrentAction_2 = value;
	}

	inline static int32_t get_offset_of_DebuggerCurrentActionTarget_3() { return static_cast<int32_t>(offsetof(DebugContext_t3504958478, ___DebuggerCurrentActionTarget_3)); }
	inline int32_t get_DebuggerCurrentActionTarget_3() const { return ___DebuggerCurrentActionTarget_3; }
	inline int32_t* get_address_of_DebuggerCurrentActionTarget_3() { return &___DebuggerCurrentActionTarget_3; }
	inline void set_DebuggerCurrentActionTarget_3(int32_t value)
	{
		___DebuggerCurrentActionTarget_3 = value;
	}

	inline static int32_t get_offset_of_LastHlRef_4() { return static_cast<int32_t>(offsetof(DebugContext_t3504958478, ___LastHlRef_4)); }
	inline SourceRef_t3827830669 * get_LastHlRef_4() const { return ___LastHlRef_4; }
	inline SourceRef_t3827830669 ** get_address_of_LastHlRef_4() { return &___LastHlRef_4; }
	inline void set_LastHlRef_4(SourceRef_t3827830669 * value)
	{
		___LastHlRef_4 = value;
		Il2CppCodeGenWriteBarrier((&___LastHlRef_4), value);
	}

	inline static int32_t get_offset_of_ExStackDepthAtStep_5() { return static_cast<int32_t>(offsetof(DebugContext_t3504958478, ___ExStackDepthAtStep_5)); }
	inline int32_t get_ExStackDepthAtStep_5() const { return ___ExStackDepthAtStep_5; }
	inline int32_t* get_address_of_ExStackDepthAtStep_5() { return &___ExStackDepthAtStep_5; }
	inline void set_ExStackDepthAtStep_5(int32_t value)
	{
		___ExStackDepthAtStep_5 = value;
	}

	inline static int32_t get_offset_of_BreakPoints_6() { return static_cast<int32_t>(offsetof(DebugContext_t3504958478, ___BreakPoints_6)); }
	inline List_1_t2535021387 * get_BreakPoints_6() const { return ___BreakPoints_6; }
	inline List_1_t2535021387 ** get_address_of_BreakPoints_6() { return &___BreakPoints_6; }
	inline void set_BreakPoints_6(List_1_t2535021387 * value)
	{
		___BreakPoints_6 = value;
		Il2CppCodeGenWriteBarrier((&___BreakPoints_6), value);
	}

	inline static int32_t get_offset_of_LineBasedBreakPoints_7() { return static_cast<int32_t>(offsetof(DebugContext_t3504958478, ___LineBasedBreakPoints_7)); }
	inline bool get_LineBasedBreakPoints_7() const { return ___LineBasedBreakPoints_7; }
	inline bool* get_address_of_LineBasedBreakPoints_7() { return &___LineBasedBreakPoints_7; }
	inline void set_LineBasedBreakPoints_7(bool value)
	{
		___LineBasedBreakPoints_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGCONTEXT_T3504958478_H
#ifndef GLOBALPERFORMANCESTOPWATCH_T2396865958_H
#define GLOBALPERFORMANCESTOPWATCH_T2396865958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch
struct  GlobalPerformanceStopwatch_t2396865958  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Count
	int32_t ___m_Count_0;
	// System.Int64 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Elapsed
	int64_t ___m_Elapsed_1;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounter MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Counter
	int32_t ___m_Counter_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t2396865958, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Elapsed_1() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t2396865958, ___m_Elapsed_1)); }
	inline int64_t get_m_Elapsed_1() const { return ___m_Elapsed_1; }
	inline int64_t* get_address_of_m_Elapsed_1() { return &___m_Elapsed_1; }
	inline void set_m_Elapsed_1(int64_t value)
	{
		___m_Elapsed_1 = value;
	}

	inline static int32_t get_offset_of_m_Counter_2() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t2396865958, ___m_Counter_2)); }
	inline int32_t get_m_Counter_2() const { return ___m_Counter_2; }
	inline int32_t* get_address_of_m_Counter_2() { return &___m_Counter_2; }
	inline void set_m_Counter_2(int32_t value)
	{
		___m_Counter_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPERFORMANCESTOPWATCH_T2396865958_H
#ifndef MOONSHARPUSERDATAATTRIBUTE_T3195591088_H
#define MOONSHARPUSERDATAATTRIBUTE_T3195591088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpUserDataAttribute
struct  MoonSharpUserDataAttribute_t3195591088  : public Attribute_t911517180
{
public:
	// MoonSharp.Interpreter.InteropAccessMode MoonSharp.Interpreter.MoonSharpUserDataAttribute::<AccessMode>k__BackingField
	int32_t ___U3CAccessModeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAccessModeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpUserDataAttribute_t3195591088, ___U3CAccessModeU3Ek__BackingField_0)); }
	inline int32_t get_U3CAccessModeU3Ek__BackingField_0() const { return ___U3CAccessModeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CAccessModeU3Ek__BackingField_0() { return &___U3CAccessModeU3Ek__BackingField_0; }
	inline void set_U3CAccessModeU3Ek__BackingField_0(int32_t value)
	{
		___U3CAccessModeU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPUSERDATAATTRIBUTE_T3195591088_H
#ifndef SCRIPTFUNCTIONDELEGATE_T2545784966_H
#define SCRIPTFUNCTIONDELEGATE_T2545784966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptFunctionDelegate
struct  ScriptFunctionDelegate_t2545784966  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTFUNCTIONDELEGATE_T2545784966_H
#ifndef DEBUGGERACTION_T157417280_H
#define DEBUGGERACTION_T157417280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerAction
struct  DebuggerAction_t157417280  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType MoonSharp.Interpreter.Debugging.DebuggerAction::<Action>k__BackingField
	int32_t ___U3CActionU3Ek__BackingField_0;
	// System.DateTime MoonSharp.Interpreter.Debugging.DebuggerAction::<TimeStampUTC>k__BackingField
	DateTime_t3865810556  ___U3CTimeStampUTCU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceID>k__BackingField
	int32_t ___U3CSourceIDU3Ek__BackingField_2;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceLine>k__BackingField
	int32_t ___U3CSourceLineU3Ek__BackingField_3;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceCol>k__BackingField
	int32_t ___U3CSourceColU3Ek__BackingField_4;
	// System.Int32[] MoonSharp.Interpreter.Debugging.DebuggerAction::<Lines>k__BackingField
	Int32U5BU5D_t2783033101* ___U3CLinesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DebuggerAction_t157417280, ___U3CActionU3Ek__BackingField_0)); }
	inline int32_t get_U3CActionU3Ek__BackingField_0() const { return ___U3CActionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CActionU3Ek__BackingField_0() { return &___U3CActionU3Ek__BackingField_0; }
	inline void set_U3CActionU3Ek__BackingField_0(int32_t value)
	{
		___U3CActionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTimeStampUTCU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebuggerAction_t157417280, ___U3CTimeStampUTCU3Ek__BackingField_1)); }
	inline DateTime_t3865810556  get_U3CTimeStampUTCU3Ek__BackingField_1() const { return ___U3CTimeStampUTCU3Ek__BackingField_1; }
	inline DateTime_t3865810556 * get_address_of_U3CTimeStampUTCU3Ek__BackingField_1() { return &___U3CTimeStampUTCU3Ek__BackingField_1; }
	inline void set_U3CTimeStampUTCU3Ek__BackingField_1(DateTime_t3865810556  value)
	{
		___U3CTimeStampUTCU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DebuggerAction_t157417280, ___U3CSourceIDU3Ek__BackingField_2)); }
	inline int32_t get_U3CSourceIDU3Ek__BackingField_2() const { return ___U3CSourceIDU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CSourceIDU3Ek__BackingField_2() { return &___U3CSourceIDU3Ek__BackingField_2; }
	inline void set_U3CSourceIDU3Ek__BackingField_2(int32_t value)
	{
		___U3CSourceIDU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSourceLineU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DebuggerAction_t157417280, ___U3CSourceLineU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceLineU3Ek__BackingField_3() const { return ___U3CSourceLineU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceLineU3Ek__BackingField_3() { return &___U3CSourceLineU3Ek__BackingField_3; }
	inline void set_U3CSourceLineU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceLineU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSourceColU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DebuggerAction_t157417280, ___U3CSourceColU3Ek__BackingField_4)); }
	inline int32_t get_U3CSourceColU3Ek__BackingField_4() const { return ___U3CSourceColU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSourceColU3Ek__BackingField_4() { return &___U3CSourceColU3Ek__BackingField_4; }
	inline void set_U3CSourceColU3Ek__BackingField_4(int32_t value)
	{
		___U3CSourceColU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLinesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DebuggerAction_t157417280, ___U3CLinesU3Ek__BackingField_5)); }
	inline Int32U5BU5D_t2783033101* get_U3CLinesU3Ek__BackingField_5() const { return ___U3CLinesU3Ek__BackingField_5; }
	inline Int32U5BU5D_t2783033101** get_address_of_U3CLinesU3Ek__BackingField_5() { return &___U3CLinesU3Ek__BackingField_5; }
	inline void set_U3CLinesU3Ek__BackingField_5(Int32U5BU5D_t2783033101* value)
	{
		___U3CLinesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLinesU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERACTION_T157417280_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (U3Cgmatch_aux_2U3Ec__AnonStorey0_t3768330070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2500[1] = 
{
	U3Cgmatch_aux_2U3Ec__AnonStorey0_t3768330070::get_offset_of_executionContext_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (StringRange_t4202265764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2501[2] = 
{
	StringRange_t4202265764::get_offset_of_U3CStartU3Ek__BackingField_0(),
	StringRange_t4202265764::get_offset_of_U3CEndU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (StringModule_t1717828019), -1, sizeof(StringModule_t1717828019_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2502[8] = 
{
	0,
	StringModule_t1717828019_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
	StringModule_t1717828019_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_2(),
	StringModule_t1717828019_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_3(),
	StringModule_t1717828019_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_4(),
	StringModule_t1717828019_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_5(),
	StringModule_t1717828019_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_6(),
	StringModule_t1717828019_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (TableIteratorsModule_t3302990458), -1, sizeof(TableIteratorsModule_t3302990458_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2503[2] = 
{
	TableIteratorsModule_t3302990458_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
	TableIteratorsModule_t3302990458_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (TableModule_t591508582), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (U3CsortU3Ec__AnonStorey0_t3351752004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2505[2] = 
{
	U3CsortU3Ec__AnonStorey0_t3351752004::get_offset_of_executionContext_0(),
	U3CsortU3Ec__AnonStorey0_t3351752004::get_offset_of_lt_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (TableModule_Globals_t2369367181), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (Extension_Methods_t3757483984), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2510[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (ReferenceEqualityComparer_t2728542929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2515[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (CallbackArguments_t697896535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[4] = 
{
	CallbackArguments_t697896535::get_offset_of_m_Args_0(),
	CallbackArguments_t697896535::get_offset_of_m_Count_1(),
	CallbackArguments_t697896535::get_offset_of_m_LastIsTuple_2(),
	CallbackArguments_t697896535::get_offset_of_U3CIsMethodCallU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (CallbackFunction_t1839439212), -1, sizeof(CallbackFunction_t1839439212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2517[4] = 
{
	CallbackFunction_t1839439212_StaticFields::get_offset_of_m_DefaultAccessMode_2(),
	CallbackFunction_t1839439212::get_offset_of_U3CNameU3Ek__BackingField_3(),
	CallbackFunction_t1839439212::get_offset_of_U3CClrCallbackU3Ek__BackingField_4(),
	CallbackFunction_t1839439212::get_offset_of_U3CAdditionalDataU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (Closure_t885440028), -1, sizeof(Closure_t885440028_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2518[4] = 
{
	Closure_t885440028::get_offset_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2(),
	Closure_t885440028::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
	Closure_t885440028_StaticFields::get_offset_of_emptyClosure_4(),
	Closure_t885440028::get_offset_of_U3CClosureContextU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (UpvaluesType_t1994474836)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2519[4] = 
{
	UpvaluesType_t1994474836::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (Coroutine_t3333720231), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2520[4] = 
{
	Coroutine_t3333720231::get_offset_of_U3CTypeU3Ek__BackingField_2(),
	Coroutine_t3333720231::get_offset_of_m_ClrCallback_3(),
	Coroutine_t3333720231::get_offset_of_m_Processor_4(),
	Coroutine_t3333720231::get_offset_of_U3COwnerScriptU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { sizeof (CoroutineType_t805425899)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2521[4] = 
{
	CoroutineType_t805425899::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2522[4] = 
{
	U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214::get_offset_of_U24this_0(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214::get_offset_of_U24current_1(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214::get_offset_of_U24disposing_2(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t1365674214::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (U3CAsEnumerableU3Ec__Iterator1_t3984748052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2523[6] = 
{
	U3CAsEnumerableU3Ec__Iterator1_t3984748052::get_offset_of_U24locvar0_0(),
	U3CAsEnumerableU3Ec__Iterator1_t3984748052::get_offset_of_U3CvU3E__1_1(),
	U3CAsEnumerableU3Ec__Iterator1_t3984748052::get_offset_of_U24this_2(),
	U3CAsEnumerableU3Ec__Iterator1_t3984748052::get_offset_of_U24current_3(),
	U3CAsEnumerableU3Ec__Iterator1_t3984748052::get_offset_of_U24disposing_4(),
	U3CAsEnumerableU3Ec__Iterator1_t3984748052::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2524[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (U3CAsUnityCoroutineU3Ec__Iterator3_t285561106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2525[6] = 
{
	U3CAsUnityCoroutineU3Ec__Iterator3_t285561106::get_offset_of_U24locvar0_0(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t285561106::get_offset_of_U3CvU3E__1_1(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t285561106::get_offset_of_U24this_2(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t285561106::get_offset_of_U24current_3(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t285561106::get_offset_of_U24disposing_4(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t285561106::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (CoroutineState_t965548856)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2526[7] = 
{
	CoroutineState_t965548856::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (DataType_t4234805284)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2527[14] = 
{
	DataType_t4234805284::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (LuaTypeExtensions_t3076574148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2528[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (DynValue_t2222874421), -1, sizeof(DynValue_t2222874421_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2529[16] = 
{
	DynValue_t2222874421_StaticFields::get_offset_of_s_RefIDCounter_0(),
	DynValue_t2222874421::get_offset_of_m_RefID_1(),
	DynValue_t2222874421::get_offset_of_m_HashCode_2(),
	DynValue_t2222874421::get_offset_of_m_ReadOnly_3(),
	DynValue_t2222874421::get_offset_of_m_Number_4(),
	DynValue_t2222874421::get_offset_of_m_Object_5(),
	DynValue_t2222874421::get_offset_of_m_Type_6(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CVoidU3Ek__BackingField_7(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CNilU3Ek__BackingField_8(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CTrueU3Ek__BackingField_9(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CFalseU3Ek__BackingField_10(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_13(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_14(),
	DynValue_t2222874421_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (ScriptPrivateResource_Extension_t1525137011), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { sizeof (RefIdObject_t2239295642), -1, sizeof(RefIdObject_t2239295642_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2532[2] = 
{
	RefIdObject_t2239295642_StaticFields::get_offset_of_s_RefIDCounter_0(),
	RefIdObject_t2239295642::get_offset_of_m_RefID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (ScriptFunctionDelegate_t2545784966), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (SymbolRef_t2475304184), -1, sizeof(SymbolRef_t2475304184_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2535[5] = 
{
	SymbolRef_t2475304184_StaticFields::get_offset_of_s_DefaultEnv_0(),
	SymbolRef_t2475304184::get_offset_of_i_Type_1(),
	SymbolRef_t2475304184::get_offset_of_i_Env_2(),
	SymbolRef_t2475304184::get_offset_of_i_Index_3(),
	SymbolRef_t2475304184::get_offset_of_i_Name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { sizeof (SymbolRefType_t615808884)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2536[5] = 
{
	SymbolRefType_t615808884::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { sizeof (Table_t1685905556), -1, sizeof(Table_t1685905556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2537[12] = 
{
	Table_t1685905556::get_offset_of_m_Values_2(),
	Table_t1685905556::get_offset_of_m_ValueMap_3(),
	Table_t1685905556::get_offset_of_m_StringMap_4(),
	Table_t1685905556::get_offset_of_m_ArrayMap_5(),
	Table_t1685905556::get_offset_of_m_Owner_6(),
	Table_t1685905556::get_offset_of_m_InitArray_7(),
	Table_t1685905556::get_offset_of_m_CachedLength_8(),
	Table_t1685905556::get_offset_of_m_ContainsNilEntries_9(),
	Table_t1685905556::get_offset_of_m_MetaTable_10(),
	Table_t1685905556_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	Table_t1685905556_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
	Table_t1685905556_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { sizeof (TablePair_t1924338620)+ sizeof (RuntimeObject), -1, sizeof(TablePair_t1924338620_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2538[3] = 
{
	TablePair_t1924338620_StaticFields::get_offset_of_s_NilNode_0(),
	TablePair_t1924338620::get_offset_of_key_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TablePair_t1924338620::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { sizeof (TailCallData_t197920250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2539[5] = 
{
	TailCallData_t197920250::get_offset_of_U3CFunctionU3Ek__BackingField_0(),
	TailCallData_t197920250::get_offset_of_U3CArgsU3Ek__BackingField_1(),
	TailCallData_t197920250::get_offset_of_U3CContinuationU3Ek__BackingField_2(),
	TailCallData_t197920250::get_offset_of_U3CErrorHandlerU3Ek__BackingField_3(),
	TailCallData_t197920250::get_offset_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { sizeof (TypeValidationFlags_t373687445)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2540[5] = 
{
	TypeValidationFlags_t373687445::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (UserData_t533344875), -1, sizeof(UserData_t533344875_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2541[4] = 
{
	UserData_t533344875::get_offset_of_U3CUserValueU3Ek__BackingField_2(),
	UserData_t533344875::get_offset_of_U3CObjectU3Ek__BackingField_3(),
	UserData_t533344875::get_offset_of_U3CDescriptorU3Ek__BackingField_4(),
	UserData_t533344875_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { sizeof (WellKnownSymbols_t3880468344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2542[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { sizeof (YieldRequest_t1424729498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2543[2] = 
{
	YieldRequest_t1424729498::get_offset_of_ReturnValues_0(),
	YieldRequest_t1424729498::get_offset_of_U3CForcedU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (DebuggerAction_t157417280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2544[6] = 
{
	DebuggerAction_t157417280::get_offset_of_U3CActionU3Ek__BackingField_0(),
	DebuggerAction_t157417280::get_offset_of_U3CTimeStampUTCU3Ek__BackingField_1(),
	DebuggerAction_t157417280::get_offset_of_U3CSourceIDU3Ek__BackingField_2(),
	DebuggerAction_t157417280::get_offset_of_U3CSourceLineU3Ek__BackingField_3(),
	DebuggerAction_t157417280::get_offset_of_U3CSourceColU3Ek__BackingField_4(),
	DebuggerAction_t157417280::get_offset_of_U3CLinesU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (ActionType_t1060779767)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2545[15] = 
{
	ActionType_t1060779767::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (DebuggerCaps_t1591294098)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2546[4] = 
{
	DebuggerCaps_t1591294098::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { sizeof (DebugService_t1737950749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2547[2] = 
{
	DebugService_t1737950749::get_offset_of_m_Processor_0(),
	DebugService_t1737950749::get_offset_of_U3COwnerScriptU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (SourceCode_t1164375887), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2549[6] = 
{
	SourceCode_t1164375887::get_offset_of_U3CNameU3Ek__BackingField_0(),
	SourceCode_t1164375887::get_offset_of_U3CCodeU3Ek__BackingField_1(),
	SourceCode_t1164375887::get_offset_of_U3CLinesU3Ek__BackingField_2(),
	SourceCode_t1164375887::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
	SourceCode_t1164375887::get_offset_of_U3CSourceIDU3Ek__BackingField_4(),
	SourceCode_t1164375887::get_offset_of_U3CRefsU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { sizeof (SourceRef_t3827830669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2550[9] = 
{
	SourceRef_t3827830669::get_offset_of_U3CIsClrLocationU3Ek__BackingField_0(),
	SourceRef_t3827830669::get_offset_of_U3CSourceIdxU3Ek__BackingField_1(),
	SourceRef_t3827830669::get_offset_of_U3CFromCharU3Ek__BackingField_2(),
	SourceRef_t3827830669::get_offset_of_U3CToCharU3Ek__BackingField_3(),
	SourceRef_t3827830669::get_offset_of_U3CFromLineU3Ek__BackingField_4(),
	SourceRef_t3827830669::get_offset_of_U3CToLineU3Ek__BackingField_5(),
	SourceRef_t3827830669::get_offset_of_U3CIsStepStopU3Ek__BackingField_6(),
	SourceRef_t3827830669::get_offset_of_Breakpoint_7(),
	SourceRef_t3827830669::get_offset_of_U3CCannotBreakpointU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { sizeof (WatchItem_t2146188680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2551[8] = 
{
	WatchItem_t2146188680::get_offset_of_U3CAddressU3Ek__BackingField_0(),
	WatchItem_t2146188680::get_offset_of_U3CBasePtrU3Ek__BackingField_1(),
	WatchItem_t2146188680::get_offset_of_U3CRetAddressU3Ek__BackingField_2(),
	WatchItem_t2146188680::get_offset_of_U3CNameU3Ek__BackingField_3(),
	WatchItem_t2146188680::get_offset_of_U3CValueU3Ek__BackingField_4(),
	WatchItem_t2146188680::get_offset_of_U3CLValueU3Ek__BackingField_5(),
	WatchItem_t2146188680::get_offset_of_U3CIsErrorU3Ek__BackingField_6(),
	WatchItem_t2146188680::get_offset_of_U3CLocationU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { sizeof (WatchType_t2412608760)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2552[8] = 
{
	WatchType_t2412608760::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (PerformanceCounter_t1633585215)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2553[6] = 
{
	PerformanceCounter_t1633585215::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (DummyPerformanceStopwatch_t3635296135), -1, sizeof(DummyPerformanceStopwatch_t3635296135_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2554[2] = 
{
	DummyPerformanceStopwatch_t3635296135_StaticFields::get_offset_of_Instance_0(),
	DummyPerformanceStopwatch_t3635296135::get_offset_of_m_Result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { sizeof (GlobalPerformanceStopwatch_t2396865958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2555[3] = 
{
	GlobalPerformanceStopwatch_t2396865958::get_offset_of_m_Count_0(),
	GlobalPerformanceStopwatch_t2396865958::get_offset_of_m_Elapsed_1(),
	GlobalPerformanceStopwatch_t2396865958::get_offset_of_m_Counter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (GlobalPerformanceStopwatch_StopwatchObject_t551336511), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2556[2] = 
{
	GlobalPerformanceStopwatch_StopwatchObject_t551336511::get_offset_of_m_Stopwatch_0(),
	GlobalPerformanceStopwatch_StopwatchObject_t551336511::get_offset_of_m_Parent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { sizeof (PerformanceStopwatch_t145047256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2558[4] = 
{
	PerformanceStopwatch_t145047256::get_offset_of_m_Stopwatch_0(),
	PerformanceStopwatch_t145047256::get_offset_of_m_Count_1(),
	PerformanceStopwatch_t145047256::get_offset_of_m_Reentrant_2(),
	PerformanceStopwatch_t145047256::get_offset_of_m_Counter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (PerformanceCounterType_t3743885816)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2559[3] = 
{
	PerformanceCounterType_t3743885816::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (PerformanceResult_t3601565594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2560[5] = 
{
	PerformanceResult_t3601565594::get_offset_of_U3CNameU3Ek__BackingField_0(),
	PerformanceResult_t3601565594::get_offset_of_U3CCounterU3Ek__BackingField_1(),
	PerformanceResult_t3601565594::get_offset_of_U3CInstancesU3Ek__BackingField_2(),
	PerformanceResult_t3601565594::get_offset_of_U3CGlobalU3Ek__BackingField_3(),
	PerformanceResult_t3601565594::get_offset_of_U3CTypeU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (PerformanceStatistics_t2083900831), -1, sizeof(PerformanceStatistics_t2083900831_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2561[3] = 
{
	PerformanceStatistics_t2083900831::get_offset_of_m_Stopwatches_0(),
	PerformanceStatistics_t2083900831_StaticFields::get_offset_of_m_GlobalStopwatches_1(),
	PerformanceStatistics_t2083900831::get_offset_of_m_Enabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (DynamicExpressionException_t3388764631), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (InternalErrorException_t2704734215), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (InterpreterException_t4252557503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2564[4] = 
{
	InterpreterException_t4252557503::get_offset_of_U3CInstructionPtrU3Ek__BackingField_11(),
	InterpreterException_t4252557503::get_offset_of_U3CCallStackU3Ek__BackingField_12(),
	InterpreterException_t4252557503::get_offset_of_U3CDecoratedMessageU3Ek__BackingField_13(),
	InterpreterException_t4252557503::get_offset_of_U3CDoNotDecorateMessageU3Ek__BackingField_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (ScriptRuntimeException_t2167236282), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { sizeof (SyntaxErrorException_t3349067502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2566[2] = 
{
	SyntaxErrorException_t3349067502::get_offset_of_U3CTokenU3Ek__BackingField_15(),
	SyntaxErrorException_t3349067502::get_offset_of_U3CIsPrematureStreamTerminationU3Ek__BackingField_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { sizeof (DynamicExpression_t83100786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2567[4] = 
{
	DynamicExpression_t83100786::get_offset_of_m_Exp_0(),
	DynamicExpression_t83100786::get_offset_of_m_Constant_1(),
	DynamicExpression_t83100786::get_offset_of_ExpressionCode_2(),
	DynamicExpression_t83100786::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { sizeof (InstructionFieldUsage_t389248056)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2568[9] = 
{
	InstructionFieldUsage_t389248056::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { sizeof (InstructionFieldUsage_Extensions_t1575649520), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (BuildTimeScope_t159247152), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2570[2] = 
{
	BuildTimeScope_t159247152::get_offset_of_m_Frames_0(),
	BuildTimeScope_t159247152::get_offset_of_m_ClosureBuilders_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (BuildTimeScopeBlock_t1386672061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2571[7] = 
{
	BuildTimeScopeBlock_t1386672061::get_offset_of_U3CParentU3Ek__BackingField_0(),
	BuildTimeScopeBlock_t1386672061::get_offset_of_U3CChildNodesU3Ek__BackingField_1(),
	BuildTimeScopeBlock_t1386672061::get_offset_of_U3CScopeBlockU3Ek__BackingField_2(),
	BuildTimeScopeBlock_t1386672061::get_offset_of_m_DefinedNames_3(),
	BuildTimeScopeBlock_t1386672061::get_offset_of_m_PendingGotos_4(),
	BuildTimeScopeBlock_t1386672061::get_offset_of_m_LocalLabels_5(),
	BuildTimeScopeBlock_t1386672061::get_offset_of_m_LastDefinedName_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (BuildTimeScopeFrame_t2920335644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2572[4] = 
{
	BuildTimeScopeFrame_t2920335644::get_offset_of_m_ScopeTreeRoot_0(),
	BuildTimeScopeFrame_t2920335644::get_offset_of_m_ScopeTreeHead_1(),
	BuildTimeScopeFrame_t2920335644::get_offset_of_m_ScopeFrame_2(),
	BuildTimeScopeFrame_t2920335644::get_offset_of_U3CHasVarArgsU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (ClosureContext_t2663877541), -1, sizeof(ClosureContext_t2663877541_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2573[2] = 
{
	ClosureContext_t2663877541::get_offset_of_U3CSymbolsU3Ek__BackingField_5(),
	ClosureContext_t2663877541_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (LoopTracker_t3246466408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2576[1] = 
{
	LoopTracker_t3246466408::get_offset_of_Loops_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (RuntimeScopeBlock_t854770072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2577[3] = 
{
	RuntimeScopeBlock_t854770072::get_offset_of_U3CFromU3Ek__BackingField_0(),
	RuntimeScopeBlock_t854770072::get_offset_of_U3CToU3Ek__BackingField_1(),
	RuntimeScopeBlock_t854770072::get_offset_of_U3CToInclusiveU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (RuntimeScopeFrame_t2464632172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2578[2] = 
{
	RuntimeScopeFrame_t2464632172::get_offset_of_U3CDebugSymbolsU3Ek__BackingField_0(),
	RuntimeScopeFrame_t2464632172::get_offset_of_U3CToFirstBlockU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (ScriptExecutionContext_t1101131097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2579[4] = 
{
	ScriptExecutionContext_t1101131097::get_offset_of_m_Processor_0(),
	ScriptExecutionContext_t1101131097::get_offset_of_m_Callback_1(),
	ScriptExecutionContext_t1101131097::get_offset_of_U3CIsDynamicExecutionU3Ek__BackingField_2(),
	ScriptExecutionContext_t1101131097::get_offset_of_U3CCallingLocationU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (ScriptLoadingContext_t3598415562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2580[6] = 
{
	ScriptLoadingContext_t3598415562::get_offset_of_U3CScriptU3Ek__BackingField_0(),
	ScriptLoadingContext_t3598415562::get_offset_of_U3CScopeU3Ek__BackingField_1(),
	ScriptLoadingContext_t3598415562::get_offset_of_U3CSourceU3Ek__BackingField_2(),
	ScriptLoadingContext_t3598415562::get_offset_of_U3CAnonymousU3Ek__BackingField_3(),
	ScriptLoadingContext_t3598415562::get_offset_of_U3CIsDynamicExpressionU3Ek__BackingField_4(),
	ScriptLoadingContext_t3598415562::get_offset_of_U3CLexerU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (ByteCode_t1511227056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2581[5] = 
{
	ByteCode_t1511227056::get_offset_of_Code_2(),
	ByteCode_t1511227056::get_offset_of_U3CScriptU3Ek__BackingField_3(),
	ByteCode_t1511227056::get_offset_of_m_SourceRefStack_4(),
	ByteCode_t1511227056::get_offset_of_m_CurrentSourceRef_5(),
	ByteCode_t1511227056::get_offset_of_LoopTracker_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (SourceCodeStackGuard_t300475048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2582[1] = 
{
	SourceCodeStackGuard_t300475048::get_offset_of_m_Bc_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (CallStackItem_t906020313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2583[12] = 
{
	CallStackItem_t906020313::get_offset_of_Debug_EntryPoint_0(),
	CallStackItem_t906020313::get_offset_of_Debug_Symbols_1(),
	CallStackItem_t906020313::get_offset_of_CallingSourceRef_2(),
	CallStackItem_t906020313::get_offset_of_ClrFunction_3(),
	CallStackItem_t906020313::get_offset_of_Continuation_4(),
	CallStackItem_t906020313::get_offset_of_ErrorHandler_5(),
	CallStackItem_t906020313::get_offset_of_ErrorHandlerBeforeUnwind_6(),
	CallStackItem_t906020313::get_offset_of_BasePointer_7(),
	CallStackItem_t906020313::get_offset_of_ReturnAddress_8(),
	CallStackItem_t906020313::get_offset_of_LocalScope_9(),
	CallStackItem_t906020313::get_offset_of_ClosureScope_10(),
	CallStackItem_t906020313::get_offset_of_Flags_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (CallStackItemFlags_t1528723934)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2584[7] = 
{
	CallStackItemFlags_t1528723934::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (ExecutionState_t1404222033), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2585[4] = 
{
	ExecutionState_t1404222033::get_offset_of_ValueStack_0(),
	ExecutionState_t1404222033::get_offset_of_ExecutionStack_1(),
	ExecutionState_t1404222033::get_offset_of_InstructionPtr_2(),
	ExecutionState_t1404222033::get_offset_of_State_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (Instruction_t3464170549), -1, sizeof(Instruction_t3464170549_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2586[9] = 
{
	Instruction_t3464170549::get_offset_of_OpCode_0(),
	Instruction_t3464170549::get_offset_of_Symbol_1(),
	Instruction_t3464170549::get_offset_of_SymbolList_2(),
	Instruction_t3464170549::get_offset_of_Name_3(),
	Instruction_t3464170549::get_offset_of_Value_4(),
	Instruction_t3464170549::get_offset_of_NumVal_5(),
	Instruction_t3464170549::get_offset_of_NumVal2_6(),
	Instruction_t3464170549::get_offset_of_SourceCodeRef_7(),
	Instruction_t3464170549_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (OpCode_t486190955)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2587[57] = 
{
	OpCode_t486190955::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (OpCodeMetadataType_t124784290)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2588[3] = 
{
	OpCodeMetadataType_t124784290::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (Processor_t1734942896), -1, sizeof(Processor_t1734942896_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2589[19] = 
{
	Processor_t1734942896::get_offset_of_m_RootChunk_0(),
	Processor_t1734942896::get_offset_of_m_ValueStack_1(),
	Processor_t1734942896::get_offset_of_m_ExecutionStack_2(),
	Processor_t1734942896::get_offset_of_m_CoroutinesStack_3(),
	Processor_t1734942896::get_offset_of_m_GlobalTable_4(),
	Processor_t1734942896::get_offset_of_m_Script_5(),
	Processor_t1734942896::get_offset_of_m_Parent_6(),
	Processor_t1734942896::get_offset_of_m_State_7(),
	Processor_t1734942896::get_offset_of_m_CanYield_8(),
	Processor_t1734942896::get_offset_of_m_SavedInstructionPtr_9(),
	Processor_t1734942896::get_offset_of_m_Debug_10(),
	Processor_t1734942896::get_offset_of_m_OwningThreadID_11(),
	Processor_t1734942896::get_offset_of_m_ExecutionNesting_12(),
	0,
	0,
	Processor_t1734942896::get_offset_of_U3CAssociatedCoroutineU3Ek__BackingField_15(),
	0,
	Processor_t1734942896::get_offset_of_AutoYieldCounter_17(),
	Processor_t1734942896_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (DebugContext_t3504958478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2590[8] = 
{
	DebugContext_t3504958478::get_offset_of_DebuggerEnabled_0(),
	DebugContext_t3504958478::get_offset_of_DebuggerAttached_1(),
	DebugContext_t3504958478::get_offset_of_DebuggerCurrentAction_2(),
	DebugContext_t3504958478::get_offset_of_DebuggerCurrentActionTarget_3(),
	DebugContext_t3504958478::get_offset_of_LastHlRef_4(),
	DebugContext_t3504958478::get_offset_of_ExStackDepthAtStep_5(),
	DebugContext_t3504958478::get_offset_of_BreakPoints_6(),
	DebugContext_t3504958478::get_offset_of_LineBasedBreakPoints_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { sizeof (U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t2683219178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2591[2] = 
{
	U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t2683219178::get_offset_of_context_0(),
	U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t2683219178::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { sizeof (MoonSharpHiddenAttribute_t3865089914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { sizeof (MoonSharpHideMemberAttribute_t1371673299), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2593[1] = 
{
	MoonSharpHideMemberAttribute_t1371673299::get_offset_of_U3CMemberNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { sizeof (MoonSharpPropertyAttribute_t63301656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2594[1] = 
{
	MoonSharpPropertyAttribute_t63301656::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { sizeof (MoonSharpUserDataAttribute_t3195591088), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2595[1] = 
{
	MoonSharpUserDataAttribute_t3195591088::get_offset_of_U3CAccessModeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { sizeof (MoonSharpUserDataMetamethodAttribute_t3070558883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2596[1] = 
{
	MoonSharpUserDataMetamethodAttribute_t3070558883::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (MoonSharpVisibleAttribute_t480830366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2597[1] = 
{
	MoonSharpVisibleAttribute_t480830366::get_offset_of_U3CVisibleU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { sizeof (DispatchingUserDataDescriptor_t1769900806), -1, sizeof(DispatchingUserDataDescriptor_t1769900806_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2598[11] = 
{
	DispatchingUserDataDescriptor_t1769900806::get_offset_of_m_ExtMethodsVersion_0(),
	DispatchingUserDataDescriptor_t1769900806::get_offset_of_m_MetaMembers_1(),
	DispatchingUserDataDescriptor_t1769900806::get_offset_of_m_Members_2(),
	0,
	0,
	0,
	0,
	DispatchingUserDataDescriptor_t1769900806::get_offset_of_U3CNameU3Ek__BackingField_7(),
	DispatchingUserDataDescriptor_t1769900806::get_offset_of_U3CTypeU3Ek__BackingField_8(),
	DispatchingUserDataDescriptor_t1769900806::get_offset_of_U3CFriendlyNameU3Ek__BackingField_9(),
	DispatchingUserDataDescriptor_t1769900806_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { sizeof (U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t2242919992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2599[2] = 
{
	U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t2242919992::get_offset_of_obj_0(),
	U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t2242919992::get_offset_of_U24this_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
