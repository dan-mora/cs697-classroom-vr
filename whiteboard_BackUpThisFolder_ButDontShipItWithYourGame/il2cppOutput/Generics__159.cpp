#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D;
struct Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938;
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE;
struct Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE;
struct Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899;
struct Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A;
struct Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2;
struct Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76;
struct Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F;
struct Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809;
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
struct Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t9C73E2DA2A24734B7BEE3997930B156A82172C56;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tF74C952F97E24A4AFD21162637D82942513CB35B;
struct IXRInputValueReader_1_t247E136B8E885FC4E01A4405F0524F47214F4A5B;
struct IXRInputValueReader_1_tE6C56CC3831F86463CF271FFFFAEA88A1AFFC425;
struct IXRInputValueReader_1_t3B292CF89AD3EFA514AD2640799BAD4A06619677;
struct IXRInputValueReader_1_tC86C12DB1216B425E7880781CAFFE046A4E03898;
struct InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD;
struct InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE;
struct InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71;
struct InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408;
struct InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693;
struct InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB;
struct InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7;
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
struct Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255;
struct List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158;
struct UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32;
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D;
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A;
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D;
struct UnityObjectReferenceCache_2_tA59ADE2648BE96336C092AC59404696C3B5D327B;
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C;
struct WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2;
struct WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04;
struct WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A;
struct WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9;
struct WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F;
struct WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285;
struct WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797;
struct WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB;
struct WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F;
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
struct WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C;
struct XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506;
struct XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2;
struct XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF;
struct XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C;
struct XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1;
struct XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1;
struct XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46;
struct XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35;
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5;
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0;
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF;
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A;
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59;

IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Il2CppSharedGenericObject* ___current;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255  : public RuntimeObject
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036  : public RuntimeObject
{
	ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A 
{
	XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___m_Reader;
};
struct BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 
{
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___m_Reader;
};
struct BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE 
{
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_Reader;
};
struct BypassScope_t801793A02437762F196198D282A1980396D8B968 
{
	XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* ___m_Reader;
};
struct Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t07DF8A5C33821DD7E0165E9DC5A797CAAC2D02C0 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04  : public Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831
{
	RuntimeObject* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
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
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	uint64_t ___m_DeviceId;
	bool ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E 
{
	String_t* ___name;
	String_t* ___library_path;
	String_t* ___api_version;
	String_t* ___implementation_version;
	String_t* ___description;
};
struct ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E_marshaled_pinvoke
{
	char* ___name;
	char* ___library_path;
	char* ___api_version;
	char* ___implementation_version;
	char* ___description;
};
struct ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___library_path;
	Il2CppChar* ___api_version;
	Il2CppChar* ___implementation_version;
	Il2CppChar* ___description;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current;
};
struct WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___selector;
	Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ___enumerator;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797  : public Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct Architecture_t6C2664B4DC57F7351DD0D6F0F0E8E03210B708A7 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	int32_t ___value__;
};
struct InputDeviceCharacteristics_t7BD1A06C6AE9FBD26F4FC105269861694217BD82 
{
	uint32_t ___value__;
};
struct InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D 
{
	uint32_t ___value__;
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
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	int32_t ___value__;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct InputSourceMode_tC6F86938AEFC93650B200F13CB1CDF660E091A6C 
{
	int32_t ___value__;
};
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	RuntimeObject* ___source;
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* ___selector;
	Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ___enumerator;
};
struct WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59  : public RuntimeObject
{
	int32_t ___m_InputSourceMode;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_InputAction;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_InputActionReference;
	UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158* ___m_InputActionReferenceCache;
};
struct ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 
{
	ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E ___m_Json;
	String_t* ___m_JsonFileName;
	int32_t ___m_LibraryArchitecture;
	bool ___m_IsEnabled;
};
struct ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227_marshaled_pinvoke
{
	ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E_marshaled_pinvoke ___m_Json;
	char* ___m_JsonFileName;
	int32_t ___m_LibraryArchitecture;
	int32_t ___m_IsEnabled;
};
struct ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227_marshaled_com
{
	ApiLayerJson_tA04D8A5D95C066840FF10217153C0EAF410C174E_marshaled_com ___m_Json;
	Il2CppChar* ___m_JsonFileName;
	int32_t ___m_LibraryArchitecture;
	int32_t ___m_IsEnabled;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A 
{
	List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ____list;
	int32_t ____index;
	int32_t ____version;
	ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ____current;
};
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list;
	int32_t ____index;
	int32_t ____version;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current;
};
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D  : public MulticastDelegate_t
{
};
struct Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938  : public MulticastDelegate_t
{
};
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE  : public MulticastDelegate_t
{
};
struct Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE  : public MulticastDelegate_t
{
};
struct Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899  : public MulticastDelegate_t
{
};
struct Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A  : public MulticastDelegate_t
{
};
struct Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2  : public MulticastDelegate_t
{
};
struct Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76  : public MulticastDelegate_t
{
};
struct Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F  : public MulticastDelegate_t
{
};
struct Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809  : public MulticastDelegate_t
{
};
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};
struct Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4  : public MulticastDelegate_t
{
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	int32_t ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* ___m_ObjectReference;
};
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	float ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* ___m_ObjectReference;
};
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* ___m_ObjectReference;
};
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59 {};
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	String_t* ___m_ActionId;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
};
struct XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	uint32_t ___m_Characteristics;
};
struct WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ___source;
	Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* ___predicate;
	Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* ___selector;
	Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A ___enumerator;
};
struct WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ___source;
	Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* ___predicate;
	Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* ___selector;
	Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A ___enumerator;
};
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	int32_t ___m_Priority;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255_StaticFields
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___s_emptyArray;
};
struct List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036_StaticFields
{
	ApiLayerU5BU5D_tA69051E32F2652E385B1E8FF51C4CFF6E0E2A7AF* ___s_emptyArray;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionEnableProfilerMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionDisableProfilerMarker;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943 (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF00B95B59197D6CEA2311875016BA798A7180FD4_gshared (WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8B551097217DFF5F72DACB7AA2A8BD5C739B7539_gshared_inline (Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4 (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD_gshared (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC2E8B8671DF6A475B088C94D9C424167C9E5FDB5_gshared (WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8_gshared (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m514FEF2F5AA253487EBBC519F9307632A5CFD0C6_gshared_inline (Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A_gshared (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAC9D7E0CCA4B15AEFA7AF154091F7E82E23A1C25_gshared (WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mEF9FB08DE4E3C95C6F5B1E856588DB02767A2DBD_gshared_inline (Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316_gshared (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_gshared_inline (Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE7E4CC95FAFCA7DEDBC7CD26B2BEEDB7178002E9_gshared (WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04* __this, RuntimeObject* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m36B020CAC68AE0C8A556C36A8117710336D5A481 (WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB* __this, List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ___0_source, Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* ___1_predicate, Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A List_1_GetEnumerator_m507E659235452B34B93200B0E02A1F3902375603 (List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 Enumerator_get_Current_m57B6DCBFE860F5E384D1030E0DA5419B4DC0AEE8_inline (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m748A254DE47C08F0AFC9E6B6983948A76CC4716F_inline (Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m08379AB72542404DC114C3447F78505B4AB919FD_inline (Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38097B06E2078894D9BA97A2D2E7BF049C263E5B (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m26A1FD419D0B2BC83CF58FC8A32BFF5923CFC423_gshared (WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F* __this, List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ___0_source, Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* ___1_predicate, Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mB545625DD13E3009F95E2CDF91A0B739DFEA13C4_gshared_inline (Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13 (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_gshared_inline (Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m26AEFAF1CEE0F05D4FEBFD32AAA358D234BB2F6C_fshared_inline (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7 (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0 (InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989 (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08 (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m8651C8E7019D87B89CA079D6B5AB2C993D79BC46_gshared (InputFeatureUsage_1_t07DF8A5C33821DD7E0165E9DC5A797CAAC2D02C0* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectReferenceCache_2__ctor_mD77F6D89989A517F8D5FD970E1375F1937188717_gshared (UnityObjectReferenceCache_2_tA59ADE2648BE96336C092AC59404696C3B5D327B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnityObjectReferenceCache_2_Get_mAA0886DE1A45B1AA9DAA3814532C908244C994C1_gshared (UnityObjectReferenceCache_2_tA59ADE2648BE96336C092AC59404696C3B5D327B* __this, Il2CppSharedGenericObject* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectReferenceCache_2_Set_m8E80161F58FAD582B6169AD6FD2F7DC68CCB5730_gshared (UnityObjectReferenceCache_2_tA59ADE2648BE96336C092AC59404696C3B5D327B* __this, Il2CppSharedGenericObject** ___0_field, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_fshared (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943 (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method) ;
inline void WhereSelectListIterator_2__ctor_mF00B95B59197D6CEA2311875016BA798A7180FD4 (WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF00B95B59197D6CEA2311875016BA798A7180FD4_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline)(__this, ___0_arg, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8B551097217DFF5F72DACB7AA2A8BD5C739B7539_inline (Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_m8B551097217DFF5F72DACB7AA2A8BD5C739B7539_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25 (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4 (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method) ;
inline void Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*, const RuntimeMethod*))Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868 (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377 (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*, RuntimeObject*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared)(__this, ___0_source, ___1_predicate, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
inline void WhereSelectListIterator_2__ctor_mC2E8B8671DF6A475B088C94D9C424167C9E5FDB5 (WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mC2E8B8671DF6A475B088C94D9C424167C9E5FDB5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8 (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 (*) (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, const RuntimeMethod*))List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*, const RuntimeMethod*))Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, int32_t, const RuntimeMethod*))Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m514FEF2F5AA253487EBBC519F9307632A5CFD0C6_inline (Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE*, int32_t, const RuntimeMethod*))Func_2_Invoke_m514FEF2F5AA253487EBBC519F9307632A5CFD0C6_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*, const RuntimeMethod*))Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) ;
inline void WhereSelectListIterator_2__ctor_mAC9D7E0CCA4B15AEFA7AF154091F7E82E23A1C25 (WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mAC9D7E0CCA4B15AEFA7AF154091F7E82E23A1C25_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mEF9FB08DE4E3C95C6F5B1E856588DB02767A2DBD_inline (Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899*, int32_t, const RuntimeMethod*))Func_2_Invoke_mEF9FB08DE4E3C95C6F5B1E856588DB02767A2DBD_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5 (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A*, int32_t, const RuntimeMethod*))Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline)(__this, ___0_arg, method);
}
inline void Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316 (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*, const RuntimeMethod*))Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25 (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline int32_t Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_inline (Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2*, int32_t, const RuntimeMethod*))Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mE7E4CC95FAFCA7DEDBC7CD26B2BEEDB7178002E9 (WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04* __this, RuntimeObject* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04*, RuntimeObject*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mE7E4CC95FAFCA7DEDBC7CD26B2BEEDB7178002E9_gshared)(__this, ___0_source, ___1_predicate, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m36B020CAC68AE0C8A556C36A8117710336D5A481 (WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB* __this, List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ___0_source, Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* ___1_predicate, Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A List_1_GetEnumerator_m507E659235452B34B93200B0E02A1F3902375603 (List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 Enumerator_get_Current_m57B6DCBFE860F5E384D1030E0DA5419B4DC0AEE8_inline (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m748A254DE47C08F0AFC9E6B6983948A76CC4716F_inline (Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m08379AB72542404DC114C3447F78505B4AB919FD_inline (Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38097B06E2078894D9BA97A2D2E7BF049C263E5B (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* __this, const RuntimeMethod* method) ;
inline void WhereSelectListIterator_2__ctor_m26A1FD419D0B2BC83CF58FC8A32BFF5923CFC423 (WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F* __this, List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ___0_source, Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* ___1_predicate, Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F*, List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036*, Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76*, Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m26A1FD419D0B2BC83CF58FC8A32BFF5923CFC423_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_mB545625DD13E3009F95E2CDF91A0B739DFEA13C4_inline (Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809*, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227, const RuntimeMethod*))Func_2_Invoke_mB545625DD13E3009F95E2CDF91A0B739DFEA13C4_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13 (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
inline void WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_inline (Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_gshared_inline)(__this, ___0_arg, method);
}
inline void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_fshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_fshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_fshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m26AEFAF1CEE0F05D4FEBFD32AAA358D234BB2F6C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7 (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___0_usage, bool* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0 (InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE ___0_usage, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989 (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___0_usage, float* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___0_usage, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___0_usage, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08 (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___0_usage, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55 (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m8651C8E7019D87B89CA079D6B5AB2C993D79BC46_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___0_usage, uint32_t* ___1_value, const RuntimeMethod* method) ;
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_fshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m26AEFAF1CEE0F05D4FEBFD32AAA358D234BB2F6C_fshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_fshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m26AEFAF1CEE0F05D4FEBFD32AAA358D234BB2F6C_fshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_fshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m26AEFAF1CEE0F05D4FEBFD32AAA358D234BB2F6C_fshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_fshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m26AEFAF1CEE0F05D4FEBFD32AAA358D234BB2F6C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A (uint32_t ___0_desiredCharacteristics, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___1_inputDevice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757 (XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A* __this, const RuntimeMethod* method) ;
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_fshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline (InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m26AEFAF1CEE0F05D4FEBFD32AAA358D234BB2F6C_fshared_inline)(__this, method);
}
inline void UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mD77F6D89989A517F8D5FD970E1375F1937188717_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032 (Type_t* ___0_valueType, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_inputAction, int32_t ___1_inputSourceMode, const RuntimeMethod* method) ;
inline RuntimeObject* UnityObjectReferenceCache_2_Get_m93904A06D8A8D4DDBE09F1534B2FA036A5458AE4 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mAA0886DE1A45B1AA9DAA3814532C908244C994C1_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m14A85ED1105C25F3BF5BEB85F10E2C8B01D829C1 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_m8E80161F58FAD582B6169AD6FD2F7DC68CCB5730_gshared)(__this, ___0_field, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1** ___0_reference, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
inline void UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0 (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mD77F6D89989A517F8D5FD970E1375F1937188717_gshared)(__this, method);
}
inline RuntimeObject* UnityObjectReferenceCache_2_Get_m99CF6D170B41DABEAF641BF1B69DA3CDB57C0241 (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mAA0886DE1A45B1AA9DAA3814532C908244C994C1_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m8C0EC3C498F45A3866B00A2177E77C4E89CDF80C (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_m8E80161F58FAD582B6169AD6FD2F7DC68CCB5730_gshared)(__this, ___0_field, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
inline void UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7 (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mD77F6D89989A517F8D5FD970E1375F1937188717_gshared)(__this, method);
}
inline RuntimeObject* UnityObjectReferenceCache_2_Get_mDFBF27054C7DCD19C3F6304A19B3D58B2AE3C460 (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mAA0886DE1A45B1AA9DAA3814532C908244C994C1_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m355C3094DD9F9C03A7435749218114D5C3EC7B0C (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_m8E80161F58FAD582B6169AD6FD2F7DC68CCB5730_gshared)(__this, ___0_field, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
inline void UnityObjectReferenceCache_2__ctor_mF3CC554EC436AA061C6D2F3D93C5ECD2D33FC91E (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mD77F6D89989A517F8D5FD970E1375F1937188717_gshared)(__this, method);
}
inline RuntimeObject* UnityObjectReferenceCache_2_Get_mB6216FA3FF646BEC3525A47E5BADC61CE380DB8E (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mAA0886DE1A45B1AA9DAA3814532C908244C994C1_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_mB32C421F461C529EEB9C7A74C95AC57CB41A44DF (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_m8E80161F58FAD582B6169AD6FD2F7DC68CCB5730_gshared)(__this, ___0_field, ___1_value, method);
}
inline void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40 (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, const RuntimeMethod*))BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_fshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF00B95B59197D6CEA2311875016BA798A7180FD4_gshared (WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m4A58D07E54347E0DAABEA92F211B8A1F230C6394_gshared (WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* L_2 = __this->___selector;
		WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A* L_3 = (WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mF00B95B59197D6CEA2311875016BA798A7180FD4(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1A73A98D8BE9B66C6E1EA898FE0076B45DE64D7F_gshared (WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_4;
		L_4 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_5 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		Il2CppSharedGenericObject* L_6;
		L_6 = Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_8 = __this->___predicate;
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* L_11 = __this->___selector;
		Il2CppSharedGenericObject* L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m8B551097217DFF5F72DACB7AA2A8BD5C739B7539_inline(L_11, L_12, NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringLowerCase), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_14 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m131B86D1CE4E5F37D5EE98A1E477C5D8A812F73F_gshared (WhereSelectListIterator_2_t773350559501AE1914B16E32884C44B0D31DEB1A* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, NULL);
		return L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_mA526287F988AD67F1AFD8DDA6ED50D6223EB1F01_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = __this->___selector;
		WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* L_3 = (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m330FDD6ED7F4BEE49DCBC8A651E09A6A353C395E_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_4;
		L_4 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_5 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		Il2CppSharedGenericObject* L_6;
		L_6 = Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_8 = __this->___predicate;
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_11 = __this->___selector;
		Il2CppSharedGenericObject* L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_11, L_12, NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_14 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m188F9A25121C29C31230434548BA57C395C1C9DE_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_fshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_fshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_fshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 10), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 10)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 10)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_fshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return (RuntimeObject*)L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC2E8B8671DF6A475B088C94D9C424167C9E5FDB5_gshared (WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, NULL);
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mEDBCFF1BC87C9413446E20B46EB7BBB7A63A7B90_gshared (WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* L_2 = __this->___selector;
		WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9* L_3 = (WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mC2E8B8671DF6A475B088C94D9C424167C9E5FDB5(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m311B18F1C991BC6DD0884C6F05470005B49FB14B_gshared (WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m514FEF2F5AA253487EBBC519F9307632A5CFD0C6_inline(L_11, L_12, NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2364ABB04BFBC2F847BFF43463E0727DF3C388E0_gshared (WhereSelectListIterator_2_t2A291A0658DB11F6EC58565023D95B645A93CBC9* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, NULL);
		return L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAC9D7E0CCA4B15AEFA7AF154091F7E82E23A1C25_gshared (WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, NULL);
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m667BB30E035CF2CF5C7CC090A93EF5999E3A507B_gshared (WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* L_2 = __this->___selector;
		WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F* L_3 = (WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mAC9D7E0CCA4B15AEFA7AF154091F7E82E23A1C25(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC00400D119EFD5217DADEAC7FC870165DDD3619D_gshared (WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_mEF9FB08DE4E3C95C6F5B1E856588DB02767A2DBD_inline(L_11, L_12, NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringLowerCase), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFC0CE1F7C7A9CFE1C1A7A57BF9FC04E3F59B12FD_gshared (WhereSelectListIterator_2_t1B9E25819166909009FA31DF2F03117C8D0F783F* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, (RuntimeObject*)__this, L_0, NULL);
		return L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, NULL);
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m2E7761856CBD3CB0B74488A8297A4D03C6C5224C_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = __this->___selector;
		WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* L_3 = (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m87B4188E471597108BBA231B780E29AB9D962A9B_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_inline(L_11, L_12, NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m09AB57C26990601C313EB1AD262947B08F85A06E_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this, NULL);
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* WhereSelectListIterator_2_Clone_mD3CE5F95862133EAE34D7195DB49D3327C70114C_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* L_2 = __this->___selector;
		WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* L_3 = (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF14FE6A59925A92ECF7F03A9E4C040BF9C9E456C_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_inline(L_11, L_12, NULL);
		((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8C1342FE3FD2CB804569ADE6CFE631B09BAAA4DB_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04* L_1 = (WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_mE7E4CC95FAFCA7DEDBC7CD26B2BEEDB7178002E9(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m36B020CAC68AE0C8A556C36A8117710336D5A481 (WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB* __this, List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ___0_source, Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* ___1_predicate, Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943(__this, NULL);
		List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m8F36CB3C6DED39BB7D245E102ECFBF2CCDEB0989 (WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* L_0 = __this->___source;
		Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* L_1 = __this->___predicate;
		Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* L_2 = __this->___selector;
		WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB* L_3 = (WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m36B020CAC68AE0C8A556C36A8117710336D5A481(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6874AC4631F155F32676C786C4CF918BD356DB98 (WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A L_4;
		L_4 = List_1_GetEnumerator_m507E659235452B34B93200B0E02A1F3902375603(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___library_path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___api_version), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___implementation_version), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___description), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_JsonFileName), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* L_5 = (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A*)(&__this->___enumerator);
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_6;
		L_6 = Enumerator_get_Current_m57B6DCBFE860F5E384D1030E0DA5419B4DC0AEE8_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* L_8 = __this->___predicate;
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m748A254DE47C08F0AFC9E6B6983948A76CC4716F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* L_11 = __this->___selector;
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m08379AB72542404DC114C3447F78505B4AB919FD_inline(L_11, L_12, NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringLowerCase), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* L_14 = (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m38097B06E2078894D9BA97A2D2E7BF049C263E5B(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mED93F07241B1CF372632EF402BE4C369EC89E30B (WhereSelectListIterator_2_tE4D6638A3C42176BAAD80BB654E6149F54F72AEB* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, __this, L_0, NULL);
		return L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m26A1FD419D0B2BC83CF58FC8A32BFF5923CFC423_gshared (WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F* __this, List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* ___0_source, Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* ___1_predicate, Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, NULL);
		List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m023E9F7C0E904E26CB512D27A8632C8213CCCBBC_gshared (WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* L_0 = __this->___source;
		Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* L_1 = __this->___predicate;
		Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* L_2 = __this->___selector;
		WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F* L_3 = (WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m26A1FD419D0B2BC83CF58FC8A32BFF5923CFC423(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mAAFCFDC30A009FBFB4E3E1F7F4B2CD1BA8EDE0DC_gshared (WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t11B85A1E643E20D6952E5C2029E37ECF33076036* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A L_4;
		L_4 = List_1_GetEnumerator_m507E659235452B34B93200B0E02A1F3902375603(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___library_path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___api_version), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___implementation_version), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator))->____current))->___m_Json))->___description), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_JsonFileName), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* L_5 = (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A*)(&__this->___enumerator);
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_6;
		L_6 = Enumerator_get_Current_m57B6DCBFE860F5E384D1030E0DA5419B4DC0AEE8_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* L_8 = __this->___predicate;
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m748A254DE47C08F0AFC9E6B6983948A76CC4716F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* L_11 = __this->___selector;
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_mB545625DD13E3009F95E2CDF91A0B739DFEA13C4_inline(L_11, L_12, NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* L_14 = (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m38097B06E2078894D9BA97A2D2E7BF049C263E5B(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m19C76B913A36A0625682944100E4A71BCB9CD71F_gshared (WhereSelectListIterator_2_t4C9D60C7D3EEE3AC1F5E8D188BD255D2CF88080F* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = __this->___selector;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline(L_11, L_12, NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringLowerCase), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, __this, L_0, NULL);
		return L_1;
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
// Method Definition Index: 64888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 64889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_mD5CAE504F9C99D269DDBE8024BBB3A720B57903E_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* L_2 = __this->___selector;
		WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* L_3 = (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
// Method Definition Index: 64890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE11050266689AB3FED99AFC03D14D35FB57B0835_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_inline(L_11, L_12, NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 64892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m18B457233CE2D525123CCAE02C5ACF2CDC0ABD46_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
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
// Method Definition Index: 46173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 46174
// Method Definition Index: 46175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 46176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_3);
		return;
	}
}
// Method Definition Index: 46177
// Method Definition Index: 46178
// Method Definition Index: 46179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_5 = ___0_compare;
		CHECKED_LOCAL_INIT(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit,(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_002a:
	{
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
// Method Definition Index: 46173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 46174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_src;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_src;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length = G_B3_0;
		return;
	}
}
// Method Definition Index: 46175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
// Method Definition Index: 46176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) ? ___1_value : &___1_value), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
// Method Definition Index: 46177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 46178
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
// Method Definition Index: 46179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_5 = ___0_compare;
		CHECKED_LOCAL_INIT(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit,(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_002a:
	{
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
// Method Definition Index: 46173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 46174
// Method Definition Index: 46175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 46176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
// Method Definition Index: 46177
// Method Definition Index: 46178
// Method Definition Index: 46179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_5 = ___0_compare;
		CHECKED_LOCAL_INIT(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit,(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_002a:
	{
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
// Method Definition Index: 27339
// Method Definition Index: 27340
// Method Definition Index: 27343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m0B20C50D68647794E8ABF10EE0B6D65CD140BBA1 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m54D121360DE7AD9452CC57703FE12C16072EFD88 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return 0;
	}
}
// Method Definition Index: 27345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_mCF2A56E6DCE4E105BCE9854F74BB105BFF1932B9 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (0.0f);
	}
}
// Method Definition Index: 27346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m282A750480083614F0683E4C0EE16A2CAF3F61EA (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_mF1C33E2BF83C16671480514FFC6121811DE4349B (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_m80FD7BEA8C9AD2F70E6D28F1B03DDE588D3942AF (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m3176E9B649FC143DE33EF339F248372AB8D9B6B4 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (uint32_t)(0);
	}
}
// Method Definition Index: 27350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m9D19A7376E0AE9680F3223D4DEAAC297A0E39991 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		bool* L_7 = ___0_value;
		*(((int8_t*)L_7)) = ((int8_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 27351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mF769CE8E9E7218AE9AF381A08E1FEFF03696C7C9 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m80D898D043C7FA4CC3A7F3E841E5BB28C5F405FD (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, float* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		float* L_7 = ___0_value;
		*(L_7) = (0.0f);
		return (bool)0;
	}
}
// Method Definition Index: 27353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mAF77C736BED5C384445A1B75A7BF8D193312AA2C (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 27354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m4F28C01418E4915E0396925FD73D269B0854CA17 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 27355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m4AD5DD99F3E2F43717E9E5A4695D5E3A01CDEA05 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		return (bool)0;
	}
}
// Method Definition Index: 27356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m159AC502BF07E75AE54CC1BA4B4E41B5905E4377 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27357
// Method Definition Index: 27358
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27339
// Method Definition Index: 27340
// Method Definition Index: 27343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mFB26DF481495DFA4EB7F9EAAF8EE8ECF2E218CB2 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m77A931FF80983194B30DA03F665640388590511B (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return 0;
	}
}
// Method Definition Index: 27345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m54821C15C7470604F0BC91DAE0F3E7076EE302B1 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (0.0f);
	}
}
// Method Definition Index: 27346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m44166B3E6FC75545AE33BBF9B89C9943F00FDB8D (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m2024454A11380BF10D1D6B0DDBCF53B0799AB020 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mA6C76DCE9187BBD82C48376604EE223B263091B4 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m02E750B4C0BD7CBA10F6DB9236C7A4728AFFAF9F (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (uint32_t)(0);
	}
}
// Method Definition Index: 27350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m44E8D3A05A0E946D45B72FEB1BCDCDB2F60EE82F (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		bool* L_7 = ___0_value;
		*(((int8_t*)L_7)) = ((int8_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 27351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m425D34A03FE4C914695BA8D8F3FAE0152398DA94 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m66DFBD8C6B12CC02200365C2B27F9DE2B63B3790 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, float* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		float* L_7 = ___0_value;
		*(L_7) = (0.0f);
		return (bool)0;
	}
}
// Method Definition Index: 27353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m435E7BB9BACDEF4ED2FE5CABC8BFD041AB3FE19F (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 27354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m4B1FB9835DB5DB357439C434BB59A3F085028E33 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 27355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m685FBD0B743256EA4F365BFF239D41AF6C31ECD9 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		return (bool)0;
	}
}
// Method Definition Index: 27356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m3B612E192FA4D176BCD56B4E3BF8304858DD36E7 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27357
// Method Definition Index: 27358
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27339
// Method Definition Index: 27340
// Method Definition Index: 27343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mDA869931D4F5055E4EAA15705B22D3867BA2C0A8 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_mC9CE3759541A029FE3763588C9E749BCFC965F4C (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return 0;
	}
}
// Method Definition Index: 27345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m1DEA7E98FCDB8562BACCCA616493EAC82C32D422 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (0.0f);
	}
}
// Method Definition Index: 27346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m3095707D4AAFB6A6B0A22BB77C41E440AF75E57B (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m68DDCE5514BF70262402D19C6A7E28CC18765E48 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mB2C23B439F825B0B5BB941250F3E5AE2F9F1F532 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m66879ABEBA25EE865957DC92ECAEFFB2BBA25019 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (uint32_t)(0);
	}
}
// Method Definition Index: 27350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mFFC7DFF7516774FEE4083151A16665F4091F4794 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		bool* L_7 = ___0_value;
		*(((int8_t*)L_7)) = ((int8_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 27351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m8D76F69C316D1AC4E61811FD53F90A26F449519A (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_mB0DB8993BE3ECDC4EC0B1F057720978EB5107435 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, float* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		float* L_7 = ___0_value;
		*(L_7) = (0.0f);
		return (bool)0;
	}
}
// Method Definition Index: 27353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m40DAF0627FBD385E12338A9A1CEEF193EECAE58F (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 27354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_mFDD7B32A07BF1A39AD9E588B6AE792F70C5FEEA8 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 27355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m07714713D7AA8852C391199CCA02CFA4EE52280E (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		return (bool)0;
	}
}
// Method Definition Index: 27356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m1DA9C7DC07430BD10A08A5455621D5D37F4BC172 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27357
// Method Definition Index: 27358
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27339
// Method Definition Index: 27340
// Method Definition Index: 27343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mA49C7EE2BEEA42C0B2FE3C3887971511DB78B447 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m94131583E42AA0D74DB00C36FB8A3714BF139FA1 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return 0;
	}
}
// Method Definition Index: 27345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m8E7C33A1FD09397013D19616410DB9167A1CEB43 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (0.0f);
	}
}
// Method Definition Index: 27346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_mAD4150AC0E9FCE8C6B42CDB6B072AD4AE9607B45 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_mB3F8F5F0DC6B416D3105A59808E297745EEBE5F9 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_m39AD5524AD5D05464A6328296B2666DE62B191DF (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m0140B2099A4BCCAF53FEF0BBD1B8624C79AAA4A2 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (uint32_t)(0);
	}
}
// Method Definition Index: 27350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mE6090098CE06DABA7BDCD9F78348C08D79618C82 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		bool* L_7 = ___0_value;
		*(((int8_t*)L_7)) = ((int8_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 27351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m81FDB8DC199332F48592372B16246339D36BEDDA (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m93227A353AD1CC80C72FB5BD999265DE73E3FB68 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, float* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		float* L_7 = ___0_value;
		*(L_7) = (0.0f);
		return (bool)0;
	}
}
// Method Definition Index: 27353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m486E5E178D5D967E214B77DC48BFFA16B6D113D4 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 27354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m56FBC3608E6F0490D368BF77CB89C18D7B34933C (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 27355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m808DAC1A1E93FD770DABC37DFFD33CDC3202BC7C (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		return (bool)0;
	}
}
// Method Definition Index: 27356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m24BCA107F1BCF62B240AA8F76F21925D082BE5A0 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27357
// Method Definition Index: 27358
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27339
// Method Definition Index: 27340
// Method Definition Index: 27343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m6315B201133B79A2B6FACD85C7C08FFC0AC3C44C (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m08721912593454E0D6D8357900E49314350947A2 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return 0;
	}
}
// Method Definition Index: 27345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m5B29D78C353B85A5B094B77F9030108F289B7E82 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (0.0f);
	}
}
// Method Definition Index: 27346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_mFA8108280395134E7724057DFE2FBE3FC4EDE211 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m988DB58009FB1D7A39423AAAFB7565C82C7A2B08 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mB27C6A31F0FE4CA56FC279B72AC2F1C28F9614D9 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mC429E3779B93AA9D7066476E6EABF632A74DED49 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (uint32_t)(0);
	}
}
// Method Definition Index: 27350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m14E27F0618E4358C4B488F96B51C46CA0EDB0455 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		bool* L_7 = ___0_value;
		*(((int8_t*)L_7)) = ((int8_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 27351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mC74A7E86F12392C134F1EDDA7F9FC80ACF88A326 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m0CDE3B8947DD91C8D4122949A844F3E48952C606 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, float* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		float* L_7 = ___0_value;
		*(L_7) = (0.0f);
		return (bool)0;
	}
}
// Method Definition Index: 27353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mEB4AD6D455B137E0D175A387E8BF13CD9DAE4C46 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 27354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m09ADC62BBC44DA482E8EBF17D66C8D92218B5A31 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 27355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m30A151D858010B4CA2DA11939A2980A2D2F07357 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		return (bool)0;
	}
}
// Method Definition Index: 27356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m82387548A2195FD1D0F94EF3D363ACDEBC49B500 (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27357
// Method Definition Index: 27358
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* XRInputDeviceValueReader_1_get_usage_m51F48ED988A97FC802827ABC0BB2FB75F971ABC5_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 27340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mAD9D1335AC070AB967F71AFAB1DEAC7DE7B78E6C_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 27343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m2001C8BA8B0638BEDFB2582345CE2D5E2D767835_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_mFDFD16DB71C231A037A1A57388051BA55AE48217_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return 0;
	}
}
// Method Definition Index: 27345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_mBCC31B41C0D092595219A441E8E3433703534D09_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (0.0f);
	}
}
// Method Definition Index: 27346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m42A9609BFF742DC74C96E9204D5AA9DF3F1455F3_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m96F9F4A33D5CA9A3D6E7327B9B7FE5FB03FF3C45_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mF72D05FB881D857AAE9656B9BE5FB229A6145B5C_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mDC1787334BA972E01FEF4D773F170640048830C1_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (uint32_t)(0);
	}
}
// Method Definition Index: 27350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mEA97CE264949878E5E914906CEF1DACF289C129A_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		bool* L_7 = ___0_value;
		*(((int8_t*)L_7)) = ((int8_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 27351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mCAB5614B9AEEE9E4B48820EC8F9E91CB17DE5F18_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m014F713899E4DC5B4F178634B5505856C1829F03_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, float* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		float* L_7 = ___0_value;
		*(L_7) = (0.0f);
		return (bool)0;
	}
}
// Method Definition Index: 27353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mCC4A8B07339DC801FE7FDCEE188B52C36FB7B642_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 27354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m9276C72F191B6C43100BABDF25B9FF8D3A55FFB8_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 27355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m59D008BC51086009D727F31D3FEC2BA0A50F12C6_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		return (bool)0;
	}
}
// Method Definition Index: 27356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m7AF90DA8A391B6E94FF034B82895151AC86B7510_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 27358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m929C31C577420C9309DE19085BDCE628C50368F7_fshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
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
// Method Definition Index: 27339
// Method Definition Index: 27340
// Method Definition Index: 27343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m25A6B8E4086AD9A5D9BD283CFDC7926603980629_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		bool L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 27344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m2F4810D982BB1897CB995B68B38E5858CE92E58F_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return 0;
	}
}
// Method Definition Index: 27345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m97372D6D5B7883432D8ED32D05FA58C2366C73AC_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		float L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (0.0f);
	}
}
// Method Definition Index: 27346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m72D89C0AC3DDF366AEC0ADE50C700F33FC73A2BD_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_mC241C785CADE8CA1E641C239C41BCEE0000E763B_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_m1FF9CA74853CF0C537BE096449C95A9D1A8F01FA_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 27349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mD6CC5E3A9E3F193EE775B01A211F115E10BF8820_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		return (uint32_t)(0);
	}
}
// Method Definition Index: 27350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m2EB96E4EC8D41CCCDBB5D71538229AEF3A0B3E5F_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, NULL);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		bool* L_7 = ___0_value;
		*(((int8_t*)L_7)) = ((int8_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 27351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mAE8B3250F117697519796C462796C24DA155DA29_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_mE4F44FED41DEFD5818CF79A1A2444192C1CBA9DB_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, float* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, NULL);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		float* L_7 = ___0_value;
		*(L_7) = (0.0f);
		return (bool)0;
	}
}
// Method Definition Index: 27353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m500D97FF46749890C238A8B4A19C4677F5D5ED5E_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}
}
// Method Definition Index: 27354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m475F62F040BC1DBA180F0539AE7FA67ACD7417EB_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}
}
// Method Definition Index: 27355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_mCEE2CE3BC285EF97BEF3EF4AE33E0F674AA49634_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		return (bool)0;
	}
}
// Method Definition Index: 27356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m265FFCC4139362000B7E5BD67906576661F6767C_gshared (XRInputDeviceValueReader_1_t44EC0A2B2DD81F18A77EF0A989FAD0DD4CAA1F46* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m4992E5E360184543DB3AE29DBDD81018FC46D0EA(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t794B90C2CE6AE66FE39EEF11C8B4AC38D45CB0F7* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mA7614F8B352768F7E57FB6CBA4BFE2E2EC675058_inline(L_2, NULL);
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, NULL);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		uint32_t* L_7 = ___0_value;
		*(((int32_t*)L_7)) = 0;
		return (bool)0;
	}
}
// Method Definition Index: 27357
// Method Definition Index: 27358
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_get_manualValue_m358F9F0BA08D09609B037B18F3A1B8BE07D9E1B8 (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 27384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_mD2270FCC650B88384915A33B622FD861C2610BBC (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 27385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 27386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m386A0A0DDEE905226FC1ACADAFEB91AAE7C1118C (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 27387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m7E69847A755ED76E83DE2ACBEAAAE9E69FC73B40 (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867(L_0, NULL);
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296(__this, NULL);
		return;
	}
}
// Method Definition Index: 27388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m2A75B9DA05CFD73D6E4DD4E515CD134C2FACC995 (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867(L_0, NULL);
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 7)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F(__this, L_4, L_5, NULL);
		return;
	}
}
// Method Definition Index: 27389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_m93904A06D8A8D4DDBE09F1534B2FA036A5458AE4(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_2;
	}
}
// Method Definition Index: 27390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m4D6561CE04D18789B51614F97266ACB63E15EEC6 (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m14A85ED1105C25F3BF5BEB85F10E2C8B01D829C1(L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return;
	}
}
// Method Definition Index: 27391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_mE0420C68FC1511C6B2730ECDE3F0E4AE5F359387 (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A((&V_0), __this, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE((&V_0), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, NULL);
			NullCheck(L_2);
			int32_t L_3;
			L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_2);
			V_1 = L_3;
			goto IL_00b2;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		int32_t L_6 = V_4;
		return L_6;
	}

IL_0063:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		int32_t L_8;
		L_8 = XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_8;
	}

IL_006f:
	{
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806(__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		int32_t L_10 = V_4;
		return L_10;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		int32_t L_13;
		L_13 = XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D(L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_13;
	}

IL_0090:
	{
		RuntimeObject* L_14;
		L_14 = XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		int32_t L_16 = V_4;
		return L_16;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), G_B13_0);
		return L_17;
	}

IL_00ab:
	{
		int32_t L_18 = __this->___m_ManualValue;
		return L_18;
	}

IL_00b2:
	{
		int32_t L_19 = V_1;
		return L_19;
	}
}
// Method Definition Index: 27392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m772C8F3234BBCAB9F90C24D0357692BA5D3C49C4 (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A((&V_0), __this, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE((&V_0), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, NULL);
			int32_t* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline(__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		int32_t* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}

IL_0062:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		int32_t* L_9 = ___0_value;
		bool L_10;
		L_10 = XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6(L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_10;
	}

IL_006f:
	{
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806(__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		int32_t* L_14 = ___0_value;
		bool L_15;
		L_15 = XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6(L_13, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_15;
	}

IL_0086:
	{
		int32_t* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, sizeof(int32_t));
		return (bool)0;
	}

IL_008f:
	{
		RuntimeObject* L_17;
		L_17 = XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		V_4 = L_17;
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_19 = V_4;
		int32_t* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		int32_t* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, sizeof(int32_t));
		return (bool)0;
	}

IL_00ad:
	{
		int32_t* L_23 = ___0_value;
		int32_t L_24 = __this->___m_ManualValue;
		*(int32_t*)L_23 = L_24;
		return (bool)1;
	}

IL_00bb:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 27393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		return L_3;
	}
}
// Method Definition Index: 27394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(int32_t));
		return (bool)0;
	}

IL_000c:
	{
		int32_t* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541(L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		*(int32_t*)L_2 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
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
// Method Definition Index: 27383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_get_manualValue_m3B6D11438549621E7A9045A95C18ACB8C0CB4746 (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 27384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m92D0CDB5E666254390FE5B4FB8BAFD3580EBADA7 (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 27385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5 (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 27386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_mBF28E6F2AD9ACD940BD13E35669A7CB834E4CFF0 (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 27387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mCD49C74D79D06D3446BEF2DBA790F1B6C76E55C5 (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0(L_0, NULL);
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296(__this, NULL);
		return;
	}
}
// Method Definition Index: 27388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0(L_0, NULL);
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 7)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F(__this, L_4, L_5, NULL);
		return;
	}
}
// Method Definition Index: 27389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_m99CF6D170B41DABEAF641BF1B69DA3CDB57C0241(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_2;
	}
}
// Method Definition Index: 27390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m2EECA3A2B8475EC17A9B30BB3B6470EBE3A34169 (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m8C0EC3C498F45A3866B00A2177E77C4E89CDF80C(L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return;
	}
}
// Method Definition Index: 27391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0((&V_0), __this, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4((&V_0), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, NULL);
			NullCheck(L_2);
			float L_3;
			L_3 = InterfaceFuncInvoker0< float >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_2);
			V_1 = L_3;
			goto IL_00b2;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_6 = V_4;
		return L_6;
	}

IL_0063:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		float L_8;
		L_8 = XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_8;
	}

IL_006f:
	{
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806(__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_10 = V_4;
		return L_10;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		float L_13;
		L_13 = XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1(L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_13;
	}

IL_0090:
	{
		RuntimeObject* L_14;
		L_14 = XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(float));
		float L_16 = V_4;
		return L_16;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		float L_17;
		L_17 = InterfaceFuncInvoker0< float >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), G_B13_0);
		return L_17;
	}

IL_00ab:
	{
		float L_18 = __this->___m_ManualValue;
		return L_18;
	}

IL_00b2:
	{
		float L_19 = V_1;
		return L_19;
	}
}
// Method Definition Index: 27392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mA7A16FB5DD2CFAD42DF5414A8B012EDCF587F9AC (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, float* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0((&V_0), __this, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4((&V_0), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, NULL);
			float* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, float* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline(__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		float* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(float));
		return (bool)0;
	}

IL_0062:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		float* L_9 = ___0_value;
		bool L_10;
		L_10 = XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A(L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_10;
	}

IL_006f:
	{
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806(__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		float* L_14 = ___0_value;
		bool L_15;
		L_15 = XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A(L_13, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_15;
	}

IL_0086:
	{
		float* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, sizeof(float));
		return (bool)0;
	}

IL_008f:
	{
		RuntimeObject* L_17;
		L_17 = XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		V_4 = L_17;
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_19 = V_4;
		float* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, float* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		float* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, sizeof(float));
		return (bool)0;
	}

IL_00ad:
	{
		float* L_23 = ___0_value;
		float L_24 = __this->___m_ManualValue;
		*(float*)L_23 = L_24;
		return (bool)1;
	}

IL_00bb:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 27393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		return L_3;
	}
}
// Method Definition Index: 27394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		float* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(float));
		return (bool)0;
	}

IL_000c:
	{
		float* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		float L_4;
		L_4 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		*(float*)L_2 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
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
// Method Definition Index: 27383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_get_manualValue_m5EF71D81283E883A400D54151CCD812B7CF328EC (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 27384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m19E36BFF1B4DCAB067FFAE8B5C4F3327C40D51E7 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 27385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 27386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m15ABD6A28E25B0DE4396C5B4FA13007E666FECF1 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 27387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mFC8C600D3AE334E250AD75D8B42AF6EDCC62528C (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7(L_0, NULL);
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296(__this, NULL);
		return;
	}
}
// Method Definition Index: 27388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7(L_0, NULL);
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 7)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F(__this, L_4, L_5, NULL);
		return;
	}
}
// Method Definition Index: 27389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_mDFBF27054C7DCD19C3F6304A19B3D58B2AE3C460(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_2;
	}
}
// Method Definition Index: 27390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m12FFA2407D2822DB6CBB1B671A6F349F7AA0DA56 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m355C3094DD9F9C03A7435749218114D5C3EC7B0C(L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return;
	}
}
// Method Definition Index: 27391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4((&V_0), __this, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70((&V_0), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, NULL);
			NullCheck(L_2);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
			L_3 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_2);
			V_1 = L_3;
			goto IL_00b2;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_4;
		return L_6;
	}

IL_0063:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_8;
	}

IL_006f:
	{
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806(__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_4;
		return L_10;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D(L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		return L_13;
	}

IL_0090:
	{
		RuntimeObject* L_14;
		L_14 = XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_4;
		return L_16;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), G_B13_0);
		return L_17;
	}

IL_00ab:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___m_ManualValue;
		return L_18;
	}

IL_00b2:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		return L_19;
	}
}
// Method Definition Index: 27392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mB3FA1E715287C738E23501839BE2CC019B0A4C33 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4((&V_0), __this, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70((&V_0), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, NULL);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline(__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_0062:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = ___0_value;
		bool L_10;
		L_10 = XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D(L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_10;
	}

IL_006f:
	{
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806(__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = ___0_value;
		bool L_15;
		L_15 = XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D(L_13, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_15;
	}

IL_0086:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_008f:
	{
		RuntimeObject* L_17;
		L_17 = XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		V_4 = L_17;
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_19 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_00ad:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = __this->___m_ManualValue;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_23 = L_24;
		return (bool)1;
	}

IL_00bb:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 27393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		return L_3;
	}
}
// Method Definition Index: 27394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_000c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
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
// Method Definition Index: 27383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_get_manualValue_m6580D9D0E90768453554EC4C3F3A8BDE118832AD_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 27384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m7DE8FBB1F992F66B64970AE99224524E22F8232B_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 27385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m86D6EE8C2B6C04E222D96122A85F792D9A7B8CAB_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		return L_0;
	}
}
// Method Definition Index: 27386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m391756331BB534D08D3C6DF2D5615F75B5E0E21E_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return;
	}
}
// Method Definition Index: 27387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mC3F4DB0A46B3C8AE8E07B03FDE9B6AC8D81E1C78_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		UnityObjectReferenceCache_2__ctor_mF3CC554EC436AA061C6D2F3D93C5ECD2D33FC91E(L_0, NULL);
		il2cpp_codegen_write_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_0);
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		return;
	}
}
// Method Definition Index: 27388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m8A6FE1E7C460CBD4EC6AE392547F9B5454503EFE_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		UnityObjectReferenceCache_2__ctor_mF3CC554EC436AA061C6D2F3D93C5ECD2D33FC91E(L_0, NULL);
		il2cpp_codegen_write_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 7)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		return;
	}
}
// Method Definition Index: 27389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m3BED8195FBDCE6A99FCC116EBDC1EB0D62D2A039_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = *(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8));
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_mB6216FA3FF646BEC3525A47E5BADC61CE380DB8E(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_2;
	}
}
// Method Definition Index: 27390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m862D31846AB537F3363F51ACE9942E1FD7A486F1_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_mB32C421F461C529EEB9C7A74C95AC57CB41A44DF(L_0, (((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8)))), L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return;
	}
}
// Method Definition Index: 27391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mFB37AAAB53CB16F2EEA26BCDF3A0023969C5A554_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_6 = L_3;
	const Il2CppFullySharedGenericStruct L_8 = L_3;
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_16 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = L_3;
	//<source_info:<no-source>:1>
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_1, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_4, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12));
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((&V_0), __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
			NullCheck(L_2);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_2, (Il2CppFullySharedGenericStruct*)L_3);
			il2cpp_codegen_memcpy(V_1, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
			goto IL_00b2;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_6, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0063:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), NULL, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_006f:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), NULL, L_12, (Il2CppFullySharedGenericStruct*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0090:
	{
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_16, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), G_B13_0, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00ab:
	{
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00b2:
	{
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 27392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mC84F19E640053D49DF7AC4E26440A3649D928CD4_fshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	//<source_info:<no-source>:1>
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12));
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((&V_0), __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2;
			L_2 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
			Il2CppFullySharedGenericStruct* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		Il2CppFullySharedGenericStruct* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return (bool)0;
	}

IL_0062:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Il2CppFullySharedGenericStruct* L_9 = ___0_value;
		bool L_10;
		L_10 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(L_8, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_10;
	}

IL_006f:
	{
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		Il2CppFullySharedGenericStruct* L_14 = ___0_value;
		bool L_15;
		L_15 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(L_13, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		return L_15;
	}

IL_0086:
	{
		Il2CppFullySharedGenericStruct* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return (bool)0;
	}

IL_008f:
	{
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		V_4 = L_17;
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_19 = V_4;
		Il2CppFullySharedGenericStruct* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		Il2CppFullySharedGenericStruct* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return (bool)0;
	}

IL_00ad:
	{
		Il2CppFullySharedGenericStruct* L_23 = ___0_value;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_23, L_24, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), (void**)(Il2CppFullySharedGenericStruct*)L_23, (void*)L_24);
		return (bool)1;
	}

IL_00bb:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 27393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mA9DD9A98276A883692B7BCBDFBAB6912D60F41E9_fshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_3 = L_1;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_0, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21), L_2, (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 27394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mAF814AE91F21FF5F3AD73616B7D14DB1CAD004D6_fshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	//<source_info:<no-source>:1>
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return (bool)0;
	}

IL_000c:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21), L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 27372
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_InputSourceMode;
		return L_0;
	}
}
// Method Definition Index: 9064
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m8B551097217DFF5F72DACB7AA2A8BD5C739B7539_gshared_inline (Func_2_t4C195488A5D792CBE75E9F42017C517B156FB938* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 9064
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m514FEF2F5AA253487EBBC519F9307632A5CFD0C6_gshared_inline (Func_2_t89F757F64F44EC23338A033FD1780FA8F4207DDE* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_mEF9FB08DE4E3C95C6F5B1E856588DB02767A2DBD_gshared_inline (Func_2_t8C838EFDB6D66D8E9422A742711EAED0C3B7A899* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_gshared_inline (Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 9064
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 Enumerator_get_Current_m57B6DCBFE860F5E384D1030E0DA5419B4DC0AEE8_inline (Enumerator_t88C276C2998B8AB5508B9428541BE7E377601D1A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m748A254DE47C08F0AFC9E6B6983948A76CC4716F_inline (Func_2_tEB22C8AA7C5A7E3A4CD5525A12D53DC1870B0E76* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m08379AB72542404DC114C3447F78505B4AB919FD_inline (Func_2_tA6BC98BCF6F146FD7F5DDFECEF7FE749BB2AE57F* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mB545625DD13E3009F95E2CDF91A0B739DFEA13C4_gshared_inline (Func_2_tF97087956C79AD7C6C15C5F83D24F4DD00CF9809* __this, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, ApiLayer_t99CB624F0B458A984C99D6A3009A2D8321A85227, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 9064
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 625
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_gshared_inline (Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 27260
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m26AEFAF1CEE0F05D4FEBFD32AAA358D234BB2F6C_fshared_inline (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 27385
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 27385
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 27385
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
