// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.Fallbacks.Android_java_lang_Iterable.h>
#include <Android.Fallbacks.Android_java_lang_Runnable.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Iterator.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uType* TYPES[5];

namespace g{
namespace Android{
namespace java{
namespace lang{

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\lang\$.uno
// ------------------------------------------------------------------

// public abstract extern interface CharSequence :18837
// {
uInterfaceType* CharSequence_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.lang.CharSequence", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("charAt", NULL, NULL, offsetof(CharSequence, fp_charAt), false, ::g::Uno::Char_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("length", NULL, NULL, offsetof(CharSequence, fp_length), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("subSequence", NULL, NULL, offsetof(CharSequence, fp_subSequence), false, CharSequence_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("toString", NULL, NULL, offsetof(CharSequence, fp_toString), false, ::g::Android::java::lang::String_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\lang\$.uno
// ------------------------------------------------------------------

// public sealed extern class Class :9049
// {
static void Class_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::Class::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Class::toString_30936_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)Class___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_30936", NULL, (void*)Class__toString_IMPL_30936_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* Class_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Class);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.lang.Class", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Class_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Class__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :9053
void Class___Init2_fn()
{
    Class::_Init2();
}

// public override sealed Android.java.lang.String toString() :9368
void Class__toString_fn(Class* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.java.lang.Class", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Class::toString_IMPL_30936(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30936(bool arg0, Android.Base.Primitives.ujobject arg1) :9555
void Class__toString_IMPL_30936_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Class::toString_IMPL_30936(*arg0_, *arg1_);
}

jclass Class::_javaClass2_;
jmethodID Class::toString_30936_ID_;

// public static extern new void _Init() [static] :9053
void Class::_Init2()
{
    uStackFrame __("Android.java.lang.Class", "_Init()");
    if (Class::_javaClass2()) { return; }
    INIT_JNI;
    Class::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Class"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Class::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Class'", 39);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30936(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9555
uObject* Class::toString_IMPL_30936(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Class", "toString_IMPL_30936(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Class::_javaClass2(),Class::_Init2());
    
    uObject* result;
    CACHE_METHOD(Class::toString_30936_ID(),Class::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Class.toString could not be cached",67);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Class::_javaClass2(), Class::toString_30936_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Class::toString_30936_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\lang\$.uno
// ------------------------------------------------------------------

// public abstract extern interface Iterable :18782
// {
uInterfaceType* Iterable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.lang.Iterable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("iterator", NULL, NULL, offsetof(Iterable, fp_iterator), false, ::g::Android::java::util::Iterator_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\lang\$.uno
// ------------------------------------------------------------------

// public extern class Object :11
// {
static void Object_build(uType* type)
{
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::lang::Class_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::Object::_javaClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::clone_31287_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::equals_31288_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::finalize_31289_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::getClass_31290_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::hashCode_31291_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::notify_31292_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::notifyAll_31293_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::Object_31286_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::toString_31294_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::wait_31295_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::wait_31296_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::wait_31297_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(23,
        new uFunction("_Init", NULL, (void*)Object___Init1_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("clone_IMPL_31287", NULL, (void*)Object__clone_IMPL_31287_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("equals", NULL, NULL, offsetof(Object_type, fp_equals1), false, ::g::Uno::Bool_typeof(), 1, Object_typeof()),
        new uFunction("equals_IMPL_31288", NULL, (void*)Object__equals_IMPL_31288_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("finalize_IMPL_31289", NULL, (void*)Object__finalize_IMPL_31289_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getClass", NULL, (void*)Object__getClass_fn, 0, false, ::g::Android::java::lang::Class_typeof(), 0),
        new uFunction("getClass_IMPL_31290", NULL, (void*)Object__getClass_IMPL_31290_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("hashCode", NULL, NULL, offsetof(Object_type, fp_hashCode1), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("hashCode_IMPL_31291", NULL, (void*)Object__hashCode_IMPL_31291_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)Object__New3_fn, 0, true, Object_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Object__New4_fn, 0, true, Object_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("notify", NULL, (void*)Object__notify_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("notify_IMPL_31292", NULL, (void*)Object__notify_IMPL_31292_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("notifyAll", NULL, (void*)Object__notifyAll_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("notifyAll_IMPL_31293", NULL, (void*)Object__notifyAll_IMPL_31293_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString", NULL, NULL, offsetof(Object_type, fp_toString), false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("toString_IMPL_31294", NULL, (void*)Object__toString_IMPL_31294_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("wait", NULL, (void*)Object__wait_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("wait", NULL, (void*)Object__wait1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("wait", NULL, (void*)Object__wait2_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Long_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("wait_IMPL_31295", NULL, (void*)Object__wait_IMPL_31295_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("wait_IMPL_31296", NULL, (void*)Object__wait_IMPL_31296_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("wait_IMPL_31297", NULL, (void*)Object__wait_IMPL_31297_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Int_typeof()));
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Android.java.lang.Object", options);
    type->SetBase(::g::Android::Base::Wrappers::JWrapper_typeof());
    type->fp_build_ = Object_build;
    type->fp_ctor_ = (void*)Object__New3_fn;
    type->fp_equals1 = Object__equals1_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_hashCode1 = Object__hashCode1_fn;
    type->fp_toString = Object__toString_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Object__ToString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public Object() :28
void Object__ctor_3_fn(Object* __this)
{
    __this->ctor_3();
}

// public Object(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void Object__ctor_4_fn(Object* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_4(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :15
void Object___Init1_fn()
{
    Object::_Init1();
}

// public static extern Android.Base.Wrappers.IJWrapper clone_IMPL_31287(bool arg0, Android.Base.Primitives.ujobject arg1) :111
void Object__clone_IMPL_31287_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Object::clone_IMPL_31287(*arg0_, *arg1_);
}

// public virtual bool equals(Android.java.lang.Object arg0) :49
void Object__equals1_fn(Object* __this, Object* arg0, bool* __retval)
{
    uStackFrame __("Android.java.lang.Object", "equals(Android.java.lang.Object)");
    return *__retval = Object::equals_IMPL_31288(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public override sealed bool Equals(object obj) :19
void Object__Equals_fn(Object* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Android.java.lang.Object", "Equals(object)");

    if (obj != NULL)
    {
        uObject* tmp = uAs<uObject*>(obj, ::TYPES[1/*Android.Base.Wrappers.IJWrapper*/]);

        if (tmp != NULL)
            return *__retval = ::g::Android::Base::JNI::IsSameObject(__this->_javaObject, ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(tmp), ::TYPES[1/*Android.Base.Wrappers.IJWrapper*/]))), void();
    }

    return *__retval = false, void();
}

// public static extern bool equals_IMPL_31288(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :114
void Object__equals_IMPL_31288_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Object::equals_IMPL_31288(*arg0_, *arg1_, arg2_);
}

// public static extern void finalize_IMPL_31289(bool arg0, Android.Base.Primitives.ujobject arg1) :117
void Object__finalize_IMPL_31289_fn(bool* arg0_, jobject* arg1_)
{
    Object::finalize_IMPL_31289(*arg0_, *arg1_);
}

// public Android.java.lang.Class getClass() :61
void Object__getClass_fn(Object* __this, ::g::Android::java::lang::Class** __retval)
{
    *__retval = __this->getClass();
}

// public static extern Android.Base.Wrappers.IJWrapper getClass_IMPL_31290(bool arg0, Android.Base.Primitives.ujobject arg1) :120
void Object__getClass_IMPL_31290_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Object::getClass_IMPL_31290(*arg0_, *arg1_);
}

// public override sealed int GetHashCode() :21
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Android.java.lang.Object", "GetHashCode()");
    return *__retval = __this->hashCode1(), void();
}

// public virtual int hashCode() :67
void Object__hashCode1_fn(Object* __this, int* __retval)
{
    uStackFrame __("Android.java.lang.Object", "hashCode()");
    return *__retval = Object::hashCode_IMPL_31291(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_31291(bool arg0, Android.Base.Primitives.ujobject arg1) :123
void Object__hashCode_IMPL_31291_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Object::hashCode_IMPL_31291(*arg0_, *arg1_);
}

// public Object New() :28
void Object__New3_fn(Object** __retval)
{
    *__retval = Object::New3();
}

// public Object New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void Object__New4_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Object** __retval)
{
    *__retval = Object::New4(*obj, utype, *hasFallbackClass, *resolveType);
}

// public void notify() :73
void Object__notify_fn(Object* __this)
{
    __this->notify();
}

// public static extern void notify_IMPL_31292(bool arg0, Android.Base.Primitives.ujobject arg1) :126
void Object__notify_IMPL_31292_fn(bool* arg0_, jobject* arg1_)
{
    Object::notify_IMPL_31292(*arg0_, *arg1_);
}

// public void notifyAll() :79
void Object__notifyAll_fn(Object* __this)
{
    __this->notifyAll();
}

// public static extern void notifyAll_IMPL_31293(bool arg0, Android.Base.Primitives.ujobject arg1) :129
void Object__notifyAll_IMPL_31293_fn(bool* arg0_, jobject* arg1_)
{
    Object::notifyAll_IMPL_31293(*arg0_, *arg1_);
}

// public static operator ==(Android.java.lang.Object a, Android.java.lang.Object b) :23
void Object__op_Equality1_fn(Object* a, Object* b, bool* __retval)
{
    *__retval = Object::op_Equality1(a, b);
}

// public static operator !=(Android.java.lang.Object a, Android.java.lang.Object b) :25
void Object__op_Inequality1_fn(Object* a, Object* b, bool* __retval)
{
    *__retval = Object::op_Inequality1(a, b);
}

// public virtual Android.java.lang.String toString() :85
void Object__toString_fn(Object* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.java.lang.Object", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Object::toString_IMPL_31294(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public override sealed string ToString() :17
void Object__ToString_fn(Object* __this, uString** __retval)
{
    uStackFrame __("Android.java.lang.Object", "ToString()");
    return *__retval = ::g::Android::java::lang::String::op_Implicit(__this->toString()), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31294(bool arg0, Android.Base.Primitives.ujobject arg1) :132
void Object__toString_IMPL_31294_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Object::toString_IMPL_31294(*arg0_, *arg1_);
}

// public void wait() :91
void Object__wait_fn(Object* __this)
{
    __this->wait();
}

// public void wait(long arg0) :97
void Object__wait1_fn(Object* __this, int64_t* arg0)
{
    __this->wait1(*arg0);
}

// public void wait(long arg0, int arg1) :103
void Object__wait2_fn(Object* __this, int64_t* arg0, int* arg1)
{
    __this->wait2(*arg0, *arg1);
}

// public static extern void wait_IMPL_31295(bool arg0, Android.Base.Primitives.ujobject arg1) :135
void Object__wait_IMPL_31295_fn(bool* arg0_, jobject* arg1_)
{
    Object::wait_IMPL_31295(*arg0_, *arg1_);
}

// public static extern void wait_IMPL_31296(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2) :138
void Object__wait_IMPL_31296_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_)
{
    Object::wait_IMPL_31296(*arg0_, *arg1_, *arg2_);
}

// public static extern void wait_IMPL_31297(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2, int arg3) :141
void Object__wait_IMPL_31297_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_, int* arg3_)
{
    Object::wait_IMPL_31297(*arg0_, *arg1_, *arg2_, *arg3_);
}

jclass Object::_javaClass1_;
jmethodID Object::clone_31287_ID_;
jmethodID Object::equals_31288_ID_;
jmethodID Object::finalize_31289_ID_;
jmethodID Object::getClass_31290_ID_;
jmethodID Object::hashCode_31291_ID_;
jmethodID Object::notify_31292_ID_;
jmethodID Object::notifyAll_31293_ID_;
jmethodID Object::Object_31286_ID_c_;
jmethodID Object::toString_31294_ID_;
jmethodID Object::wait_31295_ID_;
jmethodID Object::wait_31296_ID_;
jmethodID Object::wait_31297_ID_;

// public Object() [instance] :28
void Object::ctor_3()
{
    uStackFrame __("Android.java.lang.Object", ".ctor()");
    ctor_1(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());;
    CACHE_METHOD(Object::Object_31286_ID_c(),Object::_javaClass1(),"<init>","()V",GetMethodID,"Id for fallback method java.lang.Object.<init> could not be cached",66);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Object::_javaClass1(), Object::Object_31286_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public Object(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void Object::ctor_4(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.java.lang.Object", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_1(obj, utype, hasFallbackClass, resolveType);
}

// public Android.java.lang.Class getClass() [instance] :61
::g::Android::java::lang::Class* Object::getClass()
{
    uStackFrame __("Android.java.lang.Object", "getClass()");
    return uCast< ::g::Android::java::lang::Class*>(Object::getClass_IMPL_31290(_subclassed, _javaObject), ::TYPES[2/*Android.java.lang.Class*/]);
}

// public void notify() [instance] :73
void Object::notify()
{
    uStackFrame __("Android.java.lang.Object", "notify()");
    Object::notify_IMPL_31292(_subclassed, _javaObject);
}

// public void notifyAll() [instance] :79
void Object::notifyAll()
{
    uStackFrame __("Android.java.lang.Object", "notifyAll()");
    Object::notifyAll_IMPL_31293(_subclassed, _javaObject);
}

// public void wait() [instance] :91
void Object::wait()
{
    uStackFrame __("Android.java.lang.Object", "wait()");
    Object::wait_IMPL_31295(_subclassed, _javaObject);
}

// public void wait(long arg0) [instance] :97
void Object::wait1(int64_t arg0)
{
    uStackFrame __("Android.java.lang.Object", "wait(long)");
    int64_t arg0_ = arg0;
    Object::wait_IMPL_31296(_subclassed, _javaObject, arg0_);
}

// public void wait(long arg0, int arg1) [instance] :103
void Object::wait2(int64_t arg0, int arg1)
{
    uStackFrame __("Android.java.lang.Object", "wait(long,int)");
    int64_t arg0_ = arg0;
    int arg1_ = arg1;
    Object::wait_IMPL_31297(_subclassed, _javaObject, arg0_, arg1_);
}

// public static extern new void _Init() [static] :15
void Object::_Init1()
{
    uStackFrame __("Android.java.lang.Object", "_Init()");
    if (Object::_javaClass1()) { return; }
    INIT_JNI;
    Object::_javaClass1() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Object"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Object::_javaClass1()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Object'", 40);; }
}

// public static extern Android.Base.Wrappers.IJWrapper clone_IMPL_31287(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :111
uObject* Object::clone_IMPL_31287(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Object", "clone_IMPL_31287(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    uObject* result;
    CACHE_METHOD(Object::clone_31287_ID(),Object::_javaClass1(),"clone","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.lang.Object.clone could not be cached",65);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Object::_javaClass1(), Object::clone_31287_ID()),result,Object_typeof(),Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Object::clone_31287_ID()),result,Object_typeof(),Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_31288(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :114
bool Object::equals_IMPL_31288(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.java.lang.Object", "equals_IMPL_31288(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Object::equals_31288_ID(),Object::_javaClass1(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.lang.Object.equals could not be cached",66);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Object::_javaClass1(), Object::equals_31288_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Object::equals_31288_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void finalize_IMPL_31289(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :117
void Object::finalize_IMPL_31289(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Object", "finalize_IMPL_31289(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    CACHE_METHOD(Object::finalize_31289_ID(),Object::_javaClass1(),"finalize","()V",GetMethodID,"Id for fallback method java.lang.Object.finalize could not be cached",68);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Object::_javaClass1(), Object::finalize_31289_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Object::finalize_31289_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper getClass_IMPL_31290(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :120
uObject* Object::getClass_IMPL_31290(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Object", "getClass_IMPL_31290(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    uObject* result;
    CACHE_METHOD(Object::getClass_31290_ID(),Object::_javaClass1(),"getClass","()Ljava/lang/Class;",GetMethodID,"Id for fallback method java.lang.Object.getClass could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Object::_javaClass1(), Object::getClass_31290_ID()),result,::g::Android::java::lang::Class_typeof(),::g::Android::java::lang::Class*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Object::getClass_31290_ID()),result,::g::Android::java::lang::Class_typeof(),::g::Android::java::lang::Class*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_31291(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :123
int Object::hashCode_IMPL_31291(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Object", "hashCode_IMPL_31291(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    int result;
    CACHE_METHOD(Object::hashCode_31291_ID(),Object::_javaClass1(),"hashCode","()I",GetMethodID,"Id for fallback method java.lang.Object.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Object::_javaClass1(), Object::hashCode_31291_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Object::hashCode_31291_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public Object New() [static] :28
Object* Object::New3()
{
    Object* obj2 = (Object*)uNew(Object_typeof());
    obj2->ctor_3();
    return obj2;
}

// public Object New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :16
Object* Object::New4(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_4(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void notify_IMPL_31292(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :126
void Object::notify_IMPL_31292(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Object", "notify_IMPL_31292(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    CACHE_METHOD(Object::notify_31292_ID(),Object::_javaClass1(),"notify","()V",GetMethodID,"Id for fallback method java.lang.Object.notify could not be cached",66);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Object::_javaClass1(), Object::notify_31292_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Object::notify_31292_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void notifyAll_IMPL_31293(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :129
void Object::notifyAll_IMPL_31293(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Object", "notifyAll_IMPL_31293(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    CACHE_METHOD(Object::notifyAll_31293_ID(),Object::_javaClass1(),"notifyAll","()V",GetMethodID,"Id for fallback method java.lang.Object.notifyAll could not be cached",69);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Object::_javaClass1(), Object::notifyAll_31293_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Object::notifyAll_31293_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static operator ==(Android.java.lang.Object a, Android.java.lang.Object b) [static] :23
bool Object::op_Equality1(Object* a, Object* b)
{
    uStackFrame __("Android.java.lang.Object", "==(Android.java.lang.Object,Android.java.lang.Object)");

    if ((a == NULL) || (b == NULL))
        return b == a;
    else
        return ::g::Android::Base::JNI::IsSameObject(uPtr(a)->_GetJavaObject(), uPtr(b)->_GetJavaObject());
}

// public static operator !=(Android.java.lang.Object a, Android.java.lang.Object b) [static] :25
bool Object::op_Inequality1(Object* a, Object* b)
{
    uStackFrame __("Android.java.lang.Object", "!=(Android.java.lang.Object,Android.java.lang.Object)");
    return !Object::op_Equality1(a, b);
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31294(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :132
uObject* Object::toString_IMPL_31294(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Object", "toString_IMPL_31294(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    uObject* result;
    CACHE_METHOD(Object::toString_31294_ID(),Object::_javaClass1(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Object.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Object::_javaClass1(), Object::toString_31294_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Object::toString_31294_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void wait_IMPL_31295(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :135
void Object::wait_IMPL_31295(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.Object", "wait_IMPL_31295(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    CACHE_METHOD(Object::wait_31295_ID(),Object::_javaClass1(),"wait","()V",GetMethodID,"Id for fallback method java.lang.Object.wait could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Object::_javaClass1(), Object::wait_31295_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Object::wait_31295_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void wait_IMPL_31296(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2) [static] :138
void Object::wait_IMPL_31296(bool arg0_, jobject arg1_, int64_t arg2_)
{
    uStackFrame __("Android.java.lang.Object", "wait_IMPL_31296(bool,Android.Base.Primitives.ujobject,long)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    CACHE_METHOD(Object::wait_31296_ID(),Object::_javaClass1(),"wait","(J)V",GetMethodID,"Id for fallback method java.lang.Object.wait could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Object::_javaClass1(), Object::wait_31296_ID(), ((jlong)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Object::wait_31296_ID(), ((jlong)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void wait_IMPL_31297(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2, int arg3) [static] :141
void Object::wait_IMPL_31297(bool arg0_, jobject arg1_, int64_t arg2_, int arg3_)
{
    uStackFrame __("Android.java.lang.Object", "wait_IMPL_31297(bool,Android.Base.Primitives.ujobject,long,int)");
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    CACHE_METHOD(Object::wait_31297_ID(),Object::_javaClass1(),"wait","(JI)V",GetMethodID,"Id for fallback method java.lang.Object.wait could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Object::_javaClass1(), Object::wait_31297_ID(), ((jlong)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Object::wait_31297_ID(), ((jlong)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\lang\$.uno
// ------------------------------------------------------------------

// public abstract extern interface Runnable :18765
// {
uInterfaceType* Runnable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.lang.Runnable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("run", NULL, NULL, offsetof(Runnable, fp_run), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\lang\$.uno
// ------------------------------------------------------------------

// public sealed extern class String :15813
// {
static void String_build(uType* type)
{
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Android::java::lang::CharSequence_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(String_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(String_type, interface1),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(String_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::String::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::charAt_31531_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::equals_31538_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::hashCode_31545_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::length_31556_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::subSequence_31588_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::toString_31568_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("_Init", NULL, (void*)String___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("charAt", NULL, (void*)String__charAt_fn, 0, false, ::g::Uno::Char_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("charAt_IMPL_31531", NULL, (void*)String__charAt_IMPL_31531_fn, 0, true, ::g::Uno::Char_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("equals_IMPL_31538", NULL, (void*)String__equals_IMPL_31538_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("hashCode_IMPL_31545", NULL, (void*)String__hashCode_IMPL_31545_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("length", NULL, (void*)String__length_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("length_IMPL_31556", NULL, (void*)String__length_IMPL_31556_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("subSequence", NULL, (void*)String__subSequence_fn, 0, false, ::g::Android::java::lang::CharSequence_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("subSequence_IMPL_31588", NULL, (void*)String__subSequence_IMPL_31588_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("toString_IMPL_31568", NULL, (void*)String__toString_IMPL_31568_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

String_type* String_typeof()
{
    static uSStrong<String_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(String_type);
    type = (String_type*)uClassType::New("Android.java.lang.String", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = String_build;
    type->fp_equals1 = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::Object*, bool*))String__equals1_fn;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))String__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, String**))String__toString_fn;
    type->interface2.fp_length = (void(*)(uObject*, int*))String__length_fn;
    type->interface2.fp_charAt = (void(*)(uObject*, int*, uChar*))String__charAt_fn;
    type->interface2.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))String__subSequence_fn;
    type->interface2.fp_toString = (void(*)(uObject*, String**))String__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :15817
void String___Init2_fn()
{
    String::_Init2();
}

// public char charAt(int arg0) :16087
void String__charAt_fn(String* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_31531(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :16499
void String__charAt_IMPL_31531_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = String::charAt_IMPL_31531(*arg0_, *arg1_, *arg2_);
}

// public override sealed bool equals(Android.java.lang.Object arg0) :16129
void String__equals1_fn(String* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    uStackFrame __("Android.java.lang.String", "equals(Android.java.lang.Object)");
    return *__retval = String::equals_IMPL_31538(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool equals_IMPL_31538(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :16520
void String__equals_IMPL_31538_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = String::equals_IMPL_31538(*arg0_, *arg1_, arg2_);
}

// public override sealed int hashCode() :16171
void String__hashCode1_fn(String* __this, int* __retval)
{
    uStackFrame __("Android.java.lang.String", "hashCode()");
    return *__retval = String::hashCode_IMPL_31545(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_31545(bool arg0, Android.Base.Primitives.ujobject arg1) :16541
void String__hashCode_IMPL_31545_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = String::hashCode_IMPL_31545(*arg0_, *arg1_);
}

// public int length() :16237
void String__length_fn(String* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_31556(bool arg0, Android.Base.Primitives.ujobject arg1) :16574
void String__length_IMPL_31556_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = String::length_IMPL_31556(*arg0_, *arg1_);
}

// public static implicit operator string(Android.java.lang.String str) :15839
void String__op_Implicit_fn(String* str, uString** __retval)
{
    *__retval = String::op_Implicit(str);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :16429
void String__subSequence_fn(String* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_31588(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :16670
void String__subSequence_IMPL_31588_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = String::subSequence_IMPL_31588(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :16309
void String__toString_fn(String* __this, String** __retval)
{
    uStackFrame __("Android.java.lang.String", "toString()");
    return *__retval = uCast<String*>(String::toString_IMPL_31568(__this->_subclassed, __this->_javaObject), String_typeof()), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31568(bool arg0, Android.Base.Primitives.ujobject arg1) :16610
void String__toString_IMPL_31568_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = String::toString_IMPL_31568(*arg0_, *arg1_);
}

jclass String::_javaClass2_;
jmethodID String::charAt_31531_ID_;
jmethodID String::equals_31538_ID_;
jmethodID String::hashCode_31545_ID_;
jmethodID String::length_31556_ID_;
jmethodID String::subSequence_31588_ID_;
jmethodID String::toString_31568_ID_;

// public char charAt(int arg0) [instance] :16087
uChar String::charAt(int arg0)
{
    uStackFrame __("Android.java.lang.String", "charAt(int)");
    int arg0_ = arg0;
    return String::charAt_IMPL_31531(_subclassed, _javaObject, arg0_);
}

// public int length() [instance] :16237
int String::length()
{
    uStackFrame __("Android.java.lang.String", "length()");
    return String::length_IMPL_31556(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :16429
uObject* String::subSequence(int arg0, int arg1)
{
    uStackFrame __("Android.java.lang.String", "subSequence(int,int)");
    int arg0_ = arg0;
    int arg1_ = arg1;
    return String::subSequence_IMPL_31588(_subclassed, _javaObject, arg0_, arg1_);
}

// public static extern new void _Init() [static] :15817
void String::_Init2()
{
    uStackFrame __("Android.java.lang.String", "_Init()");
    if (String::_javaClass2()) { return; }
    INIT_JNI;
    String::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/String"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!String::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.String'", 40);; }
}

// public static extern char charAt_IMPL_31531(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :16499
uChar String::charAt_IMPL_31531(bool arg0_, jobject arg1_, int arg2_)
{
    uStackFrame __("Android.java.lang.String", "charAt_IMPL_31531(bool,Android.Base.Primitives.ujobject,int)");
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uChar result;
    CACHE_METHOD(String::charAt_31531_ID(),String::_javaClass2(),"charAt","(I)C",GetMethodID,"Id for fallback method java.lang.String.charAt could not be cached",66);
    if (arg0_) {
        result = ((uChar)U_JNIVAR->CallNonvirtualCharMethod(arg1_, String::_javaClass2(), String::charAt_31531_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, String::charAt_31531_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_31538(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :16520
bool String::equals_IMPL_31538(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.java.lang.String", "equals_IMPL_31538(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(String::equals_31538_ID(),String::_javaClass2(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.lang.String.equals could not be cached",66);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, String::_javaClass2(), String::equals_31538_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, String::equals_31538_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_31545(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16541
int String::hashCode_IMPL_31545(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.String", "hashCode_IMPL_31545(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    int result;
    CACHE_METHOD(String::hashCode_31545_ID(),String::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method java.lang.String.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, String::_javaClass2(), String::hashCode_31545_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, String::hashCode_31545_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int length_IMPL_31556(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16574
int String::length_IMPL_31556(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.String", "length_IMPL_31556(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    int result;
    CACHE_METHOD(String::length_31556_ID(),String::_javaClass2(),"length","()I",GetMethodID,"Id for fallback method java.lang.String.length could not be cached",66);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, String::_javaClass2(), String::length_31556_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, String::length_31556_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static implicit operator string(Android.java.lang.String str) [static] :15839
uString* String::op_Implicit(String* str)
{
    uStackFrame __("Android.java.lang.String", "op_Implicit(Android.java.lang.String)~string");

    if (::g::Uno::Object::ReferenceEquals(str, NULL))
        return NULL;
    else
        return ::g::Android::Base::Types::String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), uPtr(str)->_GetJavaObject());
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_31588(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :16670
uObject* String::subSequence_IMPL_31588(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    uStackFrame __("Android.java.lang.String", "subSequence_IMPL_31588(bool,Android.Base.Primitives.ujobject,int,int)");
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uObject* result;
    CACHE_METHOD(String::subSequence_31588_ID(),String::_javaClass2(),"subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.String.subSequence could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, String::_javaClass2(), String::subSequence_31588_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, String::subSequence_31588_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31568(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16610
uObject* String::toString_IMPL_31568(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.java.lang.String", "toString_IMPL_31568(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uObject* result;
    CACHE_METHOD(String::toString_31568_ID(),String::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.String.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, String::_javaClass2(), String::toString_31568_ID()),result,String_typeof(),String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, String::toString_31568_ID()),result,String_typeof(),String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::java::lang
