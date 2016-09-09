// This file was generated based on C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\content\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{

// public abstract extern class Context :11
// {
::g::Android::java::lang::Object_type* Context_typeof();
void Context__ctor_6_fn(Context* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Context___Init2_fn();
void Context__get_LOCATION_SERVICE_fn(::g::Android::java::lang::String** __retval);

struct Context : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID LOCATION_SERVICE_4130_ID_;
    static jfieldID& LOCATION_SERVICE_4130_ID() { return LOCATION_SERVICE_4130_ID_; }

    void ctor_6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init2();
    static ::g::Android::java::lang::String* LOCATION_SERVICE();
};
// }

}}}} // ::g::Android::android::content
