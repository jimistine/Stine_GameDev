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
struct StringU5BU5D_t2550470410;
// System.Char[]
struct CharU5BU5D_t1268306014;
// System.Byte
struct Byte_t489695996;
// System.Double
struct Double_t1082496331;
// System.UInt16
struct UInt16_t4035844960;

extern RuntimeClass* StringU5BU5D_t2550470410_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1314655333;
extern Il2CppCodeGenString* _stringLiteral4050357712;
extern Il2CppCodeGenString* _stringLiteral2259873118;
extern const uint32_t KeyValuePair_2_ToString_m2334610184_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m4165970907_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2369878307_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3623030466_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2019861118_MetadataUsageId;

struct StringU5BU5D_t2550470410;


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
	CharU5BU5D_t1268306014* ___WhiteChars_3;

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
	inline CharU5BU5D_t1268306014* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1268306014** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1268306014* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T168676301_H
#define VALUETYPE_T168676301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t168676301  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t168676301_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t168676301_marshaled_com
{
};
#endif // VALUETYPE_T168676301_H
#ifndef KEYVALUEPAIR_2_T979537489_H
#define KEYVALUEPAIR_2_T979537489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>
struct  KeyValuePair_2_t979537489 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t979537489, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t979537489, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T979537489_H
#ifndef VOID_T184965669_H
#define VOID_T184965669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t184965669 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T184965669_H
#ifndef INT32_T1770878656_H
#define INT32_T1770878656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1770878656 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1770878656, ___m_value_2)); }
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
#endif // INT32_T1770878656_H
#ifndef BOOLEAN_T1488671009_H
#define BOOLEAN_T1488671009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1488671009 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1488671009, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1488671009_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1488671009_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1488671009_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T1488671009_H
#ifndef KEYVALUEPAIR_2_T1401851991_H
#define KEYVALUEPAIR_2_T1401851991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>
struct  KeyValuePair_2_t1401851991 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1401851991, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1401851991, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1401851991_H
#ifndef CHAR_T1910985511_H
#define CHAR_T1910985511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t1910985511 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t1910985511, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t1910985511_StaticFields
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
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t1910985511_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t1910985511_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t1910985511_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t1910985511_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t1910985511_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t1910985511_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t1910985511_StaticFields, ___to_upper_data_high_9)); }
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
#endif // CHAR_T1910985511_H
#ifndef KEYVALUEPAIR_2_T1261745136_H
#define KEYVALUEPAIR_2_T1261745136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t1261745136 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1261745136, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1261745136, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1261745136_H
#ifndef KEYVALUEPAIR_2_T103350551_H
#define KEYVALUEPAIR_2_T103350551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>
struct  KeyValuePair_2_t103350551 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t103350551, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t103350551, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T103350551_H
#ifndef INT64_T612484071_H
#define INT64_T612484071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t612484071 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t612484071, ___m_value_0)); }
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
#endif // INT64_T612484071_H
#ifndef KEYVALUEPAIR_2_T1816946575_H
#define KEYVALUEPAIR_2_T1816946575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t1816946575 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1816946575, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1816946575, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1816946575_H
// System.String[]
struct StringU5BU5D_t2550470410  : public RuntimeArray
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
extern "C"  void KeyValuePair_2_set_Key_m614356796_gshared (KeyValuePair_2_t979537489 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m707675120_gshared (KeyValuePair_2_t979537489 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3403842238_gshared (KeyValuePair_2_t979537489 * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3238563731_gshared (KeyValuePair_2_t979537489 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m4002705762_gshared (KeyValuePair_2_t979537489 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2334610184_gshared (KeyValuePair_2_t979537489 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1613412638_gshared (KeyValuePair_2_t1401851991 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1437482612_gshared (KeyValuePair_2_t1401851991 * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2163547670_gshared (KeyValuePair_2_t1401851991 * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3762654862_gshared (KeyValuePair_2_t1401851991 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m1819233358_gshared (KeyValuePair_2_t1401851991 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4165970907_gshared (KeyValuePair_2_t1401851991 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2549808137_gshared (KeyValuePair_2_t1261745136 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3246840833_gshared (KeyValuePair_2_t1261745136 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m707085696_gshared (KeyValuePair_2_t1261745136 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3824457325_gshared (KeyValuePair_2_t1261745136 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3919573732_gshared (KeyValuePair_2_t1261745136 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2369878307_gshared (KeyValuePair_2_t1261745136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3670076898_gshared (KeyValuePair_2_t103350551 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4025597409_gshared (KeyValuePair_2_t103350551 * __this, int64_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2179544689_gshared (KeyValuePair_2_t103350551 * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m119114649_gshared (KeyValuePair_2_t103350551 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m3410568077_gshared (KeyValuePair_2_t103350551 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3623030466_gshared (KeyValuePair_2_t103350551 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3975025253_gshared (KeyValuePair_2_t1816946575 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3482942003_gshared (KeyValuePair_2_t1816946575 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3635544920_gshared (KeyValuePair_2_t1816946575 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2512137185_gshared (KeyValuePair_2_t1816946575 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2726084051_gshared (KeyValuePair_2_t1816946575 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2019861118_gshared (KeyValuePair_2_t1816946575 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m614356796(__this, p0, method) ((  void (*) (KeyValuePair_2_t979537489 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m614356796_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m707675120(__this, p0, method) ((  void (*) (KeyValuePair_2_t979537489 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m707675120_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3403842238(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t979537489 *, int32_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m3403842238_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m3238563731(__this, method) ((  int32_t (*) (KeyValuePair_2_t979537489 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3238563731_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m4002705762(__this, method) ((  bool (*) (KeyValuePair_2_t979537489 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4002705762_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m3726548515 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m1300762653 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m3502885115 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t2550470410* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m2334610184(__this, method) ((  String_t* (*) (KeyValuePair_2_t979537489 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2334610184_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1613412638(__this, p0, method) ((  void (*) (KeyValuePair_2_t1401851991 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1613412638_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1437482612(__this, p0, method) ((  void (*) (KeyValuePair_2_t1401851991 *, Il2CppChar, const RuntimeMethod*))KeyValuePair_2_set_Value_m1437482612_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2163547670(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1401851991 *, int32_t, Il2CppChar, const RuntimeMethod*))KeyValuePair_2__ctor_m2163547670_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
#define KeyValuePair_2_get_Key_m3762654862(__this, method) ((  int32_t (*) (KeyValuePair_2_t1401851991 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3762654862_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
#define KeyValuePair_2_get_Value_m1819233358(__this, method) ((  Il2CppChar (*) (KeyValuePair_2_t1401851991 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1819233358_gshared)(__this, method)
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m682522469 (Il2CppChar* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
#define KeyValuePair_2_ToString_m4165970907(__this, method) ((  String_t* (*) (KeyValuePair_2_t1401851991 *, const RuntimeMethod*))KeyValuePair_2_ToString_m4165970907_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2549808137(__this, p0, method) ((  void (*) (KeyValuePair_2_t1261745136 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2549808137_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3246840833(__this, p0, method) ((  void (*) (KeyValuePair_2_t1261745136 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m3246840833_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m707085696(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1261745136 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m707085696_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m3824457325(__this, method) ((  int32_t (*) (KeyValuePair_2_t1261745136 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3824457325_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m3919573732(__this, method) ((  int32_t (*) (KeyValuePair_2_t1261745136 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3919573732_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m2369878307(__this, method) ((  String_t* (*) (KeyValuePair_2_t1261745136 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2369878307_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3670076898(__this, p0, method) ((  void (*) (KeyValuePair_2_t103350551 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3670076898_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4025597409(__this, p0, method) ((  void (*) (KeyValuePair_2_t103350551 *, int64_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m4025597409_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2179544689(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t103350551 *, int32_t, int64_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2179544689_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
#define KeyValuePair_2_get_Key_m119114649(__this, method) ((  int32_t (*) (KeyValuePair_2_t103350551 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m119114649_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
#define KeyValuePair_2_get_Value_m3410568077(__this, method) ((  int64_t (*) (KeyValuePair_2_t103350551 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3410568077_gshared)(__this, method)
// System.String System.Int64::ToString()
extern "C"  String_t* Int64_ToString_m3453873107 (int64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
#define KeyValuePair_2_ToString_m3623030466(__this, method) ((  String_t* (*) (KeyValuePair_2_t103350551 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3623030466_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3975025253(__this, p0, method) ((  void (*) (KeyValuePair_2_t1816946575 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3975025253_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3482942003(__this, p0, method) ((  void (*) (KeyValuePair_2_t1816946575 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3482942003_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3635544920(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1816946575 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3635544920_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2512137185(__this, method) ((  int32_t (*) (KeyValuePair_2_t1816946575 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2512137185_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2726084051(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1816946575 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2726084051_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2019861118(__this, method) ((  String_t* (*) (KeyValuePair_2_t1816946575 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2019861118_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3403842238_gshared (KeyValuePair_2_t979537489 * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m614356796((KeyValuePair_2_t979537489 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m707675120((KeyValuePair_2_t979537489 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3403842238_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t979537489 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t979537489 *>(__this + 1);
	KeyValuePair_2__ctor_m3403842238(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3238563731_gshared (KeyValuePair_2_t979537489 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3238563731_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t979537489 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t979537489 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3238563731(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m614356796_gshared (KeyValuePair_2_t979537489 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m614356796_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t979537489 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t979537489 *>(__this + 1);
	KeyValuePair_2_set_Key_m614356796(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m4002705762_gshared (KeyValuePair_2_t979537489 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m4002705762_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t979537489 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t979537489 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4002705762(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m707675120_gshared (KeyValuePair_2_t979537489 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m707675120_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t979537489 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t979537489 *>(__this + 1);
	KeyValuePair_2_set_Value_m707675120(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2334610184_gshared (KeyValuePair_2_t979537489 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2334610184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2550470410* G_B2_1 = NULL;
	StringU5BU5D_t2550470410* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2550470410* G_B1_1 = NULL;
	StringU5BU5D_t2550470410* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2550470410* G_B3_2 = NULL;
	StringU5BU5D_t2550470410* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2550470410* G_B5_1 = NULL;
	StringU5BU5D_t2550470410* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2550470410* G_B4_1 = NULL;
	StringU5BU5D_t2550470410* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2550470410* G_B6_2 = NULL;
	StringU5BU5D_t2550470410* G_B6_3 = NULL;
	{
		StringU5BU5D_t2550470410* L_0 = (StringU5BU5D_t2550470410*)((StringU5BU5D_t2550470410*)SZArrayNew(StringU5BU5D_t2550470410_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1314655333);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1314655333);
		StringU5BU5D_t2550470410* L_1 = (StringU5BU5D_t2550470410*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m3238563731((KeyValuePair_2_t979537489 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m3238563731((KeyValuePair_2_t979537489 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3726548515((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_6 = (StringU5BU5D_t2550470410*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral4050357712);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4050357712);
		StringU5BU5D_t2550470410* L_7 = (StringU5BU5D_t2550470410*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m4002705762((KeyValuePair_2_t979537489 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m4002705762((KeyValuePair_2_t979537489 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m1300762653((bool*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_12 = (StringU5BU5D_t2550470410*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral2259873118);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2259873118);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3502885115(NULL /*static, unused*/, (StringU5BU5D_t2550470410*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2334610184_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t979537489 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t979537489 *>(__this + 1);
	return KeyValuePair_2_ToString_m2334610184(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2163547670_gshared (KeyValuePair_2_t1401851991 * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1613412638((KeyValuePair_2_t1401851991 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppChar L_1 = ___value1;
		KeyValuePair_2_set_Value_m1437482612((KeyValuePair_2_t1401851991 *)__this, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2163547670_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1401851991 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1401851991 *>(__this + 1);
	KeyValuePair_2__ctor_m2163547670(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3762654862_gshared (KeyValuePair_2_t1401851991 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3762654862_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1401851991 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1401851991 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3762654862(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1613412638_gshared (KeyValuePair_2_t1401851991 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1613412638_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1401851991 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1401851991 *>(__this + 1);
	KeyValuePair_2_set_Key_m1613412638(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m1819233358_gshared (KeyValuePair_2_t1401851991 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_value_1();
		return L_0;
	}
}
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m1819233358_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1401851991 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1401851991 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1819233358(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1437482612_gshared (KeyValuePair_2_t1401851991 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1437482612_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1401851991 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1401851991 *>(__this + 1);
	KeyValuePair_2_set_Value_m1437482612(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4165970907_gshared (KeyValuePair_2_t1401851991 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4165970907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2550470410* G_B2_1 = NULL;
	StringU5BU5D_t2550470410* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2550470410* G_B1_1 = NULL;
	StringU5BU5D_t2550470410* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2550470410* G_B3_2 = NULL;
	StringU5BU5D_t2550470410* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2550470410* G_B5_1 = NULL;
	StringU5BU5D_t2550470410* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2550470410* G_B4_1 = NULL;
	StringU5BU5D_t2550470410* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2550470410* G_B6_2 = NULL;
	StringU5BU5D_t2550470410* G_B6_3 = NULL;
	{
		StringU5BU5D_t2550470410* L_0 = (StringU5BU5D_t2550470410*)((StringU5BU5D_t2550470410*)SZArrayNew(StringU5BU5D_t2550470410_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1314655333);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1314655333);
		StringU5BU5D_t2550470410* L_1 = (StringU5BU5D_t2550470410*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m3762654862((KeyValuePair_2_t1401851991 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m3762654862((KeyValuePair_2_t1401851991 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3726548515((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_6 = (StringU5BU5D_t2550470410*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral4050357712);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4050357712);
		StringU5BU5D_t2550470410* L_7 = (StringU5BU5D_t2550470410*)L_6;
		Il2CppChar L_8 = KeyValuePair_2_get_Value_m1819233358((KeyValuePair_2_t1401851991 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		Il2CppChar L_9 = KeyValuePair_2_get_Value_m1819233358((KeyValuePair_2_t1401851991 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppChar)L_9;
		String_t* L_10 = Char_ToString_m682522469((Il2CppChar*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_12 = (StringU5BU5D_t2550470410*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral2259873118);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2259873118);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3502885115(NULL /*static, unused*/, (StringU5BU5D_t2550470410*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4165970907_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1401851991 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1401851991 *>(__this + 1);
	return KeyValuePair_2_ToString_m4165970907(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m707085696_gshared (KeyValuePair_2_t1261745136 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2549808137((KeyValuePair_2_t1261745136 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m3246840833((KeyValuePair_2_t1261745136 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m707085696_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1261745136 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1261745136 *>(__this + 1);
	KeyValuePair_2__ctor_m707085696(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3824457325_gshared (KeyValuePair_2_t1261745136 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3824457325_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1261745136 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1261745136 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3824457325(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2549808137_gshared (KeyValuePair_2_t1261745136 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2549808137_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1261745136 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1261745136 *>(__this + 1);
	KeyValuePair_2_set_Key_m2549808137(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3919573732_gshared (KeyValuePair_2_t1261745136 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m3919573732_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1261745136 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1261745136 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3919573732(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3246840833_gshared (KeyValuePair_2_t1261745136 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3246840833_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1261745136 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1261745136 *>(__this + 1);
	KeyValuePair_2_set_Value_m3246840833(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2369878307_gshared (KeyValuePair_2_t1261745136 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2369878307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2550470410* G_B2_1 = NULL;
	StringU5BU5D_t2550470410* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2550470410* G_B1_1 = NULL;
	StringU5BU5D_t2550470410* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2550470410* G_B3_2 = NULL;
	StringU5BU5D_t2550470410* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2550470410* G_B5_1 = NULL;
	StringU5BU5D_t2550470410* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2550470410* G_B4_1 = NULL;
	StringU5BU5D_t2550470410* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2550470410* G_B6_2 = NULL;
	StringU5BU5D_t2550470410* G_B6_3 = NULL;
	{
		StringU5BU5D_t2550470410* L_0 = (StringU5BU5D_t2550470410*)((StringU5BU5D_t2550470410*)SZArrayNew(StringU5BU5D_t2550470410_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1314655333);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1314655333);
		StringU5BU5D_t2550470410* L_1 = (StringU5BU5D_t2550470410*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m3824457325((KeyValuePair_2_t1261745136 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m3824457325((KeyValuePair_2_t1261745136 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3726548515((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_6 = (StringU5BU5D_t2550470410*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral4050357712);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4050357712);
		StringU5BU5D_t2550470410* L_7 = (StringU5BU5D_t2550470410*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m3919573732((KeyValuePair_2_t1261745136 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m3919573732((KeyValuePair_2_t1261745136 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m3726548515((int32_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_12 = (StringU5BU5D_t2550470410*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral2259873118);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2259873118);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3502885115(NULL /*static, unused*/, (StringU5BU5D_t2550470410*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2369878307_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1261745136 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1261745136 *>(__this + 1);
	return KeyValuePair_2_ToString_m2369878307(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2179544689_gshared (KeyValuePair_2_t103350551 * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3670076898((KeyValuePair_2_t103350551 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m4025597409((KeyValuePair_2_t103350551 *)__this, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2179544689_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t103350551 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t103350551 *>(__this + 1);
	KeyValuePair_2__ctor_m2179544689(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m119114649_gshared (KeyValuePair_2_t103350551 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m119114649_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t103350551 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t103350551 *>(__this + 1);
	return KeyValuePair_2_get_Key_m119114649(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3670076898_gshared (KeyValuePair_2_t103350551 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3670076898_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t103350551 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t103350551 *>(__this + 1);
	KeyValuePair_2_set_Key_m3670076898(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m3410568077_gshared (KeyValuePair_2_t103350551 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int64_t KeyValuePair_2_get_Value_m3410568077_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t103350551 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t103350551 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3410568077(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4025597409_gshared (KeyValuePair_2_t103350551 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4025597409_AdjustorThunk (RuntimeObject * __this, int64_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t103350551 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t103350551 *>(__this + 1);
	KeyValuePair_2_set_Value_m4025597409(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3623030466_gshared (KeyValuePair_2_t103350551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3623030466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2550470410* G_B2_1 = NULL;
	StringU5BU5D_t2550470410* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2550470410* G_B1_1 = NULL;
	StringU5BU5D_t2550470410* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2550470410* G_B3_2 = NULL;
	StringU5BU5D_t2550470410* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2550470410* G_B5_1 = NULL;
	StringU5BU5D_t2550470410* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2550470410* G_B4_1 = NULL;
	StringU5BU5D_t2550470410* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2550470410* G_B6_2 = NULL;
	StringU5BU5D_t2550470410* G_B6_3 = NULL;
	{
		StringU5BU5D_t2550470410* L_0 = (StringU5BU5D_t2550470410*)((StringU5BU5D_t2550470410*)SZArrayNew(StringU5BU5D_t2550470410_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1314655333);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1314655333);
		StringU5BU5D_t2550470410* L_1 = (StringU5BU5D_t2550470410*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m119114649((KeyValuePair_2_t103350551 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m119114649((KeyValuePair_2_t103350551 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3726548515((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_6 = (StringU5BU5D_t2550470410*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral4050357712);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4050357712);
		StringU5BU5D_t2550470410* L_7 = (StringU5BU5D_t2550470410*)L_6;
		int64_t L_8 = KeyValuePair_2_get_Value_m3410568077((KeyValuePair_2_t103350551 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int64_t L_9 = KeyValuePair_2_get_Value_m3410568077((KeyValuePair_2_t103350551 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int64_t)L_9;
		String_t* L_10 = Int64_ToString_m3453873107((int64_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_12 = (StringU5BU5D_t2550470410*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral2259873118);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2259873118);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3502885115(NULL /*static, unused*/, (StringU5BU5D_t2550470410*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3623030466_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t103350551 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t103350551 *>(__this + 1);
	return KeyValuePair_2_ToString_m3623030466(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3635544920_gshared (KeyValuePair_2_t1816946575 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3975025253((KeyValuePair_2_t1816946575 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3482942003((KeyValuePair_2_t1816946575 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3635544920_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1816946575 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1816946575 *>(__this + 1);
	KeyValuePair_2__ctor_m3635544920(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2512137185_gshared (KeyValuePair_2_t1816946575 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2512137185_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1816946575 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1816946575 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2512137185(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3975025253_gshared (KeyValuePair_2_t1816946575 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3975025253_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1816946575 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1816946575 *>(__this + 1);
	KeyValuePair_2_set_Key_m3975025253(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2726084051_gshared (KeyValuePair_2_t1816946575 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2726084051_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1816946575 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1816946575 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2726084051(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3482942003_gshared (KeyValuePair_2_t1816946575 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3482942003_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1816946575 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1816946575 *>(__this + 1);
	KeyValuePair_2_set_Value_m3482942003(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2019861118_gshared (KeyValuePair_2_t1816946575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2019861118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2550470410* G_B2_1 = NULL;
	StringU5BU5D_t2550470410* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2550470410* G_B1_1 = NULL;
	StringU5BU5D_t2550470410* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2550470410* G_B3_2 = NULL;
	StringU5BU5D_t2550470410* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2550470410* G_B5_1 = NULL;
	StringU5BU5D_t2550470410* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2550470410* G_B4_1 = NULL;
	StringU5BU5D_t2550470410* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2550470410* G_B6_2 = NULL;
	StringU5BU5D_t2550470410* G_B6_3 = NULL;
	{
		StringU5BU5D_t2550470410* L_0 = (StringU5BU5D_t2550470410*)((StringU5BU5D_t2550470410*)SZArrayNew(StringU5BU5D_t2550470410_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1314655333);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1314655333);
		StringU5BU5D_t2550470410* L_1 = (StringU5BU5D_t2550470410*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2512137185((KeyValuePair_2_t1816946575 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2512137185((KeyValuePair_2_t1816946575 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3726548515((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t2550470410* L_6 = (StringU5BU5D_t2550470410*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral4050357712);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4050357712);
		StringU5BU5D_t2550470410* L_7 = (StringU5BU5D_t2550470410*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2726084051((KeyValuePair_2_t1816946575 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2726084051((KeyValuePair_2_t1816946575 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t2550470410* L_12 = (StringU5BU5D_t2550470410*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral2259873118);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2259873118);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3502885115(NULL /*static, unused*/, (StringU5BU5D_t2550470410*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2019861118_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1816946575 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1816946575 *>(__this + 1);
	return KeyValuePair_2_ToString_m2019861118(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
