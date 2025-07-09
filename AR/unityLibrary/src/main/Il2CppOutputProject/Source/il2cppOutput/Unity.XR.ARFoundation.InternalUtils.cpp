﻿#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95;
struct Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct KeyCollection_tFD19F40B4A34BF9057EBF0F93ADA95B07016CD02;
struct KeyCollection_tA7A770EE9715E270E67F6001365DC8606EF13F77;
struct ValueCollection_tC144734B8D67D84B7E29B0436EC9C2452CCA81AB;
struct ValueCollection_tF17FBFFA2398A996DEA22986C4FA999381EF28CC;
struct EntryU5BU5D_tAEB595DE5547806CD491EDC10633DF9DF0AE1A31;
struct EntryU5BU5D_t030BCDA794F7D4C5E51C5012EB4E82BDB858A77C;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct String_t;
struct StringBuilder_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5B08C870070CBBD5BCCD7F29885E5EDBCBABE9C1;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF3EB29335813FBD9D3390DDA8A96A2D6983F15;
IL2CPP_EXTERN_C String_t* _stringLiteralB105D770A10A2FD4466874B305A999027C52E4D1;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC79E32735266397677C7E3884C2AE0D336A8038B;
IL2CPP_EXTERN_C String_t* _stringLiteralD41976E879BBB017F601BD5B8B2B1655555B3264;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m12034E354393D2550425F424B5BAC47C7F1C4139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m966524DD31028D4F49BE74AD802416D0C3FBD5DA_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t5218147BD37F64395DC56BE23845B6D65FC51818 
{
};
struct Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tAEB595DE5547806CD491EDC10633DF9DF0AE1A31* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFD19F40B4A34BF9057EBF0F93ADA95B07016CD02* ____keys;
	ValueCollection_tC144734B8D67D84B7E29B0436EC9C2452CCA81AB* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t030BCDA794F7D4C5E51C5012EB4E82BDB858A77C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA7A770EE9715E270E67F6001365DC8606EF13F77* ____keys;
	ValueCollection_tF17FBFFA2398A996DEA22986C4FA999381EF28CC* ____values;
	RuntimeObject* ____syncRoot;
};
struct ObjectPoolCreateUtil_t593EDD9C4B67C11EEA5A16180F235E24978AA05A  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B  : public RuntimeObject
{
};
struct TextureExtensions_t5490CB6E3DF63B8D5DE8492CD7A3AD1976167B52  : public RuntimeObject
{
};
struct UnitConversionUtility_tFABAF43D0A64FDE8C23C770FF2F188360F442F7D  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	int32_t ___value__;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_StaticFields
{
	Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B* ___s_SubsystemsByType;
	Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95* ___s_IntegratedSubsystemsByType;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_m966524DD31028D4F49BE74AD802416D0C3FBD5DA (Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m12034E354393D2550425F424B5BAC47C7F1C4139 (Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUtils__cctor_m3DD3F7A8201078CB9B07319932C6513EB7274521 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m12034E354393D2550425F424B5BAC47C7F1C4139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m966524DD31028D4F49BE74AD802416D0C3FBD5DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B* L_0 = (Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B*)il2cpp_codegen_object_new(Dictionary_2_tB17413D7F1FE5FF34D3BE8319C1F17AE0212AE5B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m966524DD31028D4F49BE74AD802416D0C3FBD5DA(L_0, Dictionary_2__ctor_m966524DD31028D4F49BE74AD802416D0C3FBD5DA_RuntimeMethod_var);
		((SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_il2cpp_TypeInfo_var))->___s_SubsystemsByType = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_il2cpp_TypeInfo_var))->___s_SubsystemsByType), (void*)L_0);
		Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95* L_1 = (Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95*)il2cpp_codegen_object_new(Dictionary_2_tDD474C506226DB7FB4B9754A4124013CD165BE95_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m12034E354393D2550425F424B5BAC47C7F1C4139(L_1, Dictionary_2__ctor_m12034E354393D2550425F424B5BAC47C7F1C4139_RuntimeMethod_var);
		((SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_il2cpp_TypeInfo_var))->___s_IntegratedSubsystemsByType = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemUtils_tFF1F0FE7CEE872559AAF7091C8EA14E6BEF3308B_il2cpp_TypeInfo_var))->___s_IntegratedSubsystemsByType), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureExtensions_ToDebugString_m3D2E7212B276ED7737C4937631F57FEC03B8E87C (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B08C870070CBBD5BCCD7F29885E5EDBCBABE9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF3EB29335813FBD9D3390DDA8A96A2D6983F15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB105D770A10A2FD4466874B305A999027C52E4D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC79E32735266397677C7E3884C2AE0D336A8038B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41976E879BBB017F601BD5B8B2B1655555B3264);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
	}

IL_000f:
	{
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		StringBuilder_t* L_3 = L_2;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_3, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		StringBuilder_t* L_5 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___0_texture;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5, L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC79E32735266397677C7E3884C2AE0D336A8038B, L_9, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_5, L_10, NULL);
		StringBuilder_t* L_12 = L_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___0_texture;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_13);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD41976E879BBB017F601BD5B8B2B1655555B3264, L_16, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_12, L_17, NULL);
		StringBuilder_t* L_19 = L_12;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20 = ___0_texture;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(9, L_20);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5B08C870070CBBD5BCCD7F29885E5EDBCBABE9C1, L_23, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_19, L_24, NULL);
		StringBuilder_t* L_26 = L_19;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_27 = ___0_texture;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(4, L_27);
		V_0 = L_28;
		Il2CppFakeBox<int32_t> L_29(GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_30;
		L_30 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_29), NULL);
		String_t* L_31;
		L_31 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB105D770A10A2FD4466874B305A999027C52E4D1, L_30, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_26, L_31, NULL);
		StringBuilder_t* L_33 = L_26;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_34 = ___0_texture;
		NullCheck(L_34);
		intptr_t L_35;
		L_35 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_34, NULL);
		intptr_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_defaults.int_class, &L_36);
		String_t* L_38;
		L_38 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralAFF3EB29335813FBD9D3390DDA8A96A2D6983F15, L_37, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_33, L_38, NULL);
		StringBuilder_t* L_40 = L_33;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_40);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_40);
		return L_42;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnitConversionUtility_ConvertBrightnessToLumens_m6F15E8AB3B466F3FE6FEEB33D5CE471BCD9E8DED (float ___0_brightness, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_brightness;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_0, (2000.0f))), (0.0f), (2000.0f), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnitConversionUtility_ConvertLumensToBrightness_mB801F5903C041B3C3C76D1915180504542D2AFEC (float ___0_lumens, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_lumens;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_0/(2000.0f))), (0.0f), (1.0f), NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
