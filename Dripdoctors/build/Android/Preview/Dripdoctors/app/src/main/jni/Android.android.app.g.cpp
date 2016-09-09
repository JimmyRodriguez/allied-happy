// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.app.Fragment.h>
#include <Android.android.app.TaskStackBuilder.h>
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
#include <Uno.Type.h>
static uType* TYPES[3];

namespace g{
namespace Android{
namespace android{
namespace app{

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\app\$.uno
// --------------------------------------------------------------------

// public sealed extern class Activity :1266
// {
static void Activity_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::app::Activity::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Activity::getSystemService_847_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("_Init", NULL, (void*)Activity___Init5_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("GetAppActivity", NULL, (void*)Activity__GetAppActivity_fn, 0, true, Activity_typeof(), 0),
        new uFunction("getSystemService", NULL, (void*)Activity__getSystemService_fn, 0, false, ::g::Android::java::lang::Object_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("getSystemService_IMPL_847", NULL, (void*)Activity__getSystemService_IMPL_847_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction(".ctor", NULL, (void*)Activity__New11_fn, 0, true, Activity_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Android::java::lang::Object_type* Activity_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Activity);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.app.Activity", options);
    type->SetBase(::g::Android::android::view::ContextThemeWrapper_typeof());
    type->fp_build_ = Activity_build;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public Activity(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1271
void Activity__ctor_13_fn(Activity* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_13(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :1270
void Activity___Init5_fn()
{
    Activity::_Init5();
}

// public static Android.android.app.Activity GetAppActivity() :1408
void Activity__GetAppActivity_fn(Activity** __retval)
{
    *__retval = Activity::GetAppActivity();
}

// public Android.java.lang.Object getSystemService(Android.java.lang.String arg0) :2362
void Activity__getSystemService_fn(Activity* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->getSystemService(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_847(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3006
void Activity__getSystemService_IMPL_847_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Activity::getSystemService_IMPL_847(*arg0_, *arg1_, arg2_);
}

// public Activity New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1271
void Activity__New11_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Activity** __retval)
{
    *__retval = Activity::New11(*obj, utype, *hasFallbackClass, *resolveType);
}

jclass Activity::_javaClass5_;
jmethodID Activity::getSystemService_847_ID_;

// public Activity(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :1271
void Activity::ctor_13(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.app.Activity", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_11(obj, utype, hasFallbackClass, resolveType);
}

// public Android.java.lang.Object getSystemService(Android.java.lang.String arg0) [instance] :2362
::g::Android::java::lang::Object* Activity::getSystemService(::g::Android::java::lang::String* arg0)
{
    uStackFrame __("Android.android.app.Activity", "getSystemService(Android.java.lang.String)");
    return uCast< ::g::Android::java::lang::Object*>(Activity::getSystemService_IMPL_847(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[0/*Android.java.lang.Object*/]);
}

// public static extern new void _Init() [static] :1270
void Activity::_Init5()
{
    uStackFrame __("Android.android.app.Activity", "_Init()");
    if (Activity::_javaClass5()) { return; }
    INIT_JNI;
    Activity::_javaClass5() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/app/Activity"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Activity::_javaClass5()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.app.Activity'", 44);; }
}

// public static Android.android.app.Activity GetAppActivity() [static] :1408
Activity* Activity::GetAppActivity()
{
    uStackFrame __("Android.android.app.Activity", "GetAppActivity()");
    return Activity::New11(::g::Android::Base::JNI::GetActivityObject(), ::g::Android::Base::JNI::GetDefaultType(), false, true);
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_847(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3006
uObject* Activity::getSystemService_IMPL_847(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.app.Activity", "getSystemService_IMPL_847(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Activity::_javaClass5(),Activity::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Activity::getSystemService_847_ID(),Activity::_javaClass5(),"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.app.Activity.getSystemService could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Activity::_javaClass5(), Activity::getSystemService_847_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Activity::getSystemService_847_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public Activity New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :1271
Activity* Activity::New11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    Activity* obj1 = (Activity*)uNew(Activity_typeof());
    obj1->ctor_13(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\app\$.uno
// --------------------------------------------------------------------

// public sealed extern class Fragment :3512
// {
static void Fragment_build(uType* type)
{
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::app::Fragment::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Fragment::equals_1415_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Fragment::hashCode_1416_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Fragment::toString_1417_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("_Init", NULL, (void*)Fragment___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("equals_IMPL_1415", NULL, (void*)Fragment__equals_IMPL_1415_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("hashCode_IMPL_1416", NULL, (void*)Fragment__hashCode_IMPL_1416_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_1417", NULL, (void*)Fragment__toString_IMPL_1417_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* Fragment_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Fragment);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.app.Fragment", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Fragment_build;
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))Fragment__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Fragment__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Fragment__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :3516
void Fragment___Init2_fn()
{
    Fragment::_Init2();
}

// public override sealed bool equals(Android.java.lang.Object arg0) :3546
void Fragment__equals1_fn(Fragment* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    uStackFrame __("Android.android.app.Fragment", "equals(Android.java.lang.Object)");
    return *__retval = Fragment::equals_IMPL_1415(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_1415(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3974
void Fragment__equals_IMPL_1415_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Fragment::equals_IMPL_1415(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :3552
void Fragment__hashCode1_fn(Fragment* __this, int* __retval)
{
    uStackFrame __("Android.android.app.Fragment", "hashCode()");
    return *__retval = Fragment::hashCode_IMPL_1416(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_1416(bool arg0, Android.Base.Primitives.ujobject arg1) :3977
void Fragment__hashCode_IMPL_1416_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Fragment::hashCode_IMPL_1416(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :3558
void Fragment__toString_fn(Fragment* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.app.Fragment", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Fragment::toString_IMPL_1417(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_1417(bool arg0, Android.Base.Primitives.ujobject arg1) :3980
void Fragment__toString_IMPL_1417_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Fragment::toString_IMPL_1417(*arg0_, *arg1_);
}

jclass Fragment::_javaClass2_;
jmethodID Fragment::equals_1415_ID_;
jmethodID Fragment::hashCode_1416_ID_;
jmethodID Fragment::toString_1417_ID_;

// public static extern new void _Init() [static] :3516
void Fragment::_Init2()
{
    uStackFrame __("Android.android.app.Fragment", "_Init()");
    if (Fragment::_javaClass2()) { return; }
    INIT_JNI;
    Fragment::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/app/Fragment"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Fragment::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.app.Fragment'", 44);; }
}

// public static extern bool equals_IMPL_1415(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3974
bool Fragment::equals_IMPL_1415(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.app.Fragment", "equals_IMPL_1415(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Fragment::_javaClass2(),Fragment::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Fragment::equals_1415_ID(),Fragment::_javaClass2(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.app.Fragment.equals could not be cached",70);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Fragment::_javaClass2(), Fragment::equals_1415_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Fragment::equals_1415_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_1416(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3977
int Fragment::hashCode_IMPL_1416(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.app.Fragment", "hashCode_IMPL_1416(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Fragment::_javaClass2(),Fragment::_Init2());
    
    int result;
    CACHE_METHOD(Fragment::hashCode_1416_ID(),Fragment::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.app.Fragment.hashCode could not be cached",72);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Fragment::_javaClass2(), Fragment::hashCode_1416_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Fragment::hashCode_1416_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_1417(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3980
uObject* Fragment::toString_IMPL_1417(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.app.Fragment", "toString_IMPL_1417(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Fragment::_javaClass2(),Fragment::_Init2());
    
    uObject* result;
    CACHE_METHOD(Fragment::toString_1417_ID(),Fragment::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.app.Fragment.toString could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Fragment::_javaClass2(), Fragment::toString_1417_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Fragment::toString_1417_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\app\$.uno
// --------------------------------------------------------------------

// public sealed extern class TaskStackBuilder :18135
// {
static void TaskStackBuilder_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* TaskStackBuilder_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TaskStackBuilder);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.app.TaskStackBuilder", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = TaskStackBuilder_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

}}}} // ::g::Android::android::app
