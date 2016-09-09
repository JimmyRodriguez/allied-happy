// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.res.Configuration.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\content\res\$.uno
// ----------------------------------------------------------------------------

// public sealed extern class Configuration :831
// {
static void Configuration_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::equals_3619_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::hashCode_3620_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::toString_3609_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("_Init", NULL, (void*)Configuration___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("equals_IMPL_3619", NULL, (void*)Configuration__equals_IMPL_3619_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("hashCode_IMPL_3620", NULL, (void*)Configuration__hashCode_IMPL_3620_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_3609", NULL, (void*)Configuration__toString_IMPL_3609_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* Configuration_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Configuration);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.Configuration", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Configuration_build;
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))Configuration__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Configuration__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Configuration__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :835
void Configuration___Init2_fn()
{
    Configuration::_Init2();
}

// public override sealed bool equals(Android.java.lang.Object arg0) :2370
void Configuration__equals1_fn(Configuration* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    uStackFrame __("Android.android.content.res.Configuration", "equals(Android.java.lang.Object)");
    return *__retval = Configuration::equals_IMPL_3619(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_3619(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2445
void Configuration__equals_IMPL_3619_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Configuration::equals_IMPL_3619(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :2376
void Configuration__hashCode1_fn(Configuration* __this, int* __retval)
{
    uStackFrame __("Android.android.content.res.Configuration", "hashCode()");
    return *__retval = Configuration::hashCode_IMPL_3620(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_3620(bool arg0, Android.Base.Primitives.ujobject arg1) :2448
void Configuration__hashCode_IMPL_3620_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Configuration::hashCode_IMPL_3620(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :2310
void Configuration__toString_fn(Configuration* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.content.res.Configuration", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Configuration::toString_IMPL_3609(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3609(bool arg0, Android.Base.Primitives.ujobject arg1) :2415
void Configuration__toString_IMPL_3609_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Configuration::toString_IMPL_3609(*arg0_, *arg1_);
}

jclass Configuration::_javaClass2_;
jmethodID Configuration::equals_3619_ID_;
jmethodID Configuration::hashCode_3620_ID_;
jmethodID Configuration::toString_3609_ID_;

// public static extern new void _Init() [static] :835
void Configuration::_Init2()
{
    uStackFrame __("Android.android.content.res.Configuration", "_Init()");
    if (Configuration::_javaClass2()) { return; }
    INIT_JNI;
    Configuration::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Configuration"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Configuration::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Configuration'", 57);; }
}

// public static extern bool equals_IMPL_3619(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2445
bool Configuration::equals_IMPL_3619(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.content.res.Configuration", "equals_IMPL_3619(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Configuration::equals_3619_ID(),Configuration::_javaClass2(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.content.res.Configuration.equals could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Configuration::_javaClass2(), Configuration::equals_3619_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Configuration::equals_3619_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_3620(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2448
int Configuration::hashCode_IMPL_3620(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.Configuration", "hashCode_IMPL_3620(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    int result;
    CACHE_METHOD(Configuration::hashCode_3620_ID(),Configuration::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.content.res.Configuration.hashCode could not be cached",85);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Configuration::_javaClass2(), Configuration::hashCode_3620_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Configuration::hashCode_3620_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3609(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2415
uObject* Configuration::toString_IMPL_3609(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.content.res.Configuration", "toString_IMPL_3609(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    uObject* result;
    CACHE_METHOD(Configuration::toString_3609_ID(),Configuration::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.Configuration.toString could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Configuration::_javaClass2(), Configuration::toString_3609_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Configuration::toString_3609_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}}} // ::g::Android::android::content::res
