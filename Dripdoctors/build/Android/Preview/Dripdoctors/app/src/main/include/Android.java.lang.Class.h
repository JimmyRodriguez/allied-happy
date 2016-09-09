// This file was generated based on C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\lang\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct Class;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public sealed extern class Class :9049
// {
::g::Android::java::lang::Object_type* Class_typeof();
void Class___Init2_fn();
void Class__toString_fn(Class* __this, ::g::Android::java::lang::String** __retval);
void Class__toString_IMPL_30936_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Class : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_30936_ID_;
    static jmethodID& toString_30936_ID() { return toString_30936_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_30936(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::lang
