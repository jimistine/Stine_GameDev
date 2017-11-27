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

// System.IntPtr[]
struct IntPtrU5BU5D_t433772155;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t3458008553;
// System.Collections.Hashtable
struct Hashtable_t2624832660;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t335709280;
// System.Collections.ArrayList
struct ArrayList_t3458594123;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t2482639391;
// System.Collections.IComparer
struct IComparer_t2764889688;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t838665684;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2581186704;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t326797790;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3956992154;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2496418494;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t862134255;
// System.Delegate
struct Delegate_t554323164;
// System.ComponentModel.ListEntry
struct ListEntry_t3304360410;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3529254975;
// System.Void
struct Void_t761274262;
// System.Char[]
struct CharU5BU5D_t848310312;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t414659217;
// System.ComponentModel.ISite
struct ISite_t3596231890;
// System.String[]
struct StringU5BU5D_t3457507972;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1920067483;
// System.Collections.Specialized.ProcessStringDictionary
struct ProcessStringDictionary_t1751211098;
// System.Text.Encoding
struct Encoding_t146641796;
// System.Security.SecureString
struct SecureString_t3467728364;
// System.AsyncCallback
struct AsyncCallback_t2901717597;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3735104750;
// System.Exception
struct Exception_t1092093850;
// System.Byte[]
struct ByteU5BU5D_t2671881028;
// System.Object[]
struct ObjectU5BU5D_t4111892338;
// System.Diagnostics.Process
struct Process_t870073395;
// System.IO.Stream
struct Stream_t554590746;
// System.Text.StringBuilder
struct StringBuilder_t1703114040;
// System.Diagnostics.Process/AsyncReadHandler
struct AsyncReadHandler_t3737433465;
// System.IO.StreamReader
struct StreamReader_t2897526731;
// System.IO.StreamWriter
struct StreamWriter_t3671402287;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t3083383182;
// System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t2098413257;
// System.Net.Sockets.Socket
struct Socket_t2912110740;
// System.IAsyncResult
struct IAsyncResult_t2228575507;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t690412247;
// System.EventArgs
struct EventArgs_t1017128845;
// System.Reflection.Assembly
struct Assembly_t2287824102;
// System.ResolveEventArgs
struct ResolveEventArgs_t464577861;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t3028912567;




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
#ifndef U3CMODULEU3E_T362192700_H
#define U3CMODULEU3E_T362192700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t362192700 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T362192700_H
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
#ifndef _ITEM_T335709280_H
#define _ITEM_T335709280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t335709280  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t335709280, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t335709280, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _ITEM_T335709280_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T862134255_H
#define NAMEOBJECTCOLLECTIONBASE_T862134255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t862134255  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t2624832660 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t335709280 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t3458594123 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t838665684 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t2581186704 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___m_ItemsContainer_0)); }
	inline Hashtable_t2624832660 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t2624832660 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t2624832660 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___m_NullKeyItem_1)); }
	inline _Item_t335709280 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t335709280 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t335709280 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___m_ItemsArray_2)); }
	inline ArrayList_t3458594123 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t3458594123 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t3458594123 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___infoCopy_7)); }
	inline SerializationInfo_t838665684 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t838665684 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t838665684 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___keyscoll_8)); }
	inline KeysCollection_t2581186704 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t2581186704 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t2581186704 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t862134255, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T862134255_H
#ifndef DICTIONARYNODEENUMERATOR_T3993951424_H
#define DICTIONARYNODEENUMERATOR_T3993951424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t3993951424  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t3956992154 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t2496418494 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3993951424, ___dict_0)); }
	inline ListDictionary_t3956992154 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t3956992154 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t3956992154 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3993951424, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3993951424, ___current_2)); }
	inline DictionaryNode_t2496418494 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t2496418494 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t2496418494 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3993951424, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T3993951424_H
#ifndef DICTIONARYNODE_T2496418494_H
#define DICTIONARYNODE_T2496418494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t2496418494  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t2496418494 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t2496418494, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t2496418494, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t2496418494, ___next_2)); }
	inline DictionaryNode_t2496418494 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t2496418494 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t2496418494 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T2496418494_H
#ifndef LISTDICTIONARY_T3956992154_H
#define LISTDICTIONARY_T3956992154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t3956992154  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t2496418494 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t3956992154, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t3956992154, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t3956992154, ___head_2)); }
	inline DictionaryNode_t2496418494 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t2496418494 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t2496418494 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t3956992154, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T3956992154_H
#ifndef HYBRIDDICTIONARY_T159243856_H
#define HYBRIDDICTIONARY_T159243856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t159243856  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t2624832660 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t3956992154 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t159243856, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t159243856, ___hashtable_1)); }
	inline Hashtable_t2624832660 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t2624832660 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t2624832660 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t159243856, ___list_2)); }
	inline ListDictionary_t3956992154 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t3956992154 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t3956992154 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T159243856_H
#ifndef LOCALE_T837631046_H
#define LOCALE_T837631046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t837631046  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T837631046_H
#ifndef STRINGDICTIONARY_T1966841567_H
#define STRINGDICTIONARY_T1966841567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t1966841567  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t2624832660 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t1966841567, ___contents_0)); }
	inline Hashtable_t2624832660 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t2624832660 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t2624832660 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T1966841567_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef _KEYSENUMERATOR_T4091575298_H
#define _KEYSENUMERATOR_T4091575298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t4091575298  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t862134255 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t4091575298, ___m_collection_0)); }
	inline NameObjectCollectionBase_t862134255 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t862134255 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t862134255 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t4091575298, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T4091575298_H
#ifndef LISTENTRY_T3304360410_H
#define LISTENTRY_T3304360410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t3304360410  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t554323164 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t3304360410 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t3304360410, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t3304360410, ___value_1)); }
	inline Delegate_t554323164 * get_value_1() const { return ___value_1; }
	inline Delegate_t554323164 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t554323164 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t3304360410, ___next_2)); }
	inline ListEntry_t3304360410 * get_next_2() const { return ___next_2; }
	inline ListEntry_t3304360410 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t3304360410 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T3304360410_H
#ifndef EVENTHANDLERLIST_T414659217_H
#define EVENTHANDLERLIST_T414659217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t414659217  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t3304360410 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t554323164 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t414659217, ___entries_0)); }
	inline ListEntry_t3304360410 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t3304360410 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t3304360410 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t414659217, ___null_entry_1)); }
	inline Delegate_t554323164 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t554323164 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t554323164 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T414659217_H
#ifndef KEYSCOLLECTION_T2581186704_H
#define KEYSCOLLECTION_T2581186704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t2581186704  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t862134255 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t2581186704, ___m_collection_0)); }
	inline NameObjectCollectionBase_t862134255 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t862134255 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t862134255 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T2581186704_H
#ifndef STREAM_T554590746_H
#define STREAM_T554590746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t554590746  : public RuntimeObject
{
public:

public:
};

struct Stream_t554590746_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t554590746 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t554590746_StaticFields, ___Null_0)); }
	inline Stream_t554590746 * get_Null_0() const { return ___Null_0; }
	inline Stream_t554590746 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t554590746 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T554590746_H
#ifndef STOPWATCH_T3568258844_H
#define STOPWATCH_T3568258844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Stopwatch
struct  Stopwatch_t3568258844  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t3568258844, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t3568258844, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t3568258844, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t3568258844_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t3568258844_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t3568258844_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOPWATCH_T3568258844_H
#ifndef MONOIO_T4111703439_H
#define MONOIO_T4111703439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIO
struct  MonoIO_t4111703439  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOIO_T4111703439_H
#ifndef MARSHALBYREFOBJECT_T419377280_H
#define MARSHALBYREFOBJECT_T419377280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t419377280  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3529254975 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t419377280, ____identity_0)); }
	inline ServerIdentity_t3529254975 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3529254975 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3529254975 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T419377280_H
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
#ifndef MULTICASTOPTION_T2090166207_H
#define MULTICASTOPTION_T2090166207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t2090166207  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTOPTION_T2090166207_H
#ifndef TYPECONVERTER_T3910241372_H
#define TYPECONVERTER_T3910241372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t3910241372  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T3910241372_H
#ifndef LINGEROPTION_T1449939976_H
#define LINGEROPTION_T1449939976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.LingerOption
struct  LingerOption_t1449939976  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::seconds
	int32_t ___seconds_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LingerOption_t1449939976, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_seconds_1() { return static_cast<int32_t>(offsetof(LingerOption_t1449939976, ___seconds_1)); }
	inline int32_t get_seconds_1() const { return ___seconds_1; }
	inline int32_t* get_address_of_seconds_1() { return &___seconds_1; }
	inline void set_seconds_1(int32_t value)
	{
		___seconds_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINGEROPTION_T1449939976_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3905248727_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3905248727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t3905248727  : public Attribute_t911517180
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3905248727, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t3905248727_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t3905248727 * ___Default_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t3905248727 * ___No_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t3905248727 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3905248727_StaticFields, ___Default_1)); }
	inline RecommendedAsConfigurableAttribute_t3905248727 * get_Default_1() const { return ___Default_1; }
	inline RecommendedAsConfigurableAttribute_t3905248727 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(RecommendedAsConfigurableAttribute_t3905248727 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3905248727_StaticFields, ___No_2)); }
	inline RecommendedAsConfigurableAttribute_t3905248727 * get_No_2() const { return ___No_2; }
	inline RecommendedAsConfigurableAttribute_t3905248727 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(RecommendedAsConfigurableAttribute_t3905248727 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3905248727_StaticFields, ___Yes_3)); }
	inline RecommendedAsConfigurableAttribute_t3905248727 * get_Yes_3() const { return ___Yes_3; }
	inline RecommendedAsConfigurableAttribute_t3905248727 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(RecommendedAsConfigurableAttribute_t3905248727 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3905248727_H
#ifndef INT32_T3032204516_H
#define INT32_T3032204516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3032204516 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3032204516, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3032204516_H
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
#ifndef PROCESSSTRINGDICTIONARY_T1751211098_H
#define PROCESSSTRINGDICTIONARY_T1751211098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ProcessStringDictionary
struct  ProcessStringDictionary_t1751211098  : public StringDictionary_t1966841567
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.ProcessStringDictionary::table
	Hashtable_t2624832660 * ___table_1;

public:
	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(ProcessStringDictionary_t1751211098, ___table_1)); }
	inline Hashtable_t2624832660 * get_table_1() const { return ___table_1; }
	inline Hashtable_t2624832660 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t2624832660 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSSTRINGDICTIONARY_T1751211098_H
#ifndef VOID_T761274262_H
#define VOID_T761274262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t761274262 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T761274262_H
#ifndef BROWSABLEATTRIBUTE_T2317782684_H
#define BROWSABLEATTRIBUTE_T2317782684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t2317782684  : public Attribute_t911517180
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2317782684, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t2317782684_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t2317782684 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t2317782684 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t2317782684 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2317782684_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t2317782684 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t2317782684 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t2317782684 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2317782684_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t2317782684 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t2317782684 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t2317782684 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2317782684_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t2317782684 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t2317782684 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t2317782684 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T2317782684_H
#ifndef DEFAULTEVENTATTRIBUTE_T714384433_H
#define DEFAULTEVENTATTRIBUTE_T714384433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t714384433  : public Attribute_t911517180
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t714384433, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t714384433_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t714384433 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t714384433_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t714384433 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t714384433 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t714384433 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T714384433_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T682962234_H
#define DEFAULTPROPERTYATTRIBUTE_T682962234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t682962234  : public Attribute_t911517180
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t682962234, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t682962234_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t682962234 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t682962234_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t682962234 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t682962234 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t682962234 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T682962234_H
#ifndef SYSTEMEXCEPTION_T1921629355_H
#define SYSTEMEXCEPTION_T1921629355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1921629355  : public Exception_t1092093850
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1921629355_H
#ifndef DESCRIPTIONATTRIBUTE_T3006605032_H
#define DESCRIPTIONATTRIBUTE_T3006605032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t3006605032  : public Attribute_t911517180
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3006605032, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t3006605032_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t3006605032 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3006605032_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t3006605032 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t3006605032 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t3006605032 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T3006605032_H
#ifndef DESIGNERATTRIBUTE_T3516739366_H
#define DESIGNERATTRIBUTE_T3516739366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t3516739366  : public Attribute_t911517180
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t3516739366, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t3516739366, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T3516739366_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T2582998632_H
#define DESIGNERCATEGORYATTRIBUTE_T2582998632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t2582998632  : public Attribute_t911517180
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2582998632, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t2582998632_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t2582998632 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t2582998632 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t2582998632 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t2582998632 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2582998632_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t2582998632 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t2582998632 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t2582998632 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2582998632_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t2582998632 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t2582998632 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t2582998632 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2582998632_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t2582998632 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t2582998632 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t2582998632 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2582998632_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t2582998632 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t2582998632 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t2582998632 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T2582998632_H
#ifndef TYPECONVERTERATTRIBUTE_T2600377086_H
#define TYPECONVERTERATTRIBUTE_T2600377086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t2600377086  : public Attribute_t911517180
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t2600377086, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t2600377086_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t2600377086 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t2600377086_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t2600377086 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t2600377086 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t2600377086 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T2600377086_H
#ifndef EXPANDABLEOBJECTCONVERTER_T961633053_H
#define EXPANDABLEOBJECTCONVERTER_T961633053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t961633053  : public TypeConverter_t3910241372
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T961633053_H
#ifndef NOTIFYPARENTPROPERTYATTRIBUTE_T2639741777_H
#define NOTIFYPARENTPROPERTYATTRIBUTE_T2639741777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyParentPropertyAttribute
struct  NotifyParentPropertyAttribute_t2639741777  : public Attribute_t911517180
{
public:
	// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::notifyParent
	bool ___notifyParent_0;

public:
	inline static int32_t get_offset_of_notifyParent_0() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t2639741777, ___notifyParent_0)); }
	inline bool get_notifyParent_0() const { return ___notifyParent_0; }
	inline bool* get_address_of_notifyParent_0() { return &___notifyParent_0; }
	inline void set_notifyParent_0(bool value)
	{
		___notifyParent_0 = value;
	}
};

struct NotifyParentPropertyAttribute_t2639741777_StaticFields
{
public:
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Default
	NotifyParentPropertyAttribute_t2639741777 * ___Default_1;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::No
	NotifyParentPropertyAttribute_t2639741777 * ___No_2;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Yes
	NotifyParentPropertyAttribute_t2639741777 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t2639741777_StaticFields, ___Default_1)); }
	inline NotifyParentPropertyAttribute_t2639741777 * get_Default_1() const { return ___Default_1; }
	inline NotifyParentPropertyAttribute_t2639741777 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(NotifyParentPropertyAttribute_t2639741777 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t2639741777_StaticFields, ___No_2)); }
	inline NotifyParentPropertyAttribute_t2639741777 * get_No_2() const { return ___No_2; }
	inline NotifyParentPropertyAttribute_t2639741777 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(NotifyParentPropertyAttribute_t2639741777 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(NotifyParentPropertyAttribute_t2639741777_StaticFields, ___Yes_3)); }
	inline NotifyParentPropertyAttribute_t2639741777 * get_Yes_3() const { return ___Yes_3; }
	inline NotifyParentPropertyAttribute_t2639741777 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(NotifyParentPropertyAttribute_t2639741777 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYPARENTPROPERTYATTRIBUTE_T2639741777_H
#ifndef COMPONENT_T1558748697_H
#define COMPONENT_T1558748697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t1558748697  : public MarshalByRefObject_t419377280
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t414659217 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t1558748697, ___event_handlers_1)); }
	inline EventHandlerList_t414659217 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t414659217 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t414659217 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t1558748697, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t1558748697, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1558748697_H
#ifndef EDITORATTRIBUTE_T772357673_H
#define EDITORATTRIBUTE_T772357673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t772357673  : public Attribute_t911517180
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t772357673, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t772357673, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T772357673_H
#ifndef DEFAULTVALUEATTRIBUTE_T906268516_H
#define DEFAULTVALUEATTRIBUTE_T906268516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t906268516  : public Attribute_t911517180
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t906268516, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T906268516_H
#ifndef MONOTODOATTRIBUTE_T1025793999_H
#define MONOTODOATTRIBUTE_T1025793999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t1025793999  : public Attribute_t911517180
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t1025793999, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T1025793999_H
#ifndef NAMEVALUECOLLECTION_T2455873298_H
#define NAMEVALUECOLLECTION_T2455873298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t2455873298  : public NameObjectCollectionBase_t862134255
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t3457507972* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t3457507972* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t2455873298, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t3457507972* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t3457507972** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t3457507972* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t2455873298, ___cachedAll_11)); }
	inline StringU5BU5D_t3457507972* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t3457507972** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t3457507972* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T2455873298_H
#ifndef U24ARRAYTYPEU2416_T1896497844_H
#define U24ARRAYTYPEU2416_T1896497844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1896497844 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t1896497844__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1896497844_H
#ifndef U24ARRAYTYPEU2424_T297626016_H
#define U24ARRAYTYPEU2424_T297626016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t297626016 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t297626016__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T297626016_H
#ifndef U24ARRAYTYPEU2456_T3487190923_H
#define U24ARRAYTYPEU2456_T3487190923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t3487190923 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t3487190923__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T3487190923_H
#ifndef U24ARRAYTYPEU2420_T3883540559_H
#define U24ARRAYTYPEU2420_T3883540559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t3883540559 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t3883540559__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T3883540559_H
#ifndef U24ARRAYTYPEU2432_T1864083111_H
#define U24ARRAYTYPEU2432_T1864083111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t1864083111 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t1864083111__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T1864083111_H
#ifndef U24ARRAYTYPEU2448_T3340417082_H
#define U24ARRAYTYPEU2448_T3340417082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t3340417082 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t3340417082__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T3340417082_H
#ifndef U24ARRAYTYPEU2464_T212458275_H
#define U24ARRAYTYPEU2464_T212458275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t212458275 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t212458275__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T212458275_H
#ifndef U24ARRAYTYPEU2412_T2333952966_H
#define U24ARRAYTYPEU2412_T2333952966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2333952966 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2333952966__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2333952966_H
#ifndef U24ARRAYTYPEU24136_T3199478133_H
#define U24ARRAYTYPEU24136_T3199478133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t3199478133 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t3199478133__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T3199478133_H
#ifndef U24ARRAYTYPEU243132_T2659392160_H
#define U24ARRAYTYPEU243132_T2659392160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t2659392160 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t2659392160__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T2659392160_H
#ifndef U24ARRAYTYPEU248_T2637246081_H
#define U24ARRAYTYPEU248_T2637246081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t2637246081 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t2637246081__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T2637246081_H
#ifndef U24ARRAYTYPEU241024_T4181105013_H
#define U24ARRAYTYPEU241024_T4181105013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t4181105013 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t4181105013__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T4181105013_H
#ifndef __IL2CPPCOMDELEGATE_T4093085392_H
#define __IL2CPPCOMDELEGATE_T4093085392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t4093085392  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T4093085392_H
#ifndef U24ARRAYTYPEU2452_T2122074973_H
#define U24ARRAYTYPEU2452_T2122074973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t2122074973 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t2122074973__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T2122074973_H
#ifndef U24ARRAYTYPEU24128_T2024244215_H
#define U24ARRAYTYPEU24128_T2024244215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t2024244215 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t2024244215__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T2024244215_H
#ifndef U24ARRAYTYPEU24640_T2103307604_H
#define U24ARRAYTYPEU24640_T2103307604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t2103307604 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t2103307604__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T2103307604_H
#ifndef U24ARRAYTYPEU2472_T1746226299_H
#define U24ARRAYTYPEU2472_T1746226299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t1746226299 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t1746226299__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T1746226299_H
#ifndef U24ARRAYTYPEU24256_T2452530363_H
#define U24ARRAYTYPEU24256_T2452530363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2452530363 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t2452530363__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2452530363_H
#ifndef U24ARRAYTYPEU24120_T4192079432_H
#define U24ARRAYTYPEU24120_T4192079432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t4192079432 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t4192079432__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T4192079432_H
#ifndef U24ARRAYTYPEU2496_T1871864170_H
#define U24ARRAYTYPEU2496_T1871864170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t1871864170 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t1871864170__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T1871864170_H
#ifndef U24ARRAYTYPEU24124_T4043510067_H
#define U24ARRAYTYPEU24124_T4043510067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t4043510067 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t4043510067__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T4043510067_H
#ifndef U24ARRAYTYPEU242048_T2668522164_H
#define U24ARRAYTYPEU242048_T2668522164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t2668522164 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t2668522164__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T2668522164_H
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
#ifndef FILEACCESS_T3521347753_H
#define FILEACCESS_T3521347753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t3521347753 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t3521347753, ___value___1)); }
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
#endif // FILEACCESS_T3521347753_H
#ifndef ADDRESSFAMILY_T3649001497_H
#define ADDRESSFAMILY_T3649001497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t3649001497 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t3649001497, ___value___1)); }
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
#endif // ADDRESSFAMILY_T3649001497_H
#ifndef SSLPOLICYERRORS_T2492245300_H
#define SSLPOLICYERRORS_T2492245300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2492245300 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2492245300, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T2492245300_H
#ifndef AUTHENTICATIONLEVEL_T937717610_H
#define AUTHENTICATIONLEVEL_T937717610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t937717610 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t937717610, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T937717610_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1230092144_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1230092144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1230092144  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t3487190923  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t297626016  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t297626016  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t297626016  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t297626016  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t1896497844  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t1896497844  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t2659392160  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t3883540559  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t1864083111  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t3340417082  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t212458275  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t212458275  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t212458275  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t212458275  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t2333952966  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t2333952966  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t2333952966  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t1896497844  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t3199478133  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t1746226299  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t2637246081  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t3883540559  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t212458275  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t4043510067  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t1864083111  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t1871864170  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t2668522164  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t3487190923  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t1896497844  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t3340417082  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t2668522164  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t2668522164  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t2452530363  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t2452530363  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t4192079432  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t2452530363  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t2452530363  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t4181105013  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t4181105013  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t4181105013  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t4181105013  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t4181105013  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t4181105013  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t4181105013  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t4181105013  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t2452530363  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t2103307604  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t2333952966  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t2024244215  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t2452530363  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t2122074973  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t2122074973  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t3487190923  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t3487190923 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t3487190923  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t297626016  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t297626016 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t297626016  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t297626016  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t297626016 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t297626016  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t297626016  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t297626016 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t297626016  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t297626016  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t297626016 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t297626016  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t1896497844  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t1896497844 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t1896497844  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t1896497844  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t1896497844 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t1896497844  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t2659392160  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t2659392160 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t2659392160  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t3883540559  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t3883540559 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t3883540559  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t1864083111  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t1864083111 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t1864083111  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t3340417082  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t3340417082 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t3340417082  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t212458275  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t212458275 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t212458275  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t212458275  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t212458275 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t212458275  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t212458275  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t212458275 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t212458275  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t212458275  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t212458275 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t212458275  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t2333952966  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t2333952966 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t2333952966  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t2333952966  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t2333952966 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t2333952966  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t2333952966  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t2333952966 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t2333952966  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t1896497844  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t1896497844 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t1896497844  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t3199478133  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t3199478133 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t3199478133  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t1746226299  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t1746226299 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t1746226299  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t2637246081  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t2637246081 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t2637246081  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t3883540559  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t3883540559 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t3883540559  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t212458275  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t212458275 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t212458275  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t4043510067  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t4043510067 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t4043510067  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t1864083111  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t1864083111 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t1864083111  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t1871864170  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t1871864170 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t1871864170  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t2668522164  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t2668522164 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t2668522164  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t3487190923  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t3487190923 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t3487190923  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t1896497844  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t1896497844 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t1896497844  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t3340417082  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t3340417082 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t3340417082  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t2668522164  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t2668522164 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t2668522164  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t2668522164  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t2668522164 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t2668522164  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t2452530363  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t2452530363 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t2452530363  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t2452530363  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t2452530363 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t2452530363  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t4192079432  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t4192079432 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t4192079432  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t2452530363  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t2452530363 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t2452530363  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t2452530363  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t2452530363 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t2452530363  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t4181105013  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t4181105013 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t4181105013  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t4181105013  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t4181105013 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t4181105013  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t4181105013  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t4181105013 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t4181105013  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t4181105013  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t4181105013 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t4181105013  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t4181105013  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t4181105013 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t4181105013  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t4181105013  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t4181105013 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t4181105013  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t4181105013  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t4181105013 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t4181105013  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t4181105013  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t4181105013 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t4181105013  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t2452530363  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t2452530363 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t2452530363  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t2103307604  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t2103307604 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t2103307604  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t2333952966  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t2333952966 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t2333952966  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t2024244215  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t2024244215 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t2024244215  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t2452530363  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t2452530363 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t2452530363  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t2122074973  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t2122074973 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t2122074973  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t2122074973  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t2122074973 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t2122074973  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1230092144_H
#ifndef EXTERNALEXCEPTION_T344845771_H
#define EXTERNALEXCEPTION_T344845771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t344845771  : public SystemException_t1921629355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T344845771_H
#ifndef PROCESSSTARTINFO_T3083383182_H
#define PROCESSSTARTINFO_T3083383182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ProcessStartInfo
struct  ProcessStartInfo_t3083383182  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.ProcessStartInfo::arguments
	String_t* ___arguments_0;
	// System.IntPtr System.Diagnostics.ProcessStartInfo::error_dialog_parent_handle
	IntPtr_t ___error_dialog_parent_handle_1;
	// System.String System.Diagnostics.ProcessStartInfo::filename
	String_t* ___filename_2;
	// System.String System.Diagnostics.ProcessStartInfo::verb
	String_t* ___verb_3;
	// System.String System.Diagnostics.ProcessStartInfo::working_directory
	String_t* ___working_directory_4;
	// System.Collections.Specialized.ProcessStringDictionary System.Diagnostics.ProcessStartInfo::envVars
	ProcessStringDictionary_t1751211098 * ___envVars_5;
	// System.Boolean System.Diagnostics.ProcessStartInfo::error_dialog
	bool ___error_dialog_6;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_error
	bool ___redirect_standard_error_7;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_input
	bool ___redirect_standard_input_8;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirect_standard_output
	bool ___redirect_standard_output_9;
	// System.Boolean System.Diagnostics.ProcessStartInfo::use_shell_execute
	bool ___use_shell_execute_10;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::encoding_stderr
	Encoding_t146641796 * ___encoding_stderr_11;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::encoding_stdout
	Encoding_t146641796 * ___encoding_stdout_12;
	// System.String System.Diagnostics.ProcessStartInfo::username
	String_t* ___username_13;
	// System.String System.Diagnostics.ProcessStartInfo::domain
	String_t* ___domain_14;
	// System.Security.SecureString System.Diagnostics.ProcessStartInfo::password
	SecureString_t3467728364 * ___password_15;
	// System.Boolean System.Diagnostics.ProcessStartInfo::load_user_profile
	bool ___load_user_profile_16;

public:
	inline static int32_t get_offset_of_arguments_0() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___arguments_0)); }
	inline String_t* get_arguments_0() const { return ___arguments_0; }
	inline String_t** get_address_of_arguments_0() { return &___arguments_0; }
	inline void set_arguments_0(String_t* value)
	{
		___arguments_0 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_0), value);
	}

	inline static int32_t get_offset_of_error_dialog_parent_handle_1() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___error_dialog_parent_handle_1)); }
	inline IntPtr_t get_error_dialog_parent_handle_1() const { return ___error_dialog_parent_handle_1; }
	inline IntPtr_t* get_address_of_error_dialog_parent_handle_1() { return &___error_dialog_parent_handle_1; }
	inline void set_error_dialog_parent_handle_1(IntPtr_t value)
	{
		___error_dialog_parent_handle_1 = value;
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_verb_3() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___verb_3)); }
	inline String_t* get_verb_3() const { return ___verb_3; }
	inline String_t** get_address_of_verb_3() { return &___verb_3; }
	inline void set_verb_3(String_t* value)
	{
		___verb_3 = value;
		Il2CppCodeGenWriteBarrier((&___verb_3), value);
	}

	inline static int32_t get_offset_of_working_directory_4() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___working_directory_4)); }
	inline String_t* get_working_directory_4() const { return ___working_directory_4; }
	inline String_t** get_address_of_working_directory_4() { return &___working_directory_4; }
	inline void set_working_directory_4(String_t* value)
	{
		___working_directory_4 = value;
		Il2CppCodeGenWriteBarrier((&___working_directory_4), value);
	}

	inline static int32_t get_offset_of_envVars_5() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___envVars_5)); }
	inline ProcessStringDictionary_t1751211098 * get_envVars_5() const { return ___envVars_5; }
	inline ProcessStringDictionary_t1751211098 ** get_address_of_envVars_5() { return &___envVars_5; }
	inline void set_envVars_5(ProcessStringDictionary_t1751211098 * value)
	{
		___envVars_5 = value;
		Il2CppCodeGenWriteBarrier((&___envVars_5), value);
	}

	inline static int32_t get_offset_of_error_dialog_6() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___error_dialog_6)); }
	inline bool get_error_dialog_6() const { return ___error_dialog_6; }
	inline bool* get_address_of_error_dialog_6() { return &___error_dialog_6; }
	inline void set_error_dialog_6(bool value)
	{
		___error_dialog_6 = value;
	}

	inline static int32_t get_offset_of_redirect_standard_error_7() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___redirect_standard_error_7)); }
	inline bool get_redirect_standard_error_7() const { return ___redirect_standard_error_7; }
	inline bool* get_address_of_redirect_standard_error_7() { return &___redirect_standard_error_7; }
	inline void set_redirect_standard_error_7(bool value)
	{
		___redirect_standard_error_7 = value;
	}

	inline static int32_t get_offset_of_redirect_standard_input_8() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___redirect_standard_input_8)); }
	inline bool get_redirect_standard_input_8() const { return ___redirect_standard_input_8; }
	inline bool* get_address_of_redirect_standard_input_8() { return &___redirect_standard_input_8; }
	inline void set_redirect_standard_input_8(bool value)
	{
		___redirect_standard_input_8 = value;
	}

	inline static int32_t get_offset_of_redirect_standard_output_9() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___redirect_standard_output_9)); }
	inline bool get_redirect_standard_output_9() const { return ___redirect_standard_output_9; }
	inline bool* get_address_of_redirect_standard_output_9() { return &___redirect_standard_output_9; }
	inline void set_redirect_standard_output_9(bool value)
	{
		___redirect_standard_output_9 = value;
	}

	inline static int32_t get_offset_of_use_shell_execute_10() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___use_shell_execute_10)); }
	inline bool get_use_shell_execute_10() const { return ___use_shell_execute_10; }
	inline bool* get_address_of_use_shell_execute_10() { return &___use_shell_execute_10; }
	inline void set_use_shell_execute_10(bool value)
	{
		___use_shell_execute_10 = value;
	}

	inline static int32_t get_offset_of_encoding_stderr_11() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___encoding_stderr_11)); }
	inline Encoding_t146641796 * get_encoding_stderr_11() const { return ___encoding_stderr_11; }
	inline Encoding_t146641796 ** get_address_of_encoding_stderr_11() { return &___encoding_stderr_11; }
	inline void set_encoding_stderr_11(Encoding_t146641796 * value)
	{
		___encoding_stderr_11 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_stderr_11), value);
	}

	inline static int32_t get_offset_of_encoding_stdout_12() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___encoding_stdout_12)); }
	inline Encoding_t146641796 * get_encoding_stdout_12() const { return ___encoding_stdout_12; }
	inline Encoding_t146641796 ** get_address_of_encoding_stdout_12() { return &___encoding_stdout_12; }
	inline void set_encoding_stdout_12(Encoding_t146641796 * value)
	{
		___encoding_stdout_12 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_stdout_12), value);
	}

	inline static int32_t get_offset_of_username_13() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___username_13)); }
	inline String_t* get_username_13() const { return ___username_13; }
	inline String_t** get_address_of_username_13() { return &___username_13; }
	inline void set_username_13(String_t* value)
	{
		___username_13 = value;
		Il2CppCodeGenWriteBarrier((&___username_13), value);
	}

	inline static int32_t get_offset_of_domain_14() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___domain_14)); }
	inline String_t* get_domain_14() const { return ___domain_14; }
	inline String_t** get_address_of_domain_14() { return &___domain_14; }
	inline void set_domain_14(String_t* value)
	{
		___domain_14 = value;
		Il2CppCodeGenWriteBarrier((&___domain_14), value);
	}

	inline static int32_t get_offset_of_password_15() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___password_15)); }
	inline SecureString_t3467728364 * get_password_15() const { return ___password_15; }
	inline SecureString_t3467728364 ** get_address_of_password_15() { return &___password_15; }
	inline void set_password_15(SecureString_t3467728364 * value)
	{
		___password_15 = value;
		Il2CppCodeGenWriteBarrier((&___password_15), value);
	}

	inline static int32_t get_offset_of_load_user_profile_16() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182, ___load_user_profile_16)); }
	inline bool get_load_user_profile_16() const { return ___load_user_profile_16; }
	inline bool* get_address_of_load_user_profile_16() { return &___load_user_profile_16; }
	inline void set_load_user_profile_16(bool value)
	{
		___load_user_profile_16 = value;
	}
};

struct ProcessStartInfo_t3083383182_StaticFields
{
public:
	// System.String[] System.Diagnostics.ProcessStartInfo::empty
	StringU5BU5D_t3457507972* ___empty_17;

public:
	inline static int32_t get_offset_of_empty_17() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t3083383182_StaticFields, ___empty_17)); }
	inline StringU5BU5D_t3457507972* get_empty_17() const { return ___empty_17; }
	inline StringU5BU5D_t3457507972** get_address_of_empty_17() { return &___empty_17; }
	inline void set_empty_17(StringU5BU5D_t3457507972* value)
	{
		___empty_17 = value;
		Il2CppCodeGenWriteBarrier((&___empty_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSSTARTINFO_T3083383182_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3675864768_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3675864768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3675864768 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3675864768, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3675864768_H
#ifndef MONOIOERROR_T3073323527_H
#define MONOIOERROR_T3073323527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOError
struct  MonoIOError_t3073323527 
{
public:
	// System.Int32 System.IO.MonoIOError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MonoIOError_t3073323527, ___value___1)); }
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
#endif // MONOIOERROR_T3073323527_H
#ifndef PROCESSASYNCREADER_T2098413257_H
#define PROCESSASYNCREADER_T2098413257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Process/ProcessAsyncReader
struct  ProcessAsyncReader_t2098413257  : public RuntimeObject
{
public:
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::Sock
	RuntimeObject * ___Sock_0;
	// System.IntPtr System.Diagnostics.Process/ProcessAsyncReader::handle
	IntPtr_t ___handle_1;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::state
	RuntimeObject * ___state_2;
	// System.AsyncCallback System.Diagnostics.Process/ProcessAsyncReader::callback
	AsyncCallback_t2901717597 * ___callback_3;
	// System.Threading.ManualResetEvent System.Diagnostics.Process/ProcessAsyncReader::wait_handle
	ManualResetEvent_t3735104750 * ___wait_handle_4;
	// System.Exception System.Diagnostics.Process/ProcessAsyncReader::delayedException
	Exception_t1092093850 * ___delayedException_5;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::EndPoint
	RuntimeObject * ___EndPoint_6;
	// System.Byte[] System.Diagnostics.Process/ProcessAsyncReader::buffer
	ByteU5BU5D_t2671881028* ___buffer_7;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::Offset
	int32_t ___Offset_8;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::Size
	int32_t ___Size_9;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::SockFlags
	int32_t ___SockFlags_10;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::AcceptSocket
	RuntimeObject * ___AcceptSocket_11;
	// System.Object[] System.Diagnostics.Process/ProcessAsyncReader::Addresses
	ObjectU5BU5D_t4111892338* ___Addresses_12;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::port
	int32_t ___port_13;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::Buffers
	RuntimeObject * ___Buffers_14;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::ReuseSocket
	bool ___ReuseSocket_15;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::acc_socket
	RuntimeObject * ___acc_socket_16;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::total
	int32_t ___total_17;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::completed_sync
	bool ___completed_sync_18;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::completed
	bool ___completed_19;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::err_out
	bool ___err_out_20;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::error
	int32_t ___error_21;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::operation
	int32_t ___operation_22;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::ares
	RuntimeObject * ___ares_23;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::EndCalled
	int32_t ___EndCalled_24;
	// System.Diagnostics.Process System.Diagnostics.Process/ProcessAsyncReader::process
	Process_t870073395 * ___process_25;
	// System.IO.Stream System.Diagnostics.Process/ProcessAsyncReader::stream
	Stream_t554590746 * ___stream_26;
	// System.Text.StringBuilder System.Diagnostics.Process/ProcessAsyncReader::sb
	StringBuilder_t1703114040 * ___sb_27;
	// System.Diagnostics.Process/AsyncReadHandler System.Diagnostics.Process/ProcessAsyncReader::ReadHandler
	AsyncReadHandler_t3737433465 * ___ReadHandler_28;

public:
	inline static int32_t get_offset_of_Sock_0() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___Sock_0)); }
	inline RuntimeObject * get_Sock_0() const { return ___Sock_0; }
	inline RuntimeObject ** get_address_of_Sock_0() { return &___Sock_0; }
	inline void set_Sock_0(RuntimeObject * value)
	{
		___Sock_0 = value;
		Il2CppCodeGenWriteBarrier((&___Sock_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___handle_1)); }
	inline IntPtr_t get_handle_1() const { return ___handle_1; }
	inline IntPtr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(IntPtr_t value)
	{
		___handle_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___state_2)); }
	inline RuntimeObject * get_state_2() const { return ___state_2; }
	inline RuntimeObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RuntimeObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((&___state_2), value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___callback_3)); }
	inline AsyncCallback_t2901717597 * get_callback_3() const { return ___callback_3; }
	inline AsyncCallback_t2901717597 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(AsyncCallback_t2901717597 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___callback_3), value);
	}

	inline static int32_t get_offset_of_wait_handle_4() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___wait_handle_4)); }
	inline ManualResetEvent_t3735104750 * get_wait_handle_4() const { return ___wait_handle_4; }
	inline ManualResetEvent_t3735104750 ** get_address_of_wait_handle_4() { return &___wait_handle_4; }
	inline void set_wait_handle_4(ManualResetEvent_t3735104750 * value)
	{
		___wait_handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___wait_handle_4), value);
	}

	inline static int32_t get_offset_of_delayedException_5() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___delayedException_5)); }
	inline Exception_t1092093850 * get_delayedException_5() const { return ___delayedException_5; }
	inline Exception_t1092093850 ** get_address_of_delayedException_5() { return &___delayedException_5; }
	inline void set_delayedException_5(Exception_t1092093850 * value)
	{
		___delayedException_5 = value;
		Il2CppCodeGenWriteBarrier((&___delayedException_5), value);
	}

	inline static int32_t get_offset_of_EndPoint_6() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___EndPoint_6)); }
	inline RuntimeObject * get_EndPoint_6() const { return ___EndPoint_6; }
	inline RuntimeObject ** get_address_of_EndPoint_6() { return &___EndPoint_6; }
	inline void set_EndPoint_6(RuntimeObject * value)
	{
		___EndPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___EndPoint_6), value);
	}

	inline static int32_t get_offset_of_buffer_7() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___buffer_7)); }
	inline ByteU5BU5D_t2671881028* get_buffer_7() const { return ___buffer_7; }
	inline ByteU5BU5D_t2671881028** get_address_of_buffer_7() { return &___buffer_7; }
	inline void set_buffer_7(ByteU5BU5D_t2671881028* value)
	{
		___buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_7), value);
	}

	inline static int32_t get_offset_of_Offset_8() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___Offset_8)); }
	inline int32_t get_Offset_8() const { return ___Offset_8; }
	inline int32_t* get_address_of_Offset_8() { return &___Offset_8; }
	inline void set_Offset_8(int32_t value)
	{
		___Offset_8 = value;
	}

	inline static int32_t get_offset_of_Size_9() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___Size_9)); }
	inline int32_t get_Size_9() const { return ___Size_9; }
	inline int32_t* get_address_of_Size_9() { return &___Size_9; }
	inline void set_Size_9(int32_t value)
	{
		___Size_9 = value;
	}

	inline static int32_t get_offset_of_SockFlags_10() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___SockFlags_10)); }
	inline int32_t get_SockFlags_10() const { return ___SockFlags_10; }
	inline int32_t* get_address_of_SockFlags_10() { return &___SockFlags_10; }
	inline void set_SockFlags_10(int32_t value)
	{
		___SockFlags_10 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_11() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___AcceptSocket_11)); }
	inline RuntimeObject * get_AcceptSocket_11() const { return ___AcceptSocket_11; }
	inline RuntimeObject ** get_address_of_AcceptSocket_11() { return &___AcceptSocket_11; }
	inline void set_AcceptSocket_11(RuntimeObject * value)
	{
		___AcceptSocket_11 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptSocket_11), value);
	}

	inline static int32_t get_offset_of_Addresses_12() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___Addresses_12)); }
	inline ObjectU5BU5D_t4111892338* get_Addresses_12() const { return ___Addresses_12; }
	inline ObjectU5BU5D_t4111892338** get_address_of_Addresses_12() { return &___Addresses_12; }
	inline void set_Addresses_12(ObjectU5BU5D_t4111892338* value)
	{
		___Addresses_12 = value;
		Il2CppCodeGenWriteBarrier((&___Addresses_12), value);
	}

	inline static int32_t get_offset_of_port_13() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___port_13)); }
	inline int32_t get_port_13() const { return ___port_13; }
	inline int32_t* get_address_of_port_13() { return &___port_13; }
	inline void set_port_13(int32_t value)
	{
		___port_13 = value;
	}

	inline static int32_t get_offset_of_Buffers_14() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___Buffers_14)); }
	inline RuntimeObject * get_Buffers_14() const { return ___Buffers_14; }
	inline RuntimeObject ** get_address_of_Buffers_14() { return &___Buffers_14; }
	inline void set_Buffers_14(RuntimeObject * value)
	{
		___Buffers_14 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_14), value);
	}

	inline static int32_t get_offset_of_ReuseSocket_15() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___ReuseSocket_15)); }
	inline bool get_ReuseSocket_15() const { return ___ReuseSocket_15; }
	inline bool* get_address_of_ReuseSocket_15() { return &___ReuseSocket_15; }
	inline void set_ReuseSocket_15(bool value)
	{
		___ReuseSocket_15 = value;
	}

	inline static int32_t get_offset_of_acc_socket_16() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___acc_socket_16)); }
	inline RuntimeObject * get_acc_socket_16() const { return ___acc_socket_16; }
	inline RuntimeObject ** get_address_of_acc_socket_16() { return &___acc_socket_16; }
	inline void set_acc_socket_16(RuntimeObject * value)
	{
		___acc_socket_16 = value;
		Il2CppCodeGenWriteBarrier((&___acc_socket_16), value);
	}

	inline static int32_t get_offset_of_total_17() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___total_17)); }
	inline int32_t get_total_17() const { return ___total_17; }
	inline int32_t* get_address_of_total_17() { return &___total_17; }
	inline void set_total_17(int32_t value)
	{
		___total_17 = value;
	}

	inline static int32_t get_offset_of_completed_sync_18() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___completed_sync_18)); }
	inline bool get_completed_sync_18() const { return ___completed_sync_18; }
	inline bool* get_address_of_completed_sync_18() { return &___completed_sync_18; }
	inline void set_completed_sync_18(bool value)
	{
		___completed_sync_18 = value;
	}

	inline static int32_t get_offset_of_completed_19() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___completed_19)); }
	inline bool get_completed_19() const { return ___completed_19; }
	inline bool* get_address_of_completed_19() { return &___completed_19; }
	inline void set_completed_19(bool value)
	{
		___completed_19 = value;
	}

	inline static int32_t get_offset_of_err_out_20() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___err_out_20)); }
	inline bool get_err_out_20() const { return ___err_out_20; }
	inline bool* get_address_of_err_out_20() { return &___err_out_20; }
	inline void set_err_out_20(bool value)
	{
		___err_out_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_operation_22() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___operation_22)); }
	inline int32_t get_operation_22() const { return ___operation_22; }
	inline int32_t* get_address_of_operation_22() { return &___operation_22; }
	inline void set_operation_22(int32_t value)
	{
		___operation_22 = value;
	}

	inline static int32_t get_offset_of_ares_23() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___ares_23)); }
	inline RuntimeObject * get_ares_23() const { return ___ares_23; }
	inline RuntimeObject ** get_address_of_ares_23() { return &___ares_23; }
	inline void set_ares_23(RuntimeObject * value)
	{
		___ares_23 = value;
		Il2CppCodeGenWriteBarrier((&___ares_23), value);
	}

	inline static int32_t get_offset_of_EndCalled_24() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___EndCalled_24)); }
	inline int32_t get_EndCalled_24() const { return ___EndCalled_24; }
	inline int32_t* get_address_of_EndCalled_24() { return &___EndCalled_24; }
	inline void set_EndCalled_24(int32_t value)
	{
		___EndCalled_24 = value;
	}

	inline static int32_t get_offset_of_process_25() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___process_25)); }
	inline Process_t870073395 * get_process_25() const { return ___process_25; }
	inline Process_t870073395 ** get_address_of_process_25() { return &___process_25; }
	inline void set_process_25(Process_t870073395 * value)
	{
		___process_25 = value;
		Il2CppCodeGenWriteBarrier((&___process_25), value);
	}

	inline static int32_t get_offset_of_stream_26() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___stream_26)); }
	inline Stream_t554590746 * get_stream_26() const { return ___stream_26; }
	inline Stream_t554590746 ** get_address_of_stream_26() { return &___stream_26; }
	inline void set_stream_26(Stream_t554590746 * value)
	{
		___stream_26 = value;
		Il2CppCodeGenWriteBarrier((&___stream_26), value);
	}

	inline static int32_t get_offset_of_sb_27() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___sb_27)); }
	inline StringBuilder_t1703114040 * get_sb_27() const { return ___sb_27; }
	inline StringBuilder_t1703114040 ** get_address_of_sb_27() { return &___sb_27; }
	inline void set_sb_27(StringBuilder_t1703114040 * value)
	{
		___sb_27 = value;
		Il2CppCodeGenWriteBarrier((&___sb_27), value);
	}

	inline static int32_t get_offset_of_ReadHandler_28() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2098413257, ___ReadHandler_28)); }
	inline AsyncReadHandler_t3737433465 * get_ReadHandler_28() const { return ___ReadHandler_28; }
	inline AsyncReadHandler_t3737433465 ** get_address_of_ReadHandler_28() { return &___ReadHandler_28; }
	inline void set_ReadHandler_28(AsyncReadHandler_t3737433465 * value)
	{
		___ReadHandler_28 = value;
		Il2CppCodeGenWriteBarrier((&___ReadHandler_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t2098413257_marshaled_pinvoke
{
	Il2CppIUnknown* ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	ManualResetEvent_t3735104750 * ___wait_handle_4;
	Exception_t1092093850 * ___delayedException_5;
	Il2CppIUnknown* ___EndPoint_6;
	uint8_t* ___buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Il2CppIUnknown* ___AcceptSocket_11;
	ObjectU5BU5D_t4111892338* ___Addresses_12;
	int32_t ___port_13;
	Il2CppIUnknown* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Il2CppIUnknown* ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___err_out_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
	Process_t870073395 * ___process_25;
	Stream_t554590746 * ___stream_26;
	char* ___sb_27;
	Il2CppMethodPointer ___ReadHandler_28;
};
// Native definition for COM marshalling of System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t2098413257_marshaled_com
{
	Il2CppIUnknown* ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	ManualResetEvent_t3735104750 * ___wait_handle_4;
	Exception_t1092093850 * ___delayedException_5;
	Il2CppIUnknown* ___EndPoint_6;
	uint8_t* ___buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Il2CppIUnknown* ___AcceptSocket_11;
	ObjectU5BU5D_t4111892338* ___Addresses_12;
	int32_t ___port_13;
	Il2CppIUnknown* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Il2CppIUnknown* ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___err_out_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
	Process_t870073395 * ___process_25;
	Stream_t554590746 * ___stream_26;
	Il2CppChar* ___sb_27;
	Il2CppMethodPointer ___ReadHandler_28;
};
#endif // PROCESSASYNCREADER_T2098413257_H
#ifndef PROCINFO_T1276355763_H
#define PROCINFO_T1276355763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Process/ProcInfo
struct  ProcInfo_t1276355763 
{
public:
	// System.IntPtr System.Diagnostics.Process/ProcInfo::process_handle
	IntPtr_t ___process_handle_0;
	// System.IntPtr System.Diagnostics.Process/ProcInfo::thread_handle
	IntPtr_t ___thread_handle_1;
	// System.Int32 System.Diagnostics.Process/ProcInfo::pid
	int32_t ___pid_2;
	// System.Int32 System.Diagnostics.Process/ProcInfo::tid
	int32_t ___tid_3;
	// System.String[] System.Diagnostics.Process/ProcInfo::envKeys
	StringU5BU5D_t3457507972* ___envKeys_4;
	// System.String[] System.Diagnostics.Process/ProcInfo::envValues
	StringU5BU5D_t3457507972* ___envValues_5;
	// System.String System.Diagnostics.Process/ProcInfo::UserName
	String_t* ___UserName_6;
	// System.String System.Diagnostics.Process/ProcInfo::Domain
	String_t* ___Domain_7;
	// System.IntPtr System.Diagnostics.Process/ProcInfo::Password
	IntPtr_t ___Password_8;
	// System.Boolean System.Diagnostics.Process/ProcInfo::LoadUserProfile
	bool ___LoadUserProfile_9;

public:
	inline static int32_t get_offset_of_process_handle_0() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___process_handle_0)); }
	inline IntPtr_t get_process_handle_0() const { return ___process_handle_0; }
	inline IntPtr_t* get_address_of_process_handle_0() { return &___process_handle_0; }
	inline void set_process_handle_0(IntPtr_t value)
	{
		___process_handle_0 = value;
	}

	inline static int32_t get_offset_of_thread_handle_1() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___thread_handle_1)); }
	inline IntPtr_t get_thread_handle_1() const { return ___thread_handle_1; }
	inline IntPtr_t* get_address_of_thread_handle_1() { return &___thread_handle_1; }
	inline void set_thread_handle_1(IntPtr_t value)
	{
		___thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_pid_2() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___pid_2)); }
	inline int32_t get_pid_2() const { return ___pid_2; }
	inline int32_t* get_address_of_pid_2() { return &___pid_2; }
	inline void set_pid_2(int32_t value)
	{
		___pid_2 = value;
	}

	inline static int32_t get_offset_of_tid_3() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___tid_3)); }
	inline int32_t get_tid_3() const { return ___tid_3; }
	inline int32_t* get_address_of_tid_3() { return &___tid_3; }
	inline void set_tid_3(int32_t value)
	{
		___tid_3 = value;
	}

	inline static int32_t get_offset_of_envKeys_4() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___envKeys_4)); }
	inline StringU5BU5D_t3457507972* get_envKeys_4() const { return ___envKeys_4; }
	inline StringU5BU5D_t3457507972** get_address_of_envKeys_4() { return &___envKeys_4; }
	inline void set_envKeys_4(StringU5BU5D_t3457507972* value)
	{
		___envKeys_4 = value;
		Il2CppCodeGenWriteBarrier((&___envKeys_4), value);
	}

	inline static int32_t get_offset_of_envValues_5() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___envValues_5)); }
	inline StringU5BU5D_t3457507972* get_envValues_5() const { return ___envValues_5; }
	inline StringU5BU5D_t3457507972** get_address_of_envValues_5() { return &___envValues_5; }
	inline void set_envValues_5(StringU5BU5D_t3457507972* value)
	{
		___envValues_5 = value;
		Il2CppCodeGenWriteBarrier((&___envValues_5), value);
	}

	inline static int32_t get_offset_of_UserName_6() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___UserName_6)); }
	inline String_t* get_UserName_6() const { return ___UserName_6; }
	inline String_t** get_address_of_UserName_6() { return &___UserName_6; }
	inline void set_UserName_6(String_t* value)
	{
		___UserName_6 = value;
		Il2CppCodeGenWriteBarrier((&___UserName_6), value);
	}

	inline static int32_t get_offset_of_Domain_7() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___Domain_7)); }
	inline String_t* get_Domain_7() const { return ___Domain_7; }
	inline String_t** get_address_of_Domain_7() { return &___Domain_7; }
	inline void set_Domain_7(String_t* value)
	{
		___Domain_7 = value;
		Il2CppCodeGenWriteBarrier((&___Domain_7), value);
	}

	inline static int32_t get_offset_of_Password_8() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___Password_8)); }
	inline IntPtr_t get_Password_8() const { return ___Password_8; }
	inline IntPtr_t* get_address_of_Password_8() { return &___Password_8; }
	inline void set_Password_8(IntPtr_t value)
	{
		___Password_8 = value;
	}

	inline static int32_t get_offset_of_LoadUserProfile_9() { return static_cast<int32_t>(offsetof(ProcInfo_t1276355763, ___LoadUserProfile_9)); }
	inline bool get_LoadUserProfile_9() const { return ___LoadUserProfile_9; }
	inline bool* get_address_of_LoadUserProfile_9() { return &___LoadUserProfile_9; }
	inline void set_LoadUserProfile_9(bool value)
	{
		___LoadUserProfile_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Diagnostics.Process/ProcInfo
struct ProcInfo_t1276355763_marshaled_pinvoke
{
	intptr_t ___process_handle_0;
	intptr_t ___thread_handle_1;
	int32_t ___pid_2;
	int32_t ___tid_3;
	char** ___envKeys_4;
	char** ___envValues_5;
	char* ___UserName_6;
	char* ___Domain_7;
	intptr_t ___Password_8;
	int32_t ___LoadUserProfile_9;
};
// Native definition for COM marshalling of System.Diagnostics.Process/ProcInfo
struct ProcInfo_t1276355763_marshaled_com
{
	intptr_t ___process_handle_0;
	intptr_t ___thread_handle_1;
	int32_t ___pid_2;
	int32_t ___tid_3;
	Il2CppChar** ___envKeys_4;
	Il2CppChar** ___envValues_5;
	Il2CppChar* ___UserName_6;
	Il2CppChar* ___Domain_7;
	intptr_t ___Password_8;
	int32_t ___LoadUserProfile_9;
};
#endif // PROCINFO_T1276355763_H
#ifndef PROCESS_T870073395_H
#define PROCESS_T870073395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Process
struct  Process_t870073395  : public Component_t1558748697
{
public:
	// System.IntPtr System.Diagnostics.Process::process_handle
	IntPtr_t ___process_handle_4;
	// System.Int32 System.Diagnostics.Process::pid
	int32_t ___pid_5;
	// System.IntPtr System.Diagnostics.Process::stdout_rd
	IntPtr_t ___stdout_rd_6;
	// System.IntPtr System.Diagnostics.Process::stderr_rd
	IntPtr_t ___stderr_rd_7;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_8;
	// System.IO.StreamReader System.Diagnostics.Process::error_stream
	StreamReader_t2897526731 * ___error_stream_9;
	// System.IO.StreamWriter System.Diagnostics.Process::input_stream
	StreamWriter_t3671402287 * ___input_stream_10;
	// System.IO.StreamReader System.Diagnostics.Process::output_stream
	StreamReader_t2897526731 * ___output_stream_11;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::start_info
	ProcessStartInfo_t3083383182 * ___start_info_12;
	// System.Diagnostics.Process/ProcessAsyncReader System.Diagnostics.Process::async_output
	ProcessAsyncReader_t2098413257 * ___async_output_13;
	// System.Diagnostics.Process/ProcessAsyncReader System.Diagnostics.Process::async_error
	ProcessAsyncReader_t2098413257 * ___async_error_14;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_15;

public:
	inline static int32_t get_offset_of_process_handle_4() { return static_cast<int32_t>(offsetof(Process_t870073395, ___process_handle_4)); }
	inline IntPtr_t get_process_handle_4() const { return ___process_handle_4; }
	inline IntPtr_t* get_address_of_process_handle_4() { return &___process_handle_4; }
	inline void set_process_handle_4(IntPtr_t value)
	{
		___process_handle_4 = value;
	}

	inline static int32_t get_offset_of_pid_5() { return static_cast<int32_t>(offsetof(Process_t870073395, ___pid_5)); }
	inline int32_t get_pid_5() const { return ___pid_5; }
	inline int32_t* get_address_of_pid_5() { return &___pid_5; }
	inline void set_pid_5(int32_t value)
	{
		___pid_5 = value;
	}

	inline static int32_t get_offset_of_stdout_rd_6() { return static_cast<int32_t>(offsetof(Process_t870073395, ___stdout_rd_6)); }
	inline IntPtr_t get_stdout_rd_6() const { return ___stdout_rd_6; }
	inline IntPtr_t* get_address_of_stdout_rd_6() { return &___stdout_rd_6; }
	inline void set_stdout_rd_6(IntPtr_t value)
	{
		___stdout_rd_6 = value;
	}

	inline static int32_t get_offset_of_stderr_rd_7() { return static_cast<int32_t>(offsetof(Process_t870073395, ___stderr_rd_7)); }
	inline IntPtr_t get_stderr_rd_7() const { return ___stderr_rd_7; }
	inline IntPtr_t* get_address_of_stderr_rd_7() { return &___stderr_rd_7; }
	inline void set_stderr_rd_7(IntPtr_t value)
	{
		___stderr_rd_7 = value;
	}

	inline static int32_t get_offset_of_process_name_8() { return static_cast<int32_t>(offsetof(Process_t870073395, ___process_name_8)); }
	inline String_t* get_process_name_8() const { return ___process_name_8; }
	inline String_t** get_address_of_process_name_8() { return &___process_name_8; }
	inline void set_process_name_8(String_t* value)
	{
		___process_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___process_name_8), value);
	}

	inline static int32_t get_offset_of_error_stream_9() { return static_cast<int32_t>(offsetof(Process_t870073395, ___error_stream_9)); }
	inline StreamReader_t2897526731 * get_error_stream_9() const { return ___error_stream_9; }
	inline StreamReader_t2897526731 ** get_address_of_error_stream_9() { return &___error_stream_9; }
	inline void set_error_stream_9(StreamReader_t2897526731 * value)
	{
		___error_stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___error_stream_9), value);
	}

	inline static int32_t get_offset_of_input_stream_10() { return static_cast<int32_t>(offsetof(Process_t870073395, ___input_stream_10)); }
	inline StreamWriter_t3671402287 * get_input_stream_10() const { return ___input_stream_10; }
	inline StreamWriter_t3671402287 ** get_address_of_input_stream_10() { return &___input_stream_10; }
	inline void set_input_stream_10(StreamWriter_t3671402287 * value)
	{
		___input_stream_10 = value;
		Il2CppCodeGenWriteBarrier((&___input_stream_10), value);
	}

	inline static int32_t get_offset_of_output_stream_11() { return static_cast<int32_t>(offsetof(Process_t870073395, ___output_stream_11)); }
	inline StreamReader_t2897526731 * get_output_stream_11() const { return ___output_stream_11; }
	inline StreamReader_t2897526731 ** get_address_of_output_stream_11() { return &___output_stream_11; }
	inline void set_output_stream_11(StreamReader_t2897526731 * value)
	{
		___output_stream_11 = value;
		Il2CppCodeGenWriteBarrier((&___output_stream_11), value);
	}

	inline static int32_t get_offset_of_start_info_12() { return static_cast<int32_t>(offsetof(Process_t870073395, ___start_info_12)); }
	inline ProcessStartInfo_t3083383182 * get_start_info_12() const { return ___start_info_12; }
	inline ProcessStartInfo_t3083383182 ** get_address_of_start_info_12() { return &___start_info_12; }
	inline void set_start_info_12(ProcessStartInfo_t3083383182 * value)
	{
		___start_info_12 = value;
		Il2CppCodeGenWriteBarrier((&___start_info_12), value);
	}

	inline static int32_t get_offset_of_async_output_13() { return static_cast<int32_t>(offsetof(Process_t870073395, ___async_output_13)); }
	inline ProcessAsyncReader_t2098413257 * get_async_output_13() const { return ___async_output_13; }
	inline ProcessAsyncReader_t2098413257 ** get_address_of_async_output_13() { return &___async_output_13; }
	inline void set_async_output_13(ProcessAsyncReader_t2098413257 * value)
	{
		___async_output_13 = value;
		Il2CppCodeGenWriteBarrier((&___async_output_13), value);
	}

	inline static int32_t get_offset_of_async_error_14() { return static_cast<int32_t>(offsetof(Process_t870073395, ___async_error_14)); }
	inline ProcessAsyncReader_t2098413257 * get_async_error_14() const { return ___async_error_14; }
	inline ProcessAsyncReader_t2098413257 ** get_address_of_async_error_14() { return &___async_error_14; }
	inline void set_async_error_14(ProcessAsyncReader_t2098413257 * value)
	{
		___async_error_14 = value;
		Il2CppCodeGenWriteBarrier((&___async_error_14), value);
	}

	inline static int32_t get_offset_of_disposed_15() { return static_cast<int32_t>(offsetof(Process_t870073395, ___disposed_15)); }
	inline bool get_disposed_15() const { return ___disposed_15; }
	inline bool* get_address_of_disposed_15() { return &___disposed_15; }
	inline void set_disposed_15(bool value)
	{
		___disposed_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESS_T870073395_H
#ifndef MONITORINGDESCRIPTIONATTRIBUTE_T1754257358_H
#define MONITORINGDESCRIPTIONATTRIBUTE_T1754257358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.MonitoringDescriptionAttribute
struct  MonitoringDescriptionAttribute_t1754257358  : public DescriptionAttribute_t3006605032
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITORINGDESCRIPTIONATTRIBUTE_T1754257358_H
#ifndef EDITORBROWSABLESTATE_T3342142055_H
#define EDITORBROWSABLESTATE_T3342142055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t3342142055 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t3342142055, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T3342142055_H
#ifndef NETWORKSTREAM_T1859946661_H
#define NETWORKSTREAM_T1859946661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t1859946661  : public Stream_t554590746
{
public:
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_1;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t2912110740 * ___socket_2;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_4;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(NetworkStream_t1859946661, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(NetworkStream_t1859946661, ___socket_2)); }
	inline Socket_t2912110740 * get_socket_2() const { return ___socket_2; }
	inline Socket_t2912110740 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t2912110740 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((&___socket_2), value);
	}

	inline static int32_t get_offset_of_owns_socket_3() { return static_cast<int32_t>(offsetof(NetworkStream_t1859946661, ___owns_socket_3)); }
	inline bool get_owns_socket_3() const { return ___owns_socket_3; }
	inline bool* get_address_of_owns_socket_3() { return &___owns_socket_3; }
	inline void set_owns_socket_3(bool value)
	{
		___owns_socket_3 = value;
	}

	inline static int32_t get_offset_of_readable_4() { return static_cast<int32_t>(offsetof(NetworkStream_t1859946661, ___readable_4)); }
	inline bool get_readable_4() const { return ___readable_4; }
	inline bool* get_address_of_readable_4() { return &___readable_4; }
	inline void set_readable_4(bool value)
	{
		___readable_4 = value;
	}

	inline static int32_t get_offset_of_writeable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t1859946661, ___writeable_5)); }
	inline bool get_writeable_5() const { return ___writeable_5; }
	inline bool* get_address_of_writeable_5() { return &___writeable_5; }
	inline void set_writeable_5(bool value)
	{
		___writeable_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(NetworkStream_t1859946661, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T1859946661_H
#ifndef FILESTREAM_T3029897758_H
#define FILESTREAM_T3029897758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t3029897758  : public Stream_t554590746
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t2671881028* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	IntPtr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___buf_7)); }
	inline ByteU5BU5D_t2671881028* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t2671881028** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t2671881028* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t3029897758, ___handle_14)); }
	inline IntPtr_t get_handle_14() const { return ___handle_14; }
	inline IntPtr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(IntPtr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T3029897758_H
#ifndef WIN32EXCEPTION_T3199002758_H
#define WIN32EXCEPTION_T3199002758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3199002758  : public ExternalException_t344845771
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::native_error_code
	int32_t ___native_error_code_11;

public:
	inline static int32_t get_offset_of_native_error_code_11() { return static_cast<int32_t>(offsetof(Win32Exception_t3199002758, ___native_error_code_11)); }
	inline int32_t get_native_error_code_11() const { return ___native_error_code_11; }
	inline int32_t* get_address_of_native_error_code_11() { return &___native_error_code_11; }
	inline void set_native_error_code_11(int32_t value)
	{
		___native_error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3199002758_H
#ifndef EDITORBROWSABLEATTRIBUTE_T372175112_H
#define EDITORBROWSABLEATTRIBUTE_T372175112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t372175112  : public Attribute_t911517180
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t372175112, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T372175112_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2583522244_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2583522244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t2583522244  : public Attribute_t911517180
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2583522244, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t2583522244_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t2583522244 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t2583522244 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t2583522244 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t2583522244 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2583522244_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t2583522244 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t2583522244 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t2583522244 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2583522244_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t2583522244 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t2583522244 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t2583522244 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2583522244_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t2583522244 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t2583522244 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t2583522244 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2583522244_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t2583522244 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t2583522244 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t2583522244 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2583522244_H
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
#ifndef APPDOMAININITIALIZER_T1854025449_H
#define APPDOMAININITIALIZER_T1854025449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t1854025449  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T1854025449_H
#ifndef TIMERCALLBACK_T3885718201_H
#define TIMERCALLBACK_T3885718201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t3885718201  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T3885718201_H
#ifndef WAITCALLBACK_T1124189864_H
#define WAITCALLBACK_T1124189864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t1124189864  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T1124189864_H
#ifndef MONOSYNCFILESTREAM_T4263849998_H
#define MONOSYNCFILESTREAM_T4263849998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoSyncFileStream
struct  MonoSyncFileStream_t4263849998  : public FileStream_t3029897758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOSYNCFILESTREAM_T4263849998_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T2576895270_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T2576895270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t2576895270  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T2576895270_H
#ifndef EVENTHANDLER_T4200842597_H
#define EVENTHANDLER_T4200842597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t4200842597  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T4200842597_H
#ifndef RESOLVEEVENTHANDLER_T4162179673_H
#define RESOLVEEVENTHANDLER_T4162179673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t4162179673  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T4162179673_H
#ifndef ASYNCREADHANDLER_T3737433465_H
#define ASYNCREADHANDLER_T3737433465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Process/AsyncReadHandler
struct  AsyncReadHandler_t3737433465  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCREADHANDLER_T3737433465_H
#ifndef READDELEGATE_T241897629_H
#define READDELEGATE_T241897629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoSyncFileStream/ReadDelegate
struct  ReadDelegate_t241897629  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READDELEGATE_T241897629_H
#ifndef WRITEDELEGATE_T4048413980_H
#define WRITEDELEGATE_T4048413980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoSyncFileStream/WriteDelegate
struct  WriteDelegate_t4048413980  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEDELEGATE_T4048413980_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T679590217_H
#define ASSEMBLYLOADEVENTHANDLER_T679590217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t679590217  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T679590217_H
#ifndef THREADSTART_T722240650_H
#define THREADSTART_T722240650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t722240650  : public MulticastDelegate_t1465476639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T722240650_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (ThreadStart_t722240650), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (TimerCallback_t3885718201), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (WaitCallback_t1124189864), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (AppDomainInitializer_t1854025449), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (AssemblyLoadEventHandler_t679590217), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (EventHandler_t4200842597), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (ResolveEventHandler_t4162179673), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (UnhandledExceptionEventHandler_t2576895270), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (U3CPrivateImplementationDetailsU3E_t1230092144), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable912[53] = 
{
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t1230092144_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (U24ArrayTypeU2456_t3487190923)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t3487190923 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (U24ArrayTypeU2424_t297626016)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t297626016 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (U24ArrayTypeU2416_t1896497844)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t1896497844 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (U24ArrayTypeU24120_t4192079432)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t4192079432 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (U24ArrayTypeU243132_t2659392160)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t2659392160 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (U24ArrayTypeU2420_t3883540559)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t3883540559 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (U24ArrayTypeU2432_t1864083111)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t1864083111 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (U24ArrayTypeU2448_t3340417082)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t3340417082 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (U24ArrayTypeU2464_t212458275)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t212458275 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (U24ArrayTypeU2412_t2333952966)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2333952966 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (U24ArrayTypeU24136_t3199478133)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t3199478133 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (U24ArrayTypeU248_t2637246081)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t2637246081 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (U24ArrayTypeU2472_t1746226299)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t1746226299 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (U24ArrayTypeU24124_t4043510067)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t4043510067 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (U24ArrayTypeU2496_t1871864170)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t1871864170 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (U24ArrayTypeU242048_t2668522164)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t2668522164 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (U24ArrayTypeU24256_t2452530363)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2452530363 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (U24ArrayTypeU241024_t4181105013)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t4181105013 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (U24ArrayTypeU24640_t2103307604)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t2103307604 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (U24ArrayTypeU24128_t2024244215)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t2024244215 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (U24ArrayTypeU2452_t2122074973)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t2122074973 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (__Il2CppComDelegate_t4093085392), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (U3CModuleU3E_t362192700), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (Locale_t837631046), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (MonoTODOAttribute_t1025793999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable938[1] = 
{
	MonoTODOAttribute_t1025793999::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable939[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable940[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable941[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable942[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable943[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable944[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable945[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (HybridDictionary_t159243856), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable946[3] = 
{
	HybridDictionary_t159243856::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t159243856::get_offset_of_hashtable_1(),
	HybridDictionary_t159243856::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (ListDictionary_t3956992154), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable947[4] = 
{
	ListDictionary_t3956992154::get_offset_of_count_0(),
	ListDictionary_t3956992154::get_offset_of_version_1(),
	ListDictionary_t3956992154::get_offset_of_head_2(),
	ListDictionary_t3956992154::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (DictionaryNode_t2496418494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable948[3] = 
{
	DictionaryNode_t2496418494::get_offset_of_key_0(),
	DictionaryNode_t2496418494::get_offset_of_value_1(),
	DictionaryNode_t2496418494::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (DictionaryNodeEnumerator_t3993951424), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable949[4] = 
{
	DictionaryNodeEnumerator_t3993951424::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t3993951424::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t3993951424::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t3993951424::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (NameObjectCollectionBase_t862134255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable950[10] = 
{
	NameObjectCollectionBase_t862134255::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t862134255::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t862134255::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t862134255::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t862134255::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t862134255::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t862134255::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t862134255::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t862134255::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t862134255::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (_Item_t335709280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable951[2] = 
{
	_Item_t335709280::get_offset_of_key_0(),
	_Item_t335709280::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (_KeysEnumerator_t4091575298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable952[2] = 
{
	_KeysEnumerator_t4091575298::get_offset_of_m_collection_0(),
	_KeysEnumerator_t4091575298::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (KeysCollection_t2581186704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable953[1] = 
{
	KeysCollection_t2581186704::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (NameValueCollection_t2455873298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable954[2] = 
{
	NameValueCollection_t2455873298::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t2455873298::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (ProcessStringDictionary_t1751211098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable955[1] = 
{
	ProcessStringDictionary_t1751211098::get_offset_of_table_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (StringDictionary_t1966841567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable956[1] = 
{
	StringDictionary_t1966841567::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (BrowsableAttribute_t2317782684), -1, sizeof(BrowsableAttribute_t2317782684_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable958[4] = 
{
	BrowsableAttribute_t2317782684::get_offset_of_browsable_0(),
	BrowsableAttribute_t2317782684_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t2317782684_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t2317782684_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (Component_t1558748697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable959[3] = 
{
	Component_t1558748697::get_offset_of_event_handlers_1(),
	Component_t1558748697::get_offset_of_mySite_2(),
	Component_t1558748697::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (DefaultEventAttribute_t714384433), -1, sizeof(DefaultEventAttribute_t714384433_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable960[2] = 
{
	DefaultEventAttribute_t714384433::get_offset_of_eventName_0(),
	DefaultEventAttribute_t714384433_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (DefaultPropertyAttribute_t682962234), -1, sizeof(DefaultPropertyAttribute_t682962234_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable961[2] = 
{
	DefaultPropertyAttribute_t682962234::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t682962234_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (DefaultValueAttribute_t906268516), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable962[1] = 
{
	DefaultValueAttribute_t906268516::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (DescriptionAttribute_t3006605032), -1, sizeof(DescriptionAttribute_t3006605032_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable963[2] = 
{
	DescriptionAttribute_t3006605032::get_offset_of_desc_0(),
	DescriptionAttribute_t3006605032_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (DesignerAttribute_t3516739366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable964[2] = 
{
	DesignerAttribute_t3516739366::get_offset_of_name_0(),
	DesignerAttribute_t3516739366::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (DesignerCategoryAttribute_t2582998632), -1, sizeof(DesignerCategoryAttribute_t2582998632_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable965[5] = 
{
	DesignerCategoryAttribute_t2582998632::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2582998632_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t2582998632_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t2582998632_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t2582998632_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (DesignerSerializationVisibility_t3675864768)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable966[4] = 
{
	DesignerSerializationVisibility_t3675864768::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (DesignerSerializationVisibilityAttribute_t2583522244), -1, sizeof(DesignerSerializationVisibilityAttribute_t2583522244_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable967[5] = 
{
	DesignerSerializationVisibilityAttribute_t2583522244::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t2583522244_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t2583522244_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t2583522244_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t2583522244_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (EditorAttribute_t772357673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable968[2] = 
{
	EditorAttribute_t772357673::get_offset_of_name_0(),
	EditorAttribute_t772357673::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (EditorBrowsableAttribute_t372175112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable969[1] = 
{
	EditorBrowsableAttribute_t372175112::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (EditorBrowsableState_t3342142055)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable970[4] = 
{
	EditorBrowsableState_t3342142055::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (ListEntry_t3304360410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable971[3] = 
{
	ListEntry_t3304360410::get_offset_of_key_0(),
	ListEntry_t3304360410::get_offset_of_value_1(),
	ListEntry_t3304360410::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (EventHandlerList_t414659217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable972[2] = 
{
	EventHandlerList_t414659217::get_offset_of_entries_0(),
	EventHandlerList_t414659217::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (ExpandableObjectConverter_t961633053), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (NotifyParentPropertyAttribute_t2639741777), -1, sizeof(NotifyParentPropertyAttribute_t2639741777_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable977[4] = 
{
	NotifyParentPropertyAttribute_t2639741777::get_offset_of_notifyParent_0(),
	NotifyParentPropertyAttribute_t2639741777_StaticFields::get_offset_of_Default_1(),
	NotifyParentPropertyAttribute_t2639741777_StaticFields::get_offset_of_No_2(),
	NotifyParentPropertyAttribute_t2639741777_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (RecommendedAsConfigurableAttribute_t3905248727), -1, sizeof(RecommendedAsConfigurableAttribute_t3905248727_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable978[4] = 
{
	RecommendedAsConfigurableAttribute_t3905248727::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t3905248727_StaticFields::get_offset_of_Default_1(),
	RecommendedAsConfigurableAttribute_t3905248727_StaticFields::get_offset_of_No_2(),
	RecommendedAsConfigurableAttribute_t3905248727_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (TypeConverter_t3910241372), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (TypeConverterAttribute_t2600377086), -1, sizeof(TypeConverterAttribute_t2600377086_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable980[2] = 
{
	TypeConverterAttribute_t2600377086_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t2600377086::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (Win32Exception_t3199002758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable981[1] = 
{
	Win32Exception_t3199002758::get_offset_of_native_error_code_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (MonitoringDescriptionAttribute_t1754257358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (Process_t870073395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable983[12] = 
{
	Process_t870073395::get_offset_of_process_handle_4(),
	Process_t870073395::get_offset_of_pid_5(),
	Process_t870073395::get_offset_of_stdout_rd_6(),
	Process_t870073395::get_offset_of_stderr_rd_7(),
	Process_t870073395::get_offset_of_process_name_8(),
	Process_t870073395::get_offset_of_error_stream_9(),
	Process_t870073395::get_offset_of_input_stream_10(),
	Process_t870073395::get_offset_of_output_stream_11(),
	Process_t870073395::get_offset_of_start_info_12(),
	Process_t870073395::get_offset_of_async_output_13(),
	Process_t870073395::get_offset_of_async_error_14(),
	Process_t870073395::get_offset_of_disposed_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (ProcInfo_t1276355763)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable984[10] = 
{
	ProcInfo_t1276355763::get_offset_of_process_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_thread_handle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_pid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_tid_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_envKeys_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_envValues_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_UserName_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_Domain_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_Password_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcInfo_t1276355763::get_offset_of_LoadUserProfile_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (ProcessAsyncReader_t2098413257), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[29] = 
{
	ProcessAsyncReader_t2098413257::get_offset_of_Sock_0(),
	ProcessAsyncReader_t2098413257::get_offset_of_handle_1(),
	ProcessAsyncReader_t2098413257::get_offset_of_state_2(),
	ProcessAsyncReader_t2098413257::get_offset_of_callback_3(),
	ProcessAsyncReader_t2098413257::get_offset_of_wait_handle_4(),
	ProcessAsyncReader_t2098413257::get_offset_of_delayedException_5(),
	ProcessAsyncReader_t2098413257::get_offset_of_EndPoint_6(),
	ProcessAsyncReader_t2098413257::get_offset_of_buffer_7(),
	ProcessAsyncReader_t2098413257::get_offset_of_Offset_8(),
	ProcessAsyncReader_t2098413257::get_offset_of_Size_9(),
	ProcessAsyncReader_t2098413257::get_offset_of_SockFlags_10(),
	ProcessAsyncReader_t2098413257::get_offset_of_AcceptSocket_11(),
	ProcessAsyncReader_t2098413257::get_offset_of_Addresses_12(),
	ProcessAsyncReader_t2098413257::get_offset_of_port_13(),
	ProcessAsyncReader_t2098413257::get_offset_of_Buffers_14(),
	ProcessAsyncReader_t2098413257::get_offset_of_ReuseSocket_15(),
	ProcessAsyncReader_t2098413257::get_offset_of_acc_socket_16(),
	ProcessAsyncReader_t2098413257::get_offset_of_total_17(),
	ProcessAsyncReader_t2098413257::get_offset_of_completed_sync_18(),
	ProcessAsyncReader_t2098413257::get_offset_of_completed_19(),
	ProcessAsyncReader_t2098413257::get_offset_of_err_out_20(),
	ProcessAsyncReader_t2098413257::get_offset_of_error_21(),
	ProcessAsyncReader_t2098413257::get_offset_of_operation_22(),
	ProcessAsyncReader_t2098413257::get_offset_of_ares_23(),
	ProcessAsyncReader_t2098413257::get_offset_of_EndCalled_24(),
	ProcessAsyncReader_t2098413257::get_offset_of_process_25(),
	ProcessAsyncReader_t2098413257::get_offset_of_stream_26(),
	ProcessAsyncReader_t2098413257::get_offset_of_sb_27(),
	ProcessAsyncReader_t2098413257::get_offset_of_ReadHandler_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (AsyncReadHandler_t3737433465), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (ProcessStartInfo_t3083383182), -1, sizeof(ProcessStartInfo_t3083383182_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable987[18] = 
{
	ProcessStartInfo_t3083383182::get_offset_of_arguments_0(),
	ProcessStartInfo_t3083383182::get_offset_of_error_dialog_parent_handle_1(),
	ProcessStartInfo_t3083383182::get_offset_of_filename_2(),
	ProcessStartInfo_t3083383182::get_offset_of_verb_3(),
	ProcessStartInfo_t3083383182::get_offset_of_working_directory_4(),
	ProcessStartInfo_t3083383182::get_offset_of_envVars_5(),
	ProcessStartInfo_t3083383182::get_offset_of_error_dialog_6(),
	ProcessStartInfo_t3083383182::get_offset_of_redirect_standard_error_7(),
	ProcessStartInfo_t3083383182::get_offset_of_redirect_standard_input_8(),
	ProcessStartInfo_t3083383182::get_offset_of_redirect_standard_output_9(),
	ProcessStartInfo_t3083383182::get_offset_of_use_shell_execute_10(),
	ProcessStartInfo_t3083383182::get_offset_of_encoding_stderr_11(),
	ProcessStartInfo_t3083383182::get_offset_of_encoding_stdout_12(),
	ProcessStartInfo_t3083383182::get_offset_of_username_13(),
	ProcessStartInfo_t3083383182::get_offset_of_domain_14(),
	ProcessStartInfo_t3083383182::get_offset_of_password_15(),
	ProcessStartInfo_t3083383182::get_offset_of_load_user_profile_16(),
	ProcessStartInfo_t3083383182_StaticFields::get_offset_of_empty_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (Stopwatch_t3568258844), -1, sizeof(Stopwatch_t3568258844_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable988[5] = 
{
	Stopwatch_t3568258844_StaticFields::get_offset_of_Frequency_0(),
	Stopwatch_t3568258844_StaticFields::get_offset_of_IsHighResolution_1(),
	Stopwatch_t3568258844::get_offset_of_elapsed_2(),
	Stopwatch_t3568258844::get_offset_of_started_3(),
	Stopwatch_t3568258844::get_offset_of_is_running_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (MonoIO_t4111703439), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (MonoIOError_t3073323527)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable990[1783] = 
{
	MonoIOError_t3073323527::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (MonoSyncFileStream_t4263849998), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (WriteDelegate_t4048413980), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (ReadDelegate_t241897629), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (AuthenticationLevel_t937717610)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable994[4] = 
{
	AuthenticationLevel_t937717610::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (SslPolicyErrors_t2492245300)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable995[5] = 
{
	SslPolicyErrors_t2492245300::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (AddressFamily_t3649001497)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable996[32] = 
{
	AddressFamily_t3649001497::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (LingerOption_t1449939976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable997[2] = 
{
	LingerOption_t1449939976::get_offset_of_enabled_0(),
	LingerOption_t1449939976::get_offset_of_seconds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (MulticastOption_t2090166207), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (NetworkStream_t1859946661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable999[6] = 
{
	NetworkStream_t1859946661::get_offset_of_access_1(),
	NetworkStream_t1859946661::get_offset_of_socket_2(),
	NetworkStream_t1859946661::get_offset_of_owns_socket_3(),
	NetworkStream_t1859946661::get_offset_of_readable_4(),
	NetworkStream_t1859946661::get_offset_of_writeable_5(),
	NetworkStream_t1859946661::get_offset_of_disposed_6(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
