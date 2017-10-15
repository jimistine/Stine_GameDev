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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t997539053;
// System.Char[]
struct CharU5BU5D_t603392009;
// System.Byte
struct Byte_t2326303735;
// System.Double
struct Double_t3785027392;
// System.UInt16
struct UInt16_t4127907269;

extern RuntimeClass* StringU5BU5D_t997539053_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2019582653;
extern Il2CppCodeGenString* _stringLiteral1209274546;
extern Il2CppCodeGenString* _stringLiteral3754910828;
extern const uint32_t KeyValuePair_2_ToString_m1296333444_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1987860646_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3207834531_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3379074894_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2962120851_MetadataUsageId;

struct StringU5BU5D_t997539053;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t603392009* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t603392009* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t603392009** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t603392009* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T904683866_H
#define VALUETYPE_T904683866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t904683866  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t904683866_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t904683866_marshaled_com
{
};
#endif // VALUETYPE_T904683866_H
#ifndef KEYVALUEPAIR_2_T1386568515_H
#define KEYVALUEPAIR_2_T1386568515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>
struct  KeyValuePair_2_t1386568515 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1386568515, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1386568515, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1386568515_H
#ifndef VOID_T2473149670_H
#define VOID_T2473149670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2473149670 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2473149670_H
#ifndef INT32_T2282972494_H
#define INT32_T2282972494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2282972494 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2282972494, ___m_value_2)); }
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
#endif // INT32_T2282972494_H
#ifndef BOOLEAN_T1313237757_H
#define BOOLEAN_T1313237757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1313237757 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1313237757, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1313237757_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1313237757_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1313237757_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1313237757_H
#ifndef KEYVALUEPAIR_2_T2110968542_H
#define KEYVALUEPAIR_2_T2110968542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>
struct  KeyValuePair_2_t2110968542 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2110968542, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2110968542, ___value_1)); }
	inline Il2CppChar get_value_1() const { return ___value_1; }
	inline Il2CppChar* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppChar value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2110968542_H
#ifndef CHAR_T2037637784_H
#define CHAR_T2037637784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2037637784 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2037637784, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2037637784_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2037637784_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2037637784_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2037637784_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2037637784_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2037637784_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2037637784_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2037637784_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2037637784_H
#ifndef KEYVALUEPAIR_2_T2356303252_H
#define KEYVALUEPAIR_2_T2356303252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t2356303252 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2356303252, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2356303252, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2356303252_H
#ifndef KEYVALUEPAIR_2_T3686343841_H
#define KEYVALUEPAIR_2_T3686343841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>
struct  KeyValuePair_2_t3686343841 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3686343841, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3686343841, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3686343841_H
#ifndef INT64_T3613013083_H
#define INT64_T3613013083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3613013083 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3613013083, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3613013083_H
#ifndef KEYVALUEPAIR_2_T2191897842_H
#define KEYVALUEPAIR_2_T2191897842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t2191897842 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2191897842, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2191897842, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2191897842_H
// System.String[]
struct StringU5BU5D_t997539053  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1666037107_gshared (KeyValuePair_2_t1386568515 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2394867705_gshared (KeyValuePair_2_t1386568515 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3797884856_gshared (KeyValuePair_2_t1386568515 * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1173788535_gshared (KeyValuePair_2_t1386568515 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m606104828_gshared (KeyValuePair_2_t1386568515 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1296333444_gshared (KeyValuePair_2_t1386568515 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1579018778_gshared (KeyValuePair_2_t2110968542 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1507520100_gshared (KeyValuePair_2_t2110968542 * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3826791645_gshared (KeyValuePair_2_t2110968542 * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2383472142_gshared (KeyValuePair_2_t2110968542 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m2452537270_gshared (KeyValuePair_2_t2110968542 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1987860646_gshared (KeyValuePair_2_t2110968542 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3650311455_gshared (KeyValuePair_2_t2356303252 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1278978267_gshared (KeyValuePair_2_t2356303252 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3289306590_gshared (KeyValuePair_2_t2356303252 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1889911823_gshared (KeyValuePair_2_t2356303252 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m265728404_gshared (KeyValuePair_2_t2356303252 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3207834531_gshared (KeyValuePair_2_t2356303252 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1387196081_gshared (KeyValuePair_2_t3686343841 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1918296966_gshared (KeyValuePair_2_t3686343841 * __this, int64_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m839338531_gshared (KeyValuePair_2_t3686343841 * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m888724374_gshared (KeyValuePair_2_t3686343841 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m2780174651_gshared (KeyValuePair_2_t3686343841 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3379074894_gshared (KeyValuePair_2_t3686343841 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2319571772_gshared (KeyValuePair_2_t2191897842 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m326712260_gshared (KeyValuePair_2_t2191897842 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m983041770_gshared (KeyValuePair_2_t2191897842 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1965457031_gshared (KeyValuePair_2_t2191897842 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m128709546_gshared (KeyValuePair_2_t2191897842 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2962120851_gshared (KeyValuePair_2_t2191897842 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1666037107(__this, p0, method) ((  void (*) (KeyValuePair_2_t1386568515 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1666037107_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2394867705(__this, p0, method) ((  void (*) (KeyValuePair_2_t1386568515 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m2394867705_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3797884856(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1386568515 *, int32_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m3797884856_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m1173788535(__this, method) ((  int32_t (*) (KeyValuePair_2_t1386568515 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1173788535_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m606104828(__this, method) ((  bool (*) (KeyValuePair_2_t1386568515 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m606104828_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2972703248 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m3350422316 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m238576544 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t997539053* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m1296333444(__this, method) ((  String_t* (*) (KeyValuePair_2_t1386568515 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1296333444_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1579018778(__this, p0, method) ((  void (*) (KeyValuePair_2_t2110968542 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1579018778_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1507520100(__this, p0, method) ((  void (*) (KeyValuePair_2_t2110968542 *, Il2CppChar, const RuntimeMethod*))KeyValuePair_2_set_Value_m1507520100_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3826791645(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2110968542 *, int32_t, Il2CppChar, const RuntimeMethod*))KeyValuePair_2__ctor_m3826791645_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
#define KeyValuePair_2_get_Key_m2383472142(__this, method) ((  int32_t (*) (KeyValuePair_2_t2110968542 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2383472142_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
#define KeyValuePair_2_get_Value_m2452537270(__this, method) ((  Il2CppChar (*) (KeyValuePair_2_t2110968542 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2452537270_gshared)(__this, method)
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m2376675208 (Il2CppChar* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
#define KeyValuePair_2_ToString_m1987860646(__this, method) ((  String_t* (*) (KeyValuePair_2_t2110968542 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1987860646_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3650311455(__this, p0, method) ((  void (*) (KeyValuePair_2_t2356303252 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3650311455_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1278978267(__this, p0, method) ((  void (*) (KeyValuePair_2_t2356303252 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m1278978267_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3289306590(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2356303252 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3289306590_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m1889911823(__this, method) ((  int32_t (*) (KeyValuePair_2_t2356303252 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1889911823_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m265728404(__this, method) ((  int32_t (*) (KeyValuePair_2_t2356303252 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m265728404_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m3207834531(__this, method) ((  String_t* (*) (KeyValuePair_2_t2356303252 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3207834531_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1387196081(__this, p0, method) ((  void (*) (KeyValuePair_2_t3686343841 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1387196081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1918296966(__this, p0, method) ((  void (*) (KeyValuePair_2_t3686343841 *, int64_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m1918296966_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m839338531(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3686343841 *, int32_t, int64_t, const RuntimeMethod*))KeyValuePair_2__ctor_m839338531_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
#define KeyValuePair_2_get_Key_m888724374(__this, method) ((  int32_t (*) (KeyValuePair_2_t3686343841 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m888724374_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
#define KeyValuePair_2_get_Value_m2780174651(__this, method) ((  int64_t (*) (KeyValuePair_2_t3686343841 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2780174651_gshared)(__this, method)
// System.String System.Int64::ToString()
extern "C"  String_t* Int64_ToString_m1029863752 (int64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
#define KeyValuePair_2_ToString_m3379074894(__this, method) ((  String_t* (*) (KeyValuePair_2_t3686343841 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3379074894_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2319571772(__this, p0, method) ((  void (*) (KeyValuePair_2_t2191897842 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2319571772_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m326712260(__this, p0, method) ((  void (*) (KeyValuePair_2_t2191897842 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m326712260_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m983041770(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2191897842 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m983041770_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1965457031(__this, method) ((  int32_t (*) (KeyValuePair_2_t2191897842 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1965457031_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m128709546(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2191897842 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m128709546_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2962120851(__this, method) ((  String_t* (*) (KeyValuePair_2_t2191897842 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2962120851_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3797884856_gshared (KeyValuePair_2_t1386568515 * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1666037107((KeyValuePair_2_t1386568515 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m2394867705((KeyValuePair_2_t1386568515 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3797884856_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1386568515 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1386568515 *>(__this + 1);
	KeyValuePair_2__ctor_m3797884856(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1173788535_gshared (KeyValuePair_2_t1386568515 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1173788535_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1386568515 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1386568515 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1173788535(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1666037107_gshared (KeyValuePair_2_t1386568515 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1666037107_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1386568515 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1386568515 *>(__this + 1);
	KeyValuePair_2_set_Key_m1666037107(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m606104828_gshared (KeyValuePair_2_t1386568515 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m606104828_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1386568515 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1386568515 *>(__this + 1);
	return KeyValuePair_2_get_Value_m606104828(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2394867705_gshared (KeyValuePair_2_t1386568515 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2394867705_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1386568515 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1386568515 *>(__this + 1);
	KeyValuePair_2_set_Value_m2394867705(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1296333444_gshared (KeyValuePair_2_t1386568515 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1296333444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t997539053* G_B2_1 = NULL;
	StringU5BU5D_t997539053* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t997539053* G_B1_1 = NULL;
	StringU5BU5D_t997539053* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t997539053* G_B3_2 = NULL;
	StringU5BU5D_t997539053* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t997539053* G_B5_1 = NULL;
	StringU5BU5D_t997539053* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t997539053* G_B4_1 = NULL;
	StringU5BU5D_t997539053* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t997539053* G_B6_2 = NULL;
	StringU5BU5D_t997539053* G_B6_3 = NULL;
	{
		StringU5BU5D_t997539053* L_0 = (StringU5BU5D_t997539053*)((StringU5BU5D_t997539053*)SZArrayNew(StringU5BU5D_t997539053_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral2019582653);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2019582653);
		StringU5BU5D_t997539053* L_1 = (StringU5BU5D_t997539053*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1173788535((KeyValuePair_2_t1386568515 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1173788535((KeyValuePair_2_t1386568515 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2972703248((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t997539053* L_6 = (StringU5BU5D_t997539053*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1209274546);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1209274546);
		StringU5BU5D_t997539053* L_7 = (StringU5BU5D_t997539053*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m606104828((KeyValuePair_2_t1386568515 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m606104828((KeyValuePair_2_t1386568515 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m3350422316((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t997539053* L_12 = (StringU5BU5D_t997539053*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3754910828);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3754910828);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m238576544(NULL /*static, unused*/, (StringU5BU5D_t997539053*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1296333444_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1386568515 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1386568515 *>(__this + 1);
	return KeyValuePair_2_ToString_m1296333444(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3826791645_gshared (KeyValuePair_2_t2110968542 * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1579018778((KeyValuePair_2_t2110968542 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppChar L_1 = ___value1;
		KeyValuePair_2_set_Value_m1507520100((KeyValuePair_2_t2110968542 *)__this, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3826791645_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2110968542 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2110968542 *>(__this + 1);
	KeyValuePair_2__ctor_m3826791645(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2383472142_gshared (KeyValuePair_2_t2110968542 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2383472142_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2110968542 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2110968542 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2383472142(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1579018778_gshared (KeyValuePair_2_t2110968542 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1579018778_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2110968542 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2110968542 *>(__this + 1);
	KeyValuePair_2_set_Key_m1579018778(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m2452537270_gshared (KeyValuePair_2_t2110968542 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_value_1();
		return L_0;
	}
}
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m2452537270_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2110968542 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2110968542 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2452537270(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1507520100_gshared (KeyValuePair_2_t2110968542 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1507520100_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2110968542 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2110968542 *>(__this + 1);
	KeyValuePair_2_set_Value_m1507520100(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1987860646_gshared (KeyValuePair_2_t2110968542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1987860646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t997539053* G_B2_1 = NULL;
	StringU5BU5D_t997539053* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t997539053* G_B1_1 = NULL;
	StringU5BU5D_t997539053* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t997539053* G_B3_2 = NULL;
	StringU5BU5D_t997539053* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t997539053* G_B5_1 = NULL;
	StringU5BU5D_t997539053* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t997539053* G_B4_1 = NULL;
	StringU5BU5D_t997539053* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t997539053* G_B6_2 = NULL;
	StringU5BU5D_t997539053* G_B6_3 = NULL;
	{
		StringU5BU5D_t997539053* L_0 = (StringU5BU5D_t997539053*)((StringU5BU5D_t997539053*)SZArrayNew(StringU5BU5D_t997539053_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral2019582653);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2019582653);
		StringU5BU5D_t997539053* L_1 = (StringU5BU5D_t997539053*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2383472142((KeyValuePair_2_t2110968542 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2383472142((KeyValuePair_2_t2110968542 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2972703248((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t997539053* L_6 = (StringU5BU5D_t997539053*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1209274546);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1209274546);
		StringU5BU5D_t997539053* L_7 = (StringU5BU5D_t997539053*)L_6;
		Il2CppChar L_8 = KeyValuePair_2_get_Value_m2452537270((KeyValuePair_2_t2110968542 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		Il2CppChar L_9 = KeyValuePair_2_get_Value_m2452537270((KeyValuePair_2_t2110968542 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppChar)L_9;
		String_t* L_10 = Char_ToString_m2376675208((Il2CppChar*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t997539053* L_12 = (StringU5BU5D_t997539053*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3754910828);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3754910828);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m238576544(NULL /*static, unused*/, (StringU5BU5D_t997539053*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1987860646_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2110968542 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2110968542 *>(__this + 1);
	return KeyValuePair_2_ToString_m1987860646(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3289306590_gshared (KeyValuePair_2_t2356303252 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3650311455((KeyValuePair_2_t2356303252 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m1278978267((KeyValuePair_2_t2356303252 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3289306590_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2356303252 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2356303252 *>(__this + 1);
	KeyValuePair_2__ctor_m3289306590(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1889911823_gshared (KeyValuePair_2_t2356303252 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1889911823_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2356303252 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2356303252 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1889911823(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3650311455_gshared (KeyValuePair_2_t2356303252 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3650311455_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2356303252 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2356303252 *>(__this + 1);
	KeyValuePair_2_set_Key_m3650311455(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m265728404_gshared (KeyValuePair_2_t2356303252 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m265728404_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2356303252 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2356303252 *>(__this + 1);
	return KeyValuePair_2_get_Value_m265728404(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1278978267_gshared (KeyValuePair_2_t2356303252 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1278978267_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2356303252 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2356303252 *>(__this + 1);
	KeyValuePair_2_set_Value_m1278978267(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3207834531_gshared (KeyValuePair_2_t2356303252 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3207834531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t997539053* G_B2_1 = NULL;
	StringU5BU5D_t997539053* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t997539053* G_B1_1 = NULL;
	StringU5BU5D_t997539053* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t997539053* G_B3_2 = NULL;
	StringU5BU5D_t997539053* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t997539053* G_B5_1 = NULL;
	StringU5BU5D_t997539053* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t997539053* G_B4_1 = NULL;
	StringU5BU5D_t997539053* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t997539053* G_B6_2 = NULL;
	StringU5BU5D_t997539053* G_B6_3 = NULL;
	{
		StringU5BU5D_t997539053* L_0 = (StringU5BU5D_t997539053*)((StringU5BU5D_t997539053*)SZArrayNew(StringU5BU5D_t997539053_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral2019582653);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2019582653);
		StringU5BU5D_t997539053* L_1 = (StringU5BU5D_t997539053*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1889911823((KeyValuePair_2_t2356303252 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1889911823((KeyValuePair_2_t2356303252 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2972703248((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t997539053* L_6 = (StringU5BU5D_t997539053*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1209274546);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1209274546);
		StringU5BU5D_t997539053* L_7 = (StringU5BU5D_t997539053*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m265728404((KeyValuePair_2_t2356303252 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m265728404((KeyValuePair_2_t2356303252 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m2972703248((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t997539053* L_12 = (StringU5BU5D_t997539053*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3754910828);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3754910828);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m238576544(NULL /*static, unused*/, (StringU5BU5D_t997539053*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3207834531_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2356303252 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2356303252 *>(__this + 1);
	return KeyValuePair_2_ToString_m3207834531(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m839338531_gshared (KeyValuePair_2_t3686343841 * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1387196081((KeyValuePair_2_t3686343841 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m1918296966((KeyValuePair_2_t3686343841 *)__this, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m839338531_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3686343841 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3686343841 *>(__this + 1);
	KeyValuePair_2__ctor_m839338531(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m888724374_gshared (KeyValuePair_2_t3686343841 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m888724374_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3686343841 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3686343841 *>(__this + 1);
	return KeyValuePair_2_get_Key_m888724374(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1387196081_gshared (KeyValuePair_2_t3686343841 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1387196081_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3686343841 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3686343841 *>(__this + 1);
	KeyValuePair_2_set_Key_m1387196081(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m2780174651_gshared (KeyValuePair_2_t3686343841 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int64_t KeyValuePair_2_get_Value_m2780174651_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3686343841 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3686343841 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2780174651(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1918296966_gshared (KeyValuePair_2_t3686343841 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1918296966_AdjustorThunk (RuntimeObject * __this, int64_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3686343841 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3686343841 *>(__this + 1);
	KeyValuePair_2_set_Value_m1918296966(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3379074894_gshared (KeyValuePair_2_t3686343841 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3379074894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t997539053* G_B2_1 = NULL;
	StringU5BU5D_t997539053* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t997539053* G_B1_1 = NULL;
	StringU5BU5D_t997539053* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t997539053* G_B3_2 = NULL;
	StringU5BU5D_t997539053* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t997539053* G_B5_1 = NULL;
	StringU5BU5D_t997539053* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t997539053* G_B4_1 = NULL;
	StringU5BU5D_t997539053* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t997539053* G_B6_2 = NULL;
	StringU5BU5D_t997539053* G_B6_3 = NULL;
	{
		StringU5BU5D_t997539053* L_0 = (StringU5BU5D_t997539053*)((StringU5BU5D_t997539053*)SZArrayNew(StringU5BU5D_t997539053_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral2019582653);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2019582653);
		StringU5BU5D_t997539053* L_1 = (StringU5BU5D_t997539053*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m888724374((KeyValuePair_2_t3686343841 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m888724374((KeyValuePair_2_t3686343841 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2972703248((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t997539053* L_6 = (StringU5BU5D_t997539053*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1209274546);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1209274546);
		StringU5BU5D_t997539053* L_7 = (StringU5BU5D_t997539053*)L_6;
		int64_t L_8 = KeyValuePair_2_get_Value_m2780174651((KeyValuePair_2_t3686343841 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int64_t L_9 = KeyValuePair_2_get_Value_m2780174651((KeyValuePair_2_t3686343841 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int64_t)L_9;
		String_t* L_10 = Int64_ToString_m1029863752((int64_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t997539053* L_12 = (StringU5BU5D_t997539053*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3754910828);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3754910828);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m238576544(NULL /*static, unused*/, (StringU5BU5D_t997539053*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3379074894_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3686343841 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3686343841 *>(__this + 1);
	return KeyValuePair_2_ToString_m3379074894(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m983041770_gshared (KeyValuePair_2_t2191897842 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2319571772((KeyValuePair_2_t2191897842 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m326712260((KeyValuePair_2_t2191897842 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m983041770_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2191897842 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2191897842 *>(__this + 1);
	KeyValuePair_2__ctor_m983041770(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1965457031_gshared (KeyValuePair_2_t2191897842 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1965457031_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2191897842 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2191897842 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1965457031(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2319571772_gshared (KeyValuePair_2_t2191897842 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2319571772_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2191897842 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2191897842 *>(__this + 1);
	KeyValuePair_2_set_Key_m2319571772(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m128709546_gshared (KeyValuePair_2_t2191897842 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m128709546_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2191897842 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2191897842 *>(__this + 1);
	return KeyValuePair_2_get_Value_m128709546(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m326712260_gshared (KeyValuePair_2_t2191897842 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m326712260_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2191897842 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2191897842 *>(__this + 1);
	KeyValuePair_2_set_Value_m326712260(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2962120851_gshared (KeyValuePair_2_t2191897842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2962120851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t997539053* G_B2_1 = NULL;
	StringU5BU5D_t997539053* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t997539053* G_B1_1 = NULL;
	StringU5BU5D_t997539053* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t997539053* G_B3_2 = NULL;
	StringU5BU5D_t997539053* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t997539053* G_B5_1 = NULL;
	StringU5BU5D_t997539053* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t997539053* G_B4_1 = NULL;
	StringU5BU5D_t997539053* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t997539053* G_B6_2 = NULL;
	StringU5BU5D_t997539053* G_B6_3 = NULL;
	{
		StringU5BU5D_t997539053* L_0 = (StringU5BU5D_t997539053*)((StringU5BU5D_t997539053*)SZArrayNew(StringU5BU5D_t997539053_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral2019582653);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2019582653);
		StringU5BU5D_t997539053* L_1 = (StringU5BU5D_t997539053*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1965457031((KeyValuePair_2_t2191897842 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1965457031((KeyValuePair_2_t2191897842 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2972703248((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t997539053* L_6 = (StringU5BU5D_t997539053*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral1209274546);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1209274546);
		StringU5BU5D_t997539053* L_7 = (StringU5BU5D_t997539053*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m128709546((KeyValuePair_2_t2191897842 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m128709546((KeyValuePair_2_t2191897842 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t997539053* L_12 = (StringU5BU5D_t997539053*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3754910828);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3754910828);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m238576544(NULL /*static, unused*/, (StringU5BU5D_t997539053*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2962120851_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2191897842 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2191897842 *>(__this + 1);
	return KeyValuePair_2_ToString_m2962120851(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
