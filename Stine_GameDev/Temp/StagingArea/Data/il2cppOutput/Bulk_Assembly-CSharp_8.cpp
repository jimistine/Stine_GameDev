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

// WoodCutterController
struct WoodCutterController_t4207349438;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3205518785;
// UnityEngine.Component
struct Component_t3929247131;
// UnityEngine.GameObject
struct GameObject_t3649676894;
// UnityEngine.Animator
struct Animator_t1597602125;
// UnityEngine.Collider2D
struct Collider2D_t4102758599;
// GM
struct GM_t4063652661;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t848310312;
// System.Void
struct Void_t761274262;
// UnityEngine.Transform
struct Transform_t243602325;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3056088337;
// UnityEngine.AudioClip
struct AudioClip_t2513176908;
// UnityEngine.AudioSource
struct AudioSource_t193605093;
// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_t2825245412;

extern const RuntimeMethod* GameObject_GetComponent_TisAnimator_t1597602125_m278566180_RuntimeMethod_var;
extern const uint32_t WoodCutterController_Start_m402583645_MetadataUsageId;
extern RuntimeClass* GM_t4063652661_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t3343256959_il2cpp_TypeInfo_var;
extern const uint32_t WoodCutterController_OnTriggerStay2D_m3571163766_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1066659814;
extern const uint32_t WoodCutterController_OnTriggerEnter2D_m1301595552_MetadataUsageId;
extern const uint32_t WoodCutterController_OnTriggerExit2D_m3820179108_MetadataUsageId;



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
	CharU5BU5D_t848310312* ___WhiteChars_3;

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
	inline CharU5BU5D_t848310312* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t848310312** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t848310312* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef BOOLEAN_T346742019_H
#define BOOLEAN_T346742019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t346742019 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t346742019, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t346742019_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t346742019_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t346742019_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T346742019_H
#ifndef SINGLE_T2099989038_H
#define SINGLE_T2099989038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2099989038 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2099989038, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2099989038_H
#ifndef VECTOR2_T2216516790_H
#define VECTOR2_T2216516790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2216516790 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2216516790, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2216516790, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2216516790_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2216516790  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2216516790  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2216516790  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2216516790  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2216516790  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2216516790  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2216516790  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2216516790  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2216516790_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2216516790  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2216516790 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2216516790  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2216516790_StaticFields, ___oneVector_3)); }
	inline Vector2_t2216516790  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2216516790 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2216516790  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2216516790_StaticFields, ___upVector_4)); }
	inline Vector2_t2216516790  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2216516790 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2216516790  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2216516790_StaticFields, ___downVector_5)); }
	inline Vector2_t2216516790  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2216516790 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2216516790  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2216516790_StaticFields, ___leftVector_6)); }
	inline Vector2_t2216516790  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2216516790 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2216516790  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2216516790_StaticFields, ___rightVector_7)); }
	inline Vector2_t2216516790  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2216516790 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2216516790  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2216516790_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2216516790  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2216516790 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2216516790  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2216516790_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2216516790  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2216516790 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2216516790  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2216516790_H
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
#ifndef OBJECT_T4294562488_H
#define OBJECT_T4294562488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t4294562488  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t4294562488, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t4294562488_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t4294562488_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t4294562488_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t4294562488_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T4294562488_H
#ifndef KEYCODE_T2868859003_H
#define KEYCODE_T2868859003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2868859003 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2868859003, ___value___1)); }
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
#endif // KEYCODE_T2868859003_H
#ifndef COMPONENT_T3929247131_H
#define COMPONENT_T3929247131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3929247131  : public Object_t4294562488
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3929247131_H
#ifndef GAMEOBJECT_T3649676894_H
#define GAMEOBJECT_T3649676894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t3649676894  : public Object_t4294562488
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T3649676894_H
#ifndef BEHAVIOUR_T4094084037_H
#define BEHAVIOUR_T4094084037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t4094084037  : public Component_t3929247131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T4094084037_H
#ifndef COLLIDER2D_T4102758599_H
#define COLLIDER2D_T4102758599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t4102758599  : public Behaviour_t4094084037
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T4102758599_H
#ifndef ANIMATOR_T1597602125_H
#define ANIMATOR_T1597602125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t1597602125  : public Behaviour_t4094084037
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T1597602125_H
#ifndef MONOBEHAVIOUR_T3205518785_H
#define MONOBEHAVIOUR_T3205518785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3205518785  : public Behaviour_t4094084037
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3205518785_H
#ifndef WOODCUTTERCONTROLLER_T4207349438_H
#define WOODCUTTERCONTROLLER_T4207349438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WoodCutterController
struct  WoodCutterController_t4207349438  : public MonoBehaviour_t3205518785
{
public:
	// UnityEngine.Animator WoodCutterController::ani_this
	Animator_t1597602125 * ___ani_this_2;

public:
	inline static int32_t get_offset_of_ani_this_2() { return static_cast<int32_t>(offsetof(WoodCutterController_t4207349438, ___ani_this_2)); }
	inline Animator_t1597602125 * get_ani_this_2() const { return ___ani_this_2; }
	inline Animator_t1597602125 ** get_address_of_ani_this_2() { return &___ani_this_2; }
	inline void set_ani_this_2(Animator_t1597602125 * value)
	{
		___ani_this_2 = value;
		Il2CppCodeGenWriteBarrier((&___ani_this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WOODCUTTERCONTROLLER_T4207349438_H
#ifndef GM_T4063652661_H
#define GM_T4063652661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GM
struct  GM_t4063652661  : public MonoBehaviour_t3205518785
{
public:
	// System.Single GM::Count
	float ___Count_3;
	// System.Single GM::Line1Delay
	float ___Line1Delay_4;
	// UnityEngine.Vector2 GM::Transfer_1_2
	Vector2_t2216516790  ___Transfer_1_2_5;
	// UnityEngine.Vector2 GM::Transfer_2_3
	Vector2_t2216516790  ___Transfer_2_3_6;
	// UnityEngine.Vector2 GM::Transfer_3_2
	Vector2_t2216516790  ___Transfer_3_2_7;
	// UnityEngine.Vector2 GM::Transfer_2_1
	Vector2_t2216516790  ___Transfer_2_1_8;
	// UnityEngine.Transform GM::playerTrans
	Transform_t243602325 * ___playerTrans_9;
	// UnityEngine.Transform GM::MorganTrans
	Transform_t243602325 * ___MorganTrans_10;
	// UnityEngine.Rigidbody2D GM::playerRigidbody2D
	Rigidbody2D_t3056088337 * ___playerRigidbody2D_11;
	// UnityEngine.Rigidbody2D GM::MorganRigidbody2D
	Rigidbody2D_t3056088337 * ___MorganRigidbody2D_12;
	// System.Boolean GM::exitLocked
	bool ___exitLocked_13;
	// System.Boolean GM::ExitOpen
	bool ___ExitOpen_14;
	// System.Boolean GM::Inspecting
	bool ___Inspecting_15;
	// System.Boolean GM::Enlarged
	bool ___Enlarged_16;
	// System.Boolean GM::Reading
	bool ___Reading_17;
	// System.Boolean GM::FreezePlayer
	bool ___FreezePlayer_18;
	// System.Single GM::Audio_1_2
	float ___Audio_1_2_19;
	// System.Single GM::Audio_2_3
	float ___Audio_2_3_20;
	// System.Single GM::Audio_3_2
	float ___Audio_3_2_21;
	// System.Single GM::Audio_2_1
	float ___Audio_2_1_22;
	// UnityEngine.AudioClip GM::line1
	AudioClip_t2513176908 * ___line1_23;
	// UnityEngine.AudioClip GM::line2
	AudioClip_t2513176908 * ___line2_24;
	// UnityEngine.AudioClip GM::line3
	AudioClip_t2513176908 * ___line3_25;
	// UnityEngine.AudioClip GM::StoryClip1
	AudioClip_t2513176908 * ___StoryClip1_26;
	// UnityEngine.AudioClip GM::BountyHunter
	AudioClip_t2513176908 * ___BountyHunter_27;
	// UnityEngine.AudioClip GM::Troga
	AudioClip_t2513176908 * ___Troga_28;
	// UnityEngine.AudioSource GM::Dialogue
	AudioSource_t193605093 * ___Dialogue_29;
	// UnityEngine.AudioSource GM::Line_1
	AudioSource_t193605093 * ___Line_1_30;
	// UnityEngine.AudioSource GM::Line_2
	AudioSource_t193605093 * ___Line_2_31;
	// UnityEngine.AudioSource GM::Line_3
	AudioSource_t193605093 * ___Line_3_32;
	// UnityEngine.AudioSource GM::Story1
	AudioSource_t193605093 * ___Story1_33;
	// UnityEngine.AudioSource GM::SFX
	AudioSource_t193605093 * ___SFX_34;
	// UnityEngine.AudioClip GM::openDoor
	AudioClip_t2513176908 * ___openDoor_35;
	// UnityEngine.AudioClip GM::closeDoor
	AudioClip_t2513176908 * ___closeDoor_36;
	// UnityEngine.AudioClip GM::lockedDoor
	AudioClip_t2513176908 * ___lockedDoor_37;
	// UnityEngine.AudioSource GM::LockedDoor
	AudioSource_t193605093 * ___LockedDoor_38;
	// UnityEngine.AudioSource GM::Footsteps
	AudioSource_t193605093 * ___Footsteps_39;
	// UnityEngine.AudioSource GM::OpenBook
	AudioSource_t193605093 * ___OpenBook_40;
	// UnityEngine.AudioSource GM::CloseBook
	AudioSource_t193605093 * ___CloseBook_41;
	// UnityEngine.AudioSource GM::ExitOpenSFX
	AudioSource_t193605093 * ___ExitOpenSFX_42;
	// UnityEngine.AudioSource GM::Pickup
	AudioSource_t193605093 * ___Pickup_43;
	// UnityEngine.Audio.AudioMixerSnapshot GM::Room1
	AudioMixerSnapshot_t2825245412 * ___Room1_44;
	// UnityEngine.Audio.AudioMixerSnapshot GM::Room2
	AudioMixerSnapshot_t2825245412 * ___Room2_45;
	// UnityEngine.Audio.AudioMixerSnapshot GM::Room3
	AudioMixerSnapshot_t2825245412 * ___Room3_46;
	// UnityEngine.Audio.AudioMixerSnapshot GM::SpeakerFilter
	AudioMixerSnapshot_t2825245412 * ___SpeakerFilter_47;
	// UnityEngine.Audio.AudioMixerSnapshot GM::NoFilter
	AudioMixerSnapshot_t2825245412 * ___NoFilter_48;
	// UnityEngine.GameObject GM::Morgan
	GameObject_t3649676894 * ___Morgan_49;
	// UnityEngine.GameObject GM::doorClosed
	GameObject_t3649676894 * ___doorClosed_50;
	// UnityEngine.GameObject GM::doorOpen
	GameObject_t3649676894 * ___doorOpen_51;
	// UnityEngine.GameObject GM::doorClosed2
	GameObject_t3649676894 * ___doorClosed2_52;
	// UnityEngine.GameObject GM::doorOpen2
	GameObject_t3649676894 * ___doorOpen2_53;
	// UnityEngine.GameObject GM::doorClosed3
	GameObject_t3649676894 * ___doorClosed3_54;
	// UnityEngine.GameObject GM::doorOpen3
	GameObject_t3649676894 * ___doorOpen3_55;
	// UnityEngine.GameObject GM::doorClosed4
	GameObject_t3649676894 * ___doorClosed4_56;
	// UnityEngine.GameObject GM::doorOpen4
	GameObject_t3649676894 * ___doorOpen4_57;
	// UnityEngine.GameObject GM::exitDoor
	GameObject_t3649676894 * ___exitDoor_58;
	// UnityEngine.GameObject GM::exitDoorOpen
	GameObject_t3649676894 * ___exitDoorOpen_59;
	// UnityEngine.GameObject GM::Cam1
	GameObject_t3649676894 * ___Cam1_60;
	// UnityEngine.GameObject GM::Cam2
	GameObject_t3649676894 * ___Cam2_61;
	// UnityEngine.GameObject GM::Cam3
	GameObject_t3649676894 * ___Cam3_62;
	// UnityEngine.GameObject GM::Paint1Cam
	GameObject_t3649676894 * ___Paint1Cam_63;
	// UnityEngine.GameObject GM::Paint2Cam
	GameObject_t3649676894 * ___Paint2Cam_64;
	// UnityEngine.GameObject GM::key
	GameObject_t3649676894 * ___key_65;
	// UnityEngine.GameObject GM::portal
	GameObject_t3649676894 * ___portal_66;
	// UnityEngine.GameObject GM::Appear_1
	GameObject_t3649676894 * ___Appear_1_67;
	// UnityEngine.GameObject GM::Line1_Sub
	GameObject_t3649676894 * ___Line1_Sub_68;
	// UnityEngine.GameObject GM::Line2_Sub
	GameObject_t3649676894 * ___Line2_Sub_69;
	// UnityEngine.GameObject GM::Line3_Sub
	GameObject_t3649676894 * ___Line3_Sub_70;
	// UnityEngine.GameObject GM::Line4_Sub
	GameObject_t3649676894 * ___Line4_Sub_71;
	// UnityEngine.GameObject GM::MorganDialogue
	GameObject_t3649676894 * ___MorganDialogue_72;
	// UnityEngine.GameObject GM::Choice1
	GameObject_t3649676894 * ___Choice1_73;
	// UnityEngine.GameObject GM::Fungo
	GameObject_t3649676894 * ___Fungo_74;

public:
	inline static int32_t get_offset_of_Count_3() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Count_3)); }
	inline float get_Count_3() const { return ___Count_3; }
	inline float* get_address_of_Count_3() { return &___Count_3; }
	inline void set_Count_3(float value)
	{
		___Count_3 = value;
	}

	inline static int32_t get_offset_of_Line1Delay_4() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Line1Delay_4)); }
	inline float get_Line1Delay_4() const { return ___Line1Delay_4; }
	inline float* get_address_of_Line1Delay_4() { return &___Line1Delay_4; }
	inline void set_Line1Delay_4(float value)
	{
		___Line1Delay_4 = value;
	}

	inline static int32_t get_offset_of_Transfer_1_2_5() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Transfer_1_2_5)); }
	inline Vector2_t2216516790  get_Transfer_1_2_5() const { return ___Transfer_1_2_5; }
	inline Vector2_t2216516790 * get_address_of_Transfer_1_2_5() { return &___Transfer_1_2_5; }
	inline void set_Transfer_1_2_5(Vector2_t2216516790  value)
	{
		___Transfer_1_2_5 = value;
	}

	inline static int32_t get_offset_of_Transfer_2_3_6() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Transfer_2_3_6)); }
	inline Vector2_t2216516790  get_Transfer_2_3_6() const { return ___Transfer_2_3_6; }
	inline Vector2_t2216516790 * get_address_of_Transfer_2_3_6() { return &___Transfer_2_3_6; }
	inline void set_Transfer_2_3_6(Vector2_t2216516790  value)
	{
		___Transfer_2_3_6 = value;
	}

	inline static int32_t get_offset_of_Transfer_3_2_7() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Transfer_3_2_7)); }
	inline Vector2_t2216516790  get_Transfer_3_2_7() const { return ___Transfer_3_2_7; }
	inline Vector2_t2216516790 * get_address_of_Transfer_3_2_7() { return &___Transfer_3_2_7; }
	inline void set_Transfer_3_2_7(Vector2_t2216516790  value)
	{
		___Transfer_3_2_7 = value;
	}

	inline static int32_t get_offset_of_Transfer_2_1_8() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Transfer_2_1_8)); }
	inline Vector2_t2216516790  get_Transfer_2_1_8() const { return ___Transfer_2_1_8; }
	inline Vector2_t2216516790 * get_address_of_Transfer_2_1_8() { return &___Transfer_2_1_8; }
	inline void set_Transfer_2_1_8(Vector2_t2216516790  value)
	{
		___Transfer_2_1_8 = value;
	}

	inline static int32_t get_offset_of_playerTrans_9() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___playerTrans_9)); }
	inline Transform_t243602325 * get_playerTrans_9() const { return ___playerTrans_9; }
	inline Transform_t243602325 ** get_address_of_playerTrans_9() { return &___playerTrans_9; }
	inline void set_playerTrans_9(Transform_t243602325 * value)
	{
		___playerTrans_9 = value;
		Il2CppCodeGenWriteBarrier((&___playerTrans_9), value);
	}

	inline static int32_t get_offset_of_MorganTrans_10() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___MorganTrans_10)); }
	inline Transform_t243602325 * get_MorganTrans_10() const { return ___MorganTrans_10; }
	inline Transform_t243602325 ** get_address_of_MorganTrans_10() { return &___MorganTrans_10; }
	inline void set_MorganTrans_10(Transform_t243602325 * value)
	{
		___MorganTrans_10 = value;
		Il2CppCodeGenWriteBarrier((&___MorganTrans_10), value);
	}

	inline static int32_t get_offset_of_playerRigidbody2D_11() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___playerRigidbody2D_11)); }
	inline Rigidbody2D_t3056088337 * get_playerRigidbody2D_11() const { return ___playerRigidbody2D_11; }
	inline Rigidbody2D_t3056088337 ** get_address_of_playerRigidbody2D_11() { return &___playerRigidbody2D_11; }
	inline void set_playerRigidbody2D_11(Rigidbody2D_t3056088337 * value)
	{
		___playerRigidbody2D_11 = value;
		Il2CppCodeGenWriteBarrier((&___playerRigidbody2D_11), value);
	}

	inline static int32_t get_offset_of_MorganRigidbody2D_12() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___MorganRigidbody2D_12)); }
	inline Rigidbody2D_t3056088337 * get_MorganRigidbody2D_12() const { return ___MorganRigidbody2D_12; }
	inline Rigidbody2D_t3056088337 ** get_address_of_MorganRigidbody2D_12() { return &___MorganRigidbody2D_12; }
	inline void set_MorganRigidbody2D_12(Rigidbody2D_t3056088337 * value)
	{
		___MorganRigidbody2D_12 = value;
		Il2CppCodeGenWriteBarrier((&___MorganRigidbody2D_12), value);
	}

	inline static int32_t get_offset_of_exitLocked_13() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___exitLocked_13)); }
	inline bool get_exitLocked_13() const { return ___exitLocked_13; }
	inline bool* get_address_of_exitLocked_13() { return &___exitLocked_13; }
	inline void set_exitLocked_13(bool value)
	{
		___exitLocked_13 = value;
	}

	inline static int32_t get_offset_of_ExitOpen_14() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___ExitOpen_14)); }
	inline bool get_ExitOpen_14() const { return ___ExitOpen_14; }
	inline bool* get_address_of_ExitOpen_14() { return &___ExitOpen_14; }
	inline void set_ExitOpen_14(bool value)
	{
		___ExitOpen_14 = value;
	}

	inline static int32_t get_offset_of_Inspecting_15() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Inspecting_15)); }
	inline bool get_Inspecting_15() const { return ___Inspecting_15; }
	inline bool* get_address_of_Inspecting_15() { return &___Inspecting_15; }
	inline void set_Inspecting_15(bool value)
	{
		___Inspecting_15 = value;
	}

	inline static int32_t get_offset_of_Enlarged_16() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Enlarged_16)); }
	inline bool get_Enlarged_16() const { return ___Enlarged_16; }
	inline bool* get_address_of_Enlarged_16() { return &___Enlarged_16; }
	inline void set_Enlarged_16(bool value)
	{
		___Enlarged_16 = value;
	}

	inline static int32_t get_offset_of_Reading_17() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Reading_17)); }
	inline bool get_Reading_17() const { return ___Reading_17; }
	inline bool* get_address_of_Reading_17() { return &___Reading_17; }
	inline void set_Reading_17(bool value)
	{
		___Reading_17 = value;
	}

	inline static int32_t get_offset_of_FreezePlayer_18() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___FreezePlayer_18)); }
	inline bool get_FreezePlayer_18() const { return ___FreezePlayer_18; }
	inline bool* get_address_of_FreezePlayer_18() { return &___FreezePlayer_18; }
	inline void set_FreezePlayer_18(bool value)
	{
		___FreezePlayer_18 = value;
	}

	inline static int32_t get_offset_of_Audio_1_2_19() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Audio_1_2_19)); }
	inline float get_Audio_1_2_19() const { return ___Audio_1_2_19; }
	inline float* get_address_of_Audio_1_2_19() { return &___Audio_1_2_19; }
	inline void set_Audio_1_2_19(float value)
	{
		___Audio_1_2_19 = value;
	}

	inline static int32_t get_offset_of_Audio_2_3_20() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Audio_2_3_20)); }
	inline float get_Audio_2_3_20() const { return ___Audio_2_3_20; }
	inline float* get_address_of_Audio_2_3_20() { return &___Audio_2_3_20; }
	inline void set_Audio_2_3_20(float value)
	{
		___Audio_2_3_20 = value;
	}

	inline static int32_t get_offset_of_Audio_3_2_21() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Audio_3_2_21)); }
	inline float get_Audio_3_2_21() const { return ___Audio_3_2_21; }
	inline float* get_address_of_Audio_3_2_21() { return &___Audio_3_2_21; }
	inline void set_Audio_3_2_21(float value)
	{
		___Audio_3_2_21 = value;
	}

	inline static int32_t get_offset_of_Audio_2_1_22() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Audio_2_1_22)); }
	inline float get_Audio_2_1_22() const { return ___Audio_2_1_22; }
	inline float* get_address_of_Audio_2_1_22() { return &___Audio_2_1_22; }
	inline void set_Audio_2_1_22(float value)
	{
		___Audio_2_1_22 = value;
	}

	inline static int32_t get_offset_of_line1_23() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___line1_23)); }
	inline AudioClip_t2513176908 * get_line1_23() const { return ___line1_23; }
	inline AudioClip_t2513176908 ** get_address_of_line1_23() { return &___line1_23; }
	inline void set_line1_23(AudioClip_t2513176908 * value)
	{
		___line1_23 = value;
		Il2CppCodeGenWriteBarrier((&___line1_23), value);
	}

	inline static int32_t get_offset_of_line2_24() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___line2_24)); }
	inline AudioClip_t2513176908 * get_line2_24() const { return ___line2_24; }
	inline AudioClip_t2513176908 ** get_address_of_line2_24() { return &___line2_24; }
	inline void set_line2_24(AudioClip_t2513176908 * value)
	{
		___line2_24 = value;
		Il2CppCodeGenWriteBarrier((&___line2_24), value);
	}

	inline static int32_t get_offset_of_line3_25() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___line3_25)); }
	inline AudioClip_t2513176908 * get_line3_25() const { return ___line3_25; }
	inline AudioClip_t2513176908 ** get_address_of_line3_25() { return &___line3_25; }
	inline void set_line3_25(AudioClip_t2513176908 * value)
	{
		___line3_25 = value;
		Il2CppCodeGenWriteBarrier((&___line3_25), value);
	}

	inline static int32_t get_offset_of_StoryClip1_26() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___StoryClip1_26)); }
	inline AudioClip_t2513176908 * get_StoryClip1_26() const { return ___StoryClip1_26; }
	inline AudioClip_t2513176908 ** get_address_of_StoryClip1_26() { return &___StoryClip1_26; }
	inline void set_StoryClip1_26(AudioClip_t2513176908 * value)
	{
		___StoryClip1_26 = value;
		Il2CppCodeGenWriteBarrier((&___StoryClip1_26), value);
	}

	inline static int32_t get_offset_of_BountyHunter_27() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___BountyHunter_27)); }
	inline AudioClip_t2513176908 * get_BountyHunter_27() const { return ___BountyHunter_27; }
	inline AudioClip_t2513176908 ** get_address_of_BountyHunter_27() { return &___BountyHunter_27; }
	inline void set_BountyHunter_27(AudioClip_t2513176908 * value)
	{
		___BountyHunter_27 = value;
		Il2CppCodeGenWriteBarrier((&___BountyHunter_27), value);
	}

	inline static int32_t get_offset_of_Troga_28() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Troga_28)); }
	inline AudioClip_t2513176908 * get_Troga_28() const { return ___Troga_28; }
	inline AudioClip_t2513176908 ** get_address_of_Troga_28() { return &___Troga_28; }
	inline void set_Troga_28(AudioClip_t2513176908 * value)
	{
		___Troga_28 = value;
		Il2CppCodeGenWriteBarrier((&___Troga_28), value);
	}

	inline static int32_t get_offset_of_Dialogue_29() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Dialogue_29)); }
	inline AudioSource_t193605093 * get_Dialogue_29() const { return ___Dialogue_29; }
	inline AudioSource_t193605093 ** get_address_of_Dialogue_29() { return &___Dialogue_29; }
	inline void set_Dialogue_29(AudioSource_t193605093 * value)
	{
		___Dialogue_29 = value;
		Il2CppCodeGenWriteBarrier((&___Dialogue_29), value);
	}

	inline static int32_t get_offset_of_Line_1_30() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Line_1_30)); }
	inline AudioSource_t193605093 * get_Line_1_30() const { return ___Line_1_30; }
	inline AudioSource_t193605093 ** get_address_of_Line_1_30() { return &___Line_1_30; }
	inline void set_Line_1_30(AudioSource_t193605093 * value)
	{
		___Line_1_30 = value;
		Il2CppCodeGenWriteBarrier((&___Line_1_30), value);
	}

	inline static int32_t get_offset_of_Line_2_31() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Line_2_31)); }
	inline AudioSource_t193605093 * get_Line_2_31() const { return ___Line_2_31; }
	inline AudioSource_t193605093 ** get_address_of_Line_2_31() { return &___Line_2_31; }
	inline void set_Line_2_31(AudioSource_t193605093 * value)
	{
		___Line_2_31 = value;
		Il2CppCodeGenWriteBarrier((&___Line_2_31), value);
	}

	inline static int32_t get_offset_of_Line_3_32() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Line_3_32)); }
	inline AudioSource_t193605093 * get_Line_3_32() const { return ___Line_3_32; }
	inline AudioSource_t193605093 ** get_address_of_Line_3_32() { return &___Line_3_32; }
	inline void set_Line_3_32(AudioSource_t193605093 * value)
	{
		___Line_3_32 = value;
		Il2CppCodeGenWriteBarrier((&___Line_3_32), value);
	}

	inline static int32_t get_offset_of_Story1_33() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Story1_33)); }
	inline AudioSource_t193605093 * get_Story1_33() const { return ___Story1_33; }
	inline AudioSource_t193605093 ** get_address_of_Story1_33() { return &___Story1_33; }
	inline void set_Story1_33(AudioSource_t193605093 * value)
	{
		___Story1_33 = value;
		Il2CppCodeGenWriteBarrier((&___Story1_33), value);
	}

	inline static int32_t get_offset_of_SFX_34() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___SFX_34)); }
	inline AudioSource_t193605093 * get_SFX_34() const { return ___SFX_34; }
	inline AudioSource_t193605093 ** get_address_of_SFX_34() { return &___SFX_34; }
	inline void set_SFX_34(AudioSource_t193605093 * value)
	{
		___SFX_34 = value;
		Il2CppCodeGenWriteBarrier((&___SFX_34), value);
	}

	inline static int32_t get_offset_of_openDoor_35() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___openDoor_35)); }
	inline AudioClip_t2513176908 * get_openDoor_35() const { return ___openDoor_35; }
	inline AudioClip_t2513176908 ** get_address_of_openDoor_35() { return &___openDoor_35; }
	inline void set_openDoor_35(AudioClip_t2513176908 * value)
	{
		___openDoor_35 = value;
		Il2CppCodeGenWriteBarrier((&___openDoor_35), value);
	}

	inline static int32_t get_offset_of_closeDoor_36() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___closeDoor_36)); }
	inline AudioClip_t2513176908 * get_closeDoor_36() const { return ___closeDoor_36; }
	inline AudioClip_t2513176908 ** get_address_of_closeDoor_36() { return &___closeDoor_36; }
	inline void set_closeDoor_36(AudioClip_t2513176908 * value)
	{
		___closeDoor_36 = value;
		Il2CppCodeGenWriteBarrier((&___closeDoor_36), value);
	}

	inline static int32_t get_offset_of_lockedDoor_37() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___lockedDoor_37)); }
	inline AudioClip_t2513176908 * get_lockedDoor_37() const { return ___lockedDoor_37; }
	inline AudioClip_t2513176908 ** get_address_of_lockedDoor_37() { return &___lockedDoor_37; }
	inline void set_lockedDoor_37(AudioClip_t2513176908 * value)
	{
		___lockedDoor_37 = value;
		Il2CppCodeGenWriteBarrier((&___lockedDoor_37), value);
	}

	inline static int32_t get_offset_of_LockedDoor_38() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___LockedDoor_38)); }
	inline AudioSource_t193605093 * get_LockedDoor_38() const { return ___LockedDoor_38; }
	inline AudioSource_t193605093 ** get_address_of_LockedDoor_38() { return &___LockedDoor_38; }
	inline void set_LockedDoor_38(AudioSource_t193605093 * value)
	{
		___LockedDoor_38 = value;
		Il2CppCodeGenWriteBarrier((&___LockedDoor_38), value);
	}

	inline static int32_t get_offset_of_Footsteps_39() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Footsteps_39)); }
	inline AudioSource_t193605093 * get_Footsteps_39() const { return ___Footsteps_39; }
	inline AudioSource_t193605093 ** get_address_of_Footsteps_39() { return &___Footsteps_39; }
	inline void set_Footsteps_39(AudioSource_t193605093 * value)
	{
		___Footsteps_39 = value;
		Il2CppCodeGenWriteBarrier((&___Footsteps_39), value);
	}

	inline static int32_t get_offset_of_OpenBook_40() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___OpenBook_40)); }
	inline AudioSource_t193605093 * get_OpenBook_40() const { return ___OpenBook_40; }
	inline AudioSource_t193605093 ** get_address_of_OpenBook_40() { return &___OpenBook_40; }
	inline void set_OpenBook_40(AudioSource_t193605093 * value)
	{
		___OpenBook_40 = value;
		Il2CppCodeGenWriteBarrier((&___OpenBook_40), value);
	}

	inline static int32_t get_offset_of_CloseBook_41() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___CloseBook_41)); }
	inline AudioSource_t193605093 * get_CloseBook_41() const { return ___CloseBook_41; }
	inline AudioSource_t193605093 ** get_address_of_CloseBook_41() { return &___CloseBook_41; }
	inline void set_CloseBook_41(AudioSource_t193605093 * value)
	{
		___CloseBook_41 = value;
		Il2CppCodeGenWriteBarrier((&___CloseBook_41), value);
	}

	inline static int32_t get_offset_of_ExitOpenSFX_42() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___ExitOpenSFX_42)); }
	inline AudioSource_t193605093 * get_ExitOpenSFX_42() const { return ___ExitOpenSFX_42; }
	inline AudioSource_t193605093 ** get_address_of_ExitOpenSFX_42() { return &___ExitOpenSFX_42; }
	inline void set_ExitOpenSFX_42(AudioSource_t193605093 * value)
	{
		___ExitOpenSFX_42 = value;
		Il2CppCodeGenWriteBarrier((&___ExitOpenSFX_42), value);
	}

	inline static int32_t get_offset_of_Pickup_43() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Pickup_43)); }
	inline AudioSource_t193605093 * get_Pickup_43() const { return ___Pickup_43; }
	inline AudioSource_t193605093 ** get_address_of_Pickup_43() { return &___Pickup_43; }
	inline void set_Pickup_43(AudioSource_t193605093 * value)
	{
		___Pickup_43 = value;
		Il2CppCodeGenWriteBarrier((&___Pickup_43), value);
	}

	inline static int32_t get_offset_of_Room1_44() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Room1_44)); }
	inline AudioMixerSnapshot_t2825245412 * get_Room1_44() const { return ___Room1_44; }
	inline AudioMixerSnapshot_t2825245412 ** get_address_of_Room1_44() { return &___Room1_44; }
	inline void set_Room1_44(AudioMixerSnapshot_t2825245412 * value)
	{
		___Room1_44 = value;
		Il2CppCodeGenWriteBarrier((&___Room1_44), value);
	}

	inline static int32_t get_offset_of_Room2_45() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Room2_45)); }
	inline AudioMixerSnapshot_t2825245412 * get_Room2_45() const { return ___Room2_45; }
	inline AudioMixerSnapshot_t2825245412 ** get_address_of_Room2_45() { return &___Room2_45; }
	inline void set_Room2_45(AudioMixerSnapshot_t2825245412 * value)
	{
		___Room2_45 = value;
		Il2CppCodeGenWriteBarrier((&___Room2_45), value);
	}

	inline static int32_t get_offset_of_Room3_46() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Room3_46)); }
	inline AudioMixerSnapshot_t2825245412 * get_Room3_46() const { return ___Room3_46; }
	inline AudioMixerSnapshot_t2825245412 ** get_address_of_Room3_46() { return &___Room3_46; }
	inline void set_Room3_46(AudioMixerSnapshot_t2825245412 * value)
	{
		___Room3_46 = value;
		Il2CppCodeGenWriteBarrier((&___Room3_46), value);
	}

	inline static int32_t get_offset_of_SpeakerFilter_47() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___SpeakerFilter_47)); }
	inline AudioMixerSnapshot_t2825245412 * get_SpeakerFilter_47() const { return ___SpeakerFilter_47; }
	inline AudioMixerSnapshot_t2825245412 ** get_address_of_SpeakerFilter_47() { return &___SpeakerFilter_47; }
	inline void set_SpeakerFilter_47(AudioMixerSnapshot_t2825245412 * value)
	{
		___SpeakerFilter_47 = value;
		Il2CppCodeGenWriteBarrier((&___SpeakerFilter_47), value);
	}

	inline static int32_t get_offset_of_NoFilter_48() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___NoFilter_48)); }
	inline AudioMixerSnapshot_t2825245412 * get_NoFilter_48() const { return ___NoFilter_48; }
	inline AudioMixerSnapshot_t2825245412 ** get_address_of_NoFilter_48() { return &___NoFilter_48; }
	inline void set_NoFilter_48(AudioMixerSnapshot_t2825245412 * value)
	{
		___NoFilter_48 = value;
		Il2CppCodeGenWriteBarrier((&___NoFilter_48), value);
	}

	inline static int32_t get_offset_of_Morgan_49() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Morgan_49)); }
	inline GameObject_t3649676894 * get_Morgan_49() const { return ___Morgan_49; }
	inline GameObject_t3649676894 ** get_address_of_Morgan_49() { return &___Morgan_49; }
	inline void set_Morgan_49(GameObject_t3649676894 * value)
	{
		___Morgan_49 = value;
		Il2CppCodeGenWriteBarrier((&___Morgan_49), value);
	}

	inline static int32_t get_offset_of_doorClosed_50() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___doorClosed_50)); }
	inline GameObject_t3649676894 * get_doorClosed_50() const { return ___doorClosed_50; }
	inline GameObject_t3649676894 ** get_address_of_doorClosed_50() { return &___doorClosed_50; }
	inline void set_doorClosed_50(GameObject_t3649676894 * value)
	{
		___doorClosed_50 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed_50), value);
	}

	inline static int32_t get_offset_of_doorOpen_51() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___doorOpen_51)); }
	inline GameObject_t3649676894 * get_doorOpen_51() const { return ___doorOpen_51; }
	inline GameObject_t3649676894 ** get_address_of_doorOpen_51() { return &___doorOpen_51; }
	inline void set_doorOpen_51(GameObject_t3649676894 * value)
	{
		___doorOpen_51 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen_51), value);
	}

	inline static int32_t get_offset_of_doorClosed2_52() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___doorClosed2_52)); }
	inline GameObject_t3649676894 * get_doorClosed2_52() const { return ___doorClosed2_52; }
	inline GameObject_t3649676894 ** get_address_of_doorClosed2_52() { return &___doorClosed2_52; }
	inline void set_doorClosed2_52(GameObject_t3649676894 * value)
	{
		___doorClosed2_52 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed2_52), value);
	}

	inline static int32_t get_offset_of_doorOpen2_53() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___doorOpen2_53)); }
	inline GameObject_t3649676894 * get_doorOpen2_53() const { return ___doorOpen2_53; }
	inline GameObject_t3649676894 ** get_address_of_doorOpen2_53() { return &___doorOpen2_53; }
	inline void set_doorOpen2_53(GameObject_t3649676894 * value)
	{
		___doorOpen2_53 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen2_53), value);
	}

	inline static int32_t get_offset_of_doorClosed3_54() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___doorClosed3_54)); }
	inline GameObject_t3649676894 * get_doorClosed3_54() const { return ___doorClosed3_54; }
	inline GameObject_t3649676894 ** get_address_of_doorClosed3_54() { return &___doorClosed3_54; }
	inline void set_doorClosed3_54(GameObject_t3649676894 * value)
	{
		___doorClosed3_54 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed3_54), value);
	}

	inline static int32_t get_offset_of_doorOpen3_55() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___doorOpen3_55)); }
	inline GameObject_t3649676894 * get_doorOpen3_55() const { return ___doorOpen3_55; }
	inline GameObject_t3649676894 ** get_address_of_doorOpen3_55() { return &___doorOpen3_55; }
	inline void set_doorOpen3_55(GameObject_t3649676894 * value)
	{
		___doorOpen3_55 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen3_55), value);
	}

	inline static int32_t get_offset_of_doorClosed4_56() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___doorClosed4_56)); }
	inline GameObject_t3649676894 * get_doorClosed4_56() const { return ___doorClosed4_56; }
	inline GameObject_t3649676894 ** get_address_of_doorClosed4_56() { return &___doorClosed4_56; }
	inline void set_doorClosed4_56(GameObject_t3649676894 * value)
	{
		___doorClosed4_56 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed4_56), value);
	}

	inline static int32_t get_offset_of_doorOpen4_57() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___doorOpen4_57)); }
	inline GameObject_t3649676894 * get_doorOpen4_57() const { return ___doorOpen4_57; }
	inline GameObject_t3649676894 ** get_address_of_doorOpen4_57() { return &___doorOpen4_57; }
	inline void set_doorOpen4_57(GameObject_t3649676894 * value)
	{
		___doorOpen4_57 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen4_57), value);
	}

	inline static int32_t get_offset_of_exitDoor_58() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___exitDoor_58)); }
	inline GameObject_t3649676894 * get_exitDoor_58() const { return ___exitDoor_58; }
	inline GameObject_t3649676894 ** get_address_of_exitDoor_58() { return &___exitDoor_58; }
	inline void set_exitDoor_58(GameObject_t3649676894 * value)
	{
		___exitDoor_58 = value;
		Il2CppCodeGenWriteBarrier((&___exitDoor_58), value);
	}

	inline static int32_t get_offset_of_exitDoorOpen_59() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___exitDoorOpen_59)); }
	inline GameObject_t3649676894 * get_exitDoorOpen_59() const { return ___exitDoorOpen_59; }
	inline GameObject_t3649676894 ** get_address_of_exitDoorOpen_59() { return &___exitDoorOpen_59; }
	inline void set_exitDoorOpen_59(GameObject_t3649676894 * value)
	{
		___exitDoorOpen_59 = value;
		Il2CppCodeGenWriteBarrier((&___exitDoorOpen_59), value);
	}

	inline static int32_t get_offset_of_Cam1_60() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Cam1_60)); }
	inline GameObject_t3649676894 * get_Cam1_60() const { return ___Cam1_60; }
	inline GameObject_t3649676894 ** get_address_of_Cam1_60() { return &___Cam1_60; }
	inline void set_Cam1_60(GameObject_t3649676894 * value)
	{
		___Cam1_60 = value;
		Il2CppCodeGenWriteBarrier((&___Cam1_60), value);
	}

	inline static int32_t get_offset_of_Cam2_61() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Cam2_61)); }
	inline GameObject_t3649676894 * get_Cam2_61() const { return ___Cam2_61; }
	inline GameObject_t3649676894 ** get_address_of_Cam2_61() { return &___Cam2_61; }
	inline void set_Cam2_61(GameObject_t3649676894 * value)
	{
		___Cam2_61 = value;
		Il2CppCodeGenWriteBarrier((&___Cam2_61), value);
	}

	inline static int32_t get_offset_of_Cam3_62() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Cam3_62)); }
	inline GameObject_t3649676894 * get_Cam3_62() const { return ___Cam3_62; }
	inline GameObject_t3649676894 ** get_address_of_Cam3_62() { return &___Cam3_62; }
	inline void set_Cam3_62(GameObject_t3649676894 * value)
	{
		___Cam3_62 = value;
		Il2CppCodeGenWriteBarrier((&___Cam3_62), value);
	}

	inline static int32_t get_offset_of_Paint1Cam_63() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Paint1Cam_63)); }
	inline GameObject_t3649676894 * get_Paint1Cam_63() const { return ___Paint1Cam_63; }
	inline GameObject_t3649676894 ** get_address_of_Paint1Cam_63() { return &___Paint1Cam_63; }
	inline void set_Paint1Cam_63(GameObject_t3649676894 * value)
	{
		___Paint1Cam_63 = value;
		Il2CppCodeGenWriteBarrier((&___Paint1Cam_63), value);
	}

	inline static int32_t get_offset_of_Paint2Cam_64() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Paint2Cam_64)); }
	inline GameObject_t3649676894 * get_Paint2Cam_64() const { return ___Paint2Cam_64; }
	inline GameObject_t3649676894 ** get_address_of_Paint2Cam_64() { return &___Paint2Cam_64; }
	inline void set_Paint2Cam_64(GameObject_t3649676894 * value)
	{
		___Paint2Cam_64 = value;
		Il2CppCodeGenWriteBarrier((&___Paint2Cam_64), value);
	}

	inline static int32_t get_offset_of_key_65() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___key_65)); }
	inline GameObject_t3649676894 * get_key_65() const { return ___key_65; }
	inline GameObject_t3649676894 ** get_address_of_key_65() { return &___key_65; }
	inline void set_key_65(GameObject_t3649676894 * value)
	{
		___key_65 = value;
		Il2CppCodeGenWriteBarrier((&___key_65), value);
	}

	inline static int32_t get_offset_of_portal_66() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___portal_66)); }
	inline GameObject_t3649676894 * get_portal_66() const { return ___portal_66; }
	inline GameObject_t3649676894 ** get_address_of_portal_66() { return &___portal_66; }
	inline void set_portal_66(GameObject_t3649676894 * value)
	{
		___portal_66 = value;
		Il2CppCodeGenWriteBarrier((&___portal_66), value);
	}

	inline static int32_t get_offset_of_Appear_1_67() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Appear_1_67)); }
	inline GameObject_t3649676894 * get_Appear_1_67() const { return ___Appear_1_67; }
	inline GameObject_t3649676894 ** get_address_of_Appear_1_67() { return &___Appear_1_67; }
	inline void set_Appear_1_67(GameObject_t3649676894 * value)
	{
		___Appear_1_67 = value;
		Il2CppCodeGenWriteBarrier((&___Appear_1_67), value);
	}

	inline static int32_t get_offset_of_Line1_Sub_68() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Line1_Sub_68)); }
	inline GameObject_t3649676894 * get_Line1_Sub_68() const { return ___Line1_Sub_68; }
	inline GameObject_t3649676894 ** get_address_of_Line1_Sub_68() { return &___Line1_Sub_68; }
	inline void set_Line1_Sub_68(GameObject_t3649676894 * value)
	{
		___Line1_Sub_68 = value;
		Il2CppCodeGenWriteBarrier((&___Line1_Sub_68), value);
	}

	inline static int32_t get_offset_of_Line2_Sub_69() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Line2_Sub_69)); }
	inline GameObject_t3649676894 * get_Line2_Sub_69() const { return ___Line2_Sub_69; }
	inline GameObject_t3649676894 ** get_address_of_Line2_Sub_69() { return &___Line2_Sub_69; }
	inline void set_Line2_Sub_69(GameObject_t3649676894 * value)
	{
		___Line2_Sub_69 = value;
		Il2CppCodeGenWriteBarrier((&___Line2_Sub_69), value);
	}

	inline static int32_t get_offset_of_Line3_Sub_70() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Line3_Sub_70)); }
	inline GameObject_t3649676894 * get_Line3_Sub_70() const { return ___Line3_Sub_70; }
	inline GameObject_t3649676894 ** get_address_of_Line3_Sub_70() { return &___Line3_Sub_70; }
	inline void set_Line3_Sub_70(GameObject_t3649676894 * value)
	{
		___Line3_Sub_70 = value;
		Il2CppCodeGenWriteBarrier((&___Line3_Sub_70), value);
	}

	inline static int32_t get_offset_of_Line4_Sub_71() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Line4_Sub_71)); }
	inline GameObject_t3649676894 * get_Line4_Sub_71() const { return ___Line4_Sub_71; }
	inline GameObject_t3649676894 ** get_address_of_Line4_Sub_71() { return &___Line4_Sub_71; }
	inline void set_Line4_Sub_71(GameObject_t3649676894 * value)
	{
		___Line4_Sub_71 = value;
		Il2CppCodeGenWriteBarrier((&___Line4_Sub_71), value);
	}

	inline static int32_t get_offset_of_MorganDialogue_72() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___MorganDialogue_72)); }
	inline GameObject_t3649676894 * get_MorganDialogue_72() const { return ___MorganDialogue_72; }
	inline GameObject_t3649676894 ** get_address_of_MorganDialogue_72() { return &___MorganDialogue_72; }
	inline void set_MorganDialogue_72(GameObject_t3649676894 * value)
	{
		___MorganDialogue_72 = value;
		Il2CppCodeGenWriteBarrier((&___MorganDialogue_72), value);
	}

	inline static int32_t get_offset_of_Choice1_73() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Choice1_73)); }
	inline GameObject_t3649676894 * get_Choice1_73() const { return ___Choice1_73; }
	inline GameObject_t3649676894 ** get_address_of_Choice1_73() { return &___Choice1_73; }
	inline void set_Choice1_73(GameObject_t3649676894 * value)
	{
		___Choice1_73 = value;
		Il2CppCodeGenWriteBarrier((&___Choice1_73), value);
	}

	inline static int32_t get_offset_of_Fungo_74() { return static_cast<int32_t>(offsetof(GM_t4063652661, ___Fungo_74)); }
	inline GameObject_t3649676894 * get_Fungo_74() const { return ___Fungo_74; }
	inline GameObject_t3649676894 ** get_address_of_Fungo_74() { return &___Fungo_74; }
	inline void set_Fungo_74(GameObject_t3649676894 * value)
	{
		___Fungo_74 = value;
		Il2CppCodeGenWriteBarrier((&___Fungo_74), value);
	}
};

struct GM_t4063652661_StaticFields
{
public:
	// GM GM::Me
	GM_t4063652661 * ___Me_2;

public:
	inline static int32_t get_offset_of_Me_2() { return static_cast<int32_t>(offsetof(GM_t4063652661_StaticFields, ___Me_2)); }
	inline GM_t4063652661 * get_Me_2() const { return ___Me_2; }
	inline GM_t4063652661 ** get_address_of_Me_2() { return &___Me_2; }
	inline void set_Me_2(GM_t4063652661 * value)
	{
		___Me_2 = value;
		Il2CppCodeGenWriteBarrier((&___Me_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GM_T4063652661_H


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3401497860_gshared (GameObject_t3649676894 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1799757720 (MonoBehaviour_t3205518785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t3649676894 * Component_get_gameObject_m2133767021 (Component_t3929247131 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
#define GameObject_GetComponent_TisAnimator_t1597602125_m278566180(__this, method) ((  Animator_t1597602125 * (*) (GameObject_t3649676894 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3401497860_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m173654492 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GM::play2()
extern "C"  void GM_play2_m2901174857 (GM_t4063652661 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m2743237365 (GameObject_t3649676894 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GM::play3()
extern "C"  void GM_play3_m1631130096 (GM_t4063652661 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GM::SetKeyActive()
extern "C"  void GM_SetKeyActive_m1774955410 (GM_t4063652661 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GM::play4()
extern "C"  void GM_play4_m2677621548 (GM_t4063652661 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GM::play5()
extern "C"  void GM_play5_m4292843290 (GM_t4063652661 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GM::playStory_3_Start_1()
extern "C"  void GM_playStory_3_Start_1_m1721360200 (GM_t4063652661 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GM::playStory_3_Start_2()
extern "C"  void GM_playStory_3_Start_2_m480158459 (GM_t4063652661 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m4134616347 (Animator_t1597602125 * __this, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WoodCutterController::.ctor()
extern "C"  void WoodCutterController__ctor_m2704877804 (WoodCutterController_t4207349438 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1799757720(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WoodCutterController::Start()
extern "C"  void WoodCutterController_Start_m402583645 (WoodCutterController_t4207349438 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WoodCutterController_Start_m402583645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t3649676894 * L_0 = Component_get_gameObject_m2133767021(__this, /*hidden argument*/NULL);
		Animator_t1597602125 * L_1 = GameObject_GetComponent_TisAnimator_t1597602125_m278566180(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimator_t1597602125_m278566180_RuntimeMethod_var);
		__this->set_ani_this_2(L_1);
		return;
	}
}
// System.Void WoodCutterController::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C"  void WoodCutterController_OnTriggerStay2D_m3571163766 (WoodCutterController_t4207349438 * __this, Collider2D_t4102758599 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WoodCutterController_OnTriggerStay2D_m3571163766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GM_t4063652661 * L_0 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_1 = L_0->get_Count_3();
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0043;
		}
	}

IL_0020:
	{
		GM_t4063652661 * L_3 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_4 = L_3->get_Count_3();
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}

IL_0043:
	{
		GM_t4063652661 * L_6 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		GM_play2_m2901174857(L_6, /*hidden argument*/NULL);
		GM_t4063652661 * L_7 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		GameObject_t3649676894 * L_8 = L_7->get_Appear_1_67();
		GameObject_SetActive_m2743237365(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_005d:
	{
		GM_t4063652661 * L_9 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_10 = L_9->get_Count_3();
		if ((!(((float)L_10) == ((float)(2.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00a0;
		}
	}

IL_007d:
	{
		GM_t4063652661 * L_12 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_13 = L_12->get_Count_3();
		if ((!(((float)L_13) == ((float)(2.0f)))))
		{
			goto IL_00b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b4;
		}
	}

IL_00a0:
	{
		GM_t4063652661 * L_15 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		GM_play3_m1631130096(L_15, /*hidden argument*/NULL);
		GM_t4063652661 * L_16 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		GM_SetKeyActive_m1774955410(L_16, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		GM_t4063652661 * L_17 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_18 = L_17->get_Count_3();
		if ((!(((float)L_18) == ((float)(3.0f)))))
		{
			goto IL_00d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00f7;
		}
	}

IL_00d4:
	{
		GM_t4063652661 * L_20 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_21 = L_20->get_Count_3();
		if ((!(((float)L_21) == ((float)(3.0f)))))
		{
			goto IL_0101;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_22 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0101;
		}
	}

IL_00f7:
	{
		GM_t4063652661 * L_23 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		GM_play4_m2677621548(L_23, /*hidden argument*/NULL);
	}

IL_0101:
	{
		GM_t4063652661 * L_24 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_25 = L_24->get_Count_3();
		if ((!(((float)L_25) == ((float)(4.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_26 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0144;
		}
	}

IL_0121:
	{
		GM_t4063652661 * L_27 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_28 = L_27->get_Count_3();
		if ((!(((float)L_28) == ((float)(4.0f)))))
		{
			goto IL_014e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_29 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_014e;
		}
	}

IL_0144:
	{
		GM_t4063652661 * L_30 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		GM_play5_m4292843290(L_30, /*hidden argument*/NULL);
	}

IL_014e:
	{
		GM_t4063652661 * L_31 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_32 = L_31->get_Count_3();
		if ((!(((float)L_32) == ((float)(5.1f)))))
		{
			goto IL_016e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_33 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0191;
		}
	}

IL_016e:
	{
		GM_t4063652661 * L_34 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_35 = L_34->get_Count_3();
		if ((!(((float)L_35) == ((float)(5.1f)))))
		{
			goto IL_019b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_36 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_019b;
		}
	}

IL_0191:
	{
		GM_t4063652661 * L_37 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		GM_playStory_3_Start_1_m1721360200(L_37, /*hidden argument*/NULL);
	}

IL_019b:
	{
		GM_t4063652661 * L_38 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_39 = L_38->get_Count_3();
		if ((!(((float)L_39) == ((float)(5.2f)))))
		{
			goto IL_01bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_40 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_01de;
		}
	}

IL_01bb:
	{
		GM_t4063652661 * L_41 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		float L_42 = L_41->get_Count_3();
		if ((!(((float)L_42) == ((float)(5.2f)))))
		{
			goto IL_01e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3343256959_il2cpp_TypeInfo_var);
		bool L_43 = Input_GetKeyDown_m173654492(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01e8;
		}
	}

IL_01de:
	{
		GM_t4063652661 * L_44 = ((GM_t4063652661_StaticFields*)il2cpp_codegen_static_fields_for(GM_t4063652661_il2cpp_TypeInfo_var))->get_Me_2();
		GM_playStory_3_Start_2_m480158459(L_44, /*hidden argument*/NULL);
	}

IL_01e8:
	{
		return;
	}
}
// System.Void WoodCutterController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void WoodCutterController_OnTriggerEnter2D_m1301595552 (WoodCutterController_t4207349438 * __this, Collider2D_t4102758599 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WoodCutterController_OnTriggerEnter2D_m1301595552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t1597602125 * L_0 = __this->get_ani_this_2();
		Animator_SetBool_m4134616347(L_0, _stringLiteral1066659814, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WoodCutterController::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C"  void WoodCutterController_OnTriggerExit2D_m3820179108 (WoodCutterController_t4207349438 * __this, Collider2D_t4102758599 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WoodCutterController_OnTriggerExit2D_m3820179108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t1597602125 * L_0 = __this->get_ani_this_2();
		Animator_SetBool_m4134616347(L_0, _stringLiteral1066659814, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
