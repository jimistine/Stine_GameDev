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

// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t727885203;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1039043720;
// System.Void
struct Void_t4141143141;
// System.Char[]
struct CharU5BU5D_t2008860647;
// UnityEngine.GameObject
struct GameObject_t1231992026;
// UnityEngine.AudioClip
struct AudioClip_t2814587387;
// UnityEngine.AudioSource
struct AudioSource_t1382984208;
// UnityEngine.Transform
struct Transform_t3679875320;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1674304538;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2763182011;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t141672278;




#ifndef U3CMODULEU3E_T1607392978_H
#define U3CMODULEU3E_T1607392978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1607392978 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1607392978_H
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
#ifndef TRACKABLEPROPERTY_T141672278_H
#define TRACKABLEPROPERTY_T141672278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty
struct  TrackableProperty_t141672278  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t727885203 * ___m_Fields_1;

public:
	inline static int32_t get_offset_of_m_Fields_1() { return static_cast<int32_t>(offsetof(TrackableProperty_t141672278, ___m_Fields_1)); }
	inline List_1_t727885203 * get_m_Fields_1() const { return ___m_Fields_1; }
	inline List_1_t727885203 ** get_address_of_m_Fields_1() { return &___m_Fields_1; }
	inline void set_m_Fields_1(List_1_t727885203 * value)
	{
		___m_Fields_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Fields_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTY_T141672278_H
#ifndef FIELDWITHTARGET_T303467092_H
#define FIELDWITHTARGET_T303467092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct  FieldWithTarget_t303467092  : public RuntimeObject
{
public:
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_ParamName
	String_t* ___m_ParamName_0;
	// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_Target
	Object_t1039043720 * ___m_Target_1;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_FieldPath
	String_t* ___m_FieldPath_2;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_TypeString
	String_t* ___m_TypeString_3;
	// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_DoStatic
	bool ___m_DoStatic_4;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_StaticString
	String_t* ___m_StaticString_5;

public:
	inline static int32_t get_offset_of_m_ParamName_0() { return static_cast<int32_t>(offsetof(FieldWithTarget_t303467092, ___m_ParamName_0)); }
	inline String_t* get_m_ParamName_0() const { return ___m_ParamName_0; }
	inline String_t** get_address_of_m_ParamName_0() { return &___m_ParamName_0; }
	inline void set_m_ParamName_0(String_t* value)
	{
		___m_ParamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParamName_0), value);
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(FieldWithTarget_t303467092, ___m_Target_1)); }
	inline Object_t1039043720 * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_t1039043720 ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_t1039043720 * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_1), value);
	}

	inline static int32_t get_offset_of_m_FieldPath_2() { return static_cast<int32_t>(offsetof(FieldWithTarget_t303467092, ___m_FieldPath_2)); }
	inline String_t* get_m_FieldPath_2() const { return ___m_FieldPath_2; }
	inline String_t** get_address_of_m_FieldPath_2() { return &___m_FieldPath_2; }
	inline void set_m_FieldPath_2(String_t* value)
	{
		___m_FieldPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FieldPath_2), value);
	}

	inline static int32_t get_offset_of_m_TypeString_3() { return static_cast<int32_t>(offsetof(FieldWithTarget_t303467092, ___m_TypeString_3)); }
	inline String_t* get_m_TypeString_3() const { return ___m_TypeString_3; }
	inline String_t** get_address_of_m_TypeString_3() { return &___m_TypeString_3; }
	inline void set_m_TypeString_3(String_t* value)
	{
		___m_TypeString_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeString_3), value);
	}

	inline static int32_t get_offset_of_m_DoStatic_4() { return static_cast<int32_t>(offsetof(FieldWithTarget_t303467092, ___m_DoStatic_4)); }
	inline bool get_m_DoStatic_4() const { return ___m_DoStatic_4; }
	inline bool* get_address_of_m_DoStatic_4() { return &___m_DoStatic_4; }
	inline void set_m_DoStatic_4(bool value)
	{
		___m_DoStatic_4 = value;
	}

	inline static int32_t get_offset_of_m_StaticString_5() { return static_cast<int32_t>(offsetof(FieldWithTarget_t303467092, ___m_StaticString_5)); }
	inline String_t* get_m_StaticString_5() const { return ___m_StaticString_5; }
	inline String_t** get_address_of_m_StaticString_5() { return &___m_StaticString_5; }
	inline void set_m_StaticString_5(String_t* value)
	{
		___m_StaticString_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_StaticString_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDWITHTARGET_T303467092_H
#ifndef VALUETYPE_T1277409988_H
#define VALUETYPE_T1277409988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1277409988  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1277409988_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1277409988_marshaled_com
{
};
#endif // VALUETYPE_T1277409988_H
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
#ifndef VECTOR2_T2117270361_H
#define VECTOR2_T2117270361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2117270361 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2117270361, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2117270361, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2117270361_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2117270361  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2117270361  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2117270361  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2117270361  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2117270361  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2117270361  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2117270361  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2117270361  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2117270361_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2117270361  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2117270361 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2117270361  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2117270361_StaticFields, ___oneVector_3)); }
	inline Vector2_t2117270361  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2117270361 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2117270361  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2117270361_StaticFields, ___upVector_4)); }
	inline Vector2_t2117270361  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2117270361 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2117270361  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2117270361_StaticFields, ___downVector_5)); }
	inline Vector2_t2117270361  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2117270361 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2117270361  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2117270361_StaticFields, ___leftVector_6)); }
	inline Vector2_t2117270361  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2117270361 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2117270361  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2117270361_StaticFields, ___rightVector_7)); }
	inline Vector2_t2117270361  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2117270361 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2117270361  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2117270361_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2117270361  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2117270361 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2117270361  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2117270361_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2117270361  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2117270361 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2117270361  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2117270361_H
#ifndef ENUM_T2360732703_H
#define ENUM_T2360732703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2360732703  : public ValueType_t1277409988
{
public:

public:
};

struct Enum_t2360732703_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2008860647* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2360732703_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2008860647* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2008860647** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2008860647* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2360732703_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2360732703_marshaled_com
{
};
#endif // ENUM_T2360732703_H
#ifndef TRIGGER_T4168852527_H
#define TRIGGER_T4168852527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker/Trigger
struct  Trigger_t4168852527 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker/Trigger::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Trigger_t4168852527, ___value___1)); }
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
#endif // TRIGGER_T4168852527_H
#ifndef OBJECT_T1039043720_H
#define OBJECT_T1039043720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1039043720  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1039043720, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1039043720_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1039043720_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t1039043720_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1039043720_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1039043720_H
#ifndef COMPONENT_T1152581764_H
#define COMPONENT_T1152581764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1152581764  : public Object_t1039043720
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1152581764_H
#ifndef BEHAVIOUR_T3903729912_H
#define BEHAVIOUR_T3903729912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3903729912  : public Component_t1152581764
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3903729912_H
#ifndef MONOBEHAVIOUR_T1864446083_H
#define MONOBEHAVIOUR_T1864446083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1864446083  : public Behaviour_t3903729912
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1864446083_H
#ifndef GM_T2590557390_H
#define GM_T2590557390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GM
struct  GM_t2590557390  : public MonoBehaviour_t1864446083
{
public:
	// UnityEngine.GameObject GM::doorClosed
	GameObject_t1231992026 * ___doorClosed_3;
	// UnityEngine.GameObject GM::doorOpen
	GameObject_t1231992026 * ___doorOpen_4;
	// UnityEngine.GameObject GM::doorClosed2
	GameObject_t1231992026 * ___doorClosed2_5;
	// UnityEngine.GameObject GM::doorOpen2
	GameObject_t1231992026 * ___doorOpen2_6;
	// UnityEngine.GameObject GM::doorClosed3
	GameObject_t1231992026 * ___doorClosed3_7;
	// UnityEngine.GameObject GM::doorOpen3
	GameObject_t1231992026 * ___doorOpen3_8;
	// UnityEngine.GameObject GM::doorClosed4
	GameObject_t1231992026 * ___doorClosed4_9;
	// UnityEngine.GameObject GM::doorOpen4
	GameObject_t1231992026 * ___doorOpen4_10;
	// UnityEngine.AudioClip GM::openDoor
	AudioClip_t2814587387 * ___openDoor_11;
	// UnityEngine.AudioClip GM::closeDoor
	AudioClip_t2814587387 * ___closeDoor_12;
	// UnityEngine.AudioSource GM::audioSource
	AudioSource_t1382984208 * ___audioSource_13;
	// UnityEngine.GameObject GM::Cam1
	GameObject_t1231992026 * ___Cam1_14;
	// UnityEngine.GameObject GM::Cam2
	GameObject_t1231992026 * ___Cam2_15;
	// UnityEngine.GameObject GM::Cam3
	GameObject_t1231992026 * ___Cam3_16;
	// UnityEngine.Transform GM::playerTrans
	Transform_t3679875320 * ___playerTrans_17;
	// UnityEngine.Rigidbody2D GM::playerRigidbody2D
	Rigidbody2D_t1674304538 * ___playerRigidbody2D_18;

public:
	inline static int32_t get_offset_of_doorClosed_3() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___doorClosed_3)); }
	inline GameObject_t1231992026 * get_doorClosed_3() const { return ___doorClosed_3; }
	inline GameObject_t1231992026 ** get_address_of_doorClosed_3() { return &___doorClosed_3; }
	inline void set_doorClosed_3(GameObject_t1231992026 * value)
	{
		___doorClosed_3 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed_3), value);
	}

	inline static int32_t get_offset_of_doorOpen_4() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___doorOpen_4)); }
	inline GameObject_t1231992026 * get_doorOpen_4() const { return ___doorOpen_4; }
	inline GameObject_t1231992026 ** get_address_of_doorOpen_4() { return &___doorOpen_4; }
	inline void set_doorOpen_4(GameObject_t1231992026 * value)
	{
		___doorOpen_4 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen_4), value);
	}

	inline static int32_t get_offset_of_doorClosed2_5() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___doorClosed2_5)); }
	inline GameObject_t1231992026 * get_doorClosed2_5() const { return ___doorClosed2_5; }
	inline GameObject_t1231992026 ** get_address_of_doorClosed2_5() { return &___doorClosed2_5; }
	inline void set_doorClosed2_5(GameObject_t1231992026 * value)
	{
		___doorClosed2_5 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed2_5), value);
	}

	inline static int32_t get_offset_of_doorOpen2_6() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___doorOpen2_6)); }
	inline GameObject_t1231992026 * get_doorOpen2_6() const { return ___doorOpen2_6; }
	inline GameObject_t1231992026 ** get_address_of_doorOpen2_6() { return &___doorOpen2_6; }
	inline void set_doorOpen2_6(GameObject_t1231992026 * value)
	{
		___doorOpen2_6 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen2_6), value);
	}

	inline static int32_t get_offset_of_doorClosed3_7() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___doorClosed3_7)); }
	inline GameObject_t1231992026 * get_doorClosed3_7() const { return ___doorClosed3_7; }
	inline GameObject_t1231992026 ** get_address_of_doorClosed3_7() { return &___doorClosed3_7; }
	inline void set_doorClosed3_7(GameObject_t1231992026 * value)
	{
		___doorClosed3_7 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed3_7), value);
	}

	inline static int32_t get_offset_of_doorOpen3_8() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___doorOpen3_8)); }
	inline GameObject_t1231992026 * get_doorOpen3_8() const { return ___doorOpen3_8; }
	inline GameObject_t1231992026 ** get_address_of_doorOpen3_8() { return &___doorOpen3_8; }
	inline void set_doorOpen3_8(GameObject_t1231992026 * value)
	{
		___doorOpen3_8 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen3_8), value);
	}

	inline static int32_t get_offset_of_doorClosed4_9() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___doorClosed4_9)); }
	inline GameObject_t1231992026 * get_doorClosed4_9() const { return ___doorClosed4_9; }
	inline GameObject_t1231992026 ** get_address_of_doorClosed4_9() { return &___doorClosed4_9; }
	inline void set_doorClosed4_9(GameObject_t1231992026 * value)
	{
		___doorClosed4_9 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed4_9), value);
	}

	inline static int32_t get_offset_of_doorOpen4_10() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___doorOpen4_10)); }
	inline GameObject_t1231992026 * get_doorOpen4_10() const { return ___doorOpen4_10; }
	inline GameObject_t1231992026 ** get_address_of_doorOpen4_10() { return &___doorOpen4_10; }
	inline void set_doorOpen4_10(GameObject_t1231992026 * value)
	{
		___doorOpen4_10 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen4_10), value);
	}

	inline static int32_t get_offset_of_openDoor_11() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___openDoor_11)); }
	inline AudioClip_t2814587387 * get_openDoor_11() const { return ___openDoor_11; }
	inline AudioClip_t2814587387 ** get_address_of_openDoor_11() { return &___openDoor_11; }
	inline void set_openDoor_11(AudioClip_t2814587387 * value)
	{
		___openDoor_11 = value;
		Il2CppCodeGenWriteBarrier((&___openDoor_11), value);
	}

	inline static int32_t get_offset_of_closeDoor_12() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___closeDoor_12)); }
	inline AudioClip_t2814587387 * get_closeDoor_12() const { return ___closeDoor_12; }
	inline AudioClip_t2814587387 ** get_address_of_closeDoor_12() { return &___closeDoor_12; }
	inline void set_closeDoor_12(AudioClip_t2814587387 * value)
	{
		___closeDoor_12 = value;
		Il2CppCodeGenWriteBarrier((&___closeDoor_12), value);
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___audioSource_13)); }
	inline AudioSource_t1382984208 * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_t1382984208 ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_t1382984208 * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_13), value);
	}

	inline static int32_t get_offset_of_Cam1_14() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___Cam1_14)); }
	inline GameObject_t1231992026 * get_Cam1_14() const { return ___Cam1_14; }
	inline GameObject_t1231992026 ** get_address_of_Cam1_14() { return &___Cam1_14; }
	inline void set_Cam1_14(GameObject_t1231992026 * value)
	{
		___Cam1_14 = value;
		Il2CppCodeGenWriteBarrier((&___Cam1_14), value);
	}

	inline static int32_t get_offset_of_Cam2_15() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___Cam2_15)); }
	inline GameObject_t1231992026 * get_Cam2_15() const { return ___Cam2_15; }
	inline GameObject_t1231992026 ** get_address_of_Cam2_15() { return &___Cam2_15; }
	inline void set_Cam2_15(GameObject_t1231992026 * value)
	{
		___Cam2_15 = value;
		Il2CppCodeGenWriteBarrier((&___Cam2_15), value);
	}

	inline static int32_t get_offset_of_Cam3_16() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___Cam3_16)); }
	inline GameObject_t1231992026 * get_Cam3_16() const { return ___Cam3_16; }
	inline GameObject_t1231992026 ** get_address_of_Cam3_16() { return &___Cam3_16; }
	inline void set_Cam3_16(GameObject_t1231992026 * value)
	{
		___Cam3_16 = value;
		Il2CppCodeGenWriteBarrier((&___Cam3_16), value);
	}

	inline static int32_t get_offset_of_playerTrans_17() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___playerTrans_17)); }
	inline Transform_t3679875320 * get_playerTrans_17() const { return ___playerTrans_17; }
	inline Transform_t3679875320 ** get_address_of_playerTrans_17() { return &___playerTrans_17; }
	inline void set_playerTrans_17(Transform_t3679875320 * value)
	{
		___playerTrans_17 = value;
		Il2CppCodeGenWriteBarrier((&___playerTrans_17), value);
	}

	inline static int32_t get_offset_of_playerRigidbody2D_18() { return static_cast<int32_t>(offsetof(GM_t2590557390, ___playerRigidbody2D_18)); }
	inline Rigidbody2D_t1674304538 * get_playerRigidbody2D_18() const { return ___playerRigidbody2D_18; }
	inline Rigidbody2D_t1674304538 ** get_address_of_playerRigidbody2D_18() { return &___playerRigidbody2D_18; }
	inline void set_playerRigidbody2D_18(Rigidbody2D_t1674304538 * value)
	{
		___playerRigidbody2D_18 = value;
		Il2CppCodeGenWriteBarrier((&___playerRigidbody2D_18), value);
	}
};

struct GM_t2590557390_StaticFields
{
public:
	// GM GM::Me
	GM_t2590557390 * ___Me_2;

public:
	inline static int32_t get_offset_of_Me_2() { return static_cast<int32_t>(offsetof(GM_t2590557390_StaticFields, ___Me_2)); }
	inline GM_t2590557390 * get_Me_2() const { return ___Me_2; }
	inline GM_t2590557390 ** get_address_of_Me_2() { return &___Me_2; }
	inline void set_Me_2(GM_t2590557390 * value)
	{
		___Me_2 = value;
		Il2CppCodeGenWriteBarrier((&___Me_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GM_T2590557390_H
#ifndef DOORBEHAVIOR_T1541891664_H
#define DOORBEHAVIOR_T1541891664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoorBehavior
struct  DoorBehavior_t1541891664  : public MonoBehaviour_t1864446083
{
public:
	// UnityEngine.GameObject DoorBehavior::doorClosed
	GameObject_t1231992026 * ___doorClosed_2;
	// UnityEngine.GameObject DoorBehavior::doorOpen
	GameObject_t1231992026 * ___doorOpen_3;

public:
	inline static int32_t get_offset_of_doorClosed_2() { return static_cast<int32_t>(offsetof(DoorBehavior_t1541891664, ___doorClosed_2)); }
	inline GameObject_t1231992026 * get_doorClosed_2() const { return ___doorClosed_2; }
	inline GameObject_t1231992026 ** get_address_of_doorClosed_2() { return &___doorClosed_2; }
	inline void set_doorClosed_2(GameObject_t1231992026 * value)
	{
		___doorClosed_2 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed_2), value);
	}

	inline static int32_t get_offset_of_doorOpen_3() { return static_cast<int32_t>(offsetof(DoorBehavior_t1541891664, ___doorOpen_3)); }
	inline GameObject_t1231992026 * get_doorOpen_3() const { return ___doorOpen_3; }
	inline GameObject_t1231992026 ** get_address_of_doorOpen_3() { return &___doorOpen_3; }
	inline void set_doorOpen_3(GameObject_t1231992026 * value)
	{
		___doorOpen_3 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOORBEHAVIOR_T1541891664_H
#ifndef CAMERABEHAVIOR_T1212615481_H
#define CAMERABEHAVIOR_T1212615481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraBehavior
struct  CameraBehavior_t1212615481  : public MonoBehaviour_t1864446083
{
public:
	// UnityEngine.GameObject CameraBehavior::Cam1
	GameObject_t1231992026 * ___Cam1_2;
	// UnityEngine.GameObject CameraBehavior::Cam2
	GameObject_t1231992026 * ___Cam2_3;
	// UnityEngine.GameObject CameraBehavior::Cam3
	GameObject_t1231992026 * ___Cam3_4;

public:
	inline static int32_t get_offset_of_Cam1_2() { return static_cast<int32_t>(offsetof(CameraBehavior_t1212615481, ___Cam1_2)); }
	inline GameObject_t1231992026 * get_Cam1_2() const { return ___Cam1_2; }
	inline GameObject_t1231992026 ** get_address_of_Cam1_2() { return &___Cam1_2; }
	inline void set_Cam1_2(GameObject_t1231992026 * value)
	{
		___Cam1_2 = value;
		Il2CppCodeGenWriteBarrier((&___Cam1_2), value);
	}

	inline static int32_t get_offset_of_Cam2_3() { return static_cast<int32_t>(offsetof(CameraBehavior_t1212615481, ___Cam2_3)); }
	inline GameObject_t1231992026 * get_Cam2_3() const { return ___Cam2_3; }
	inline GameObject_t1231992026 ** get_address_of_Cam2_3() { return &___Cam2_3; }
	inline void set_Cam2_3(GameObject_t1231992026 * value)
	{
		___Cam2_3 = value;
		Il2CppCodeGenWriteBarrier((&___Cam2_3), value);
	}

	inline static int32_t get_offset_of_Cam3_4() { return static_cast<int32_t>(offsetof(CameraBehavior_t1212615481, ___Cam3_4)); }
	inline GameObject_t1231992026 * get_Cam3_4() const { return ___Cam3_4; }
	inline GameObject_t1231992026 ** get_address_of_Cam3_4() { return &___Cam3_4; }
	inline void set_Cam3_4(GameObject_t1231992026 * value)
	{
		___Cam3_4 = value;
		Il2CppCodeGenWriteBarrier((&___Cam3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERABEHAVIOR_T1212615481_H
#ifndef OPENDOOR_T1049285588_H
#define OPENDOOR_T1049285588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenDoor
struct  OpenDoor_t1049285588  : public MonoBehaviour_t1864446083
{
public:
	// UnityEngine.GameObject OpenDoor::doorClosed
	GameObject_t1231992026 * ___doorClosed_2;
	// UnityEngine.GameObject OpenDoor::doorOpen
	GameObject_t1231992026 * ___doorOpen_3;

public:
	inline static int32_t get_offset_of_doorClosed_2() { return static_cast<int32_t>(offsetof(OpenDoor_t1049285588, ___doorClosed_2)); }
	inline GameObject_t1231992026 * get_doorClosed_2() const { return ___doorClosed_2; }
	inline GameObject_t1231992026 ** get_address_of_doorClosed_2() { return &___doorClosed_2; }
	inline void set_doorClosed_2(GameObject_t1231992026 * value)
	{
		___doorClosed_2 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed_2), value);
	}

	inline static int32_t get_offset_of_doorOpen_3() { return static_cast<int32_t>(offsetof(OpenDoor_t1049285588, ___doorOpen_3)); }
	inline GameObject_t1231992026 * get_doorOpen_3() const { return ___doorOpen_3; }
	inline GameObject_t1231992026 ** get_address_of_doorOpen_3() { return &___doorOpen_3; }
	inline void set_doorOpen_3(GameObject_t1231992026 * value)
	{
		___doorOpen_3 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPENDOOR_T1049285588_H
#ifndef CLOSEDOOR_T193514023_H
#define CLOSEDOOR_T193514023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloseDoor
struct  CloseDoor_t193514023  : public MonoBehaviour_t1864446083
{
public:
	// UnityEngine.GameObject CloseDoor::doorClosed
	GameObject_t1231992026 * ___doorClosed_2;
	// UnityEngine.GameObject CloseDoor::doorOpen
	GameObject_t1231992026 * ___doorOpen_3;

public:
	inline static int32_t get_offset_of_doorClosed_2() { return static_cast<int32_t>(offsetof(CloseDoor_t193514023, ___doorClosed_2)); }
	inline GameObject_t1231992026 * get_doorClosed_2() const { return ___doorClosed_2; }
	inline GameObject_t1231992026 ** get_address_of_doorClosed_2() { return &___doorClosed_2; }
	inline void set_doorClosed_2(GameObject_t1231992026 * value)
	{
		___doorClosed_2 = value;
		Il2CppCodeGenWriteBarrier((&___doorClosed_2), value);
	}

	inline static int32_t get_offset_of_doorOpen_3() { return static_cast<int32_t>(offsetof(CloseDoor_t193514023, ___doorOpen_3)); }
	inline GameObject_t1231992026 * get_doorOpen_3() const { return ___doorOpen_3; }
	inline GameObject_t1231992026 ** get_address_of_doorOpen_3() { return &___doorOpen_3; }
	inline void set_doorOpen_3(GameObject_t1231992026 * value)
	{
		___doorOpen_3 = value;
		Il2CppCodeGenWriteBarrier((&___doorOpen_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOSEDOOR_T193514023_H
#ifndef PLAYERCONTROLLER_T3263024374_H
#define PLAYERCONTROLLER_T3263024374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t3263024374  : public MonoBehaviour_t1864446083
{
public:
	// UnityEngine.Rigidbody2D PlayerController::PlayerRigidbody2D
	Rigidbody2D_t1674304538 * ___PlayerRigidbody2D_2;
	// System.Single PlayerController::MoveSpeed
	float ___MoveSpeed_3;
	// System.Single PlayerController::MoveV
	float ___MoveV_4;
	// UnityEngine.Vector2 PlayerController::move
	Vector2_t2117270361  ___move_5;

public:
	inline static int32_t get_offset_of_PlayerRigidbody2D_2() { return static_cast<int32_t>(offsetof(PlayerController_t3263024374, ___PlayerRigidbody2D_2)); }
	inline Rigidbody2D_t1674304538 * get_PlayerRigidbody2D_2() const { return ___PlayerRigidbody2D_2; }
	inline Rigidbody2D_t1674304538 ** get_address_of_PlayerRigidbody2D_2() { return &___PlayerRigidbody2D_2; }
	inline void set_PlayerRigidbody2D_2(Rigidbody2D_t1674304538 * value)
	{
		___PlayerRigidbody2D_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerRigidbody2D_2), value);
	}

	inline static int32_t get_offset_of_MoveSpeed_3() { return static_cast<int32_t>(offsetof(PlayerController_t3263024374, ___MoveSpeed_3)); }
	inline float get_MoveSpeed_3() const { return ___MoveSpeed_3; }
	inline float* get_address_of_MoveSpeed_3() { return &___MoveSpeed_3; }
	inline void set_MoveSpeed_3(float value)
	{
		___MoveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_MoveV_4() { return static_cast<int32_t>(offsetof(PlayerController_t3263024374, ___MoveV_4)); }
	inline float get_MoveV_4() const { return ___MoveV_4; }
	inline float* get_address_of_MoveV_4() { return &___MoveV_4; }
	inline void set_MoveV_4(float value)
	{
		___MoveV_4 = value;
	}

	inline static int32_t get_offset_of_move_5() { return static_cast<int32_t>(offsetof(PlayerController_t3263024374, ___move_5)); }
	inline Vector2_t2117270361  get_move_5() const { return ___move_5; }
	inline Vector2_t2117270361 * get_address_of_move_5() { return &___move_5; }
	inline void set_move_5(Vector2_t2117270361  value)
	{
		___move_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T3263024374_H
#ifndef ANALYTICSTRACKER_T4125175909_H
#define ANALYTICSTRACKER_T4125175909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker
struct  AnalyticsTracker_t4125175909  : public MonoBehaviour_t1864446083
{
public:
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_t2763182011 * ___m_Dict_3;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_4;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_t141672278 * ___m_TrackableProperty_5;
	// UnityEngine.Analytics.AnalyticsTracker/Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_6;

public:
	inline static int32_t get_offset_of_m_EventName_2() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t4125175909, ___m_EventName_2)); }
	inline String_t* get_m_EventName_2() const { return ___m_EventName_2; }
	inline String_t** get_address_of_m_EventName_2() { return &___m_EventName_2; }
	inline void set_m_EventName_2(String_t* value)
	{
		___m_EventName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventName_2), value);
	}

	inline static int32_t get_offset_of_m_Dict_3() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t4125175909, ___m_Dict_3)); }
	inline Dictionary_2_t2763182011 * get_m_Dict_3() const { return ___m_Dict_3; }
	inline Dictionary_2_t2763182011 ** get_address_of_m_Dict_3() { return &___m_Dict_3; }
	inline void set_m_Dict_3(Dictionary_2_t2763182011 * value)
	{
		___m_Dict_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_3), value);
	}

	inline static int32_t get_offset_of_m_PrevDictHash_4() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t4125175909, ___m_PrevDictHash_4)); }
	inline int32_t get_m_PrevDictHash_4() const { return ___m_PrevDictHash_4; }
	inline int32_t* get_address_of_m_PrevDictHash_4() { return &___m_PrevDictHash_4; }
	inline void set_m_PrevDictHash_4(int32_t value)
	{
		___m_PrevDictHash_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackableProperty_5() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t4125175909, ___m_TrackableProperty_5)); }
	inline TrackableProperty_t141672278 * get_m_TrackableProperty_5() const { return ___m_TrackableProperty_5; }
	inline TrackableProperty_t141672278 ** get_address_of_m_TrackableProperty_5() { return &___m_TrackableProperty_5; }
	inline void set_m_TrackableProperty_5(TrackableProperty_t141672278 * value)
	{
		___m_TrackableProperty_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableProperty_5), value);
	}

	inline static int32_t get_offset_of_m_Trigger_6() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t4125175909, ___m_Trigger_6)); }
	inline int32_t get_m_Trigger_6() const { return ___m_Trigger_6; }
	inline int32_t* get_address_of_m_Trigger_6() { return &___m_Trigger_6; }
	inline void set_m_Trigger_6(int32_t value)
	{
		___m_Trigger_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSTRACKER_T4125175909_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (AnalyticsTracker_t4125175909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[5] = 
{
	AnalyticsTracker_t4125175909::get_offset_of_m_EventName_2(),
	AnalyticsTracker_t4125175909::get_offset_of_m_Dict_3(),
	AnalyticsTracker_t4125175909::get_offset_of_m_PrevDictHash_4(),
	AnalyticsTracker_t4125175909::get_offset_of_m_TrackableProperty_5(),
	AnalyticsTracker_t4125175909::get_offset_of_m_Trigger_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (Trigger_t4168852527)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1401[8] = 
{
	Trigger_t4168852527::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (TrackableProperty_t141672278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1402[2] = 
{
	0,
	TrackableProperty_t141672278::get_offset_of_m_Fields_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (FieldWithTarget_t303467092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1403[6] = 
{
	FieldWithTarget_t303467092::get_offset_of_m_ParamName_0(),
	FieldWithTarget_t303467092::get_offset_of_m_Target_1(),
	FieldWithTarget_t303467092::get_offset_of_m_FieldPath_2(),
	FieldWithTarget_t303467092::get_offset_of_m_TypeString_3(),
	FieldWithTarget_t303467092::get_offset_of_m_DoStatic_4(),
	FieldWithTarget_t303467092::get_offset_of_m_StaticString_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (U3CModuleU3E_t1607392978), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (CloseDoor_t193514023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1405[2] = 
{
	CloseDoor_t193514023::get_offset_of_doorClosed_2(),
	CloseDoor_t193514023::get_offset_of_doorOpen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (OpenDoor_t1049285588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1406[2] = 
{
	OpenDoor_t1049285588::get_offset_of_doorClosed_2(),
	OpenDoor_t1049285588::get_offset_of_doorOpen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (CameraBehavior_t1212615481), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[3] = 
{
	CameraBehavior_t1212615481::get_offset_of_Cam1_2(),
	CameraBehavior_t1212615481::get_offset_of_Cam2_3(),
	CameraBehavior_t1212615481::get_offset_of_Cam3_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (DoorBehavior_t1541891664), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1408[2] = 
{
	DoorBehavior_t1541891664::get_offset_of_doorClosed_2(),
	DoorBehavior_t1541891664::get_offset_of_doorOpen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (GM_t2590557390), -1, sizeof(GM_t2590557390_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1409[17] = 
{
	GM_t2590557390_StaticFields::get_offset_of_Me_2(),
	GM_t2590557390::get_offset_of_doorClosed_3(),
	GM_t2590557390::get_offset_of_doorOpen_4(),
	GM_t2590557390::get_offset_of_doorClosed2_5(),
	GM_t2590557390::get_offset_of_doorOpen2_6(),
	GM_t2590557390::get_offset_of_doorClosed3_7(),
	GM_t2590557390::get_offset_of_doorOpen3_8(),
	GM_t2590557390::get_offset_of_doorClosed4_9(),
	GM_t2590557390::get_offset_of_doorOpen4_10(),
	GM_t2590557390::get_offset_of_openDoor_11(),
	GM_t2590557390::get_offset_of_closeDoor_12(),
	GM_t2590557390::get_offset_of_audioSource_13(),
	GM_t2590557390::get_offset_of_Cam1_14(),
	GM_t2590557390::get_offset_of_Cam2_15(),
	GM_t2590557390::get_offset_of_Cam3_16(),
	GM_t2590557390::get_offset_of_playerTrans_17(),
	GM_t2590557390::get_offset_of_playerRigidbody2D_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (PlayerController_t3263024374), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1410[4] = 
{
	PlayerController_t3263024374::get_offset_of_PlayerRigidbody2D_2(),
	PlayerController_t3263024374::get_offset_of_MoveSpeed_3(),
	PlayerController_t3263024374::get_offset_of_MoveV_4(),
	PlayerController_t3263024374::get_offset_of_move_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
