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
struct ScriptExecutionContext_t641345925;
// MoonSharp.Interpreter.DynValue[]
struct DynValueU5BU5D_t3271737346;
// MoonSharp.Interpreter.Execution.VM.Processor
struct Processor_t4242967914;
// MoonSharp.Interpreter.Script
struct Script_t116946378;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t186835049;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef>
struct List_1_t860933368;
// MoonSharp.Interpreter.DynValue
struct DynValue_t3829844307;
// MoonSharp.Interpreter.SymbolRef
struct SymbolRef_t815943396;
// MoonSharp.Interpreter.Debugging.SourceRef
struct SourceRef_t1362154715;
// MoonSharp.Interpreter.Diagnostics.PerformanceResult
struct PerformanceResult_t2643188564;
// System.Diagnostics.Stopwatch
struct Stopwatch_t24371359;
// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch
struct GlobalPerformanceStopwatch_t4069619989;
// MoonSharp.Interpreter.Tree.Expressions.DynamicExprExpression
struct DynamicExprExpression_t635356993;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame>
struct List_1_t3683538606;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.IClosureBuilder>
struct List_1_t4215341689;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock>
struct List_1_t3277678597;
// MoonSharp.Interpreter.Execution.RuntimeScopeBlock
struct RuntimeScopeBlock_t3341050526;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.SymbolRef>
struct Dictionary_2_t1501336120;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Tree.Statements.GotoStatement>
struct List_1_t1010628652;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Tree.Statements.LabelStatement>
struct Dictionary_2_t1198747907;
// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock
struct BuildTimeScopeBlock_t3778899944;
// MoonSharp.Interpreter.Execution.RuntimeScopeFrame
struct RuntimeScopeFrame_t237805439;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.ILoop>
struct FastStack_1_t3982943477;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.SymbolRef>
struct List_1_t314722049;
// MoonSharp.Interpreter.CallbackFunction
struct CallbackFunction_t225490189;
// MoonSharp.Interpreter.Execution.BuildTimeScope
struct BuildTimeScope_t1664169915;
// MoonSharp.Interpreter.Debugging.SourceCode
struct SourceCode_t2857473422;
// MoonSharp.Interpreter.Tree.Lexer
struct Lexer_t830168887;
// MoonSharp.Interpreter.Execution.VM.ByteCode
struct ByteCode_t1148839066;
// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor>
struct Dictionary_2_t859293897;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1411713628;
// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor
struct DispatchingUserDataDescriptor_t1120231325;
// System.IntPtr[]
struct IntPtrU5BU5D_t3153939259;
// System.Collections.IDictionary
struct IDictionary_t1821686079;
// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[]
struct IPerformanceStopwatchU5BU5D_t1714111119;
// MoonSharp.Interpreter.Coroutine
struct Coroutine_t1090859767;
// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue>
struct IEnumerator_1_t3201054226;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_t894117256;
// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32>
struct Func_2_t4088222926;
// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue>
struct Func_3_t1077306363;
// System.Collections.Generic.IList`1<MoonSharp.Interpreter.DynValue>
struct IList_1_t3904787581;
// System.Collections.Generic.IList`1<MoonSharp.Interpreter.Debugging.WatchItem>
struct IList_1_t1178809754;
// System.Void
struct Void_t3388531955;
// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String>
struct Func_2_t3974707564;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Instruction>
struct List_1_t299307542;
// MoonSharp.Interpreter.Execution.LoopTracker
struct LoopTracker_t250070572;
// MoonSharp.Interpreter.Execution.ClosureContext
struct ClosureContext_t93388692;
// System.Char[]
struct CharU5BU5D_t3139855038;
// System.Collections.Generic.LinkedList`1<MoonSharp.Interpreter.TablePair>
struct LinkedList_1_t1854163712;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<MoonSharp.Interpreter.DynValue,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t1352977668;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.String,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t2563042667;
// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.Int32,MoonSharp.Interpreter.TablePair>
struct LinkedListIndex_2_t643653851;
// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.TablePair>
struct Func_2_t3138911764;
// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue>
struct Func_2_t1420215914;
// MoonSharp.Interpreter.Interop.IUserDataDescriptor
struct IUserDataDescriptor_t712186097;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,MoonSharp.Interpreter.Interop.IUserDataDescriptor>,System.Type>
struct Func_2_t223607441;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1366250728;
// MoonSharp.Interpreter.Tree.Token
struct Token_t3424589546;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue>
struct FastStack_1_t3500734358;
// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem>
struct FastStack_1_t3401752689;
// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Processor>
struct List_1_t3741746567;
// MoonSharp.Interpreter.Table
struct Table_t3105308328;
// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext
struct DebugContext_t3020676161;
// System.Func`2<MoonSharp.Interpreter.Execution.VM.Processor,MoonSharp.Interpreter.Debugging.WatchItem>
struct Func_2_t2739716806;
// System.Int32[]
struct Int32U5BU5D_t2562413529;
// MoonSharp.Interpreter.SymbolRef[]
struct SymbolRefU5BU5D_t1265485069;
// System.Func`2<MoonSharp.Interpreter.DynValue,System.Boolean>
struct Func_2_t2884578622;
// System.Func`2<MoonSharp.Interpreter.DynValue,System.String>
struct Func_2_t1685992545;
// MoonSharp.Interpreter.Debugging.IDebugger
struct IDebugger_t1287132243;
// System.Object[]
struct ObjectU5BU5D_t3537476652;
// System.IAsyncResult
struct IAsyncResult_t2610909731;
// System.AsyncCallback
struct AsyncCallback_t583982849;




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
#ifndef U3CGMATCH_AUX_2U3EC__ANONSTOREY0_T650210492_H
#define U3CGMATCH_AUX_2U3EC__ANONSTOREY0_T650210492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.StringLib.KopiLua_StringLib/<gmatch_aux_2>c__AnonStorey0
struct  U3Cgmatch_aux_2U3Ec__AnonStorey0_t650210492  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.ScriptExecutionContext MoonSharp.Interpreter.CoreLib.StringLib.KopiLua_StringLib/<gmatch_aux_2>c__AnonStorey0::executionContext
	ScriptExecutionContext_t641345925 * ___executionContext_0;

public:
	inline static int32_t get_offset_of_executionContext_0() { return static_cast<int32_t>(offsetof(U3Cgmatch_aux_2U3Ec__AnonStorey0_t650210492, ___executionContext_0)); }
	inline ScriptExecutionContext_t641345925 * get_executionContext_0() const { return ___executionContext_0; }
	inline ScriptExecutionContext_t641345925 ** get_address_of_executionContext_0() { return &___executionContext_0; }
	inline void set_executionContext_0(ScriptExecutionContext_t641345925 * value)
	{
		___executionContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___executionContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGMATCH_AUX_2U3EC__ANONSTOREY0_T650210492_H
#ifndef YIELDREQUEST_T3556354496_H
#define YIELDREQUEST_T3556354496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.YieldRequest
struct  YieldRequest_t3556354496  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.YieldRequest::ReturnValues
	DynValueU5BU5D_t3271737346* ___ReturnValues_0;
	// System.Boolean MoonSharp.Interpreter.YieldRequest::<Forced>k__BackingField
	bool ___U3CForcedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_ReturnValues_0() { return static_cast<int32_t>(offsetof(YieldRequest_t3556354496, ___ReturnValues_0)); }
	inline DynValueU5BU5D_t3271737346* get_ReturnValues_0() const { return ___ReturnValues_0; }
	inline DynValueU5BU5D_t3271737346** get_address_of_ReturnValues_0() { return &___ReturnValues_0; }
	inline void set_ReturnValues_0(DynValueU5BU5D_t3271737346* value)
	{
		___ReturnValues_0 = value;
		Il2CppCodeGenWriteBarrier((&___ReturnValues_0), value);
	}

	inline static int32_t get_offset_of_U3CForcedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(YieldRequest_t3556354496, ___U3CForcedU3Ek__BackingField_1)); }
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
#endif // YIELDREQUEST_T3556354496_H
#ifndef DEBUGSERVICE_T974789156_H
#define DEBUGSERVICE_T974789156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebugService
struct  DebugService_t974789156  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Debugging.DebugService::m_Processor
	Processor_t4242967914 * ___m_Processor_0;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Debugging.DebugService::<OwnerScript>k__BackingField
	Script_t116946378 * ___U3COwnerScriptU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Processor_0() { return static_cast<int32_t>(offsetof(DebugService_t974789156, ___m_Processor_0)); }
	inline Processor_t4242967914 * get_m_Processor_0() const { return ___m_Processor_0; }
	inline Processor_t4242967914 ** get_address_of_m_Processor_0() { return &___m_Processor_0; }
	inline void set_m_Processor_0(Processor_t4242967914 * value)
	{
		___m_Processor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_0), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebugService_t974789156, ___U3COwnerScriptU3Ek__BackingField_1)); }
	inline Script_t116946378 * get_U3COwnerScriptU3Ek__BackingField_1() const { return ___U3COwnerScriptU3Ek__BackingField_1; }
	inline Script_t116946378 ** get_address_of_U3COwnerScriptU3Ek__BackingField_1() { return &___U3COwnerScriptU3Ek__BackingField_1; }
	inline void set_U3COwnerScriptU3Ek__BackingField_1(Script_t116946378 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGSERVICE_T974789156_H
#ifndef SOURCECODE_T2857473422_H
#define SOURCECODE_T2857473422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.SourceCode
struct  SourceCode_t2857473422  : public RuntimeObject
{
public:
	// System.String MoonSharp.Interpreter.Debugging.SourceCode::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String MoonSharp.Interpreter.Debugging.SourceCode::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_1;
	// System.String[] MoonSharp.Interpreter.Debugging.SourceCode::<Lines>k__BackingField
	StringU5BU5D_t186835049* ___U3CLinesU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Debugging.SourceCode::<OwnerScript>k__BackingField
	Script_t116946378 * ___U3COwnerScriptU3Ek__BackingField_3;
	// System.Int32 MoonSharp.Interpreter.Debugging.SourceCode::<SourceID>k__BackingField
	int32_t ___U3CSourceIDU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Debugging.SourceCode::<Refs>k__BackingField
	List_1_t860933368 * ___U3CRefsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SourceCode_t2857473422, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SourceCode_t2857473422, ___U3CCodeU3Ek__BackingField_1)); }
	inline String_t* get_U3CCodeU3Ek__BackingField_1() const { return ___U3CCodeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCodeU3Ek__BackingField_1() { return &___U3CCodeU3Ek__BackingField_1; }
	inline void set_U3CCodeU3Ek__BackingField_1(String_t* value)
	{
		___U3CCodeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCodeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CLinesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SourceCode_t2857473422, ___U3CLinesU3Ek__BackingField_2)); }
	inline StringU5BU5D_t186835049* get_U3CLinesU3Ek__BackingField_2() const { return ___U3CLinesU3Ek__BackingField_2; }
	inline StringU5BU5D_t186835049** get_address_of_U3CLinesU3Ek__BackingField_2() { return &___U3CLinesU3Ek__BackingField_2; }
	inline void set_U3CLinesU3Ek__BackingField_2(StringU5BU5D_t186835049* value)
	{
		___U3CLinesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLinesU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SourceCode_t2857473422, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t116946378 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t116946378 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t116946378 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSourceIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SourceCode_t2857473422, ___U3CSourceIDU3Ek__BackingField_4)); }
	inline int32_t get_U3CSourceIDU3Ek__BackingField_4() const { return ___U3CSourceIDU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSourceIDU3Ek__BackingField_4() { return &___U3CSourceIDU3Ek__BackingField_4; }
	inline void set_U3CSourceIDU3Ek__BackingField_4(int32_t value)
	{
		___U3CSourceIDU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRefsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceCode_t2857473422, ___U3CRefsU3Ek__BackingField_5)); }
	inline List_1_t860933368 * get_U3CRefsU3Ek__BackingField_5() const { return ___U3CRefsU3Ek__BackingField_5; }
	inline List_1_t860933368 ** get_address_of_U3CRefsU3Ek__BackingField_5() { return &___U3CRefsU3Ek__BackingField_5; }
	inline void set_U3CRefsU3Ek__BackingField_5(List_1_t860933368 * value)
	{
		___U3CRefsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRefsU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECODE_T2857473422_H
#ifndef SOURCEREF_T1362154715_H
#define SOURCEREF_T1362154715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.SourceRef
struct  SourceRef_t1362154715  : public RuntimeObject
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
	inline static int32_t get_offset_of_U3CIsClrLocationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___U3CIsClrLocationU3Ek__BackingField_0)); }
	inline bool get_U3CIsClrLocationU3Ek__BackingField_0() const { return ___U3CIsClrLocationU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsClrLocationU3Ek__BackingField_0() { return &___U3CIsClrLocationU3Ek__BackingField_0; }
	inline void set_U3CIsClrLocationU3Ek__BackingField_0(bool value)
	{
		___U3CIsClrLocationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdxU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___U3CSourceIdxU3Ek__BackingField_1)); }
	inline int32_t get_U3CSourceIdxU3Ek__BackingField_1() const { return ___U3CSourceIdxU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSourceIdxU3Ek__BackingField_1() { return &___U3CSourceIdxU3Ek__BackingField_1; }
	inline void set_U3CSourceIdxU3Ek__BackingField_1(int32_t value)
	{
		___U3CSourceIdxU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFromCharU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___U3CFromCharU3Ek__BackingField_2)); }
	inline int32_t get_U3CFromCharU3Ek__BackingField_2() const { return ___U3CFromCharU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFromCharU3Ek__BackingField_2() { return &___U3CFromCharU3Ek__BackingField_2; }
	inline void set_U3CFromCharU3Ek__BackingField_2(int32_t value)
	{
		___U3CFromCharU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CToCharU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___U3CToCharU3Ek__BackingField_3)); }
	inline int32_t get_U3CToCharU3Ek__BackingField_3() const { return ___U3CToCharU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CToCharU3Ek__BackingField_3() { return &___U3CToCharU3Ek__BackingField_3; }
	inline void set_U3CToCharU3Ek__BackingField_3(int32_t value)
	{
		___U3CToCharU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFromLineU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___U3CFromLineU3Ek__BackingField_4)); }
	inline int32_t get_U3CFromLineU3Ek__BackingField_4() const { return ___U3CFromLineU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFromLineU3Ek__BackingField_4() { return &___U3CFromLineU3Ek__BackingField_4; }
	inline void set_U3CFromLineU3Ek__BackingField_4(int32_t value)
	{
		___U3CFromLineU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CToLineU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___U3CToLineU3Ek__BackingField_5)); }
	inline int32_t get_U3CToLineU3Ek__BackingField_5() const { return ___U3CToLineU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CToLineU3Ek__BackingField_5() { return &___U3CToLineU3Ek__BackingField_5; }
	inline void set_U3CToLineU3Ek__BackingField_5(int32_t value)
	{
		___U3CToLineU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsStepStopU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___U3CIsStepStopU3Ek__BackingField_6)); }
	inline bool get_U3CIsStepStopU3Ek__BackingField_6() const { return ___U3CIsStepStopU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsStepStopU3Ek__BackingField_6() { return &___U3CIsStepStopU3Ek__BackingField_6; }
	inline void set_U3CIsStepStopU3Ek__BackingField_6(bool value)
	{
		___U3CIsStepStopU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_Breakpoint_7() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___Breakpoint_7)); }
	inline bool get_Breakpoint_7() const { return ___Breakpoint_7; }
	inline bool* get_address_of_Breakpoint_7() { return &___Breakpoint_7; }
	inline void set_Breakpoint_7(bool value)
	{
		___Breakpoint_7 = value;
	}

	inline static int32_t get_offset_of_U3CCannotBreakpointU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SourceRef_t1362154715, ___U3CCannotBreakpointU3Ek__BackingField_8)); }
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
#endif // SOURCEREF_T1362154715_H
#ifndef WATCHITEM_T1103866480_H
#define WATCHITEM_T1103866480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.WatchItem
struct  WatchItem_t1103866480  : public RuntimeObject
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
	DynValue_t3829844307 * ___U3CValueU3Ek__BackingField_4;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.Debugging.WatchItem::<LValue>k__BackingField
	SymbolRef_t815943396 * ___U3CLValueU3Ek__BackingField_5;
	// System.Boolean MoonSharp.Interpreter.Debugging.WatchItem::<IsError>k__BackingField
	bool ___U3CIsErrorU3Ek__BackingField_6;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Debugging.WatchItem::<Location>k__BackingField
	SourceRef_t1362154715 * ___U3CLocationU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CAddressU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WatchItem_t1103866480, ___U3CAddressU3Ek__BackingField_0)); }
	inline int32_t get_U3CAddressU3Ek__BackingField_0() const { return ___U3CAddressU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CAddressU3Ek__BackingField_0() { return &___U3CAddressU3Ek__BackingField_0; }
	inline void set_U3CAddressU3Ek__BackingField_0(int32_t value)
	{
		___U3CAddressU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CBasePtrU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WatchItem_t1103866480, ___U3CBasePtrU3Ek__BackingField_1)); }
	inline int32_t get_U3CBasePtrU3Ek__BackingField_1() const { return ___U3CBasePtrU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CBasePtrU3Ek__BackingField_1() { return &___U3CBasePtrU3Ek__BackingField_1; }
	inline void set_U3CBasePtrU3Ek__BackingField_1(int32_t value)
	{
		___U3CBasePtrU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRetAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WatchItem_t1103866480, ___U3CRetAddressU3Ek__BackingField_2)); }
	inline int32_t get_U3CRetAddressU3Ek__BackingField_2() const { return ___U3CRetAddressU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CRetAddressU3Ek__BackingField_2() { return &___U3CRetAddressU3Ek__BackingField_2; }
	inline void set_U3CRetAddressU3Ek__BackingField_2(int32_t value)
	{
		___U3CRetAddressU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WatchItem_t1103866480, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WatchItem_t1103866480, ___U3CValueU3Ek__BackingField_4)); }
	inline DynValue_t3829844307 * get_U3CValueU3Ek__BackingField_4() const { return ___U3CValueU3Ek__BackingField_4; }
	inline DynValue_t3829844307 ** get_address_of_U3CValueU3Ek__BackingField_4() { return &___U3CValueU3Ek__BackingField_4; }
	inline void set_U3CValueU3Ek__BackingField_4(DynValue_t3829844307 * value)
	{
		___U3CValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CLValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WatchItem_t1103866480, ___U3CLValueU3Ek__BackingField_5)); }
	inline SymbolRef_t815943396 * get_U3CLValueU3Ek__BackingField_5() const { return ___U3CLValueU3Ek__BackingField_5; }
	inline SymbolRef_t815943396 ** get_address_of_U3CLValueU3Ek__BackingField_5() { return &___U3CLValueU3Ek__BackingField_5; }
	inline void set_U3CLValueU3Ek__BackingField_5(SymbolRef_t815943396 * value)
	{
		___U3CLValueU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLValueU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CIsErrorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WatchItem_t1103866480, ___U3CIsErrorU3Ek__BackingField_6)); }
	inline bool get_U3CIsErrorU3Ek__BackingField_6() const { return ___U3CIsErrorU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsErrorU3Ek__BackingField_6() { return &___U3CIsErrorU3Ek__BackingField_6; }
	inline void set_U3CIsErrorU3Ek__BackingField_6(bool value)
	{
		___U3CIsErrorU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLocationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WatchItem_t1103866480, ___U3CLocationU3Ek__BackingField_7)); }
	inline SourceRef_t1362154715 * get_U3CLocationU3Ek__BackingField_7() const { return ___U3CLocationU3Ek__BackingField_7; }
	inline SourceRef_t1362154715 ** get_address_of_U3CLocationU3Ek__BackingField_7() { return &___U3CLocationU3Ek__BackingField_7; }
	inline void set_U3CLocationU3Ek__BackingField_7(SourceRef_t1362154715 * value)
	{
		___U3CLocationU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLocationU3Ek__BackingField_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATCHITEM_T1103866480_H
#ifndef DUMMYPERFORMANCESTOPWATCH_T1533952425_H
#define DUMMYPERFORMANCESTOPWATCH_T1533952425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch
struct  DummyPerformanceStopwatch_t1533952425  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceResult MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch::m_Result
	PerformanceResult_t2643188564 * ___m_Result_1;

public:
	inline static int32_t get_offset_of_m_Result_1() { return static_cast<int32_t>(offsetof(DummyPerformanceStopwatch_t1533952425, ___m_Result_1)); }
	inline PerformanceResult_t2643188564 * get_m_Result_1() const { return ___m_Result_1; }
	inline PerformanceResult_t2643188564 ** get_address_of_m_Result_1() { return &___m_Result_1; }
	inline void set_m_Result_1(PerformanceResult_t2643188564 * value)
	{
		___m_Result_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Result_1), value);
	}
};

struct DummyPerformanceStopwatch_t1533952425_StaticFields
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.DummyPerformanceStopwatch::Instance
	DummyPerformanceStopwatch_t1533952425 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(DummyPerformanceStopwatch_t1533952425_StaticFields, ___Instance_0)); }
	inline DummyPerformanceStopwatch_t1533952425 * get_Instance_0() const { return ___Instance_0; }
	inline DummyPerformanceStopwatch_t1533952425 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(DummyPerformanceStopwatch_t1533952425 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUMMYPERFORMANCESTOPWATCH_T1533952425_H
#ifndef GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T173418298_H
#define GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T173418298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject
struct  GlobalPerformanceStopwatch_StopwatchObject_t173418298  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject::m_Stopwatch
	Stopwatch_t24371359 * ___m_Stopwatch_0;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch/GlobalPerformanceStopwatch_StopwatchObject::m_Parent
	GlobalPerformanceStopwatch_t4069619989 * ___m_Parent_1;

public:
	inline static int32_t get_offset_of_m_Stopwatch_0() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_StopwatchObject_t173418298, ___m_Stopwatch_0)); }
	inline Stopwatch_t24371359 * get_m_Stopwatch_0() const { return ___m_Stopwatch_0; }
	inline Stopwatch_t24371359 ** get_address_of_m_Stopwatch_0() { return &___m_Stopwatch_0; }
	inline void set_m_Stopwatch_0(Stopwatch_t24371359 * value)
	{
		___m_Stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatch_0), value);
	}

	inline static int32_t get_offset_of_m_Parent_1() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_StopwatchObject_t173418298, ___m_Parent_1)); }
	inline GlobalPerformanceStopwatch_t4069619989 * get_m_Parent_1() const { return ___m_Parent_1; }
	inline GlobalPerformanceStopwatch_t4069619989 ** get_address_of_m_Parent_1() { return &___m_Parent_1; }
	inline void set_m_Parent_1(GlobalPerformanceStopwatch_t4069619989 * value)
	{
		___m_Parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPERFORMANCESTOPWATCH_STOPWATCHOBJECT_T173418298_H
#ifndef DYNAMICEXPRESSION_T1099824613_H
#define DYNAMICEXPRESSION_T1099824613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynamicExpression
struct  DynamicExpression_t1099824613  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Tree.Expressions.DynamicExprExpression MoonSharp.Interpreter.DynamicExpression::m_Exp
	DynamicExprExpression_t635356993 * ___m_Exp_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynamicExpression::m_Constant
	DynValue_t3829844307 * ___m_Constant_1;
	// System.String MoonSharp.Interpreter.DynamicExpression::ExpressionCode
	String_t* ___ExpressionCode_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.DynamicExpression::<OwnerScript>k__BackingField
	Script_t116946378 * ___U3COwnerScriptU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Exp_0() { return static_cast<int32_t>(offsetof(DynamicExpression_t1099824613, ___m_Exp_0)); }
	inline DynamicExprExpression_t635356993 * get_m_Exp_0() const { return ___m_Exp_0; }
	inline DynamicExprExpression_t635356993 ** get_address_of_m_Exp_0() { return &___m_Exp_0; }
	inline void set_m_Exp_0(DynamicExprExpression_t635356993 * value)
	{
		___m_Exp_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exp_0), value);
	}

	inline static int32_t get_offset_of_m_Constant_1() { return static_cast<int32_t>(offsetof(DynamicExpression_t1099824613, ___m_Constant_1)); }
	inline DynValue_t3829844307 * get_m_Constant_1() const { return ___m_Constant_1; }
	inline DynValue_t3829844307 ** get_address_of_m_Constant_1() { return &___m_Constant_1; }
	inline void set_m_Constant_1(DynValue_t3829844307 * value)
	{
		___m_Constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Constant_1), value);
	}

	inline static int32_t get_offset_of_ExpressionCode_2() { return static_cast<int32_t>(offsetof(DynamicExpression_t1099824613, ___ExpressionCode_2)); }
	inline String_t* get_ExpressionCode_2() const { return ___ExpressionCode_2; }
	inline String_t** get_address_of_ExpressionCode_2() { return &___ExpressionCode_2; }
	inline void set_ExpressionCode_2(String_t* value)
	{
		___ExpressionCode_2 = value;
		Il2CppCodeGenWriteBarrier((&___ExpressionCode_2), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DynamicExpression_t1099824613, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t116946378 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t116946378 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t116946378 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSION_T1099824613_H
#ifndef INSTRUCTIONFIELDUSAGE_EXTENSIONS_T277237731_H
#define INSTRUCTIONFIELDUSAGE_EXTENSIONS_T277237731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.InstructionFieldUsage_Extensions
struct  InstructionFieldUsage_Extensions_t277237731  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTIONFIELDUSAGE_EXTENSIONS_T277237731_H
#ifndef BUILDTIMESCOPE_T1664169915_H
#define BUILDTIMESCOPE_T1664169915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.BuildTimeScope
struct  BuildTimeScope_t1664169915  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame> MoonSharp.Interpreter.Execution.BuildTimeScope::m_Frames
	List_1_t3683538606 * ___m_Frames_0;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.IClosureBuilder> MoonSharp.Interpreter.Execution.BuildTimeScope::m_ClosureBuilders
	List_1_t4215341689 * ___m_ClosureBuilders_1;

public:
	inline static int32_t get_offset_of_m_Frames_0() { return static_cast<int32_t>(offsetof(BuildTimeScope_t1664169915, ___m_Frames_0)); }
	inline List_1_t3683538606 * get_m_Frames_0() const { return ___m_Frames_0; }
	inline List_1_t3683538606 ** get_address_of_m_Frames_0() { return &___m_Frames_0; }
	inline void set_m_Frames_0(List_1_t3683538606 * value)
	{
		___m_Frames_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Frames_0), value);
	}

	inline static int32_t get_offset_of_m_ClosureBuilders_1() { return static_cast<int32_t>(offsetof(BuildTimeScope_t1664169915, ___m_ClosureBuilders_1)); }
	inline List_1_t4215341689 * get_m_ClosureBuilders_1() const { return ___m_ClosureBuilders_1; }
	inline List_1_t4215341689 ** get_address_of_m_ClosureBuilders_1() { return &___m_ClosureBuilders_1; }
	inline void set_m_ClosureBuilders_1(List_1_t4215341689 * value)
	{
		___m_ClosureBuilders_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClosureBuilders_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDTIMESCOPE_T1664169915_H
#ifndef BUILDTIMESCOPEBLOCK_T3778899944_H
#define BUILDTIMESCOPEBLOCK_T3778899944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock
struct  BuildTimeScopeBlock_t3778899944  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<Parent>k__BackingField
	BuildTimeScopeBlock_t3778899944 * ___U3CParentU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<ChildNodes>k__BackingField
	List_1_t3277678597 * ___U3CChildNodesU3Ek__BackingField_1;
	// MoonSharp.Interpreter.Execution.RuntimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::<ScopeBlock>k__BackingField
	RuntimeScopeBlock_t3341050526 * ___U3CScopeBlockU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.SymbolRef> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_DefinedNames
	Dictionary_2_t1501336120 * ___m_DefinedNames_3;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Tree.Statements.GotoStatement> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_PendingGotos
	List_1_t1010628652 * ___m_PendingGotos_4;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Tree.Statements.LabelStatement> MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_LocalLabels
	Dictionary_2_t1198747907 * ___m_LocalLabels_5;
	// System.String MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock::m_LastDefinedName
	String_t* ___m_LastDefinedName_6;

public:
	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t3778899944, ___U3CParentU3Ek__BackingField_0)); }
	inline BuildTimeScopeBlock_t3778899944 * get_U3CParentU3Ek__BackingField_0() const { return ___U3CParentU3Ek__BackingField_0; }
	inline BuildTimeScopeBlock_t3778899944 ** get_address_of_U3CParentU3Ek__BackingField_0() { return &___U3CParentU3Ek__BackingField_0; }
	inline void set_U3CParentU3Ek__BackingField_0(BuildTimeScopeBlock_t3778899944 * value)
	{
		___U3CParentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParentU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CChildNodesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t3778899944, ___U3CChildNodesU3Ek__BackingField_1)); }
	inline List_1_t3277678597 * get_U3CChildNodesU3Ek__BackingField_1() const { return ___U3CChildNodesU3Ek__BackingField_1; }
	inline List_1_t3277678597 ** get_address_of_U3CChildNodesU3Ek__BackingField_1() { return &___U3CChildNodesU3Ek__BackingField_1; }
	inline void set_U3CChildNodesU3Ek__BackingField_1(List_1_t3277678597 * value)
	{
		___U3CChildNodesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CChildNodesU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CScopeBlockU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t3778899944, ___U3CScopeBlockU3Ek__BackingField_2)); }
	inline RuntimeScopeBlock_t3341050526 * get_U3CScopeBlockU3Ek__BackingField_2() const { return ___U3CScopeBlockU3Ek__BackingField_2; }
	inline RuntimeScopeBlock_t3341050526 ** get_address_of_U3CScopeBlockU3Ek__BackingField_2() { return &___U3CScopeBlockU3Ek__BackingField_2; }
	inline void set_U3CScopeBlockU3Ek__BackingField_2(RuntimeScopeBlock_t3341050526 * value)
	{
		___U3CScopeBlockU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScopeBlockU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_DefinedNames_3() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t3778899944, ___m_DefinedNames_3)); }
	inline Dictionary_2_t1501336120 * get_m_DefinedNames_3() const { return ___m_DefinedNames_3; }
	inline Dictionary_2_t1501336120 ** get_address_of_m_DefinedNames_3() { return &___m_DefinedNames_3; }
	inline void set_m_DefinedNames_3(Dictionary_2_t1501336120 * value)
	{
		___m_DefinedNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefinedNames_3), value);
	}

	inline static int32_t get_offset_of_m_PendingGotos_4() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t3778899944, ___m_PendingGotos_4)); }
	inline List_1_t1010628652 * get_m_PendingGotos_4() const { return ___m_PendingGotos_4; }
	inline List_1_t1010628652 ** get_address_of_m_PendingGotos_4() { return &___m_PendingGotos_4; }
	inline void set_m_PendingGotos_4(List_1_t1010628652 * value)
	{
		___m_PendingGotos_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PendingGotos_4), value);
	}

	inline static int32_t get_offset_of_m_LocalLabels_5() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t3778899944, ___m_LocalLabels_5)); }
	inline Dictionary_2_t1198747907 * get_m_LocalLabels_5() const { return ___m_LocalLabels_5; }
	inline Dictionary_2_t1198747907 ** get_address_of_m_LocalLabels_5() { return &___m_LocalLabels_5; }
	inline void set_m_LocalLabels_5(Dictionary_2_t1198747907 * value)
	{
		___m_LocalLabels_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalLabels_5), value);
	}

	inline static int32_t get_offset_of_m_LastDefinedName_6() { return static_cast<int32_t>(offsetof(BuildTimeScopeBlock_t3778899944, ___m_LastDefinedName_6)); }
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
#endif // BUILDTIMESCOPEBLOCK_T3778899944_H
#ifndef BUILDTIMESCOPEFRAME_T4184759953_H
#define BUILDTIMESCOPEFRAME_T4184759953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame
struct  BuildTimeScopeFrame_t4184759953  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeTreeRoot
	BuildTimeScopeBlock_t3778899944 * ___m_ScopeTreeRoot_0;
	// MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeBlock MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeTreeHead
	BuildTimeScopeBlock_t3778899944 * ___m_ScopeTreeHead_1;
	// MoonSharp.Interpreter.Execution.RuntimeScopeFrame MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::m_ScopeFrame
	RuntimeScopeFrame_t237805439 * ___m_ScopeFrame_2;
	// System.Boolean MoonSharp.Interpreter.Execution.Scopes.BuildTimeScopeFrame::<HasVarArgs>k__BackingField
	bool ___U3CHasVarArgsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_ScopeTreeRoot_0() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t4184759953, ___m_ScopeTreeRoot_0)); }
	inline BuildTimeScopeBlock_t3778899944 * get_m_ScopeTreeRoot_0() const { return ___m_ScopeTreeRoot_0; }
	inline BuildTimeScopeBlock_t3778899944 ** get_address_of_m_ScopeTreeRoot_0() { return &___m_ScopeTreeRoot_0; }
	inline void set_m_ScopeTreeRoot_0(BuildTimeScopeBlock_t3778899944 * value)
	{
		___m_ScopeTreeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeTreeRoot_0), value);
	}

	inline static int32_t get_offset_of_m_ScopeTreeHead_1() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t4184759953, ___m_ScopeTreeHead_1)); }
	inline BuildTimeScopeBlock_t3778899944 * get_m_ScopeTreeHead_1() const { return ___m_ScopeTreeHead_1; }
	inline BuildTimeScopeBlock_t3778899944 ** get_address_of_m_ScopeTreeHead_1() { return &___m_ScopeTreeHead_1; }
	inline void set_m_ScopeTreeHead_1(BuildTimeScopeBlock_t3778899944 * value)
	{
		___m_ScopeTreeHead_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeTreeHead_1), value);
	}

	inline static int32_t get_offset_of_m_ScopeFrame_2() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t4184759953, ___m_ScopeFrame_2)); }
	inline RuntimeScopeFrame_t237805439 * get_m_ScopeFrame_2() const { return ___m_ScopeFrame_2; }
	inline RuntimeScopeFrame_t237805439 ** get_address_of_m_ScopeFrame_2() { return &___m_ScopeFrame_2; }
	inline void set_m_ScopeFrame_2(RuntimeScopeFrame_t237805439 * value)
	{
		___m_ScopeFrame_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScopeFrame_2), value);
	}

	inline static int32_t get_offset_of_U3CHasVarArgsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BuildTimeScopeFrame_t4184759953, ___U3CHasVarArgsU3Ek__BackingField_3)); }
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
#endif // BUILDTIMESCOPEFRAME_T4184759953_H
#ifndef LOOPTRACKER_T250070572_H
#define LOOPTRACKER_T250070572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.LoopTracker
struct  LoopTracker_t250070572  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.ILoop> MoonSharp.Interpreter.Execution.LoopTracker::Loops
	FastStack_1_t3982943477 * ___Loops_0;

public:
	inline static int32_t get_offset_of_Loops_0() { return static_cast<int32_t>(offsetof(LoopTracker_t250070572, ___Loops_0)); }
	inline FastStack_1_t3982943477 * get_Loops_0() const { return ___Loops_0; }
	inline FastStack_1_t3982943477 ** get_address_of_Loops_0() { return &___Loops_0; }
	inline void set_Loops_0(FastStack_1_t3982943477 * value)
	{
		___Loops_0 = value;
		Il2CppCodeGenWriteBarrier((&___Loops_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPTRACKER_T250070572_H
#ifndef RUNTIMESCOPEBLOCK_T3341050526_H
#define RUNTIMESCOPEBLOCK_T3341050526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.RuntimeScopeBlock
struct  RuntimeScopeBlock_t3341050526  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<From>k__BackingField
	int32_t ___U3CFromU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<To>k__BackingField
	int32_t ___U3CToU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeBlock::<ToInclusive>k__BackingField
	int32_t ___U3CToInclusiveU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFromU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t3341050526, ___U3CFromU3Ek__BackingField_0)); }
	inline int32_t get_U3CFromU3Ek__BackingField_0() const { return ___U3CFromU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CFromU3Ek__BackingField_0() { return &___U3CFromU3Ek__BackingField_0; }
	inline void set_U3CFromU3Ek__BackingField_0(int32_t value)
	{
		___U3CFromU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CToU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t3341050526, ___U3CToU3Ek__BackingField_1)); }
	inline int32_t get_U3CToU3Ek__BackingField_1() const { return ___U3CToU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CToU3Ek__BackingField_1() { return &___U3CToU3Ek__BackingField_1; }
	inline void set_U3CToU3Ek__BackingField_1(int32_t value)
	{
		___U3CToU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CToInclusiveU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RuntimeScopeBlock_t3341050526, ___U3CToInclusiveU3Ek__BackingField_2)); }
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
#endif // RUNTIMESCOPEBLOCK_T3341050526_H
#ifndef RUNTIMESCOPEFRAME_T237805439_H
#define RUNTIMESCOPEFRAME_T237805439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.RuntimeScopeFrame
struct  RuntimeScopeFrame_t237805439  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.SymbolRef> MoonSharp.Interpreter.Execution.RuntimeScopeFrame::<DebugSymbols>k__BackingField
	List_1_t314722049 * ___U3CDebugSymbolsU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.Execution.RuntimeScopeFrame::<ToFirstBlock>k__BackingField
	int32_t ___U3CToFirstBlockU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CDebugSymbolsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeScopeFrame_t237805439, ___U3CDebugSymbolsU3Ek__BackingField_0)); }
	inline List_1_t314722049 * get_U3CDebugSymbolsU3Ek__BackingField_0() const { return ___U3CDebugSymbolsU3Ek__BackingField_0; }
	inline List_1_t314722049 ** get_address_of_U3CDebugSymbolsU3Ek__BackingField_0() { return &___U3CDebugSymbolsU3Ek__BackingField_0; }
	inline void set_U3CDebugSymbolsU3Ek__BackingField_0(List_1_t314722049 * value)
	{
		___U3CDebugSymbolsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDebugSymbolsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CToFirstBlockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RuntimeScopeFrame_t237805439, ___U3CToFirstBlockU3Ek__BackingField_1)); }
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
#endif // RUNTIMESCOPEFRAME_T237805439_H
#ifndef SCRIPTEXECUTIONCONTEXT_T641345925_H
#define SCRIPTEXECUTIONCONTEXT_T641345925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptExecutionContext
struct  ScriptExecutionContext_t641345925  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.ScriptExecutionContext::m_Processor
	Processor_t4242967914 * ___m_Processor_0;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.ScriptExecutionContext::m_Callback
	CallbackFunction_t225490189 * ___m_Callback_1;
	// System.Boolean MoonSharp.Interpreter.ScriptExecutionContext::<IsDynamicExecution>k__BackingField
	bool ___U3CIsDynamicExecutionU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.ScriptExecutionContext::<CallingLocation>k__BackingField
	SourceRef_t1362154715 * ___U3CCallingLocationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Processor_0() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t641345925, ___m_Processor_0)); }
	inline Processor_t4242967914 * get_m_Processor_0() const { return ___m_Processor_0; }
	inline Processor_t4242967914 ** get_address_of_m_Processor_0() { return &___m_Processor_0; }
	inline void set_m_Processor_0(Processor_t4242967914 * value)
	{
		___m_Processor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_0), value);
	}

	inline static int32_t get_offset_of_m_Callback_1() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t641345925, ___m_Callback_1)); }
	inline CallbackFunction_t225490189 * get_m_Callback_1() const { return ___m_Callback_1; }
	inline CallbackFunction_t225490189 ** get_address_of_m_Callback_1() { return &___m_Callback_1; }
	inline void set_m_Callback_1(CallbackFunction_t225490189 * value)
	{
		___m_Callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Callback_1), value);
	}

	inline static int32_t get_offset_of_U3CIsDynamicExecutionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t641345925, ___U3CIsDynamicExecutionU3Ek__BackingField_2)); }
	inline bool get_U3CIsDynamicExecutionU3Ek__BackingField_2() const { return ___U3CIsDynamicExecutionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsDynamicExecutionU3Ek__BackingField_2() { return &___U3CIsDynamicExecutionU3Ek__BackingField_2; }
	inline void set_U3CIsDynamicExecutionU3Ek__BackingField_2(bool value)
	{
		___U3CIsDynamicExecutionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCallingLocationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptExecutionContext_t641345925, ___U3CCallingLocationU3Ek__BackingField_3)); }
	inline SourceRef_t1362154715 * get_U3CCallingLocationU3Ek__BackingField_3() const { return ___U3CCallingLocationU3Ek__BackingField_3; }
	inline SourceRef_t1362154715 ** get_address_of_U3CCallingLocationU3Ek__BackingField_3() { return &___U3CCallingLocationU3Ek__BackingField_3; }
	inline void set_U3CCallingLocationU3Ek__BackingField_3(SourceRef_t1362154715 * value)
	{
		___U3CCallingLocationU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCallingLocationU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTEXECUTIONCONTEXT_T641345925_H
#ifndef SCRIPTLOADINGCONTEXT_T2956064312_H
#define SCRIPTLOADINGCONTEXT_T2956064312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.ScriptLoadingContext
struct  ScriptLoadingContext_t2956064312  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Script>k__BackingField
	Script_t116946378 * ___U3CScriptU3Ek__BackingField_0;
	// MoonSharp.Interpreter.Execution.BuildTimeScope MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Scope>k__BackingField
	BuildTimeScope_t1664169915 * ___U3CScopeU3Ek__BackingField_1;
	// MoonSharp.Interpreter.Debugging.SourceCode MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Source>k__BackingField
	SourceCode_t2857473422 * ___U3CSourceU3Ek__BackingField_2;
	// System.Boolean MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Anonymous>k__BackingField
	bool ___U3CAnonymousU3Ek__BackingField_3;
	// System.Boolean MoonSharp.Interpreter.Execution.ScriptLoadingContext::<IsDynamicExpression>k__BackingField
	bool ___U3CIsDynamicExpressionU3Ek__BackingField_4;
	// MoonSharp.Interpreter.Tree.Lexer MoonSharp.Interpreter.Execution.ScriptLoadingContext::<Lexer>k__BackingField
	Lexer_t830168887 * ___U3CLexerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CScriptU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2956064312, ___U3CScriptU3Ek__BackingField_0)); }
	inline Script_t116946378 * get_U3CScriptU3Ek__BackingField_0() const { return ___U3CScriptU3Ek__BackingField_0; }
	inline Script_t116946378 ** get_address_of_U3CScriptU3Ek__BackingField_0() { return &___U3CScriptU3Ek__BackingField_0; }
	inline void set_U3CScriptU3Ek__BackingField_0(Script_t116946378 * value)
	{
		___U3CScriptU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScriptU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CScopeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2956064312, ___U3CScopeU3Ek__BackingField_1)); }
	inline BuildTimeScope_t1664169915 * get_U3CScopeU3Ek__BackingField_1() const { return ___U3CScopeU3Ek__BackingField_1; }
	inline BuildTimeScope_t1664169915 ** get_address_of_U3CScopeU3Ek__BackingField_1() { return &___U3CScopeU3Ek__BackingField_1; }
	inline void set_U3CScopeU3Ek__BackingField_1(BuildTimeScope_t1664169915 * value)
	{
		___U3CScopeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScopeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2956064312, ___U3CSourceU3Ek__BackingField_2)); }
	inline SourceCode_t2857473422 * get_U3CSourceU3Ek__BackingField_2() const { return ___U3CSourceU3Ek__BackingField_2; }
	inline SourceCode_t2857473422 ** get_address_of_U3CSourceU3Ek__BackingField_2() { return &___U3CSourceU3Ek__BackingField_2; }
	inline void set_U3CSourceU3Ek__BackingField_2(SourceCode_t2857473422 * value)
	{
		___U3CSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CAnonymousU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2956064312, ___U3CAnonymousU3Ek__BackingField_3)); }
	inline bool get_U3CAnonymousU3Ek__BackingField_3() const { return ___U3CAnonymousU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAnonymousU3Ek__BackingField_3() { return &___U3CAnonymousU3Ek__BackingField_3; }
	inline void set_U3CAnonymousU3Ek__BackingField_3(bool value)
	{
		___U3CAnonymousU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsDynamicExpressionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2956064312, ___U3CIsDynamicExpressionU3Ek__BackingField_4)); }
	inline bool get_U3CIsDynamicExpressionU3Ek__BackingField_4() const { return ___U3CIsDynamicExpressionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsDynamicExpressionU3Ek__BackingField_4() { return &___U3CIsDynamicExpressionU3Ek__BackingField_4; }
	inline void set_U3CIsDynamicExpressionU3Ek__BackingField_4(bool value)
	{
		___U3CIsDynamicExpressionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLexerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScriptLoadingContext_t2956064312, ___U3CLexerU3Ek__BackingField_5)); }
	inline Lexer_t830168887 * get_U3CLexerU3Ek__BackingField_5() const { return ___U3CLexerU3Ek__BackingField_5; }
	inline Lexer_t830168887 ** get_address_of_U3CLexerU3Ek__BackingField_5() { return &___U3CLexerU3Ek__BackingField_5; }
	inline void set_U3CLexerU3Ek__BackingField_5(Lexer_t830168887 * value)
	{
		___U3CLexerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLexerU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTLOADINGCONTEXT_T2956064312_H
#ifndef SOURCECODESTACKGUARD_T1700738214_H
#define SOURCECODESTACKGUARD_T1700738214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ByteCode/SourceCodeStackGuard
struct  SourceCodeStackGuard_t1700738214  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.ByteCode MoonSharp.Interpreter.Execution.VM.ByteCode/SourceCodeStackGuard::m_Bc
	ByteCode_t1148839066 * ___m_Bc_0;

public:
	inline static int32_t get_offset_of_m_Bc_0() { return static_cast<int32_t>(offsetof(SourceCodeStackGuard_t1700738214, ___m_Bc_0)); }
	inline ByteCode_t1148839066 * get_m_Bc_0() const { return ___m_Bc_0; }
	inline ByteCode_t1148839066 ** get_address_of_m_Bc_0() { return &___m_Bc_0; }
	inline void set_m_Bc_0(ByteCode_t1148839066 * value)
	{
		___m_Bc_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Bc_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCECODESTACKGUARD_T1700738214_H
#ifndef U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T3219471464_H
#define U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T3219471464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0
struct  U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t3219471464  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.ScriptExecutionContext MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0::context
	ScriptExecutionContext_t641345925 * ___context_0;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Execution.VM.Processor/<Debugger_RefreshWatches>c__AnonStorey0::$this
	Processor_t4242967914 * ___U24this_1;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t3219471464, ___context_0)); }
	inline ScriptExecutionContext_t641345925 * get_context_0() const { return ___context_0; }
	inline ScriptExecutionContext_t641345925 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(ScriptExecutionContext_t641345925 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t3219471464, ___U24this_1)); }
	inline Processor_t4242967914 * get_U24this_1() const { return ___U24this_1; }
	inline Processor_t4242967914 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Processor_t4242967914 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDEBUGGER_REFRESHWATCHESU3EC__ANONSTOREY0_T3219471464_H
#ifndef DISPATCHINGUSERDATADESCRIPTOR_T1120231325_H
#define DISPATCHINGUSERDATADESCRIPTOR_T1120231325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor
struct  DispatchingUserDataDescriptor_t1120231325  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_ExtMethodsVersion
	int32_t ___m_ExtMethodsVersion_0;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_MetaMembers
	Dictionary_2_t859293897 * ___m_MetaMembers_1;
	// System.Collections.Generic.Dictionary`2<System.String,MoonSharp.Interpreter.Interop.BasicDescriptors.IMemberDescriptor> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::m_Members
	Dictionary_2_t859293897 * ___m_Members_2;
	// System.String MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
	// System.Type MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_8;
	// System.String MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<FriendlyName>k__BackingField
	String_t* ___U3CFriendlyNameU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_ExtMethodsVersion_0() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1120231325, ___m_ExtMethodsVersion_0)); }
	inline int32_t get_m_ExtMethodsVersion_0() const { return ___m_ExtMethodsVersion_0; }
	inline int32_t* get_address_of_m_ExtMethodsVersion_0() { return &___m_ExtMethodsVersion_0; }
	inline void set_m_ExtMethodsVersion_0(int32_t value)
	{
		___m_ExtMethodsVersion_0 = value;
	}

	inline static int32_t get_offset_of_m_MetaMembers_1() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1120231325, ___m_MetaMembers_1)); }
	inline Dictionary_2_t859293897 * get_m_MetaMembers_1() const { return ___m_MetaMembers_1; }
	inline Dictionary_2_t859293897 ** get_address_of_m_MetaMembers_1() { return &___m_MetaMembers_1; }
	inline void set_m_MetaMembers_1(Dictionary_2_t859293897 * value)
	{
		___m_MetaMembers_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaMembers_1), value);
	}

	inline static int32_t get_offset_of_m_Members_2() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1120231325, ___m_Members_2)); }
	inline Dictionary_2_t859293897 * get_m_Members_2() const { return ___m_Members_2; }
	inline Dictionary_2_t859293897 ** get_address_of_m_Members_2() { return &___m_Members_2; }
	inline void set_m_Members_2(Dictionary_2_t859293897 * value)
	{
		___m_Members_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Members_2), value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1120231325, ___U3CNameU3Ek__BackingField_7)); }
	inline String_t* get_U3CNameU3Ek__BackingField_7() const { return ___U3CNameU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_7() { return &___U3CNameU3Ek__BackingField_7; }
	inline void set_U3CNameU3Ek__BackingField_7(String_t* value)
	{
		___U3CNameU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1120231325, ___U3CTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_8() const { return ___U3CTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_8() { return &___U3CTypeU3Ek__BackingField_8; }
	inline void set_U3CTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CFriendlyNameU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1120231325, ___U3CFriendlyNameU3Ek__BackingField_9)); }
	inline String_t* get_U3CFriendlyNameU3Ek__BackingField_9() const { return ___U3CFriendlyNameU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CFriendlyNameU3Ek__BackingField_9() { return &___U3CFriendlyNameU3Ek__BackingField_9; }
	inline void set_U3CFriendlyNameU3Ek__BackingField_9(String_t* value)
	{
		___U3CFriendlyNameU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFriendlyNameU3Ek__BackingField_9), value);
	}
};

struct DispatchingUserDataDescriptor_t1120231325_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor::<>f__switch$map4
	Dictionary_2_t1411713628 * ___U3CU3Ef__switchU24map4_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_10() { return static_cast<int32_t>(offsetof(DispatchingUserDataDescriptor_t1120231325_StaticFields, ___U3CU3Ef__switchU24map4_10)); }
	inline Dictionary_2_t1411713628 * get_U3CU3Ef__switchU24map4_10() const { return ___U3CU3Ef__switchU24map4_10; }
	inline Dictionary_2_t1411713628 ** get_address_of_U3CU3Ef__switchU24map4_10() { return &___U3CU3Ef__switchU24map4_10; }
	inline void set_U3CU3Ef__switchU24map4_10(Dictionary_2_t1411713628 * value)
	{
		___U3CU3Ef__switchU24map4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHINGUSERDATADESCRIPTOR_T1120231325_H
#ifndef U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T117179879_H
#define U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T117179879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0
struct  U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t117179879  : public RuntimeObject
{
public:
	// System.Object MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0::obj
	RuntimeObject * ___obj_0;
	// MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor MoonSharp.Interpreter.Interop.BasicDescriptors.DispatchingUserDataDescriptor/<MultiDispatchLessThanOrEqual>c__AnonStorey0::$this
	DispatchingUserDataDescriptor_t1120231325 * ___U24this_1;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t117179879, ___obj_0)); }
	inline RuntimeObject * get_obj_0() const { return ___obj_0; }
	inline RuntimeObject ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(RuntimeObject * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((&___obj_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t117179879, ___U24this_1)); }
	inline DispatchingUserDataDescriptor_t1120231325 * get_U24this_1() const { return ___U24this_1; }
	inline DispatchingUserDataDescriptor_t1120231325 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(DispatchingUserDataDescriptor_t1120231325 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULTIDISPATCHLESSTHANOREQUALU3EC__ANONSTOREY0_T117179879_H
#ifndef VALUETYPE_T1592293425_H
#define VALUETYPE_T1592293425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1592293425  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1592293425_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1592293425_marshaled_com
{
};
#endif // VALUETYPE_T1592293425_H
#ifndef EXCEPTION_T2923103941_H
#define EXCEPTION_T2923103941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2923103941  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3153939259* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2923103941 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3153939259* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3153939259** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3153939259* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___inner_exception_1)); }
	inline Exception_t2923103941 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2923103941 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2923103941 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2923103941, ____data_10)); }
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
#endif // EXCEPTION_T2923103941_H
#ifndef LIST_1_T3328622960_H
#define LIST_1_T3328622960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<MoonSharp.Interpreter.DynValue>
struct  List_1_t3328622960  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DynValueU5BU5D_t3271737346* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3328622960, ____items_1)); }
	inline DynValueU5BU5D_t3271737346* get__items_1() const { return ____items_1; }
	inline DynValueU5BU5D_t3271737346** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DynValueU5BU5D_t3271737346* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3328622960, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3328622960, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3328622960_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DynValueU5BU5D_t3271737346* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3328622960_StaticFields, ___EmptyArray_4)); }
	inline DynValueU5BU5D_t3271737346* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DynValueU5BU5D_t3271737346** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DynValueU5BU5D_t3271737346* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3328622960_H
#ifndef ATTRIBUTE_T1724788359_H
#define ATTRIBUTE_T1724788359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1724788359  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1724788359_H
#ifndef WELLKNOWNSYMBOLS_T3297861700_H
#define WELLKNOWNSYMBOLS_T3297861700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.WellKnownSymbols
struct  WellKnownSymbols_t3297861700  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSYMBOLS_T3297861700_H
#ifndef TAILCALLDATA_T3434595108_H
#define TAILCALLDATA_T3434595108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TailCallData
struct  TailCallData_t3434595108  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TailCallData::<Function>k__BackingField
	DynValue_t3829844307 * ___U3CFunctionU3Ek__BackingField_0;
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.TailCallData::<Args>k__BackingField
	DynValueU5BU5D_t3271737346* ___U3CArgsU3Ek__BackingField_1;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.TailCallData::<Continuation>k__BackingField
	CallbackFunction_t225490189 * ___U3CContinuationU3Ek__BackingField_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.TailCallData::<ErrorHandler>k__BackingField
	CallbackFunction_t225490189 * ___U3CErrorHandlerU3Ek__BackingField_3;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TailCallData::<ErrorHandlerBeforeUnwind>k__BackingField
	DynValue_t3829844307 * ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CFunctionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TailCallData_t3434595108, ___U3CFunctionU3Ek__BackingField_0)); }
	inline DynValue_t3829844307 * get_U3CFunctionU3Ek__BackingField_0() const { return ___U3CFunctionU3Ek__BackingField_0; }
	inline DynValue_t3829844307 ** get_address_of_U3CFunctionU3Ek__BackingField_0() { return &___U3CFunctionU3Ek__BackingField_0; }
	inline void set_U3CFunctionU3Ek__BackingField_0(DynValue_t3829844307 * value)
	{
		___U3CFunctionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFunctionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CArgsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TailCallData_t3434595108, ___U3CArgsU3Ek__BackingField_1)); }
	inline DynValueU5BU5D_t3271737346* get_U3CArgsU3Ek__BackingField_1() const { return ___U3CArgsU3Ek__BackingField_1; }
	inline DynValueU5BU5D_t3271737346** get_address_of_U3CArgsU3Ek__BackingField_1() { return &___U3CArgsU3Ek__BackingField_1; }
	inline void set_U3CArgsU3Ek__BackingField_1(DynValueU5BU5D_t3271737346* value)
	{
		___U3CArgsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CContinuationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TailCallData_t3434595108, ___U3CContinuationU3Ek__BackingField_2)); }
	inline CallbackFunction_t225490189 * get_U3CContinuationU3Ek__BackingField_2() const { return ___U3CContinuationU3Ek__BackingField_2; }
	inline CallbackFunction_t225490189 ** get_address_of_U3CContinuationU3Ek__BackingField_2() { return &___U3CContinuationU3Ek__BackingField_2; }
	inline void set_U3CContinuationU3Ek__BackingField_2(CallbackFunction_t225490189 * value)
	{
		___U3CContinuationU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContinuationU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CErrorHandlerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TailCallData_t3434595108, ___U3CErrorHandlerU3Ek__BackingField_3)); }
	inline CallbackFunction_t225490189 * get_U3CErrorHandlerU3Ek__BackingField_3() const { return ___U3CErrorHandlerU3Ek__BackingField_3; }
	inline CallbackFunction_t225490189 ** get_address_of_U3CErrorHandlerU3Ek__BackingField_3() { return &___U3CErrorHandlerU3Ek__BackingField_3; }
	inline void set_U3CErrorHandlerU3Ek__BackingField_3(CallbackFunction_t225490189 * value)
	{
		___U3CErrorHandlerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorHandlerU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TailCallData_t3434595108, ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4)); }
	inline DynValue_t3829844307 * get_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() const { return ___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4; }
	inline DynValue_t3829844307 ** get_address_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4() { return &___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4; }
	inline void set_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4(DynValue_t3829844307 * value)
	{
		___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILCALLDATA_T3434595108_H
#ifndef PERFORMANCESTATISTICS_T3942851336_H
#define PERFORMANCESTATISTICS_T3942851336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceStatistics
struct  PerformanceStatistics_t3942851336  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[] MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_Stopwatches
	IPerformanceStopwatchU5BU5D_t1714111119* ___m_Stopwatches_0;
	// System.Boolean MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_Enabled
	bool ___m_Enabled_2;

public:
	inline static int32_t get_offset_of_m_Stopwatches_0() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t3942851336, ___m_Stopwatches_0)); }
	inline IPerformanceStopwatchU5BU5D_t1714111119* get_m_Stopwatches_0() const { return ___m_Stopwatches_0; }
	inline IPerformanceStopwatchU5BU5D_t1714111119** get_address_of_m_Stopwatches_0() { return &___m_Stopwatches_0; }
	inline void set_m_Stopwatches_0(IPerformanceStopwatchU5BU5D_t1714111119* value)
	{
		___m_Stopwatches_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatches_0), value);
	}

	inline static int32_t get_offset_of_m_Enabled_2() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t3942851336, ___m_Enabled_2)); }
	inline bool get_m_Enabled_2() const { return ___m_Enabled_2; }
	inline bool* get_address_of_m_Enabled_2() { return &___m_Enabled_2; }
	inline void set_m_Enabled_2(bool value)
	{
		___m_Enabled_2 = value;
	}
};

struct PerformanceStatistics_t3942851336_StaticFields
{
public:
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.IPerformanceStopwatch[] MoonSharp.Interpreter.Diagnostics.PerformanceStatistics::m_GlobalStopwatches
	IPerformanceStopwatchU5BU5D_t1714111119* ___m_GlobalStopwatches_1;

public:
	inline static int32_t get_offset_of_m_GlobalStopwatches_1() { return static_cast<int32_t>(offsetof(PerformanceStatistics_t3942851336_StaticFields, ___m_GlobalStopwatches_1)); }
	inline IPerformanceStopwatchU5BU5D_t1714111119* get_m_GlobalStopwatches_1() const { return ___m_GlobalStopwatches_1; }
	inline IPerformanceStopwatchU5BU5D_t1714111119** get_address_of_m_GlobalStopwatches_1() { return &___m_GlobalStopwatches_1; }
	inline void set_m_GlobalStopwatches_1(IPerformanceStopwatchU5BU5D_t1714111119* value)
	{
		___m_GlobalStopwatches_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GlobalStopwatches_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCESTATISTICS_T3942851336_H
#ifndef REFIDOBJECT_T2581482789_H
#define REFIDOBJECT_T2581482789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.RefIdObject
struct  RefIdObject_t2581482789  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.RefIdObject::m_RefID
	int32_t ___m_RefID_1;

public:
	inline static int32_t get_offset_of_m_RefID_1() { return static_cast<int32_t>(offsetof(RefIdObject_t2581482789, ___m_RefID_1)); }
	inline int32_t get_m_RefID_1() const { return ___m_RefID_1; }
	inline int32_t* get_address_of_m_RefID_1() { return &___m_RefID_1; }
	inline void set_m_RefID_1(int32_t value)
	{
		___m_RefID_1 = value;
	}
};

struct RefIdObject_t2581482789_StaticFields
{
public:
	// System.Int32 MoonSharp.Interpreter.RefIdObject::s_RefIDCounter
	int32_t ___s_RefIDCounter_0;

public:
	inline static int32_t get_offset_of_s_RefIDCounter_0() { return static_cast<int32_t>(offsetof(RefIdObject_t2581482789_StaticFields, ___s_RefIDCounter_0)); }
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
#endif // REFIDOBJECT_T2581482789_H
#ifndef U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T2040944290_H
#define U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T2040944290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0
struct  U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$this
	Coroutine_t1090859767 * ___U24this_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$current
	DynValue_t3829844307 * ___U24current_1;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsTypedEnumerable>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290, ___U24this_0)); }
	inline Coroutine_t1090859767 * get_U24this_0() const { return ___U24this_0; }
	inline Coroutine_t1090859767 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Coroutine_t1090859767 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290, ___U24current_1)); }
	inline DynValue_t3829844307 * get_U24current_1() const { return ___U24current_1; }
	inline DynValue_t3829844307 ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(DynValue_t3829844307 * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290, ___U24PC_3)); }
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
#endif // U3CASTYPEDENUMERABLEU3EC__ITERATOR0_T2040944290_H
#ifndef U3CASENUMERABLEU3EC__ITERATOR1_T2011649535_H
#define U3CASENUMERABLEU3EC__ITERATOR1_T2011649535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1
struct  U3CAsEnumerableU3Ec__Iterator1_t2011649535  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::<v>__1
	DynValue_t3829844307 * ___U3CvU3E__1_1;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$this
	Coroutine_t1090859767 * ___U24this_2;
	// System.Object MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsEnumerable>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t2011649535, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CvU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t2011649535, ___U3CvU3E__1_1)); }
	inline DynValue_t3829844307 * get_U3CvU3E__1_1() const { return ___U3CvU3E__1_1; }
	inline DynValue_t3829844307 ** get_address_of_U3CvU3E__1_1() { return &___U3CvU3E__1_1; }
	inline void set_U3CvU3E__1_1(DynValue_t3829844307 * value)
	{
		___U3CvU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t2011649535, ___U24this_2)); }
	inline Coroutine_t1090859767 * get_U24this_2() const { return ___U24this_2; }
	inline Coroutine_t1090859767 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Coroutine_t1090859767 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t2011649535, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t2011649535, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CAsEnumerableU3Ec__Iterator1_t2011649535, ___U24PC_5)); }
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
#endif // U3CASENUMERABLEU3EC__ITERATOR1_T2011649535_H
#ifndef U3CASUNITYCOROUTINEU3EC__ITERATOR3_T3260624922_H
#define U3CASUNITYCOROUTINEU3EC__ITERATOR3_T3260624922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3
struct  U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::<v>__1
	DynValue_t3829844307 * ___U3CvU3E__1_1;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$this
	Coroutine_t1090859767 * ___U24this_2;
	// System.Object MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$disposing
	bool ___U24disposing_4;
	// System.Int32 MoonSharp.Interpreter.Coroutine/<AsUnityCoroutine>c__Iterator3::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CvU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922, ___U3CvU3E__1_1)); }
	inline DynValue_t3829844307 * get_U3CvU3E__1_1() const { return ___U3CvU3E__1_1; }
	inline DynValue_t3829844307 ** get_address_of_U3CvU3E__1_1() { return &___U3CvU3E__1_1; }
	inline void set_U3CvU3E__1_1(DynValue_t3829844307 * value)
	{
		___U3CvU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922, ___U24this_2)); }
	inline Coroutine_t1090859767 * get_U24this_2() const { return ___U24this_2; }
	inline Coroutine_t1090859767 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Coroutine_t1090859767 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922, ___U24PC_5)); }
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
#endif // U3CASUNITYCOROUTINEU3EC__ITERATOR3_T3260624922_H
#ifndef STRINGRANGE_T2816765357_H
#define STRINGRANGE_T2816765357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.StringLib.StringRange
struct  StringRange_t2816765357  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.CoreLib.StringLib.StringRange::<Start>k__BackingField
	int32_t ___U3CStartU3Ek__BackingField_0;
	// System.Int32 MoonSharp.Interpreter.CoreLib.StringLib.StringRange::<End>k__BackingField
	int32_t ___U3CEndU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStartU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StringRange_t2816765357, ___U3CStartU3Ek__BackingField_0)); }
	inline int32_t get_U3CStartU3Ek__BackingField_0() const { return ___U3CStartU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStartU3Ek__BackingField_0() { return &___U3CStartU3Ek__BackingField_0; }
	inline void set_U3CStartU3Ek__BackingField_0(int32_t value)
	{
		___U3CStartU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CEndU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StringRange_t2816765357, ___U3CEndU3Ek__BackingField_1)); }
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
#endif // STRINGRANGE_T2816765357_H
#ifndef STRINGMODULE_T1766049061_H
#define STRINGMODULE_T1766049061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.StringModule
struct  StringModule_t1766049061  : public RuntimeObject
{
public:

public:
};

struct StringModule_t1766049061_StaticFields
{
public:
	// System.Func`2<System.Int32,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache0
	Func_2_t894117256 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.Int32,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__am$cache0
	Func_2_t894117256 * ___U3CU3Ef__amU24cache0_2;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache1
	Func_2_t4088222926 * ___U3CU3Ef__mgU24cache1_3;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache2
	Func_2_t4088222926 * ___U3CU3Ef__mgU24cache2_4;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache3
	Func_2_t4088222926 * ___U3CU3Ef__mgU24cache3_5;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache4
	Func_2_t4088222926 * ___U3CU3Ef__mgU24cache4_6;
	// System.Func`2<MoonSharp.Interpreter.Interop.LuaStateInterop.LuaState,System.Int32> MoonSharp.Interpreter.CoreLib.StringModule::<>f__mg$cache5
	Func_2_t4088222926 * ___U3CU3Ef__mgU24cache5_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(StringModule_t1766049061_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t894117256 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t894117256 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t894117256 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(StringModule_t1766049061_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_2_t894117256 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_2_t894117256 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_2_t894117256 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_3() { return static_cast<int32_t>(offsetof(StringModule_t1766049061_StaticFields, ___U3CU3Ef__mgU24cache1_3)); }
	inline Func_2_t4088222926 * get_U3CU3Ef__mgU24cache1_3() const { return ___U3CU3Ef__mgU24cache1_3; }
	inline Func_2_t4088222926 ** get_address_of_U3CU3Ef__mgU24cache1_3() { return &___U3CU3Ef__mgU24cache1_3; }
	inline void set_U3CU3Ef__mgU24cache1_3(Func_2_t4088222926 * value)
	{
		___U3CU3Ef__mgU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_4() { return static_cast<int32_t>(offsetof(StringModule_t1766049061_StaticFields, ___U3CU3Ef__mgU24cache2_4)); }
	inline Func_2_t4088222926 * get_U3CU3Ef__mgU24cache2_4() const { return ___U3CU3Ef__mgU24cache2_4; }
	inline Func_2_t4088222926 ** get_address_of_U3CU3Ef__mgU24cache2_4() { return &___U3CU3Ef__mgU24cache2_4; }
	inline void set_U3CU3Ef__mgU24cache2_4(Func_2_t4088222926 * value)
	{
		___U3CU3Ef__mgU24cache2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_5() { return static_cast<int32_t>(offsetof(StringModule_t1766049061_StaticFields, ___U3CU3Ef__mgU24cache3_5)); }
	inline Func_2_t4088222926 * get_U3CU3Ef__mgU24cache3_5() const { return ___U3CU3Ef__mgU24cache3_5; }
	inline Func_2_t4088222926 ** get_address_of_U3CU3Ef__mgU24cache3_5() { return &___U3CU3Ef__mgU24cache3_5; }
	inline void set_U3CU3Ef__mgU24cache3_5(Func_2_t4088222926 * value)
	{
		___U3CU3Ef__mgU24cache3_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_6() { return static_cast<int32_t>(offsetof(StringModule_t1766049061_StaticFields, ___U3CU3Ef__mgU24cache4_6)); }
	inline Func_2_t4088222926 * get_U3CU3Ef__mgU24cache4_6() const { return ___U3CU3Ef__mgU24cache4_6; }
	inline Func_2_t4088222926 ** get_address_of_U3CU3Ef__mgU24cache4_6() { return &___U3CU3Ef__mgU24cache4_6; }
	inline void set_U3CU3Ef__mgU24cache4_6(Func_2_t4088222926 * value)
	{
		___U3CU3Ef__mgU24cache4_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_7() { return static_cast<int32_t>(offsetof(StringModule_t1766049061_StaticFields, ___U3CU3Ef__mgU24cache5_7)); }
	inline Func_2_t4088222926 * get_U3CU3Ef__mgU24cache5_7() const { return ___U3CU3Ef__mgU24cache5_7; }
	inline Func_2_t4088222926 ** get_address_of_U3CU3Ef__mgU24cache5_7() { return &___U3CU3Ef__mgU24cache5_7; }
	inline void set_U3CU3Ef__mgU24cache5_7(Func_2_t4088222926 * value)
	{
		___U3CU3Ef__mgU24cache5_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGMODULE_T1766049061_H
#ifndef TABLEITERATORSMODULE_T1859382429_H
#define TABLEITERATORSMODULE_T1859382429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.TableIteratorsModule
struct  TableIteratorsModule_t1859382429  : public RuntimeObject
{
public:

public:
};

struct TableIteratorsModule_t1859382429_StaticFields
{
public:
	// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CoreLib.TableIteratorsModule::<>f__mg$cache0
	Func_3_t1077306363 * ___U3CU3Ef__mgU24cache0_0;
	// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CoreLib.TableIteratorsModule::<>f__mg$cache1
	Func_3_t1077306363 * ___U3CU3Ef__mgU24cache1_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(TableIteratorsModule_t1859382429_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline Func_3_t1077306363 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline Func_3_t1077306363 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(Func_3_t1077306363 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_1() { return static_cast<int32_t>(offsetof(TableIteratorsModule_t1859382429_StaticFields, ___U3CU3Ef__mgU24cache1_1)); }
	inline Func_3_t1077306363 * get_U3CU3Ef__mgU24cache1_1() const { return ___U3CU3Ef__mgU24cache1_1; }
	inline Func_3_t1077306363 ** get_address_of_U3CU3Ef__mgU24cache1_1() { return &___U3CU3Ef__mgU24cache1_1; }
	inline void set_U3CU3Ef__mgU24cache1_1(Func_3_t1077306363 * value)
	{
		___U3CU3Ef__mgU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEITERATORSMODULE_T1859382429_H
#ifndef TABLEMODULE_T1903678072_H
#define TABLEMODULE_T1903678072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.TableModule
struct  TableModule_t1903678072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEMODULE_T1903678072_H
#ifndef REFERENCEEQUALITYCOMPARER_T1299783655_H
#define REFERENCEEQUALITYCOMPARER_T1299783655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DataStructs.ReferenceEqualityComparer
struct  ReferenceEqualityComparer_t1299783655  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCEEQUALITYCOMPARER_T1299783655_H
#ifndef SCRIPTPRIVATERESOURCE_EXTENSION_T3278871908_H
#define SCRIPTPRIVATERESOURCE_EXTENSION_T3278871908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptPrivateResource_Extension
struct  ScriptPrivateResource_Extension_t3278871908  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPRIVATERESOURCE_EXTENSION_T3278871908_H
#ifndef EXTENSION_METHODS_T3863919890_H
#define EXTENSION_METHODS_T3863919890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Extension_Methods
struct  Extension_Methods_t3863919890  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSION_METHODS_T3863919890_H
#ifndef CALLBACKARGUMENTS_T2613888819_H
#define CALLBACKARGUMENTS_T2613888819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CallbackArguments
struct  CallbackArguments_t2613888819  : public RuntimeObject
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
	inline static int32_t get_offset_of_m_Args_0() { return static_cast<int32_t>(offsetof(CallbackArguments_t2613888819, ___m_Args_0)); }
	inline RuntimeObject* get_m_Args_0() const { return ___m_Args_0; }
	inline RuntimeObject** get_address_of_m_Args_0() { return &___m_Args_0; }
	inline void set_m_Args_0(RuntimeObject* value)
	{
		___m_Args_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Args_0), value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(CallbackArguments_t2613888819, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}

	inline static int32_t get_offset_of_m_LastIsTuple_2() { return static_cast<int32_t>(offsetof(CallbackArguments_t2613888819, ___m_LastIsTuple_2)); }
	inline bool get_m_LastIsTuple_2() const { return ___m_LastIsTuple_2; }
	inline bool* get_address_of_m_LastIsTuple_2() { return &___m_LastIsTuple_2; }
	inline void set_m_LastIsTuple_2(bool value)
	{
		___m_LastIsTuple_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsMethodCallU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CallbackArguments_t2613888819, ___U3CIsMethodCallU3Ek__BackingField_3)); }
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
#endif // CALLBACKARGUMENTS_T2613888819_H
#ifndef U3CSORTU3EC__ANONSTOREY0_T397067470_H
#define U3CSORTU3EC__ANONSTOREY0_T397067470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.TableModule/<sort>c__AnonStorey0
struct  U3CsortU3Ec__AnonStorey0_t397067470  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.ScriptExecutionContext MoonSharp.Interpreter.CoreLib.TableModule/<sort>c__AnonStorey0::executionContext
	ScriptExecutionContext_t641345925 * ___executionContext_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.CoreLib.TableModule/<sort>c__AnonStorey0::lt
	DynValue_t3829844307 * ___lt_1;

public:
	inline static int32_t get_offset_of_executionContext_0() { return static_cast<int32_t>(offsetof(U3CsortU3Ec__AnonStorey0_t397067470, ___executionContext_0)); }
	inline ScriptExecutionContext_t641345925 * get_executionContext_0() const { return ___executionContext_0; }
	inline ScriptExecutionContext_t641345925 ** get_address_of_executionContext_0() { return &___executionContext_0; }
	inline void set_executionContext_0(ScriptExecutionContext_t641345925 * value)
	{
		___executionContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___executionContext_0), value);
	}

	inline static int32_t get_offset_of_lt_1() { return static_cast<int32_t>(offsetof(U3CsortU3Ec__AnonStorey0_t397067470, ___lt_1)); }
	inline DynValue_t3829844307 * get_lt_1() const { return ___lt_1; }
	inline DynValue_t3829844307 ** get_address_of_lt_1() { return &___lt_1; }
	inline void set_lt_1(DynValue_t3829844307 * value)
	{
		___lt_1 = value;
		Il2CppCodeGenWriteBarrier((&___lt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSORTU3EC__ANONSTOREY0_T397067470_H
#ifndef TABLEMODULE_GLOBALS_T3237933780_H
#define TABLEMODULE_GLOBALS_T3237933780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoreLib.TableModule_Globals
struct  TableModule_Globals_t3237933780  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEMODULE_GLOBALS_T3237933780_H
#ifndef INTERPRETEREXCEPTION_T1307826904_H
#define INTERPRETEREXCEPTION_T1307826904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InterpreterException
struct  InterpreterException_t1307826904  : public Exception_t2923103941
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
	inline static int32_t get_offset_of_U3CInstructionPtrU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InterpreterException_t1307826904, ___U3CInstructionPtrU3Ek__BackingField_11)); }
	inline int32_t get_U3CInstructionPtrU3Ek__BackingField_11() const { return ___U3CInstructionPtrU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CInstructionPtrU3Ek__BackingField_11() { return &___U3CInstructionPtrU3Ek__BackingField_11; }
	inline void set_U3CInstructionPtrU3Ek__BackingField_11(int32_t value)
	{
		___U3CInstructionPtrU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CCallStackU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InterpreterException_t1307826904, ___U3CCallStackU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CCallStackU3Ek__BackingField_12() const { return ___U3CCallStackU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CCallStackU3Ek__BackingField_12() { return &___U3CCallStackU3Ek__BackingField_12; }
	inline void set_U3CCallStackU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CCallStackU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCallStackU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CDecoratedMessageU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InterpreterException_t1307826904, ___U3CDecoratedMessageU3Ek__BackingField_13)); }
	inline String_t* get_U3CDecoratedMessageU3Ek__BackingField_13() const { return ___U3CDecoratedMessageU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CDecoratedMessageU3Ek__BackingField_13() { return &___U3CDecoratedMessageU3Ek__BackingField_13; }
	inline void set_U3CDecoratedMessageU3Ek__BackingField_13(String_t* value)
	{
		___U3CDecoratedMessageU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDecoratedMessageU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CDoNotDecorateMessageU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InterpreterException_t1307826904, ___U3CDoNotDecorateMessageU3Ek__BackingField_14)); }
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
#endif // INTERPRETEREXCEPTION_T1307826904_H
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
#ifndef CLOSURECONTEXT_T93388692_H
#define CLOSURECONTEXT_T93388692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.ClosureContext
struct  ClosureContext_t93388692  : public List_1_t3328622960
{
public:
	// System.String[] MoonSharp.Interpreter.Execution.ClosureContext::<Symbols>k__BackingField
	StringU5BU5D_t186835049* ___U3CSymbolsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSymbolsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ClosureContext_t93388692, ___U3CSymbolsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t186835049* get_U3CSymbolsU3Ek__BackingField_5() const { return ___U3CSymbolsU3Ek__BackingField_5; }
	inline StringU5BU5D_t186835049** get_address_of_U3CSymbolsU3Ek__BackingField_5() { return &___U3CSymbolsU3Ek__BackingField_5; }
	inline void set_U3CSymbolsU3Ek__BackingField_5(StringU5BU5D_t186835049* value)
	{
		___U3CSymbolsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSymbolsU3Ek__BackingField_5), value);
	}
};

struct ClosureContext_t93388692_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String> MoonSharp.Interpreter.Execution.ClosureContext::<>f__am$cache0
	Func_2_t3974707564 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(ClosureContext_t93388692_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_2_t3974707564 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_2_t3974707564 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_2_t3974707564 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOSURECONTEXT_T93388692_H
#ifndef BYTECODE_T1148839066_H
#define BYTECODE_T1148839066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ByteCode
struct  ByteCode_t1148839066  : public RefIdObject_t2581482789
{
public:
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Instruction> MoonSharp.Interpreter.Execution.VM.ByteCode::Code
	List_1_t299307542 * ___Code_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.VM.ByteCode::<Script>k__BackingField
	Script_t116946378 * ___U3CScriptU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Execution.VM.ByteCode::m_SourceRefStack
	List_1_t860933368 * ___m_SourceRefStack_4;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.ByteCode::m_CurrentSourceRef
	SourceRef_t1362154715 * ___m_CurrentSourceRef_5;
	// MoonSharp.Interpreter.Execution.LoopTracker MoonSharp.Interpreter.Execution.VM.ByteCode::LoopTracker
	LoopTracker_t250070572 * ___LoopTracker_6;

public:
	inline static int32_t get_offset_of_Code_2() { return static_cast<int32_t>(offsetof(ByteCode_t1148839066, ___Code_2)); }
	inline List_1_t299307542 * get_Code_2() const { return ___Code_2; }
	inline List_1_t299307542 ** get_address_of_Code_2() { return &___Code_2; }
	inline void set_Code_2(List_1_t299307542 * value)
	{
		___Code_2 = value;
		Il2CppCodeGenWriteBarrier((&___Code_2), value);
	}

	inline static int32_t get_offset_of_U3CScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ByteCode_t1148839066, ___U3CScriptU3Ek__BackingField_3)); }
	inline Script_t116946378 * get_U3CScriptU3Ek__BackingField_3() const { return ___U3CScriptU3Ek__BackingField_3; }
	inline Script_t116946378 ** get_address_of_U3CScriptU3Ek__BackingField_3() { return &___U3CScriptU3Ek__BackingField_3; }
	inline void set_U3CScriptU3Ek__BackingField_3(Script_t116946378 * value)
	{
		___U3CScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_m_SourceRefStack_4() { return static_cast<int32_t>(offsetof(ByteCode_t1148839066, ___m_SourceRefStack_4)); }
	inline List_1_t860933368 * get_m_SourceRefStack_4() const { return ___m_SourceRefStack_4; }
	inline List_1_t860933368 ** get_address_of_m_SourceRefStack_4() { return &___m_SourceRefStack_4; }
	inline void set_m_SourceRefStack_4(List_1_t860933368 * value)
	{
		___m_SourceRefStack_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceRefStack_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentSourceRef_5() { return static_cast<int32_t>(offsetof(ByteCode_t1148839066, ___m_CurrentSourceRef_5)); }
	inline SourceRef_t1362154715 * get_m_CurrentSourceRef_5() const { return ___m_CurrentSourceRef_5; }
	inline SourceRef_t1362154715 ** get_address_of_m_CurrentSourceRef_5() { return &___m_CurrentSourceRef_5; }
	inline void set_m_CurrentSourceRef_5(SourceRef_t1362154715 * value)
	{
		___m_CurrentSourceRef_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSourceRef_5), value);
	}

	inline static int32_t get_offset_of_LoopTracker_6() { return static_cast<int32_t>(offsetof(ByteCode_t1148839066, ___LoopTracker_6)); }
	inline LoopTracker_t250070572 * get_LoopTracker_6() const { return ___LoopTracker_6; }
	inline LoopTracker_t250070572 ** get_address_of_LoopTracker_6() { return &___LoopTracker_6; }
	inline void set_LoopTracker_6(LoopTracker_t250070572 * value)
	{
		___LoopTracker_6 = value;
		Il2CppCodeGenWriteBarrier((&___LoopTracker_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECODE_T1148839066_H
#ifndef MOONSHARPHIDDENATTRIBUTE_T3946695953_H
#define MOONSHARPHIDDENATTRIBUTE_T3946695953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpHiddenAttribute
struct  MoonSharpHiddenAttribute_t3946695953  : public Attribute_t1724788359
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOONSHARPHIDDENATTRIBUTE_T3946695953_H
#ifndef MOONSHARPVISIBLEATTRIBUTE_T3074804664_H
#define MOONSHARPVISIBLEATTRIBUTE_T3074804664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Interop.MoonSharpVisibleAttribute
struct  MoonSharpVisibleAttribute_t3074804664  : public Attribute_t1724788359
{
public:
	// System.Boolean MoonSharp.Interpreter.Interop.MoonSharpVisibleAttribute::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVisibleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpVisibleAttribute_t3074804664, ___U3CVisibleU3Ek__BackingField_0)); }
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
#endif // MOONSHARPVISIBLEATTRIBUTE_T3074804664_H
#ifndef MOONSHARPPROPERTYATTRIBUTE_T383279895_H
#define MOONSHARPPROPERTYATTRIBUTE_T383279895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpPropertyAttribute
struct  MoonSharpPropertyAttribute_t383279895  : public Attribute_t1724788359
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpPropertyAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpPropertyAttribute_t383279895, ___U3CNameU3Ek__BackingField_0)); }
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
#endif // MOONSHARPPROPERTYATTRIBUTE_T383279895_H
#ifndef MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T3069736964_H
#define MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T3069736964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpUserDataMetamethodAttribute
struct  MoonSharpUserDataMetamethodAttribute_t3069736964  : public Attribute_t1724788359
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpUserDataMetamethodAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpUserDataMetamethodAttribute_t3069736964, ___U3CNameU3Ek__BackingField_0)); }
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
#endif // MOONSHARPUSERDATAMETAMETHODATTRIBUTE_T3069736964_H
#ifndef CLOSURE_T3266223827_H
#define CLOSURE_T3266223827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Closure
struct  Closure_t3266223827  : public RefIdObject_t2581482789
{
public:
	// System.Int32 MoonSharp.Interpreter.Closure::<EntryPointByteCodeLocation>k__BackingField
	int32_t ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Closure::<OwnerScript>k__BackingField
	Script_t116946378 * ___U3COwnerScriptU3Ek__BackingField_3;
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Closure::<ClosureContext>k__BackingField
	ClosureContext_t93388692 * ___U3CClosureContextU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Closure_t3266223827, ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2)); }
	inline int32_t get_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() const { return ___U3CEntryPointByteCodeLocationU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2() { return &___U3CEntryPointByteCodeLocationU3Ek__BackingField_2; }
	inline void set_U3CEntryPointByteCodeLocationU3Ek__BackingField_2(int32_t value)
	{
		___U3CEntryPointByteCodeLocationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Closure_t3266223827, ___U3COwnerScriptU3Ek__BackingField_3)); }
	inline Script_t116946378 * get_U3COwnerScriptU3Ek__BackingField_3() const { return ___U3COwnerScriptU3Ek__BackingField_3; }
	inline Script_t116946378 ** get_address_of_U3COwnerScriptU3Ek__BackingField_3() { return &___U3COwnerScriptU3Ek__BackingField_3; }
	inline void set_U3COwnerScriptU3Ek__BackingField_3(Script_t116946378 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CClosureContextU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Closure_t3266223827, ___U3CClosureContextU3Ek__BackingField_5)); }
	inline ClosureContext_t93388692 * get_U3CClosureContextU3Ek__BackingField_5() const { return ___U3CClosureContextU3Ek__BackingField_5; }
	inline ClosureContext_t93388692 ** get_address_of_U3CClosureContextU3Ek__BackingField_5() { return &___U3CClosureContextU3Ek__BackingField_5; }
	inline void set_U3CClosureContextU3Ek__BackingField_5(ClosureContext_t93388692 * value)
	{
		___U3CClosureContextU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClosureContextU3Ek__BackingField_5), value);
	}
};

struct Closure_t3266223827_StaticFields
{
public:
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Closure::emptyClosure
	ClosureContext_t93388692 * ___emptyClosure_4;

public:
	inline static int32_t get_offset_of_emptyClosure_4() { return static_cast<int32_t>(offsetof(Closure_t3266223827_StaticFields, ___emptyClosure_4)); }
	inline ClosureContext_t93388692 * get_emptyClosure_4() const { return ___emptyClosure_4; }
	inline ClosureContext_t93388692 ** get_address_of_emptyClosure_4() { return &___emptyClosure_4; }
	inline void set_emptyClosure_4(ClosureContext_t93388692 * value)
	{
		___emptyClosure_4 = value;
		Il2CppCodeGenWriteBarrier((&___emptyClosure_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOSURE_T3266223827_H
#ifndef ENUM_T2689669316_H
#define ENUM_T2689669316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2689669316  : public ValueType_t1592293425
{
public:

public:
};

struct Enum_t2689669316_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3139855038* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2689669316_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3139855038* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3139855038** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3139855038* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2689669316_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2689669316_marshaled_com
{
};
#endif // ENUM_T2689669316_H
#ifndef TIMESPAN_T90496317_H
#define TIMESPAN_T90496317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t90496317 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t90496317, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t90496317_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t90496317  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t90496317  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t90496317  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t90496317_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t90496317  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t90496317 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t90496317  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t90496317_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t90496317  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t90496317 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t90496317  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t90496317_StaticFields, ___Zero_7)); }
	inline TimeSpan_t90496317  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t90496317 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t90496317  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T90496317_H
#ifndef TABLE_T3105308328_H
#define TABLE_T3105308328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Table
struct  Table_t3105308328  : public RefIdObject_t2581482789
{
public:
	// System.Collections.Generic.LinkedList`1<MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_Values
	LinkedList_1_t1854163712 * ___m_Values_2;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<MoonSharp.Interpreter.DynValue,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_ValueMap
	LinkedListIndex_2_t1352977668 * ___m_ValueMap_3;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.String,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_StringMap
	LinkedListIndex_2_t2563042667 * ___m_StringMap_4;
	// MoonSharp.Interpreter.DataStructs.LinkedListIndex`2<System.Int32,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::m_ArrayMap
	LinkedListIndex_2_t643653851 * ___m_ArrayMap_5;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Table::m_Owner
	Script_t116946378 * ___m_Owner_6;
	// System.Int32 MoonSharp.Interpreter.Table::m_InitArray
	int32_t ___m_InitArray_7;
	// System.Int32 MoonSharp.Interpreter.Table::m_CachedLength
	int32_t ___m_CachedLength_8;
	// System.Boolean MoonSharp.Interpreter.Table::m_ContainsNilEntries
	bool ___m_ContainsNilEntries_9;
	// MoonSharp.Interpreter.Table MoonSharp.Interpreter.Table::m_MetaTable
	Table_t3105308328 * ___m_MetaTable_10;

public:
	inline static int32_t get_offset_of_m_Values_2() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_Values_2)); }
	inline LinkedList_1_t1854163712 * get_m_Values_2() const { return ___m_Values_2; }
	inline LinkedList_1_t1854163712 ** get_address_of_m_Values_2() { return &___m_Values_2; }
	inline void set_m_Values_2(LinkedList_1_t1854163712 * value)
	{
		___m_Values_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Values_2), value);
	}

	inline static int32_t get_offset_of_m_ValueMap_3() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_ValueMap_3)); }
	inline LinkedListIndex_2_t1352977668 * get_m_ValueMap_3() const { return ___m_ValueMap_3; }
	inline LinkedListIndex_2_t1352977668 ** get_address_of_m_ValueMap_3() { return &___m_ValueMap_3; }
	inline void set_m_ValueMap_3(LinkedListIndex_2_t1352977668 * value)
	{
		___m_ValueMap_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueMap_3), value);
	}

	inline static int32_t get_offset_of_m_StringMap_4() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_StringMap_4)); }
	inline LinkedListIndex_2_t2563042667 * get_m_StringMap_4() const { return ___m_StringMap_4; }
	inline LinkedListIndex_2_t2563042667 ** get_address_of_m_StringMap_4() { return &___m_StringMap_4; }
	inline void set_m_StringMap_4(LinkedListIndex_2_t2563042667 * value)
	{
		___m_StringMap_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringMap_4), value);
	}

	inline static int32_t get_offset_of_m_ArrayMap_5() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_ArrayMap_5)); }
	inline LinkedListIndex_2_t643653851 * get_m_ArrayMap_5() const { return ___m_ArrayMap_5; }
	inline LinkedListIndex_2_t643653851 ** get_address_of_m_ArrayMap_5() { return &___m_ArrayMap_5; }
	inline void set_m_ArrayMap_5(LinkedListIndex_2_t643653851 * value)
	{
		___m_ArrayMap_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_ArrayMap_5), value);
	}

	inline static int32_t get_offset_of_m_Owner_6() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_Owner_6)); }
	inline Script_t116946378 * get_m_Owner_6() const { return ___m_Owner_6; }
	inline Script_t116946378 ** get_address_of_m_Owner_6() { return &___m_Owner_6; }
	inline void set_m_Owner_6(Script_t116946378 * value)
	{
		___m_Owner_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Owner_6), value);
	}

	inline static int32_t get_offset_of_m_InitArray_7() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_InitArray_7)); }
	inline int32_t get_m_InitArray_7() const { return ___m_InitArray_7; }
	inline int32_t* get_address_of_m_InitArray_7() { return &___m_InitArray_7; }
	inline void set_m_InitArray_7(int32_t value)
	{
		___m_InitArray_7 = value;
	}

	inline static int32_t get_offset_of_m_CachedLength_8() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_CachedLength_8)); }
	inline int32_t get_m_CachedLength_8() const { return ___m_CachedLength_8; }
	inline int32_t* get_address_of_m_CachedLength_8() { return &___m_CachedLength_8; }
	inline void set_m_CachedLength_8(int32_t value)
	{
		___m_CachedLength_8 = value;
	}

	inline static int32_t get_offset_of_m_ContainsNilEntries_9() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_ContainsNilEntries_9)); }
	inline bool get_m_ContainsNilEntries_9() const { return ___m_ContainsNilEntries_9; }
	inline bool* get_address_of_m_ContainsNilEntries_9() { return &___m_ContainsNilEntries_9; }
	inline void set_m_ContainsNilEntries_9(bool value)
	{
		___m_ContainsNilEntries_9 = value;
	}

	inline static int32_t get_offset_of_m_MetaTable_10() { return static_cast<int32_t>(offsetof(Table_t3105308328, ___m_MetaTable_10)); }
	inline Table_t3105308328 * get_m_MetaTable_10() const { return ___m_MetaTable_10; }
	inline Table_t3105308328 ** get_address_of_m_MetaTable_10() { return &___m_MetaTable_10; }
	inline void set_m_MetaTable_10(Table_t3105308328 * value)
	{
		___m_MetaTable_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaTable_10), value);
	}
};

struct Table_t3105308328_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.TablePair> MoonSharp.Interpreter.Table::<>f__am$cache0
	Func_2_t3138911764 * ___U3CU3Ef__amU24cache0_11;
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Table::<>f__am$cache1
	Func_2_t1420215914 * ___U3CU3Ef__amU24cache1_12;
	// System.Func`2<MoonSharp.Interpreter.TablePair,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Table::<>f__am$cache2
	Func_2_t1420215914 * ___U3CU3Ef__amU24cache2_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(Table_t3105308328_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t3138911764 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t3138911764 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t3138911764 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(Table_t3105308328_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_2_t1420215914 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_2_t1420215914 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_2_t1420215914 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(Table_t3105308328_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Func_2_t1420215914 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Func_2_t1420215914 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Func_2_t1420215914 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLE_T3105308328_H
#ifndef USERDATA_T1348357889_H
#define USERDATA_T1348357889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.UserData
struct  UserData_t1348357889  : public RefIdObject_t2581482789
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.UserData::<UserValue>k__BackingField
	DynValue_t3829844307 * ___U3CUserValueU3Ek__BackingField_2;
	// System.Object MoonSharp.Interpreter.UserData::<Object>k__BackingField
	RuntimeObject * ___U3CObjectU3Ek__BackingField_3;
	// MoonSharp.Interpreter.Interop.IUserDataDescriptor MoonSharp.Interpreter.UserData::<Descriptor>k__BackingField
	RuntimeObject* ___U3CDescriptorU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CUserValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UserData_t1348357889, ___U3CUserValueU3Ek__BackingField_2)); }
	inline DynValue_t3829844307 * get_U3CUserValueU3Ek__BackingField_2() const { return ___U3CUserValueU3Ek__BackingField_2; }
	inline DynValue_t3829844307 ** get_address_of_U3CUserValueU3Ek__BackingField_2() { return &___U3CUserValueU3Ek__BackingField_2; }
	inline void set_U3CUserValueU3Ek__BackingField_2(DynValue_t3829844307 * value)
	{
		___U3CUserValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserValueU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UserData_t1348357889, ___U3CObjectU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CDescriptorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UserData_t1348357889, ___U3CDescriptorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CDescriptorU3Ek__BackingField_4() const { return ___U3CDescriptorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CDescriptorU3Ek__BackingField_4() { return &___U3CDescriptorU3Ek__BackingField_4; }
	inline void set_U3CDescriptorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CDescriptorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptorU3Ek__BackingField_4), value);
	}
};

struct UserData_t1348357889_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,MoonSharp.Interpreter.Interop.IUserDataDescriptor>,System.Type> MoonSharp.Interpreter.UserData::<>f__am$cache0
	Func_2_t223607441 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(UserData_t1348357889_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t223607441 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t223607441 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t223607441 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDATA_T1348357889_H
#ifndef MOONSHARPHIDEMEMBERATTRIBUTE_T711961206_H
#define MOONSHARPHIDEMEMBERATTRIBUTE_T711961206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpHideMemberAttribute
struct  MoonSharpHideMemberAttribute_t711961206  : public Attribute_t1724788359
{
public:
	// System.String MoonSharp.Interpreter.MoonSharpHideMemberAttribute::<MemberName>k__BackingField
	String_t* ___U3CMemberNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMemberNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpHideMemberAttribute_t711961206, ___U3CMemberNameU3Ek__BackingField_0)); }
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
#endif // MOONSHARPHIDEMEMBERATTRIBUTE_T711961206_H
#ifndef TABLEPAIR_T1253572861_H
#define TABLEPAIR_T1253572861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TablePair
struct  TablePair_t1253572861 
{
public:
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TablePair::key
	DynValue_t3829844307 * ___key_1;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.TablePair::value
	DynValue_t3829844307 * ___value_2;

public:
	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(TablePair_t1253572861, ___key_1)); }
	inline DynValue_t3829844307 * get_key_1() const { return ___key_1; }
	inline DynValue_t3829844307 ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(DynValue_t3829844307 * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(TablePair_t1253572861, ___value_2)); }
	inline DynValue_t3829844307 * get_value_2() const { return ___value_2; }
	inline DynValue_t3829844307 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(DynValue_t3829844307 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

struct TablePair_t1253572861_StaticFields
{
public:
	// MoonSharp.Interpreter.TablePair MoonSharp.Interpreter.TablePair::s_NilNode
	TablePair_t1253572861  ___s_NilNode_0;

public:
	inline static int32_t get_offset_of_s_NilNode_0() { return static_cast<int32_t>(offsetof(TablePair_t1253572861_StaticFields, ___s_NilNode_0)); }
	inline TablePair_t1253572861  get_s_NilNode_0() const { return ___s_NilNode_0; }
	inline TablePair_t1253572861 * get_address_of_s_NilNode_0() { return &___s_NilNode_0; }
	inline void set_s_NilNode_0(TablePair_t1253572861  value)
	{
		___s_NilNode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MoonSharp.Interpreter.TablePair
struct TablePair_t1253572861_marshaled_pinvoke
{
	DynValue_t3829844307 * ___key_1;
	DynValue_t3829844307 * ___value_2;
};
// Native definition for COM marshalling of MoonSharp.Interpreter.TablePair
struct TablePair_t1253572861_marshaled_com
{
	DynValue_t3829844307 * ___key_1;
	DynValue_t3829844307 * ___value_2;
};
#endif // TABLEPAIR_T1253572861_H
#ifndef OPCODEMETADATATYPE_T3762033024_H
#define OPCODEMETADATATYPE_T3762033024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.OpCodeMetadataType
struct  OpCodeMetadataType_t3762033024 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.OpCodeMetadataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCodeMetadataType_t3762033024, ___value___1)); }
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
#endif // OPCODEMETADATATYPE_T3762033024_H
#ifndef OPCODE_T3502609264_H
#define OPCODE_T3502609264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.OpCode
struct  OpCode_t3502609264 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.OpCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCode_t3502609264, ___value___1)); }
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
#endif // OPCODE_T3502609264_H
#ifndef CALLSTACKITEMFLAGS_T690037209_H
#define CALLSTACKITEMFLAGS_T690037209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.CallStackItemFlags
struct  CallStackItemFlags_t690037209 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItemFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallStackItemFlags_t690037209, ___value___1)); }
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
#endif // CALLSTACKITEMFLAGS_T690037209_H
#ifndef INTEROPACCESSMODE_T553174503_H
#define INTEROPACCESSMODE_T553174503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InteropAccessMode
struct  InteropAccessMode_t553174503 
{
public:
	// System.Int32 MoonSharp.Interpreter.InteropAccessMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InteropAccessMode_t553174503, ___value___1)); }
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
#endif // INTEROPACCESSMODE_T553174503_H
#ifndef DELEGATE_T155444900_H
#define DELEGATE_T155444900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t155444900  : public RuntimeObject
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
	DelegateData_t1366250728 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t155444900, ___data_8)); }
	inline DelegateData_t1366250728 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1366250728 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1366250728 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T155444900_H
#ifndef UPVALUESTYPE_T367382754_H
#define UPVALUESTYPE_T367382754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Closure/UpvaluesType
struct  UpvaluesType_t367382754 
{
public:
	// System.Int32 MoonSharp.Interpreter.Closure/UpvaluesType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpvaluesType_t367382754, ___value___1)); }
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
#endif // UPVALUESTYPE_T367382754_H
#ifndef COROUTINETYPE_T2373514661_H
#define COROUTINETYPE_T2373514661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine/CoroutineType
struct  CoroutineType_t2373514661 
{
public:
	// System.Int32 MoonSharp.Interpreter.Coroutine/CoroutineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoroutineType_t2373514661, ___value___1)); }
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
#endif // COROUTINETYPE_T2373514661_H
#ifndef SYMBOLREFTYPE_T598879182_H
#define SYMBOLREFTYPE_T598879182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SymbolRefType
struct  SymbolRefType_t598879182 
{
public:
	// System.Int32 MoonSharp.Interpreter.SymbolRefType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SymbolRefType_t598879182, ___value___1)); }
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
#endif // SYMBOLREFTYPE_T598879182_H
#ifndef ACTIONTYPE_T2502132474_H
#define ACTIONTYPE_T2502132474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType
struct  ActionType_t2502132474 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActionType_t2502132474, ___value___1)); }
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
#endif // ACTIONTYPE_T2502132474_H
#ifndef DEBUGGERCAPS_T2473610586_H
#define DEBUGGERCAPS_T2473610586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerCaps
struct  DebuggerCaps_t2473610586 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerCaps::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggerCaps_t2473610586, ___value___1)); }
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
#endif // DEBUGGERCAPS_T2473610586_H
#ifndef WATCHTYPE_T3465179282_H
#define WATCHTYPE_T3465179282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.WatchType
struct  WatchType_t3465179282 
{
public:
	// System.Int32 MoonSharp.Interpreter.Debugging.WatchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WatchType_t3465179282, ___value___1)); }
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
#endif // WATCHTYPE_T3465179282_H
#ifndef PERFORMANCECOUNTER_T756240767_H
#define PERFORMANCECOUNTER_T756240767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounter
struct  PerformanceCounter_t756240767 
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounter::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PerformanceCounter_t756240767, ___value___1)); }
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
#endif // PERFORMANCECOUNTER_T756240767_H
#ifndef PERFORMANCECOUNTERTYPE_T2031856965_H
#define PERFORMANCECOUNTERTYPE_T2031856965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounterType
struct  PerformanceCounterType_t2031856965 
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PerformanceCounterType_t2031856965, ___value___1)); }
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
#endif // PERFORMANCECOUNTERTYPE_T2031856965_H
#ifndef DATETIMEKIND_T397816210_H
#define DATETIMEKIND_T397816210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t397816210 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t397816210, ___value___1)); }
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
#endif // DATETIMEKIND_T397816210_H
#ifndef INTERNALERROREXCEPTION_T2254816288_H
#define INTERNALERROREXCEPTION_T2254816288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.InternalErrorException
struct  InternalErrorException_t2254816288  : public InterpreterException_t1307826904
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALERROREXCEPTION_T2254816288_H
#ifndef TYPEVALIDATIONFLAGS_T1206309843_H
#define TYPEVALIDATIONFLAGS_T1206309843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.TypeValidationFlags
struct  TypeValidationFlags_t1206309843 
{
public:
	// System.Int32 MoonSharp.Interpreter.TypeValidationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeValidationFlags_t1206309843, ___value___1)); }
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
#endif // TYPEVALIDATIONFLAGS_T1206309843_H
#ifndef SYNTAXERROREXCEPTION_T3564482866_H
#define SYNTAXERROREXCEPTION_T3564482866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SyntaxErrorException
struct  SyntaxErrorException_t3564482866  : public InterpreterException_t1307826904
{
public:
	// MoonSharp.Interpreter.Tree.Token MoonSharp.Interpreter.SyntaxErrorException::<Token>k__BackingField
	Token_t3424589546 * ___U3CTokenU3Ek__BackingField_15;
	// System.Boolean MoonSharp.Interpreter.SyntaxErrorException::<IsPrematureStreamTermination>k__BackingField
	bool ___U3CIsPrematureStreamTerminationU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SyntaxErrorException_t3564482866, ___U3CTokenU3Ek__BackingField_15)); }
	inline Token_t3424589546 * get_U3CTokenU3Ek__BackingField_15() const { return ___U3CTokenU3Ek__BackingField_15; }
	inline Token_t3424589546 ** get_address_of_U3CTokenU3Ek__BackingField_15() { return &___U3CTokenU3Ek__BackingField_15; }
	inline void set_U3CTokenU3Ek__BackingField_15(Token_t3424589546 * value)
	{
		___U3CTokenU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTokenU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CIsPrematureStreamTerminationU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SyntaxErrorException_t3564482866, ___U3CIsPrematureStreamTerminationU3Ek__BackingField_16)); }
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
#endif // SYNTAXERROREXCEPTION_T3564482866_H
#ifndef COROUTINESTATE_T3439404107_H
#define COROUTINESTATE_T3439404107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CoroutineState
struct  CoroutineState_t3439404107 
{
public:
	// System.Int32 MoonSharp.Interpreter.CoroutineState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoroutineState_t3439404107, ___value___1)); }
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
#endif // COROUTINESTATE_T3439404107_H
#ifndef INSTRUCTIONFIELDUSAGE_T1970863476_H
#define INSTRUCTIONFIELDUSAGE_T1970863476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.InstructionFieldUsage
struct  InstructionFieldUsage_t1970863476 
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.InstructionFieldUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstructionFieldUsage_t1970863476, ___value___1)); }
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
#endif // INSTRUCTIONFIELDUSAGE_T1970863476_H
#ifndef DATATYPE_T3748563445_H
#define DATATYPE_T3748563445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DataType
struct  DataType_t3748563445 
{
public:
	// System.Int32 MoonSharp.Interpreter.DataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataType_t3748563445, ___value___1)); }
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
#endif // DATATYPE_T3748563445_H
#ifndef SCRIPTRUNTIMEEXCEPTION_T3866541480_H
#define SCRIPTRUNTIMEEXCEPTION_T3866541480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptRuntimeException
struct  ScriptRuntimeException_t3866541480  : public InterpreterException_t1307826904
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTRUNTIMEEXCEPTION_T3866541480_H
#ifndef PROCESSOR_T4242967914_H
#define PROCESSOR_T4242967914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor
struct  Processor_t4242967914  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.ByteCode MoonSharp.Interpreter.Execution.VM.Processor::m_RootChunk
	ByteCode_t1148839066 * ___m_RootChunk_0;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Execution.VM.Processor::m_ValueStack
	FastStack_1_t3500734358 * ___m_ValueStack_1;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem> MoonSharp.Interpreter.Execution.VM.Processor::m_ExecutionStack
	FastStack_1_t3401752689 * ___m_ExecutionStack_2;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Execution.VM.Processor> MoonSharp.Interpreter.Execution.VM.Processor::m_CoroutinesStack
	List_1_t3741746567 * ___m_CoroutinesStack_3;
	// MoonSharp.Interpreter.Table MoonSharp.Interpreter.Execution.VM.Processor::m_GlobalTable
	Table_t3105308328 * ___m_GlobalTable_4;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Execution.VM.Processor::m_Script
	Script_t116946378 * ___m_Script_5;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Execution.VM.Processor::m_Parent
	Processor_t4242967914 * ___m_Parent_6;
	// MoonSharp.Interpreter.CoroutineState MoonSharp.Interpreter.Execution.VM.Processor::m_State
	int32_t ___m_State_7;
	// System.Boolean MoonSharp.Interpreter.Execution.VM.Processor::m_CanYield
	bool ___m_CanYield_8;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_SavedInstructionPtr
	int32_t ___m_SavedInstructionPtr_9;
	// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext MoonSharp.Interpreter.Execution.VM.Processor::m_Debug
	DebugContext_t3020676161 * ___m_Debug_10;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_OwningThreadID
	int32_t ___m_OwningThreadID_11;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor::m_ExecutionNesting
	int32_t ___m_ExecutionNesting_12;
	// MoonSharp.Interpreter.Coroutine MoonSharp.Interpreter.Execution.VM.Processor::<AssociatedCoroutine>k__BackingField
	Coroutine_t1090859767 * ___U3CAssociatedCoroutineU3Ek__BackingField_15;
	// System.Int64 MoonSharp.Interpreter.Execution.VM.Processor::AutoYieldCounter
	int64_t ___AutoYieldCounter_17;

public:
	inline static int32_t get_offset_of_m_RootChunk_0() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_RootChunk_0)); }
	inline ByteCode_t1148839066 * get_m_RootChunk_0() const { return ___m_RootChunk_0; }
	inline ByteCode_t1148839066 ** get_address_of_m_RootChunk_0() { return &___m_RootChunk_0; }
	inline void set_m_RootChunk_0(ByteCode_t1148839066 * value)
	{
		___m_RootChunk_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RootChunk_0), value);
	}

	inline static int32_t get_offset_of_m_ValueStack_1() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_ValueStack_1)); }
	inline FastStack_1_t3500734358 * get_m_ValueStack_1() const { return ___m_ValueStack_1; }
	inline FastStack_1_t3500734358 ** get_address_of_m_ValueStack_1() { return &___m_ValueStack_1; }
	inline void set_m_ValueStack_1(FastStack_1_t3500734358 * value)
	{
		___m_ValueStack_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ValueStack_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutionStack_2() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_ExecutionStack_2)); }
	inline FastStack_1_t3401752689 * get_m_ExecutionStack_2() const { return ___m_ExecutionStack_2; }
	inline FastStack_1_t3401752689 ** get_address_of_m_ExecutionStack_2() { return &___m_ExecutionStack_2; }
	inline void set_m_ExecutionStack_2(FastStack_1_t3401752689 * value)
	{
		___m_ExecutionStack_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionStack_2), value);
	}

	inline static int32_t get_offset_of_m_CoroutinesStack_3() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_CoroutinesStack_3)); }
	inline List_1_t3741746567 * get_m_CoroutinesStack_3() const { return ___m_CoroutinesStack_3; }
	inline List_1_t3741746567 ** get_address_of_m_CoroutinesStack_3() { return &___m_CoroutinesStack_3; }
	inline void set_m_CoroutinesStack_3(List_1_t3741746567 * value)
	{
		___m_CoroutinesStack_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutinesStack_3), value);
	}

	inline static int32_t get_offset_of_m_GlobalTable_4() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_GlobalTable_4)); }
	inline Table_t3105308328 * get_m_GlobalTable_4() const { return ___m_GlobalTable_4; }
	inline Table_t3105308328 ** get_address_of_m_GlobalTable_4() { return &___m_GlobalTable_4; }
	inline void set_m_GlobalTable_4(Table_t3105308328 * value)
	{
		___m_GlobalTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_GlobalTable_4), value);
	}

	inline static int32_t get_offset_of_m_Script_5() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_Script_5)); }
	inline Script_t116946378 * get_m_Script_5() const { return ___m_Script_5; }
	inline Script_t116946378 ** get_address_of_m_Script_5() { return &___m_Script_5; }
	inline void set_m_Script_5(Script_t116946378 * value)
	{
		___m_Script_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Script_5), value);
	}

	inline static int32_t get_offset_of_m_Parent_6() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_Parent_6)); }
	inline Processor_t4242967914 * get_m_Parent_6() const { return ___m_Parent_6; }
	inline Processor_t4242967914 ** get_address_of_m_Parent_6() { return &___m_Parent_6; }
	inline void set_m_Parent_6(Processor_t4242967914 * value)
	{
		___m_Parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_6), value);
	}

	inline static int32_t get_offset_of_m_State_7() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_State_7)); }
	inline int32_t get_m_State_7() const { return ___m_State_7; }
	inline int32_t* get_address_of_m_State_7() { return &___m_State_7; }
	inline void set_m_State_7(int32_t value)
	{
		___m_State_7 = value;
	}

	inline static int32_t get_offset_of_m_CanYield_8() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_CanYield_8)); }
	inline bool get_m_CanYield_8() const { return ___m_CanYield_8; }
	inline bool* get_address_of_m_CanYield_8() { return &___m_CanYield_8; }
	inline void set_m_CanYield_8(bool value)
	{
		___m_CanYield_8 = value;
	}

	inline static int32_t get_offset_of_m_SavedInstructionPtr_9() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_SavedInstructionPtr_9)); }
	inline int32_t get_m_SavedInstructionPtr_9() const { return ___m_SavedInstructionPtr_9; }
	inline int32_t* get_address_of_m_SavedInstructionPtr_9() { return &___m_SavedInstructionPtr_9; }
	inline void set_m_SavedInstructionPtr_9(int32_t value)
	{
		___m_SavedInstructionPtr_9 = value;
	}

	inline static int32_t get_offset_of_m_Debug_10() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_Debug_10)); }
	inline DebugContext_t3020676161 * get_m_Debug_10() const { return ___m_Debug_10; }
	inline DebugContext_t3020676161 ** get_address_of_m_Debug_10() { return &___m_Debug_10; }
	inline void set_m_Debug_10(DebugContext_t3020676161 * value)
	{
		___m_Debug_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Debug_10), value);
	}

	inline static int32_t get_offset_of_m_OwningThreadID_11() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_OwningThreadID_11)); }
	inline int32_t get_m_OwningThreadID_11() const { return ___m_OwningThreadID_11; }
	inline int32_t* get_address_of_m_OwningThreadID_11() { return &___m_OwningThreadID_11; }
	inline void set_m_OwningThreadID_11(int32_t value)
	{
		___m_OwningThreadID_11 = value;
	}

	inline static int32_t get_offset_of_m_ExecutionNesting_12() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___m_ExecutionNesting_12)); }
	inline int32_t get_m_ExecutionNesting_12() const { return ___m_ExecutionNesting_12; }
	inline int32_t* get_address_of_m_ExecutionNesting_12() { return &___m_ExecutionNesting_12; }
	inline void set_m_ExecutionNesting_12(int32_t value)
	{
		___m_ExecutionNesting_12 = value;
	}

	inline static int32_t get_offset_of_U3CAssociatedCoroutineU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___U3CAssociatedCoroutineU3Ek__BackingField_15)); }
	inline Coroutine_t1090859767 * get_U3CAssociatedCoroutineU3Ek__BackingField_15() const { return ___U3CAssociatedCoroutineU3Ek__BackingField_15; }
	inline Coroutine_t1090859767 ** get_address_of_U3CAssociatedCoroutineU3Ek__BackingField_15() { return &___U3CAssociatedCoroutineU3Ek__BackingField_15; }
	inline void set_U3CAssociatedCoroutineU3Ek__BackingField_15(Coroutine_t1090859767 * value)
	{
		___U3CAssociatedCoroutineU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAssociatedCoroutineU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_AutoYieldCounter_17() { return static_cast<int32_t>(offsetof(Processor_t4242967914, ___AutoYieldCounter_17)); }
	inline int64_t get_AutoYieldCounter_17() const { return ___AutoYieldCounter_17; }
	inline int64_t* get_address_of_AutoYieldCounter_17() { return &___AutoYieldCounter_17; }
	inline void set_AutoYieldCounter_17(int64_t value)
	{
		___AutoYieldCounter_17 = value;
	}
};

struct Processor_t4242967914_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.Execution.VM.Processor,MoonSharp.Interpreter.Debugging.WatchItem> MoonSharp.Interpreter.Execution.VM.Processor::<>f__am$cache0
	Func_2_t2739716806 * ___U3CU3Ef__amU24cache0_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_18() { return static_cast<int32_t>(offsetof(Processor_t4242967914_StaticFields, ___U3CU3Ef__amU24cache0_18)); }
	inline Func_2_t2739716806 * get_U3CU3Ef__amU24cache0_18() const { return ___U3CU3Ef__amU24cache0_18; }
	inline Func_2_t2739716806 ** get_address_of_U3CU3Ef__amU24cache0_18() { return &___U3CU3Ef__amU24cache0_18; }
	inline void set_U3CU3Ef__amU24cache0_18(Func_2_t2739716806 * value)
	{
		___U3CU3Ef__amU24cache0_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSOR_T4242967914_H
#ifndef CALLBACKFUNCTION_T225490189_H
#define CALLBACKFUNCTION_T225490189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.CallbackFunction
struct  CallbackFunction_t225490189  : public RefIdObject_t2581482789
{
public:
	// System.String MoonSharp.Interpreter.CallbackFunction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Func`3<MoonSharp.Interpreter.ScriptExecutionContext,MoonSharp.Interpreter.CallbackArguments,MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.CallbackFunction::<ClrCallback>k__BackingField
	Func_3_t1077306363 * ___U3CClrCallbackU3Ek__BackingField_4;
	// System.Object MoonSharp.Interpreter.CallbackFunction::<AdditionalData>k__BackingField
	RuntimeObject * ___U3CAdditionalDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CallbackFunction_t225490189, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CClrCallbackU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CallbackFunction_t225490189, ___U3CClrCallbackU3Ek__BackingField_4)); }
	inline Func_3_t1077306363 * get_U3CClrCallbackU3Ek__BackingField_4() const { return ___U3CClrCallbackU3Ek__BackingField_4; }
	inline Func_3_t1077306363 ** get_address_of_U3CClrCallbackU3Ek__BackingField_4() { return &___U3CClrCallbackU3Ek__BackingField_4; }
	inline void set_U3CClrCallbackU3Ek__BackingField_4(Func_3_t1077306363 * value)
	{
		___U3CClrCallbackU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClrCallbackU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CAdditionalDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CallbackFunction_t225490189, ___U3CAdditionalDataU3Ek__BackingField_5)); }
	inline RuntimeObject * get_U3CAdditionalDataU3Ek__BackingField_5() const { return ___U3CAdditionalDataU3Ek__BackingField_5; }
	inline RuntimeObject ** get_address_of_U3CAdditionalDataU3Ek__BackingField_5() { return &___U3CAdditionalDataU3Ek__BackingField_5; }
	inline void set_U3CAdditionalDataU3Ek__BackingField_5(RuntimeObject * value)
	{
		___U3CAdditionalDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAdditionalDataU3Ek__BackingField_5), value);
	}
};

struct CallbackFunction_t225490189_StaticFields
{
public:
	// MoonSharp.Interpreter.InteropAccessMode MoonSharp.Interpreter.CallbackFunction::m_DefaultAccessMode
	int32_t ___m_DefaultAccessMode_2;

public:
	inline static int32_t get_offset_of_m_DefaultAccessMode_2() { return static_cast<int32_t>(offsetof(CallbackFunction_t225490189_StaticFields, ___m_DefaultAccessMode_2)); }
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
#endif // CALLBACKFUNCTION_T225490189_H
#ifndef SYMBOLREF_T815943396_H
#define SYMBOLREF_T815943396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.SymbolRef
struct  SymbolRef_t815943396  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.SymbolRefType MoonSharp.Interpreter.SymbolRef::i_Type
	int32_t ___i_Type_1;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.SymbolRef::i_Env
	SymbolRef_t815943396 * ___i_Env_2;
	// System.Int32 MoonSharp.Interpreter.SymbolRef::i_Index
	int32_t ___i_Index_3;
	// System.String MoonSharp.Interpreter.SymbolRef::i_Name
	String_t* ___i_Name_4;

public:
	inline static int32_t get_offset_of_i_Type_1() { return static_cast<int32_t>(offsetof(SymbolRef_t815943396, ___i_Type_1)); }
	inline int32_t get_i_Type_1() const { return ___i_Type_1; }
	inline int32_t* get_address_of_i_Type_1() { return &___i_Type_1; }
	inline void set_i_Type_1(int32_t value)
	{
		___i_Type_1 = value;
	}

	inline static int32_t get_offset_of_i_Env_2() { return static_cast<int32_t>(offsetof(SymbolRef_t815943396, ___i_Env_2)); }
	inline SymbolRef_t815943396 * get_i_Env_2() const { return ___i_Env_2; }
	inline SymbolRef_t815943396 ** get_address_of_i_Env_2() { return &___i_Env_2; }
	inline void set_i_Env_2(SymbolRef_t815943396 * value)
	{
		___i_Env_2 = value;
		Il2CppCodeGenWriteBarrier((&___i_Env_2), value);
	}

	inline static int32_t get_offset_of_i_Index_3() { return static_cast<int32_t>(offsetof(SymbolRef_t815943396, ___i_Index_3)); }
	inline int32_t get_i_Index_3() const { return ___i_Index_3; }
	inline int32_t* get_address_of_i_Index_3() { return &___i_Index_3; }
	inline void set_i_Index_3(int32_t value)
	{
		___i_Index_3 = value;
	}

	inline static int32_t get_offset_of_i_Name_4() { return static_cast<int32_t>(offsetof(SymbolRef_t815943396, ___i_Name_4)); }
	inline String_t* get_i_Name_4() const { return ___i_Name_4; }
	inline String_t** get_address_of_i_Name_4() { return &___i_Name_4; }
	inline void set_i_Name_4(String_t* value)
	{
		___i_Name_4 = value;
		Il2CppCodeGenWriteBarrier((&___i_Name_4), value);
	}
};

struct SymbolRef_t815943396_StaticFields
{
public:
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.SymbolRef::s_DefaultEnv
	SymbolRef_t815943396 * ___s_DefaultEnv_0;

public:
	inline static int32_t get_offset_of_s_DefaultEnv_0() { return static_cast<int32_t>(offsetof(SymbolRef_t815943396_StaticFields, ___s_DefaultEnv_0)); }
	inline SymbolRef_t815943396 * get_s_DefaultEnv_0() const { return ___s_DefaultEnv_0; }
	inline SymbolRef_t815943396 ** get_address_of_s_DefaultEnv_0() { return &___s_DefaultEnv_0; }
	inline void set_s_DefaultEnv_0(SymbolRef_t815943396 * value)
	{
		___s_DefaultEnv_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultEnv_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLREF_T815943396_H
#ifndef DATETIME_T1493116542_H
#define DATETIME_T1493116542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1493116542 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t90496317  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t1493116542, ___ticks_10)); }
	inline TimeSpan_t90496317  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t90496317 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t90496317  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t1493116542, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t1493116542_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1493116542  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1493116542  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t186835049* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t186835049* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t186835049* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t186835049* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t186835049* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t186835049* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t186835049* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2562413529* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2562413529* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___MaxValue_12)); }
	inline DateTime_t1493116542  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t1493116542 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t1493116542  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___MinValue_13)); }
	inline DateTime_t1493116542  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t1493116542 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t1493116542  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t186835049* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t186835049** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t186835049* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t186835049* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t186835049** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t186835049* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t186835049* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t186835049** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t186835049* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t186835049* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t186835049** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t186835049* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t186835049* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t186835049** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t186835049* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t186835049* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t186835049** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t186835049* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t186835049* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t186835049** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t186835049* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t2562413529* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t2562413529** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t2562413529* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t2562413529* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t2562413529** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t2562413529* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t1493116542_StaticFields, ___last_now_24)); }
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
#endif // DATETIME_T1493116542_H
#ifndef MULTICASTDELEGATE_T1406718125_H
#define MULTICASTDELEGATE_T1406718125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1406718125  : public Delegate_t155444900
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1406718125 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1406718125 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1406718125, ___prev_9)); }
	inline MulticastDelegate_t1406718125 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1406718125 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1406718125 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1406718125, ___kpm_next_10)); }
	inline MulticastDelegate_t1406718125 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1406718125 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1406718125 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1406718125_H
#ifndef CALLSTACKITEM_T3730862638_H
#define CALLSTACKITEM_T3730862638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.CallStackItem
struct  CallStackItem_t3730862638  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::Debug_EntryPoint
	int32_t ___Debug_EntryPoint_0;
	// MoonSharp.Interpreter.SymbolRef[] MoonSharp.Interpreter.Execution.VM.CallStackItem::Debug_Symbols
	SymbolRefU5BU5D_t1265485069* ___Debug_Symbols_1;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.CallStackItem::CallingSourceRef
	SourceRef_t1362154715 * ___CallingSourceRef_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::ClrFunction
	CallbackFunction_t225490189 * ___ClrFunction_3;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::Continuation
	CallbackFunction_t225490189 * ___Continuation_4;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Execution.VM.CallStackItem::ErrorHandler
	CallbackFunction_t225490189 * ___ErrorHandler_5;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Execution.VM.CallStackItem::ErrorHandlerBeforeUnwind
	DynValue_t3829844307 * ___ErrorHandlerBeforeUnwind_6;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::BasePointer
	int32_t ___BasePointer_7;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.CallStackItem::ReturnAddress
	int32_t ___ReturnAddress_8;
	// MoonSharp.Interpreter.DynValue[] MoonSharp.Interpreter.Execution.VM.CallStackItem::LocalScope
	DynValueU5BU5D_t3271737346* ___LocalScope_9;
	// MoonSharp.Interpreter.Execution.ClosureContext MoonSharp.Interpreter.Execution.VM.CallStackItem::ClosureScope
	ClosureContext_t93388692 * ___ClosureScope_10;
	// MoonSharp.Interpreter.Execution.VM.CallStackItemFlags MoonSharp.Interpreter.Execution.VM.CallStackItem::Flags
	int32_t ___Flags_11;

public:
	inline static int32_t get_offset_of_Debug_EntryPoint_0() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___Debug_EntryPoint_0)); }
	inline int32_t get_Debug_EntryPoint_0() const { return ___Debug_EntryPoint_0; }
	inline int32_t* get_address_of_Debug_EntryPoint_0() { return &___Debug_EntryPoint_0; }
	inline void set_Debug_EntryPoint_0(int32_t value)
	{
		___Debug_EntryPoint_0 = value;
	}

	inline static int32_t get_offset_of_Debug_Symbols_1() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___Debug_Symbols_1)); }
	inline SymbolRefU5BU5D_t1265485069* get_Debug_Symbols_1() const { return ___Debug_Symbols_1; }
	inline SymbolRefU5BU5D_t1265485069** get_address_of_Debug_Symbols_1() { return &___Debug_Symbols_1; }
	inline void set_Debug_Symbols_1(SymbolRefU5BU5D_t1265485069* value)
	{
		___Debug_Symbols_1 = value;
		Il2CppCodeGenWriteBarrier((&___Debug_Symbols_1), value);
	}

	inline static int32_t get_offset_of_CallingSourceRef_2() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___CallingSourceRef_2)); }
	inline SourceRef_t1362154715 * get_CallingSourceRef_2() const { return ___CallingSourceRef_2; }
	inline SourceRef_t1362154715 ** get_address_of_CallingSourceRef_2() { return &___CallingSourceRef_2; }
	inline void set_CallingSourceRef_2(SourceRef_t1362154715 * value)
	{
		___CallingSourceRef_2 = value;
		Il2CppCodeGenWriteBarrier((&___CallingSourceRef_2), value);
	}

	inline static int32_t get_offset_of_ClrFunction_3() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___ClrFunction_3)); }
	inline CallbackFunction_t225490189 * get_ClrFunction_3() const { return ___ClrFunction_3; }
	inline CallbackFunction_t225490189 ** get_address_of_ClrFunction_3() { return &___ClrFunction_3; }
	inline void set_ClrFunction_3(CallbackFunction_t225490189 * value)
	{
		___ClrFunction_3 = value;
		Il2CppCodeGenWriteBarrier((&___ClrFunction_3), value);
	}

	inline static int32_t get_offset_of_Continuation_4() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___Continuation_4)); }
	inline CallbackFunction_t225490189 * get_Continuation_4() const { return ___Continuation_4; }
	inline CallbackFunction_t225490189 ** get_address_of_Continuation_4() { return &___Continuation_4; }
	inline void set_Continuation_4(CallbackFunction_t225490189 * value)
	{
		___Continuation_4 = value;
		Il2CppCodeGenWriteBarrier((&___Continuation_4), value);
	}

	inline static int32_t get_offset_of_ErrorHandler_5() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___ErrorHandler_5)); }
	inline CallbackFunction_t225490189 * get_ErrorHandler_5() const { return ___ErrorHandler_5; }
	inline CallbackFunction_t225490189 ** get_address_of_ErrorHandler_5() { return &___ErrorHandler_5; }
	inline void set_ErrorHandler_5(CallbackFunction_t225490189 * value)
	{
		___ErrorHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorHandler_5), value);
	}

	inline static int32_t get_offset_of_ErrorHandlerBeforeUnwind_6() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___ErrorHandlerBeforeUnwind_6)); }
	inline DynValue_t3829844307 * get_ErrorHandlerBeforeUnwind_6() const { return ___ErrorHandlerBeforeUnwind_6; }
	inline DynValue_t3829844307 ** get_address_of_ErrorHandlerBeforeUnwind_6() { return &___ErrorHandlerBeforeUnwind_6; }
	inline void set_ErrorHandlerBeforeUnwind_6(DynValue_t3829844307 * value)
	{
		___ErrorHandlerBeforeUnwind_6 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorHandlerBeforeUnwind_6), value);
	}

	inline static int32_t get_offset_of_BasePointer_7() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___BasePointer_7)); }
	inline int32_t get_BasePointer_7() const { return ___BasePointer_7; }
	inline int32_t* get_address_of_BasePointer_7() { return &___BasePointer_7; }
	inline void set_BasePointer_7(int32_t value)
	{
		___BasePointer_7 = value;
	}

	inline static int32_t get_offset_of_ReturnAddress_8() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___ReturnAddress_8)); }
	inline int32_t get_ReturnAddress_8() const { return ___ReturnAddress_8; }
	inline int32_t* get_address_of_ReturnAddress_8() { return &___ReturnAddress_8; }
	inline void set_ReturnAddress_8(int32_t value)
	{
		___ReturnAddress_8 = value;
	}

	inline static int32_t get_offset_of_LocalScope_9() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___LocalScope_9)); }
	inline DynValueU5BU5D_t3271737346* get_LocalScope_9() const { return ___LocalScope_9; }
	inline DynValueU5BU5D_t3271737346** get_address_of_LocalScope_9() { return &___LocalScope_9; }
	inline void set_LocalScope_9(DynValueU5BU5D_t3271737346* value)
	{
		___LocalScope_9 = value;
		Il2CppCodeGenWriteBarrier((&___LocalScope_9), value);
	}

	inline static int32_t get_offset_of_ClosureScope_10() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___ClosureScope_10)); }
	inline ClosureContext_t93388692 * get_ClosureScope_10() const { return ___ClosureScope_10; }
	inline ClosureContext_t93388692 ** get_address_of_ClosureScope_10() { return &___ClosureScope_10; }
	inline void set_ClosureScope_10(ClosureContext_t93388692 * value)
	{
		___ClosureScope_10 = value;
		Il2CppCodeGenWriteBarrier((&___ClosureScope_10), value);
	}

	inline static int32_t get_offset_of_Flags_11() { return static_cast<int32_t>(offsetof(CallStackItem_t3730862638, ___Flags_11)); }
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
#endif // CALLSTACKITEM_T3730862638_H
#ifndef DYNVALUE_T3829844307_H
#define DYNVALUE_T3829844307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynValue
struct  DynValue_t3829844307  : public RuntimeObject
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
	inline static int32_t get_offset_of_m_RefID_1() { return static_cast<int32_t>(offsetof(DynValue_t3829844307, ___m_RefID_1)); }
	inline int32_t get_m_RefID_1() const { return ___m_RefID_1; }
	inline int32_t* get_address_of_m_RefID_1() { return &___m_RefID_1; }
	inline void set_m_RefID_1(int32_t value)
	{
		___m_RefID_1 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_2() { return static_cast<int32_t>(offsetof(DynValue_t3829844307, ___m_HashCode_2)); }
	inline int32_t get_m_HashCode_2() const { return ___m_HashCode_2; }
	inline int32_t* get_address_of_m_HashCode_2() { return &___m_HashCode_2; }
	inline void set_m_HashCode_2(int32_t value)
	{
		___m_HashCode_2 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_3() { return static_cast<int32_t>(offsetof(DynValue_t3829844307, ___m_ReadOnly_3)); }
	inline bool get_m_ReadOnly_3() const { return ___m_ReadOnly_3; }
	inline bool* get_address_of_m_ReadOnly_3() { return &___m_ReadOnly_3; }
	inline void set_m_ReadOnly_3(bool value)
	{
		___m_ReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_m_Number_4() { return static_cast<int32_t>(offsetof(DynValue_t3829844307, ___m_Number_4)); }
	inline double get_m_Number_4() const { return ___m_Number_4; }
	inline double* get_address_of_m_Number_4() { return &___m_Number_4; }
	inline void set_m_Number_4(double value)
	{
		___m_Number_4 = value;
	}

	inline static int32_t get_offset_of_m_Object_5() { return static_cast<int32_t>(offsetof(DynValue_t3829844307, ___m_Object_5)); }
	inline RuntimeObject * get_m_Object_5() const { return ___m_Object_5; }
	inline RuntimeObject ** get_address_of_m_Object_5() { return &___m_Object_5; }
	inline void set_m_Object_5(RuntimeObject * value)
	{
		___m_Object_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Object_5), value);
	}

	inline static int32_t get_offset_of_m_Type_6() { return static_cast<int32_t>(offsetof(DynValue_t3829844307, ___m_Type_6)); }
	inline int32_t get_m_Type_6() const { return ___m_Type_6; }
	inline int32_t* get_address_of_m_Type_6() { return &___m_Type_6; }
	inline void set_m_Type_6(int32_t value)
	{
		___m_Type_6 = value;
	}
};

struct DynValue_t3829844307_StaticFields
{
public:
	// System.Int32 MoonSharp.Interpreter.DynValue::s_RefIDCounter
	int32_t ___s_RefIDCounter_0;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<Void>k__BackingField
	DynValue_t3829844307 * ___U3CVoidU3Ek__BackingField_7;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<Nil>k__BackingField
	DynValue_t3829844307 * ___U3CNilU3Ek__BackingField_8;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<True>k__BackingField
	DynValue_t3829844307 * ___U3CTrueU3Ek__BackingField_9;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.DynValue::<False>k__BackingField
	DynValue_t3829844307 * ___U3CFalseU3Ek__BackingField_10;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.Boolean> MoonSharp.Interpreter.DynValue::<>f__am$cache0
	Func_2_t2884578622 * ___U3CU3Ef__amU24cache0_11;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache1
	Func_2_t1685992545 * ___U3CU3Ef__amU24cache1_12;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache2
	Func_2_t1685992545 * ___U3CU3Ef__amU24cache2_13;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache3
	Func_2_t1685992545 * ___U3CU3Ef__amU24cache3_14;
	// System.Func`2<MoonSharp.Interpreter.DynValue,System.String> MoonSharp.Interpreter.DynValue::<>f__am$cache4
	Func_2_t1685992545 * ___U3CU3Ef__amU24cache4_15;

public:
	inline static int32_t get_offset_of_s_RefIDCounter_0() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___s_RefIDCounter_0)); }
	inline int32_t get_s_RefIDCounter_0() const { return ___s_RefIDCounter_0; }
	inline int32_t* get_address_of_s_RefIDCounter_0() { return &___s_RefIDCounter_0; }
	inline void set_s_RefIDCounter_0(int32_t value)
	{
		___s_RefIDCounter_0 = value;
	}

	inline static int32_t get_offset_of_U3CVoidU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CVoidU3Ek__BackingField_7)); }
	inline DynValue_t3829844307 * get_U3CVoidU3Ek__BackingField_7() const { return ___U3CVoidU3Ek__BackingField_7; }
	inline DynValue_t3829844307 ** get_address_of_U3CVoidU3Ek__BackingField_7() { return &___U3CVoidU3Ek__BackingField_7; }
	inline void set_U3CVoidU3Ek__BackingField_7(DynValue_t3829844307 * value)
	{
		___U3CVoidU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVoidU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CNilU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CNilU3Ek__BackingField_8)); }
	inline DynValue_t3829844307 * get_U3CNilU3Ek__BackingField_8() const { return ___U3CNilU3Ek__BackingField_8; }
	inline DynValue_t3829844307 ** get_address_of_U3CNilU3Ek__BackingField_8() { return &___U3CNilU3Ek__BackingField_8; }
	inline void set_U3CNilU3Ek__BackingField_8(DynValue_t3829844307 * value)
	{
		___U3CNilU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNilU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CTrueU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CTrueU3Ek__BackingField_9)); }
	inline DynValue_t3829844307 * get_U3CTrueU3Ek__BackingField_9() const { return ___U3CTrueU3Ek__BackingField_9; }
	inline DynValue_t3829844307 ** get_address_of_U3CTrueU3Ek__BackingField_9() { return &___U3CTrueU3Ek__BackingField_9; }
	inline void set_U3CTrueU3Ek__BackingField_9(DynValue_t3829844307 * value)
	{
		___U3CTrueU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrueU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CFalseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CFalseU3Ek__BackingField_10)); }
	inline DynValue_t3829844307 * get_U3CFalseU3Ek__BackingField_10() const { return ___U3CFalseU3Ek__BackingField_10; }
	inline DynValue_t3829844307 ** get_address_of_U3CFalseU3Ek__BackingField_10() { return &___U3CFalseU3Ek__BackingField_10; }
	inline void set_U3CFalseU3Ek__BackingField_10(DynValue_t3829844307 * value)
	{
		___U3CFalseU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFalseU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t2884578622 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t2884578622 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t2884578622 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_2_t1685992545 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_2_t1685992545 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_2_t1685992545 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Func_2_t1685992545 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Func_2_t1685992545 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Func_2_t1685992545 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_14() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CU3Ef__amU24cache3_14)); }
	inline Func_2_t1685992545 * get_U3CU3Ef__amU24cache3_14() const { return ___U3CU3Ef__amU24cache3_14; }
	inline Func_2_t1685992545 ** get_address_of_U3CU3Ef__amU24cache3_14() { return &___U3CU3Ef__amU24cache3_14; }
	inline void set_U3CU3Ef__amU24cache3_14(Func_2_t1685992545 * value)
	{
		___U3CU3Ef__amU24cache3_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_15() { return static_cast<int32_t>(offsetof(DynValue_t3829844307_StaticFields, ___U3CU3Ef__amU24cache4_15)); }
	inline Func_2_t1685992545 * get_U3CU3Ef__amU24cache4_15() const { return ___U3CU3Ef__amU24cache4_15; }
	inline Func_2_t1685992545 ** get_address_of_U3CU3Ef__amU24cache4_15() { return &___U3CU3Ef__amU24cache4_15; }
	inline void set_U3CU3Ef__amU24cache4_15(Func_2_t1685992545 * value)
	{
		___U3CU3Ef__amU24cache4_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNVALUE_T3829844307_H
#ifndef LUATYPEEXTENSIONS_T3547256788_H
#define LUATYPEEXTENSIONS_T3547256788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.LuaTypeExtensions
struct  LuaTypeExtensions_t3547256788  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUATYPEEXTENSIONS_T3547256788_H
#ifndef PERFORMANCESTOPWATCH_T3013001430_H
#define PERFORMANCESTOPWATCH_T3013001430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch
struct  PerformanceStopwatch_t3013001430  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Stopwatch
	Stopwatch_t24371359 * ___m_Stopwatch_0;
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Count
	int32_t ___m_Count_1;
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Reentrant
	int32_t ___m_Reentrant_2;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounter MoonSharp.Interpreter.Diagnostics.PerformanceCounters.PerformanceStopwatch::m_Counter
	int32_t ___m_Counter_3;

public:
	inline static int32_t get_offset_of_m_Stopwatch_0() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t3013001430, ___m_Stopwatch_0)); }
	inline Stopwatch_t24371359 * get_m_Stopwatch_0() const { return ___m_Stopwatch_0; }
	inline Stopwatch_t24371359 ** get_address_of_m_Stopwatch_0() { return &___m_Stopwatch_0; }
	inline void set_m_Stopwatch_0(Stopwatch_t24371359 * value)
	{
		___m_Stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stopwatch_0), value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t3013001430, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}

	inline static int32_t get_offset_of_m_Reentrant_2() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t3013001430, ___m_Reentrant_2)); }
	inline int32_t get_m_Reentrant_2() const { return ___m_Reentrant_2; }
	inline int32_t* get_address_of_m_Reentrant_2() { return &___m_Reentrant_2; }
	inline void set_m_Reentrant_2(int32_t value)
	{
		___m_Reentrant_2 = value;
	}

	inline static int32_t get_offset_of_m_Counter_3() { return static_cast<int32_t>(offsetof(PerformanceStopwatch_t3013001430, ___m_Counter_3)); }
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
#endif // PERFORMANCESTOPWATCH_T3013001430_H
#ifndef EXECUTIONSTATE_T3117120280_H
#define EXECUTIONSTATE_T3117120280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.ExecutionState
struct  ExecutionState_t3117120280  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.DynValue> MoonSharp.Interpreter.Execution.VM.ExecutionState::ValueStack
	FastStack_1_t3500734358 * ___ValueStack_0;
	// MoonSharp.Interpreter.DataStructs.FastStack`1<MoonSharp.Interpreter.Execution.VM.CallStackItem> MoonSharp.Interpreter.Execution.VM.ExecutionState::ExecutionStack
	FastStack_1_t3401752689 * ___ExecutionStack_1;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.ExecutionState::InstructionPtr
	int32_t ___InstructionPtr_2;
	// MoonSharp.Interpreter.CoroutineState MoonSharp.Interpreter.Execution.VM.ExecutionState::State
	int32_t ___State_3;

public:
	inline static int32_t get_offset_of_ValueStack_0() { return static_cast<int32_t>(offsetof(ExecutionState_t3117120280, ___ValueStack_0)); }
	inline FastStack_1_t3500734358 * get_ValueStack_0() const { return ___ValueStack_0; }
	inline FastStack_1_t3500734358 ** get_address_of_ValueStack_0() { return &___ValueStack_0; }
	inline void set_ValueStack_0(FastStack_1_t3500734358 * value)
	{
		___ValueStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___ValueStack_0), value);
	}

	inline static int32_t get_offset_of_ExecutionStack_1() { return static_cast<int32_t>(offsetof(ExecutionState_t3117120280, ___ExecutionStack_1)); }
	inline FastStack_1_t3401752689 * get_ExecutionStack_1() const { return ___ExecutionStack_1; }
	inline FastStack_1_t3401752689 ** get_address_of_ExecutionStack_1() { return &___ExecutionStack_1; }
	inline void set_ExecutionStack_1(FastStack_1_t3401752689 * value)
	{
		___ExecutionStack_1 = value;
		Il2CppCodeGenWriteBarrier((&___ExecutionStack_1), value);
	}

	inline static int32_t get_offset_of_InstructionPtr_2() { return static_cast<int32_t>(offsetof(ExecutionState_t3117120280, ___InstructionPtr_2)); }
	inline int32_t get_InstructionPtr_2() const { return ___InstructionPtr_2; }
	inline int32_t* get_address_of_InstructionPtr_2() { return &___InstructionPtr_2; }
	inline void set_InstructionPtr_2(int32_t value)
	{
		___InstructionPtr_2 = value;
	}

	inline static int32_t get_offset_of_State_3() { return static_cast<int32_t>(offsetof(ExecutionState_t3117120280, ___State_3)); }
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
#endif // EXECUTIONSTATE_T3117120280_H
#ifndef COROUTINE_T1090859767_H
#define COROUTINE_T1090859767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Coroutine
struct  Coroutine_t1090859767  : public RefIdObject_t2581482789
{
public:
	// MoonSharp.Interpreter.Coroutine/CoroutineType MoonSharp.Interpreter.Coroutine::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
	// MoonSharp.Interpreter.CallbackFunction MoonSharp.Interpreter.Coroutine::m_ClrCallback
	CallbackFunction_t225490189 * ___m_ClrCallback_3;
	// MoonSharp.Interpreter.Execution.VM.Processor MoonSharp.Interpreter.Coroutine::m_Processor
	Processor_t4242967914 * ___m_Processor_4;
	// MoonSharp.Interpreter.Script MoonSharp.Interpreter.Coroutine::<OwnerScript>k__BackingField
	Script_t116946378 * ___U3COwnerScriptU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Coroutine_t1090859767, ___U3CTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_2() const { return ___U3CTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_2() { return &___U3CTypeU3Ek__BackingField_2; }
	inline void set_U3CTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_ClrCallback_3() { return static_cast<int32_t>(offsetof(Coroutine_t1090859767, ___m_ClrCallback_3)); }
	inline CallbackFunction_t225490189 * get_m_ClrCallback_3() const { return ___m_ClrCallback_3; }
	inline CallbackFunction_t225490189 ** get_address_of_m_ClrCallback_3() { return &___m_ClrCallback_3; }
	inline void set_m_ClrCallback_3(CallbackFunction_t225490189 * value)
	{
		___m_ClrCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClrCallback_3), value);
	}

	inline static int32_t get_offset_of_m_Processor_4() { return static_cast<int32_t>(offsetof(Coroutine_t1090859767, ___m_Processor_4)); }
	inline Processor_t4242967914 * get_m_Processor_4() const { return ___m_Processor_4; }
	inline Processor_t4242967914 ** get_address_of_m_Processor_4() { return &___m_Processor_4; }
	inline void set_m_Processor_4(Processor_t4242967914 * value)
	{
		___m_Processor_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processor_4), value);
	}

	inline static int32_t get_offset_of_U3COwnerScriptU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Coroutine_t1090859767, ___U3COwnerScriptU3Ek__BackingField_5)); }
	inline Script_t116946378 * get_U3COwnerScriptU3Ek__BackingField_5() const { return ___U3COwnerScriptU3Ek__BackingField_5; }
	inline Script_t116946378 ** get_address_of_U3COwnerScriptU3Ek__BackingField_5() { return &___U3COwnerScriptU3Ek__BackingField_5; }
	inline void set_U3COwnerScriptU3Ek__BackingField_5(Script_t116946378 * value)
	{
		___U3COwnerScriptU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerScriptU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COROUTINE_T1090859767_H
#ifndef PERFORMANCERESULT_T2643188564_H
#define PERFORMANCERESULT_T2643188564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceResult
struct  PerformanceResult_t2643188564  : public RuntimeObject
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
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PerformanceResult_t2643188564, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCounterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PerformanceResult_t2643188564, ___U3CCounterU3Ek__BackingField_1)); }
	inline int64_t get_U3CCounterU3Ek__BackingField_1() const { return ___U3CCounterU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CCounterU3Ek__BackingField_1() { return &___U3CCounterU3Ek__BackingField_1; }
	inline void set_U3CCounterU3Ek__BackingField_1(int64_t value)
	{
		___U3CCounterU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CInstancesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PerformanceResult_t2643188564, ___U3CInstancesU3Ek__BackingField_2)); }
	inline int32_t get_U3CInstancesU3Ek__BackingField_2() const { return ___U3CInstancesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CInstancesU3Ek__BackingField_2() { return &___U3CInstancesU3Ek__BackingField_2; }
	inline void set_U3CInstancesU3Ek__BackingField_2(int32_t value)
	{
		___U3CInstancesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGlobalU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PerformanceResult_t2643188564, ___U3CGlobalU3Ek__BackingField_3)); }
	inline bool get_U3CGlobalU3Ek__BackingField_3() const { return ___U3CGlobalU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CGlobalU3Ek__BackingField_3() { return &___U3CGlobalU3Ek__BackingField_3; }
	inline void set_U3CGlobalU3Ek__BackingField_3(bool value)
	{
		___U3CGlobalU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PerformanceResult_t2643188564, ___U3CTypeU3Ek__BackingField_4)); }
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
#endif // PERFORMANCERESULT_T2643188564_H
#ifndef INSTRUCTION_T800528889_H
#define INSTRUCTION_T800528889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Instruction
struct  Instruction_t800528889  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Execution.VM.OpCode MoonSharp.Interpreter.Execution.VM.Instruction::OpCode
	int32_t ___OpCode_0;
	// MoonSharp.Interpreter.SymbolRef MoonSharp.Interpreter.Execution.VM.Instruction::Symbol
	SymbolRef_t815943396 * ___Symbol_1;
	// MoonSharp.Interpreter.SymbolRef[] MoonSharp.Interpreter.Execution.VM.Instruction::SymbolList
	SymbolRefU5BU5D_t1265485069* ___SymbolList_2;
	// System.String MoonSharp.Interpreter.Execution.VM.Instruction::Name
	String_t* ___Name_3;
	// MoonSharp.Interpreter.DynValue MoonSharp.Interpreter.Execution.VM.Instruction::Value
	DynValue_t3829844307 * ___Value_4;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Instruction::NumVal
	int32_t ___NumVal_5;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Instruction::NumVal2
	int32_t ___NumVal2_6;
	// MoonSharp.Interpreter.Debugging.SourceRef MoonSharp.Interpreter.Execution.VM.Instruction::SourceCodeRef
	SourceRef_t1362154715 * ___SourceCodeRef_7;

public:
	inline static int32_t get_offset_of_OpCode_0() { return static_cast<int32_t>(offsetof(Instruction_t800528889, ___OpCode_0)); }
	inline int32_t get_OpCode_0() const { return ___OpCode_0; }
	inline int32_t* get_address_of_OpCode_0() { return &___OpCode_0; }
	inline void set_OpCode_0(int32_t value)
	{
		___OpCode_0 = value;
	}

	inline static int32_t get_offset_of_Symbol_1() { return static_cast<int32_t>(offsetof(Instruction_t800528889, ___Symbol_1)); }
	inline SymbolRef_t815943396 * get_Symbol_1() const { return ___Symbol_1; }
	inline SymbolRef_t815943396 ** get_address_of_Symbol_1() { return &___Symbol_1; }
	inline void set_Symbol_1(SymbolRef_t815943396 * value)
	{
		___Symbol_1 = value;
		Il2CppCodeGenWriteBarrier((&___Symbol_1), value);
	}

	inline static int32_t get_offset_of_SymbolList_2() { return static_cast<int32_t>(offsetof(Instruction_t800528889, ___SymbolList_2)); }
	inline SymbolRefU5BU5D_t1265485069* get_SymbolList_2() const { return ___SymbolList_2; }
	inline SymbolRefU5BU5D_t1265485069** get_address_of_SymbolList_2() { return &___SymbolList_2; }
	inline void set_SymbolList_2(SymbolRefU5BU5D_t1265485069* value)
	{
		___SymbolList_2 = value;
		Il2CppCodeGenWriteBarrier((&___SymbolList_2), value);
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(Instruction_t800528889, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___Name_3), value);
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(Instruction_t800528889, ___Value_4)); }
	inline DynValue_t3829844307 * get_Value_4() const { return ___Value_4; }
	inline DynValue_t3829844307 ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(DynValue_t3829844307 * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((&___Value_4), value);
	}

	inline static int32_t get_offset_of_NumVal_5() { return static_cast<int32_t>(offsetof(Instruction_t800528889, ___NumVal_5)); }
	inline int32_t get_NumVal_5() const { return ___NumVal_5; }
	inline int32_t* get_address_of_NumVal_5() { return &___NumVal_5; }
	inline void set_NumVal_5(int32_t value)
	{
		___NumVal_5 = value;
	}

	inline static int32_t get_offset_of_NumVal2_6() { return static_cast<int32_t>(offsetof(Instruction_t800528889, ___NumVal2_6)); }
	inline int32_t get_NumVal2_6() const { return ___NumVal2_6; }
	inline int32_t* get_address_of_NumVal2_6() { return &___NumVal2_6; }
	inline void set_NumVal2_6(int32_t value)
	{
		___NumVal2_6 = value;
	}

	inline static int32_t get_offset_of_SourceCodeRef_7() { return static_cast<int32_t>(offsetof(Instruction_t800528889, ___SourceCodeRef_7)); }
	inline SourceRef_t1362154715 * get_SourceCodeRef_7() const { return ___SourceCodeRef_7; }
	inline SourceRef_t1362154715 ** get_address_of_SourceCodeRef_7() { return &___SourceCodeRef_7; }
	inline void set_SourceCodeRef_7(SourceRef_t1362154715 * value)
	{
		___SourceCodeRef_7 = value;
		Il2CppCodeGenWriteBarrier((&___SourceCodeRef_7), value);
	}
};

struct Instruction_t800528889_StaticFields
{
public:
	// System.Func`2<MoonSharp.Interpreter.SymbolRef,System.String> MoonSharp.Interpreter.Execution.VM.Instruction::<>f__am$cache0
	Func_2_t3974707564 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(Instruction_t800528889_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Func_2_t3974707564 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Func_2_t3974707564 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Func_2_t3974707564 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTION_T800528889_H
#ifndef DYNAMICEXPRESSIONEXCEPTION_T2129202568_H
#define DYNAMICEXPRESSIONEXCEPTION_T2129202568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.DynamicExpressionException
struct  DynamicExpressionException_t2129202568  : public ScriptRuntimeException_t3866541480
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICEXPRESSIONEXCEPTION_T2129202568_H
#ifndef DEBUGCONTEXT_T3020676161_H
#define DEBUGCONTEXT_T3020676161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Execution.VM.Processor/DebugContext
struct  DebugContext_t3020676161  : public RuntimeObject
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
	SourceRef_t1362154715 * ___LastHlRef_4;
	// System.Int32 MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::ExStackDepthAtStep
	int32_t ___ExStackDepthAtStep_5;
	// System.Collections.Generic.List`1<MoonSharp.Interpreter.Debugging.SourceRef> MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::BreakPoints
	List_1_t860933368 * ___BreakPoints_6;
	// System.Boolean MoonSharp.Interpreter.Execution.VM.Processor/DebugContext::LineBasedBreakPoints
	bool ___LineBasedBreakPoints_7;

public:
	inline static int32_t get_offset_of_DebuggerEnabled_0() { return static_cast<int32_t>(offsetof(DebugContext_t3020676161, ___DebuggerEnabled_0)); }
	inline bool get_DebuggerEnabled_0() const { return ___DebuggerEnabled_0; }
	inline bool* get_address_of_DebuggerEnabled_0() { return &___DebuggerEnabled_0; }
	inline void set_DebuggerEnabled_0(bool value)
	{
		___DebuggerEnabled_0 = value;
	}

	inline static int32_t get_offset_of_DebuggerAttached_1() { return static_cast<int32_t>(offsetof(DebugContext_t3020676161, ___DebuggerAttached_1)); }
	inline RuntimeObject* get_DebuggerAttached_1() const { return ___DebuggerAttached_1; }
	inline RuntimeObject** get_address_of_DebuggerAttached_1() { return &___DebuggerAttached_1; }
	inline void set_DebuggerAttached_1(RuntimeObject* value)
	{
		___DebuggerAttached_1 = value;
		Il2CppCodeGenWriteBarrier((&___DebuggerAttached_1), value);
	}

	inline static int32_t get_offset_of_DebuggerCurrentAction_2() { return static_cast<int32_t>(offsetof(DebugContext_t3020676161, ___DebuggerCurrentAction_2)); }
	inline int32_t get_DebuggerCurrentAction_2() const { return ___DebuggerCurrentAction_2; }
	inline int32_t* get_address_of_DebuggerCurrentAction_2() { return &___DebuggerCurrentAction_2; }
	inline void set_DebuggerCurrentAction_2(int32_t value)
	{
		___DebuggerCurrentAction_2 = value;
	}

	inline static int32_t get_offset_of_DebuggerCurrentActionTarget_3() { return static_cast<int32_t>(offsetof(DebugContext_t3020676161, ___DebuggerCurrentActionTarget_3)); }
	inline int32_t get_DebuggerCurrentActionTarget_3() const { return ___DebuggerCurrentActionTarget_3; }
	inline int32_t* get_address_of_DebuggerCurrentActionTarget_3() { return &___DebuggerCurrentActionTarget_3; }
	inline void set_DebuggerCurrentActionTarget_3(int32_t value)
	{
		___DebuggerCurrentActionTarget_3 = value;
	}

	inline static int32_t get_offset_of_LastHlRef_4() { return static_cast<int32_t>(offsetof(DebugContext_t3020676161, ___LastHlRef_4)); }
	inline SourceRef_t1362154715 * get_LastHlRef_4() const { return ___LastHlRef_4; }
	inline SourceRef_t1362154715 ** get_address_of_LastHlRef_4() { return &___LastHlRef_4; }
	inline void set_LastHlRef_4(SourceRef_t1362154715 * value)
	{
		___LastHlRef_4 = value;
		Il2CppCodeGenWriteBarrier((&___LastHlRef_4), value);
	}

	inline static int32_t get_offset_of_ExStackDepthAtStep_5() { return static_cast<int32_t>(offsetof(DebugContext_t3020676161, ___ExStackDepthAtStep_5)); }
	inline int32_t get_ExStackDepthAtStep_5() const { return ___ExStackDepthAtStep_5; }
	inline int32_t* get_address_of_ExStackDepthAtStep_5() { return &___ExStackDepthAtStep_5; }
	inline void set_ExStackDepthAtStep_5(int32_t value)
	{
		___ExStackDepthAtStep_5 = value;
	}

	inline static int32_t get_offset_of_BreakPoints_6() { return static_cast<int32_t>(offsetof(DebugContext_t3020676161, ___BreakPoints_6)); }
	inline List_1_t860933368 * get_BreakPoints_6() const { return ___BreakPoints_6; }
	inline List_1_t860933368 ** get_address_of_BreakPoints_6() { return &___BreakPoints_6; }
	inline void set_BreakPoints_6(List_1_t860933368 * value)
	{
		___BreakPoints_6 = value;
		Il2CppCodeGenWriteBarrier((&___BreakPoints_6), value);
	}

	inline static int32_t get_offset_of_LineBasedBreakPoints_7() { return static_cast<int32_t>(offsetof(DebugContext_t3020676161, ___LineBasedBreakPoints_7)); }
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
#endif // DEBUGCONTEXT_T3020676161_H
#ifndef GLOBALPERFORMANCESTOPWATCH_T4069619989_H
#define GLOBALPERFORMANCESTOPWATCH_T4069619989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch
struct  GlobalPerformanceStopwatch_t4069619989  : public RuntimeObject
{
public:
	// System.Int32 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Count
	int32_t ___m_Count_0;
	// System.Int64 MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Elapsed
	int64_t ___m_Elapsed_1;
	// MoonSharp.Interpreter.Diagnostics.PerformanceCounter MoonSharp.Interpreter.Diagnostics.PerformanceCounters.GlobalPerformanceStopwatch::m_Counter
	int32_t ___m_Counter_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t4069619989, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Elapsed_1() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t4069619989, ___m_Elapsed_1)); }
	inline int64_t get_m_Elapsed_1() const { return ___m_Elapsed_1; }
	inline int64_t* get_address_of_m_Elapsed_1() { return &___m_Elapsed_1; }
	inline void set_m_Elapsed_1(int64_t value)
	{
		___m_Elapsed_1 = value;
	}

	inline static int32_t get_offset_of_m_Counter_2() { return static_cast<int32_t>(offsetof(GlobalPerformanceStopwatch_t4069619989, ___m_Counter_2)); }
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
#endif // GLOBALPERFORMANCESTOPWATCH_T4069619989_H
#ifndef MOONSHARPUSERDATAATTRIBUTE_T2483217165_H
#define MOONSHARPUSERDATAATTRIBUTE_T2483217165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.MoonSharpUserDataAttribute
struct  MoonSharpUserDataAttribute_t2483217165  : public Attribute_t1724788359
{
public:
	// MoonSharp.Interpreter.InteropAccessMode MoonSharp.Interpreter.MoonSharpUserDataAttribute::<AccessMode>k__BackingField
	int32_t ___U3CAccessModeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAccessModeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MoonSharpUserDataAttribute_t2483217165, ___U3CAccessModeU3Ek__BackingField_0)); }
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
#endif // MOONSHARPUSERDATAATTRIBUTE_T2483217165_H
#ifndef SCRIPTFUNCTIONDELEGATE_T3838948081_H
#define SCRIPTFUNCTIONDELEGATE_T3838948081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.ScriptFunctionDelegate
struct  ScriptFunctionDelegate_t3838948081  : public MulticastDelegate_t1406718125
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTFUNCTIONDELEGATE_T3838948081_H
#ifndef DEBUGGERACTION_T143491016_H
#define DEBUGGERACTION_T143491016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSharp.Interpreter.Debugging.DebuggerAction
struct  DebuggerAction_t143491016  : public RuntimeObject
{
public:
	// MoonSharp.Interpreter.Debugging.DebuggerAction/ActionType MoonSharp.Interpreter.Debugging.DebuggerAction::<Action>k__BackingField
	int32_t ___U3CActionU3Ek__BackingField_0;
	// System.DateTime MoonSharp.Interpreter.Debugging.DebuggerAction::<TimeStampUTC>k__BackingField
	DateTime_t1493116542  ___U3CTimeStampUTCU3Ek__BackingField_1;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceID>k__BackingField
	int32_t ___U3CSourceIDU3Ek__BackingField_2;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceLine>k__BackingField
	int32_t ___U3CSourceLineU3Ek__BackingField_3;
	// System.Int32 MoonSharp.Interpreter.Debugging.DebuggerAction::<SourceCol>k__BackingField
	int32_t ___U3CSourceColU3Ek__BackingField_4;
	// System.Int32[] MoonSharp.Interpreter.Debugging.DebuggerAction::<Lines>k__BackingField
	Int32U5BU5D_t2562413529* ___U3CLinesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DebuggerAction_t143491016, ___U3CActionU3Ek__BackingField_0)); }
	inline int32_t get_U3CActionU3Ek__BackingField_0() const { return ___U3CActionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CActionU3Ek__BackingField_0() { return &___U3CActionU3Ek__BackingField_0; }
	inline void set_U3CActionU3Ek__BackingField_0(int32_t value)
	{
		___U3CActionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTimeStampUTCU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebuggerAction_t143491016, ___U3CTimeStampUTCU3Ek__BackingField_1)); }
	inline DateTime_t1493116542  get_U3CTimeStampUTCU3Ek__BackingField_1() const { return ___U3CTimeStampUTCU3Ek__BackingField_1; }
	inline DateTime_t1493116542 * get_address_of_U3CTimeStampUTCU3Ek__BackingField_1() { return &___U3CTimeStampUTCU3Ek__BackingField_1; }
	inline void set_U3CTimeStampUTCU3Ek__BackingField_1(DateTime_t1493116542  value)
	{
		___U3CTimeStampUTCU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DebuggerAction_t143491016, ___U3CSourceIDU3Ek__BackingField_2)); }
	inline int32_t get_U3CSourceIDU3Ek__BackingField_2() const { return ___U3CSourceIDU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CSourceIDU3Ek__BackingField_2() { return &___U3CSourceIDU3Ek__BackingField_2; }
	inline void set_U3CSourceIDU3Ek__BackingField_2(int32_t value)
	{
		___U3CSourceIDU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSourceLineU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DebuggerAction_t143491016, ___U3CSourceLineU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceLineU3Ek__BackingField_3() const { return ___U3CSourceLineU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceLineU3Ek__BackingField_3() { return &___U3CSourceLineU3Ek__BackingField_3; }
	inline void set_U3CSourceLineU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceLineU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSourceColU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DebuggerAction_t143491016, ___U3CSourceColU3Ek__BackingField_4)); }
	inline int32_t get_U3CSourceColU3Ek__BackingField_4() const { return ___U3CSourceColU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSourceColU3Ek__BackingField_4() { return &___U3CSourceColU3Ek__BackingField_4; }
	inline void set_U3CSourceColU3Ek__BackingField_4(int32_t value)
	{
		___U3CSourceColU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLinesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DebuggerAction_t143491016, ___U3CLinesU3Ek__BackingField_5)); }
	inline Int32U5BU5D_t2562413529* get_U3CLinesU3Ek__BackingField_5() const { return ___U3CLinesU3Ek__BackingField_5; }
	inline Int32U5BU5D_t2562413529** get_address_of_U3CLinesU3Ek__BackingField_5() { return &___U3CLinesU3Ek__BackingField_5; }
	inline void set_U3CLinesU3Ek__BackingField_5(Int32U5BU5D_t2562413529* value)
	{
		___U3CLinesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLinesU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERACTION_T143491016_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (U3Cgmatch_aux_2U3Ec__AnonStorey0_t650210492), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2500[1] = 
{
	U3Cgmatch_aux_2U3Ec__AnonStorey0_t650210492::get_offset_of_executionContext_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (StringRange_t2816765357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2501[2] = 
{
	StringRange_t2816765357::get_offset_of_U3CStartU3Ek__BackingField_0(),
	StringRange_t2816765357::get_offset_of_U3CEndU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (StringModule_t1766049061), -1, sizeof(StringModule_t1766049061_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2502[8] = 
{
	0,
	StringModule_t1766049061_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
	StringModule_t1766049061_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_2(),
	StringModule_t1766049061_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_3(),
	StringModule_t1766049061_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_4(),
	StringModule_t1766049061_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_5(),
	StringModule_t1766049061_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_6(),
	StringModule_t1766049061_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (TableIteratorsModule_t1859382429), -1, sizeof(TableIteratorsModule_t1859382429_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2503[2] = 
{
	TableIteratorsModule_t1859382429_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
	TableIteratorsModule_t1859382429_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (TableModule_t1903678072), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (U3CsortU3Ec__AnonStorey0_t397067470), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2505[2] = 
{
	U3CsortU3Ec__AnonStorey0_t397067470::get_offset_of_executionContext_0(),
	U3CsortU3Ec__AnonStorey0_t397067470::get_offset_of_lt_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (TableModule_Globals_t3237933780), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (Extension_Methods_t3863919890), -1, 0, 0 };
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (ReferenceEqualityComparer_t1299783655), -1, 0, 0 };
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (CallbackArguments_t2613888819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[4] = 
{
	CallbackArguments_t2613888819::get_offset_of_m_Args_0(),
	CallbackArguments_t2613888819::get_offset_of_m_Count_1(),
	CallbackArguments_t2613888819::get_offset_of_m_LastIsTuple_2(),
	CallbackArguments_t2613888819::get_offset_of_U3CIsMethodCallU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (CallbackFunction_t225490189), -1, sizeof(CallbackFunction_t225490189_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2517[4] = 
{
	CallbackFunction_t225490189_StaticFields::get_offset_of_m_DefaultAccessMode_2(),
	CallbackFunction_t225490189::get_offset_of_U3CNameU3Ek__BackingField_3(),
	CallbackFunction_t225490189::get_offset_of_U3CClrCallbackU3Ek__BackingField_4(),
	CallbackFunction_t225490189::get_offset_of_U3CAdditionalDataU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (Closure_t3266223827), -1, sizeof(Closure_t3266223827_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2518[4] = 
{
	Closure_t3266223827::get_offset_of_U3CEntryPointByteCodeLocationU3Ek__BackingField_2(),
	Closure_t3266223827::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
	Closure_t3266223827_StaticFields::get_offset_of_emptyClosure_4(),
	Closure_t3266223827::get_offset_of_U3CClosureContextU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (UpvaluesType_t367382754)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2519[4] = 
{
	UpvaluesType_t367382754::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (Coroutine_t1090859767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2520[4] = 
{
	Coroutine_t1090859767::get_offset_of_U3CTypeU3Ek__BackingField_2(),
	Coroutine_t1090859767::get_offset_of_m_ClrCallback_3(),
	Coroutine_t1090859767::get_offset_of_m_Processor_4(),
	Coroutine_t1090859767::get_offset_of_U3COwnerScriptU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { sizeof (CoroutineType_t2373514661)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2521[4] = 
{
	CoroutineType_t2373514661::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2522[4] = 
{
	U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290::get_offset_of_U24this_0(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290::get_offset_of_U24current_1(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290::get_offset_of_U24disposing_2(),
	U3CAsTypedEnumerableU3Ec__Iterator0_t2040944290::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (U3CAsEnumerableU3Ec__Iterator1_t2011649535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2523[6] = 
{
	U3CAsEnumerableU3Ec__Iterator1_t2011649535::get_offset_of_U24locvar0_0(),
	U3CAsEnumerableU3Ec__Iterator1_t2011649535::get_offset_of_U3CvU3E__1_1(),
	U3CAsEnumerableU3Ec__Iterator1_t2011649535::get_offset_of_U24this_2(),
	U3CAsEnumerableU3Ec__Iterator1_t2011649535::get_offset_of_U24current_3(),
	U3CAsEnumerableU3Ec__Iterator1_t2011649535::get_offset_of_U24disposing_4(),
	U3CAsEnumerableU3Ec__Iterator1_t2011649535::get_offset_of_U24PC_5(),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2525[6] = 
{
	U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922::get_offset_of_U24locvar0_0(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922::get_offset_of_U3CvU3E__1_1(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922::get_offset_of_U24this_2(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922::get_offset_of_U24current_3(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922::get_offset_of_U24disposing_4(),
	U3CAsUnityCoroutineU3Ec__Iterator3_t3260624922::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (CoroutineState_t3439404107)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2526[7] = 
{
	CoroutineState_t3439404107::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (DataType_t3748563445)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2527[14] = 
{
	DataType_t3748563445::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (LuaTypeExtensions_t3547256788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2528[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (DynValue_t3829844307), -1, sizeof(DynValue_t3829844307_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2529[16] = 
{
	DynValue_t3829844307_StaticFields::get_offset_of_s_RefIDCounter_0(),
	DynValue_t3829844307::get_offset_of_m_RefID_1(),
	DynValue_t3829844307::get_offset_of_m_HashCode_2(),
	DynValue_t3829844307::get_offset_of_m_ReadOnly_3(),
	DynValue_t3829844307::get_offset_of_m_Number_4(),
	DynValue_t3829844307::get_offset_of_m_Object_5(),
	DynValue_t3829844307::get_offset_of_m_Type_6(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CVoidU3Ek__BackingField_7(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CNilU3Ek__BackingField_8(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CTrueU3Ek__BackingField_9(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CFalseU3Ek__BackingField_10(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_13(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_14(),
	DynValue_t3829844307_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (ScriptPrivateResource_Extension_t3278871908), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { sizeof (RefIdObject_t2581482789), -1, sizeof(RefIdObject_t2581482789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2532[2] = 
{
	RefIdObject_t2581482789_StaticFields::get_offset_of_s_RefIDCounter_0(),
	RefIdObject_t2581482789::get_offset_of_m_RefID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (ScriptFunctionDelegate_t3838948081), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (SymbolRef_t815943396), -1, sizeof(SymbolRef_t815943396_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2535[5] = 
{
	SymbolRef_t815943396_StaticFields::get_offset_of_s_DefaultEnv_0(),
	SymbolRef_t815943396::get_offset_of_i_Type_1(),
	SymbolRef_t815943396::get_offset_of_i_Env_2(),
	SymbolRef_t815943396::get_offset_of_i_Index_3(),
	SymbolRef_t815943396::get_offset_of_i_Name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { sizeof (SymbolRefType_t598879182)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2536[5] = 
{
	SymbolRefType_t598879182::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { sizeof (Table_t3105308328), -1, sizeof(Table_t3105308328_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2537[12] = 
{
	Table_t3105308328::get_offset_of_m_Values_2(),
	Table_t3105308328::get_offset_of_m_ValueMap_3(),
	Table_t3105308328::get_offset_of_m_StringMap_4(),
	Table_t3105308328::get_offset_of_m_ArrayMap_5(),
	Table_t3105308328::get_offset_of_m_Owner_6(),
	Table_t3105308328::get_offset_of_m_InitArray_7(),
	Table_t3105308328::get_offset_of_m_CachedLength_8(),
	Table_t3105308328::get_offset_of_m_ContainsNilEntries_9(),
	Table_t3105308328::get_offset_of_m_MetaTable_10(),
	Table_t3105308328_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	Table_t3105308328_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
	Table_t3105308328_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { sizeof (TablePair_t1253572861)+ sizeof (RuntimeObject), -1, sizeof(TablePair_t1253572861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2538[3] = 
{
	TablePair_t1253572861_StaticFields::get_offset_of_s_NilNode_0(),
	TablePair_t1253572861::get_offset_of_key_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TablePair_t1253572861::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { sizeof (TailCallData_t3434595108), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2539[5] = 
{
	TailCallData_t3434595108::get_offset_of_U3CFunctionU3Ek__BackingField_0(),
	TailCallData_t3434595108::get_offset_of_U3CArgsU3Ek__BackingField_1(),
	TailCallData_t3434595108::get_offset_of_U3CContinuationU3Ek__BackingField_2(),
	TailCallData_t3434595108::get_offset_of_U3CErrorHandlerU3Ek__BackingField_3(),
	TailCallData_t3434595108::get_offset_of_U3CErrorHandlerBeforeUnwindU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { sizeof (TypeValidationFlags_t1206309843)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2540[5] = 
{
	TypeValidationFlags_t1206309843::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (UserData_t1348357889), -1, sizeof(UserData_t1348357889_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2541[4] = 
{
	UserData_t1348357889::get_offset_of_U3CUserValueU3Ek__BackingField_2(),
	UserData_t1348357889::get_offset_of_U3CObjectU3Ek__BackingField_3(),
	UserData_t1348357889::get_offset_of_U3CDescriptorU3Ek__BackingField_4(),
	UserData_t1348357889_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { sizeof (WellKnownSymbols_t3297861700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2542[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { sizeof (YieldRequest_t3556354496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2543[2] = 
{
	YieldRequest_t3556354496::get_offset_of_ReturnValues_0(),
	YieldRequest_t3556354496::get_offset_of_U3CForcedU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (DebuggerAction_t143491016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2544[6] = 
{
	DebuggerAction_t143491016::get_offset_of_U3CActionU3Ek__BackingField_0(),
	DebuggerAction_t143491016::get_offset_of_U3CTimeStampUTCU3Ek__BackingField_1(),
	DebuggerAction_t143491016::get_offset_of_U3CSourceIDU3Ek__BackingField_2(),
	DebuggerAction_t143491016::get_offset_of_U3CSourceLineU3Ek__BackingField_3(),
	DebuggerAction_t143491016::get_offset_of_U3CSourceColU3Ek__BackingField_4(),
	DebuggerAction_t143491016::get_offset_of_U3CLinesU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (ActionType_t2502132474)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2545[15] = 
{
	ActionType_t2502132474::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (DebuggerCaps_t2473610586)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2546[4] = 
{
	DebuggerCaps_t2473610586::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { sizeof (DebugService_t974789156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2547[2] = 
{
	DebugService_t974789156::get_offset_of_m_Processor_0(),
	DebugService_t974789156::get_offset_of_U3COwnerScriptU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (SourceCode_t2857473422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2549[6] = 
{
	SourceCode_t2857473422::get_offset_of_U3CNameU3Ek__BackingField_0(),
	SourceCode_t2857473422::get_offset_of_U3CCodeU3Ek__BackingField_1(),
	SourceCode_t2857473422::get_offset_of_U3CLinesU3Ek__BackingField_2(),
	SourceCode_t2857473422::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
	SourceCode_t2857473422::get_offset_of_U3CSourceIDU3Ek__BackingField_4(),
	SourceCode_t2857473422::get_offset_of_U3CRefsU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { sizeof (SourceRef_t1362154715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2550[9] = 
{
	SourceRef_t1362154715::get_offset_of_U3CIsClrLocationU3Ek__BackingField_0(),
	SourceRef_t1362154715::get_offset_of_U3CSourceIdxU3Ek__BackingField_1(),
	SourceRef_t1362154715::get_offset_of_U3CFromCharU3Ek__BackingField_2(),
	SourceRef_t1362154715::get_offset_of_U3CToCharU3Ek__BackingField_3(),
	SourceRef_t1362154715::get_offset_of_U3CFromLineU3Ek__BackingField_4(),
	SourceRef_t1362154715::get_offset_of_U3CToLineU3Ek__BackingField_5(),
	SourceRef_t1362154715::get_offset_of_U3CIsStepStopU3Ek__BackingField_6(),
	SourceRef_t1362154715::get_offset_of_Breakpoint_7(),
	SourceRef_t1362154715::get_offset_of_U3CCannotBreakpointU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { sizeof (WatchItem_t1103866480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2551[8] = 
{
	WatchItem_t1103866480::get_offset_of_U3CAddressU3Ek__BackingField_0(),
	WatchItem_t1103866480::get_offset_of_U3CBasePtrU3Ek__BackingField_1(),
	WatchItem_t1103866480::get_offset_of_U3CRetAddressU3Ek__BackingField_2(),
	WatchItem_t1103866480::get_offset_of_U3CNameU3Ek__BackingField_3(),
	WatchItem_t1103866480::get_offset_of_U3CValueU3Ek__BackingField_4(),
	WatchItem_t1103866480::get_offset_of_U3CLValueU3Ek__BackingField_5(),
	WatchItem_t1103866480::get_offset_of_U3CIsErrorU3Ek__BackingField_6(),
	WatchItem_t1103866480::get_offset_of_U3CLocationU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { sizeof (WatchType_t3465179282)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2552[8] = 
{
	WatchType_t3465179282::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (PerformanceCounter_t756240767)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2553[6] = 
{
	PerformanceCounter_t756240767::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (DummyPerformanceStopwatch_t1533952425), -1, sizeof(DummyPerformanceStopwatch_t1533952425_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2554[2] = 
{
	DummyPerformanceStopwatch_t1533952425_StaticFields::get_offset_of_Instance_0(),
	DummyPerformanceStopwatch_t1533952425::get_offset_of_m_Result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { sizeof (GlobalPerformanceStopwatch_t4069619989), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2555[3] = 
{
	GlobalPerformanceStopwatch_t4069619989::get_offset_of_m_Count_0(),
	GlobalPerformanceStopwatch_t4069619989::get_offset_of_m_Elapsed_1(),
	GlobalPerformanceStopwatch_t4069619989::get_offset_of_m_Counter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (GlobalPerformanceStopwatch_StopwatchObject_t173418298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2556[2] = 
{
	GlobalPerformanceStopwatch_StopwatchObject_t173418298::get_offset_of_m_Stopwatch_0(),
	GlobalPerformanceStopwatch_StopwatchObject_t173418298::get_offset_of_m_Parent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { sizeof (PerformanceStopwatch_t3013001430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2558[4] = 
{
	PerformanceStopwatch_t3013001430::get_offset_of_m_Stopwatch_0(),
	PerformanceStopwatch_t3013001430::get_offset_of_m_Count_1(),
	PerformanceStopwatch_t3013001430::get_offset_of_m_Reentrant_2(),
	PerformanceStopwatch_t3013001430::get_offset_of_m_Counter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (PerformanceCounterType_t2031856965)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2559[3] = 
{
	PerformanceCounterType_t2031856965::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (PerformanceResult_t2643188564), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2560[5] = 
{
	PerformanceResult_t2643188564::get_offset_of_U3CNameU3Ek__BackingField_0(),
	PerformanceResult_t2643188564::get_offset_of_U3CCounterU3Ek__BackingField_1(),
	PerformanceResult_t2643188564::get_offset_of_U3CInstancesU3Ek__BackingField_2(),
	PerformanceResult_t2643188564::get_offset_of_U3CGlobalU3Ek__BackingField_3(),
	PerformanceResult_t2643188564::get_offset_of_U3CTypeU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (PerformanceStatistics_t3942851336), -1, sizeof(PerformanceStatistics_t3942851336_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2561[3] = 
{
	PerformanceStatistics_t3942851336::get_offset_of_m_Stopwatches_0(),
	PerformanceStatistics_t3942851336_StaticFields::get_offset_of_m_GlobalStopwatches_1(),
	PerformanceStatistics_t3942851336::get_offset_of_m_Enabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (DynamicExpressionException_t2129202568), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (InternalErrorException_t2254816288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (InterpreterException_t1307826904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2564[4] = 
{
	InterpreterException_t1307826904::get_offset_of_U3CInstructionPtrU3Ek__BackingField_11(),
	InterpreterException_t1307826904::get_offset_of_U3CCallStackU3Ek__BackingField_12(),
	InterpreterException_t1307826904::get_offset_of_U3CDecoratedMessageU3Ek__BackingField_13(),
	InterpreterException_t1307826904::get_offset_of_U3CDoNotDecorateMessageU3Ek__BackingField_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (ScriptRuntimeException_t3866541480), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { sizeof (SyntaxErrorException_t3564482866), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2566[2] = 
{
	SyntaxErrorException_t3564482866::get_offset_of_U3CTokenU3Ek__BackingField_15(),
	SyntaxErrorException_t3564482866::get_offset_of_U3CIsPrematureStreamTerminationU3Ek__BackingField_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { sizeof (DynamicExpression_t1099824613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2567[4] = 
{
	DynamicExpression_t1099824613::get_offset_of_m_Exp_0(),
	DynamicExpression_t1099824613::get_offset_of_m_Constant_1(),
	DynamicExpression_t1099824613::get_offset_of_ExpressionCode_2(),
	DynamicExpression_t1099824613::get_offset_of_U3COwnerScriptU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { sizeof (InstructionFieldUsage_t1970863476)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2568[9] = 
{
	InstructionFieldUsage_t1970863476::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { sizeof (InstructionFieldUsage_Extensions_t277237731), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (BuildTimeScope_t1664169915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2570[2] = 
{
	BuildTimeScope_t1664169915::get_offset_of_m_Frames_0(),
	BuildTimeScope_t1664169915::get_offset_of_m_ClosureBuilders_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (BuildTimeScopeBlock_t3778899944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2571[7] = 
{
	BuildTimeScopeBlock_t3778899944::get_offset_of_U3CParentU3Ek__BackingField_0(),
	BuildTimeScopeBlock_t3778899944::get_offset_of_U3CChildNodesU3Ek__BackingField_1(),
	BuildTimeScopeBlock_t3778899944::get_offset_of_U3CScopeBlockU3Ek__BackingField_2(),
	BuildTimeScopeBlock_t3778899944::get_offset_of_m_DefinedNames_3(),
	BuildTimeScopeBlock_t3778899944::get_offset_of_m_PendingGotos_4(),
	BuildTimeScopeBlock_t3778899944::get_offset_of_m_LocalLabels_5(),
	BuildTimeScopeBlock_t3778899944::get_offset_of_m_LastDefinedName_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (BuildTimeScopeFrame_t4184759953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2572[4] = 
{
	BuildTimeScopeFrame_t4184759953::get_offset_of_m_ScopeTreeRoot_0(),
	BuildTimeScopeFrame_t4184759953::get_offset_of_m_ScopeTreeHead_1(),
	BuildTimeScopeFrame_t4184759953::get_offset_of_m_ScopeFrame_2(),
	BuildTimeScopeFrame_t4184759953::get_offset_of_U3CHasVarArgsU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (ClosureContext_t93388692), -1, sizeof(ClosureContext_t93388692_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2573[2] = 
{
	ClosureContext_t93388692::get_offset_of_U3CSymbolsU3Ek__BackingField_5(),
	ClosureContext_t93388692_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (LoopTracker_t250070572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2576[1] = 
{
	LoopTracker_t250070572::get_offset_of_Loops_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (RuntimeScopeBlock_t3341050526), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2577[3] = 
{
	RuntimeScopeBlock_t3341050526::get_offset_of_U3CFromU3Ek__BackingField_0(),
	RuntimeScopeBlock_t3341050526::get_offset_of_U3CToU3Ek__BackingField_1(),
	RuntimeScopeBlock_t3341050526::get_offset_of_U3CToInclusiveU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (RuntimeScopeFrame_t237805439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2578[2] = 
{
	RuntimeScopeFrame_t237805439::get_offset_of_U3CDebugSymbolsU3Ek__BackingField_0(),
	RuntimeScopeFrame_t237805439::get_offset_of_U3CToFirstBlockU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (ScriptExecutionContext_t641345925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2579[4] = 
{
	ScriptExecutionContext_t641345925::get_offset_of_m_Processor_0(),
	ScriptExecutionContext_t641345925::get_offset_of_m_Callback_1(),
	ScriptExecutionContext_t641345925::get_offset_of_U3CIsDynamicExecutionU3Ek__BackingField_2(),
	ScriptExecutionContext_t641345925::get_offset_of_U3CCallingLocationU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (ScriptLoadingContext_t2956064312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2580[6] = 
{
	ScriptLoadingContext_t2956064312::get_offset_of_U3CScriptU3Ek__BackingField_0(),
	ScriptLoadingContext_t2956064312::get_offset_of_U3CScopeU3Ek__BackingField_1(),
	ScriptLoadingContext_t2956064312::get_offset_of_U3CSourceU3Ek__BackingField_2(),
	ScriptLoadingContext_t2956064312::get_offset_of_U3CAnonymousU3Ek__BackingField_3(),
	ScriptLoadingContext_t2956064312::get_offset_of_U3CIsDynamicExpressionU3Ek__BackingField_4(),
	ScriptLoadingContext_t2956064312::get_offset_of_U3CLexerU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (ByteCode_t1148839066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2581[5] = 
{
	ByteCode_t1148839066::get_offset_of_Code_2(),
	ByteCode_t1148839066::get_offset_of_U3CScriptU3Ek__BackingField_3(),
	ByteCode_t1148839066::get_offset_of_m_SourceRefStack_4(),
	ByteCode_t1148839066::get_offset_of_m_CurrentSourceRef_5(),
	ByteCode_t1148839066::get_offset_of_LoopTracker_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (SourceCodeStackGuard_t1700738214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2582[1] = 
{
	SourceCodeStackGuard_t1700738214::get_offset_of_m_Bc_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (CallStackItem_t3730862638), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2583[12] = 
{
	CallStackItem_t3730862638::get_offset_of_Debug_EntryPoint_0(),
	CallStackItem_t3730862638::get_offset_of_Debug_Symbols_1(),
	CallStackItem_t3730862638::get_offset_of_CallingSourceRef_2(),
	CallStackItem_t3730862638::get_offset_of_ClrFunction_3(),
	CallStackItem_t3730862638::get_offset_of_Continuation_4(),
	CallStackItem_t3730862638::get_offset_of_ErrorHandler_5(),
	CallStackItem_t3730862638::get_offset_of_ErrorHandlerBeforeUnwind_6(),
	CallStackItem_t3730862638::get_offset_of_BasePointer_7(),
	CallStackItem_t3730862638::get_offset_of_ReturnAddress_8(),
	CallStackItem_t3730862638::get_offset_of_LocalScope_9(),
	CallStackItem_t3730862638::get_offset_of_ClosureScope_10(),
	CallStackItem_t3730862638::get_offset_of_Flags_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (CallStackItemFlags_t690037209)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2584[7] = 
{
	CallStackItemFlags_t690037209::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (ExecutionState_t3117120280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2585[4] = 
{
	ExecutionState_t3117120280::get_offset_of_ValueStack_0(),
	ExecutionState_t3117120280::get_offset_of_ExecutionStack_1(),
	ExecutionState_t3117120280::get_offset_of_InstructionPtr_2(),
	ExecutionState_t3117120280::get_offset_of_State_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (Instruction_t800528889), -1, sizeof(Instruction_t800528889_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2586[9] = 
{
	Instruction_t800528889::get_offset_of_OpCode_0(),
	Instruction_t800528889::get_offset_of_Symbol_1(),
	Instruction_t800528889::get_offset_of_SymbolList_2(),
	Instruction_t800528889::get_offset_of_Name_3(),
	Instruction_t800528889::get_offset_of_Value_4(),
	Instruction_t800528889::get_offset_of_NumVal_5(),
	Instruction_t800528889::get_offset_of_NumVal2_6(),
	Instruction_t800528889::get_offset_of_SourceCodeRef_7(),
	Instruction_t800528889_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (OpCode_t3502609264)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2587[57] = 
{
	OpCode_t3502609264::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (OpCodeMetadataType_t3762033024)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2588[3] = 
{
	OpCodeMetadataType_t3762033024::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (Processor_t4242967914), -1, sizeof(Processor_t4242967914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2589[19] = 
{
	Processor_t4242967914::get_offset_of_m_RootChunk_0(),
	Processor_t4242967914::get_offset_of_m_ValueStack_1(),
	Processor_t4242967914::get_offset_of_m_ExecutionStack_2(),
	Processor_t4242967914::get_offset_of_m_CoroutinesStack_3(),
	Processor_t4242967914::get_offset_of_m_GlobalTable_4(),
	Processor_t4242967914::get_offset_of_m_Script_5(),
	Processor_t4242967914::get_offset_of_m_Parent_6(),
	Processor_t4242967914::get_offset_of_m_State_7(),
	Processor_t4242967914::get_offset_of_m_CanYield_8(),
	Processor_t4242967914::get_offset_of_m_SavedInstructionPtr_9(),
	Processor_t4242967914::get_offset_of_m_Debug_10(),
	Processor_t4242967914::get_offset_of_m_OwningThreadID_11(),
	Processor_t4242967914::get_offset_of_m_ExecutionNesting_12(),
	0,
	0,
	Processor_t4242967914::get_offset_of_U3CAssociatedCoroutineU3Ek__BackingField_15(),
	0,
	Processor_t4242967914::get_offset_of_AutoYieldCounter_17(),
	Processor_t4242967914_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (DebugContext_t3020676161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2590[8] = 
{
	DebugContext_t3020676161::get_offset_of_DebuggerEnabled_0(),
	DebugContext_t3020676161::get_offset_of_DebuggerAttached_1(),
	DebugContext_t3020676161::get_offset_of_DebuggerCurrentAction_2(),
	DebugContext_t3020676161::get_offset_of_DebuggerCurrentActionTarget_3(),
	DebugContext_t3020676161::get_offset_of_LastHlRef_4(),
	DebugContext_t3020676161::get_offset_of_ExStackDepthAtStep_5(),
	DebugContext_t3020676161::get_offset_of_BreakPoints_6(),
	DebugContext_t3020676161::get_offset_of_LineBasedBreakPoints_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { sizeof (U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t3219471464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2591[2] = 
{
	U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t3219471464::get_offset_of_context_0(),
	U3CDebugger_RefreshWatchesU3Ec__AnonStorey0_t3219471464::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { sizeof (MoonSharpHiddenAttribute_t3946695953), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { sizeof (MoonSharpHideMemberAttribute_t711961206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2593[1] = 
{
	MoonSharpHideMemberAttribute_t711961206::get_offset_of_U3CMemberNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { sizeof (MoonSharpPropertyAttribute_t383279895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2594[1] = 
{
	MoonSharpPropertyAttribute_t383279895::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { sizeof (MoonSharpUserDataAttribute_t2483217165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2595[1] = 
{
	MoonSharpUserDataAttribute_t2483217165::get_offset_of_U3CAccessModeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { sizeof (MoonSharpUserDataMetamethodAttribute_t3069736964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2596[1] = 
{
	MoonSharpUserDataMetamethodAttribute_t3069736964::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (MoonSharpVisibleAttribute_t3074804664), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2597[1] = 
{
	MoonSharpVisibleAttribute_t3074804664::get_offset_of_U3CVisibleU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { sizeof (DispatchingUserDataDescriptor_t1120231325), -1, sizeof(DispatchingUserDataDescriptor_t1120231325_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2598[11] = 
{
	DispatchingUserDataDescriptor_t1120231325::get_offset_of_m_ExtMethodsVersion_0(),
	DispatchingUserDataDescriptor_t1120231325::get_offset_of_m_MetaMembers_1(),
	DispatchingUserDataDescriptor_t1120231325::get_offset_of_m_Members_2(),
	0,
	0,
	0,
	0,
	DispatchingUserDataDescriptor_t1120231325::get_offset_of_U3CNameU3Ek__BackingField_7(),
	DispatchingUserDataDescriptor_t1120231325::get_offset_of_U3CTypeU3Ek__BackingField_8(),
	DispatchingUserDataDescriptor_t1120231325::get_offset_of_U3CFriendlyNameU3Ek__BackingField_9(),
	DispatchingUserDataDescriptor_t1120231325_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { sizeof (U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t117179879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2599[2] = 
{
	U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t117179879::get_offset_of_obj_0(),
	U3CMultiDispatchLessThanOrEqualU3Ec__AnonStorey0_t117179879::get_offset_of_U24this_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
