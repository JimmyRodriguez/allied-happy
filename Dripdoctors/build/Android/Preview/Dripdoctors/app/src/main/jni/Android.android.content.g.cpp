// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.Intent.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_content_Context.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace content{

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\content\$.uno
// ------------------------------------------------------------------------

// public sealed extern class ComponentName :10556
// {
static void ComponentName_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::equals_3881_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::hashCode_3882_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::toString_3880_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("_Init", NULL, (void*)ComponentName___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("equals_IMPL_3881", NULL, (void*)ComponentName__equals_IMPL_3881_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("hashCode_IMPL_3882", NULL, (void*)ComponentName__hashCode_IMPL_3882_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_3880", NULL, (void*)ComponentName__toString_IMPL_3880_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* ComponentName_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ComponentName);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.ComponentName", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = ComponentName_build;
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))ComponentName__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))ComponentName__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))ComponentName__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :10560
void ComponentName___Init2_fn()
{
    ComponentName::_Init2();
}

// public override sealed bool equals(Android.java.lang.Object arg0) :10702
void ComponentName__equals1_fn(ComponentName* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    uStackFrame __("Android.android.content.ComponentName", "equals(Android.java.lang.Object)");
    return *__retval = ComponentName::equals_IMPL_3881(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_3881(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :10782
void ComponentName__equals_IMPL_3881_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ComponentName::equals_IMPL_3881(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :10708
void ComponentName__hashCode1_fn(ComponentName* __this, int* __retval)
{
    uStackFrame __("Android.android.content.ComponentName", "hashCode()");
    return *__retval = ComponentName::hashCode_IMPL_3882(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_3882(bool arg0, Android.Base.Primitives.ujobject arg1) :10785
void ComponentName__hashCode_IMPL_3882_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ComponentName::hashCode_IMPL_3882(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :10696
void ComponentName__toString_fn(ComponentName* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.ComponentName", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(ComponentName::toString_IMPL_3880(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3880(bool arg0, Android.Base.Primitives.ujobject arg1) :10779
void ComponentName__toString_IMPL_3880_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ComponentName::toString_IMPL_3880(*arg0_, *arg1_);
}

jclass ComponentName::_javaClass2_;
jmethodID ComponentName::equals_3881_ID_;
jmethodID ComponentName::hashCode_3882_ID_;
jmethodID ComponentName::toString_3880_ID_;

// public static extern new void _Init() [static] :10560
void ComponentName::_Init2()
{
    uStackFrame __("Android.android.content.ComponentName", "_Init()");
    if (ComponentName::_javaClass2()) { return; }
    INIT_JNI;
    ComponentName::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/ComponentName"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ComponentName::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.ComponentName'", 53);; }
}

// public static extern bool equals_IMPL_3881(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :10782
bool ComponentName::equals_IMPL_3881(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.content.ComponentName", "equals_IMPL_3881(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ComponentName::equals_3881_ID(),ComponentName::_javaClass2(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.content.ComponentName.equals could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ComponentName::_javaClass2(), ComponentName::equals_3881_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ComponentName::equals_3881_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_3882(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10785
int ComponentName::hashCode_IMPL_3882(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ComponentName", "hashCode_IMPL_3882(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    
    int result;
    CACHE_METHOD(ComponentName::hashCode_3882_ID(),ComponentName::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.content.ComponentName.hashCode could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ComponentName::_javaClass2(), ComponentName::hashCode_3882_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ComponentName::hashCode_3882_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3880(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10779
uObject* ComponentName::toString_IMPL_3880(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.ComponentName", "toString_IMPL_3880(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    
    uObject* result;
    CACHE_METHOD(ComponentName::toString_3880_ID(),ComponentName::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.ComponentName.toString could not be cached",81);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ComponentName::_javaClass2(), ComponentName::toString_3880_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ComponentName::toString_3880_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\content\$.uno
// ------------------------------------------------------------------------

// public abstract extern class Context :11
// {
static void Context_build(uType* type)
{
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::Context::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Context::LOCATION_SERVICE_4130_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)Context___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_LOCATION_SERVICE", NULL, (void*)Context__get_LOCATION_SERVICE_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0));
}

::g::Android::java::lang::Object_type* Context_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.Context", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Context_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// protected Context(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void Context__ctor_6_fn(Context* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_6(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :15
void Context___Init2_fn()
{
    Context::_Init2();
}

// public static Android.java.lang.String get_LOCATION_SERVICE() :428
void Context__get_LOCATION_SERVICE_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Context::LOCATION_SERVICE();
}

jclass Context::_javaClass2_;
jfieldID Context::LOCATION_SERVICE_4130_ID_;

// protected Context(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void Context::ctor_6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.content.Context", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_4(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :15
void Context::_Init2()
{
    uStackFrame __("Android.android.content.Context", "_Init()");
    if (Context::_javaClass2()) { return; }
    INIT_JNI;
    Context::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/Context"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Context::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.Context'", 47);; }
}

// public static Android.java.lang.String get_LOCATION_SERVICE() [static] :428
::g::Android::java::lang::String* Context::LOCATION_SERVICE()
{
    uStackFrame __("Android.android.content.Context", "get_LOCATION_SERVICE()");
    INIT_JNI;
    CLASS_INIT(Context::_javaClass2(),Context::_Init2());
    if (::uEnterCriticalIfNull(&Context::LOCATION_SERVICE_4130_ID())) {;
    CACHE_FIELD(Context::LOCATION_SERVICE_4130_ID(),Context::_javaClass2(),"LOCATION_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.LOCATION_SERVICE could not be cached",57);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Context::_javaClass2(), Context::LOCATION_SERVICE_4130_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\content\$.uno
// ------------------------------------------------------------------------

// public extern class ContextWrapper :1351
// {
static void ContextWrapper_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* ContextWrapper_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ContextWrapper);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.ContextWrapper", options);
    type->SetBase(::g::Android::android::content::Context_typeof());
    type->fp_build_ = ContextWrapper_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public ContextWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1356
void ContextWrapper__ctor_8_fn(ContextWrapper* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_8(*obj, utype, *hasFallbackClass, *resolveType);
}

// public ContextWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :1356
void ContextWrapper::ctor_8(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.content.ContextWrapper", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_6(obj, utype, hasFallbackClass, resolveType);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\content\$.uno
// ------------------------------------------------------------------------

// public sealed extern class Intent :4242
// {
static void Intent_build(uType* type)
{
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::Intent::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::toString_4755_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)Intent___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_4755", NULL, (void*)Intent__toString_IMPL_4755_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* Intent_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Intent);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.Intent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Intent_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Intent__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :4246
void Intent___Init2_fn()
{
    Intent::_Init2();
}

// public override sealed Android.java.lang.String toString() :8910
void Intent__toString_fn(Intent* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.Intent", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Intent::toString_IMPL_4755(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_4755(bool arg0, Android.Base.Primitives.ujobject arg1) :9307
void Intent__toString_IMPL_4755_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Intent::toString_IMPL_4755(*arg0_, *arg1_);
}

jclass Intent::_javaClass2_;
jmethodID Intent::toString_4755_ID_;

// public static extern new void _Init() [static] :4246
void Intent::_Init2()
{
    uStackFrame __("Android.android.content.Intent", "_Init()");
    if (Intent::_javaClass2()) { return; }
    INIT_JNI;
    Intent::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/Intent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Intent::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.Intent'", 46);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_4755(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9307
uObject* Intent::toString_IMPL_4755(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.Intent", "toString_IMPL_4755(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    
    uObject* result;
    CACHE_METHOD(Intent::toString_4755_ID(),Intent::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.Intent.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::toString_4755_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::toString_4755_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::android::content
