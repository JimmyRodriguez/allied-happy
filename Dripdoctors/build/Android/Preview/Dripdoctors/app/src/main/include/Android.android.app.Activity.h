// This file was generated based on C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\app\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace app{struct Activity;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace app{

// public sealed extern class Activity :1266
// {
::g::Android::java::lang::Object_type* Activity_typeof();
void Activity__ctor_13_fn(Activity* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Activity___Init5_fn();
void Activity__GetAppActivity_fn(Activity** __retval);
void Activity__getSystemService_fn(Activity* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval);
void Activity__getSystemService_IMPL_847_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Activity__New11_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Activity** __retval);

struct Activity : ::g::Android::android::view::ContextThemeWrapper
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID getSystemService_847_ID_;
    static jmethodID& getSystemService_847_ID() { return getSystemService_847_ID_; }

    void ctor_13(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::java::lang::Object* getSystemService(::g::Android::java::lang::String* arg0);
    static void _Init5();
    static Activity* GetAppActivity();
    static uObject* getSystemService_IMPL_847(bool arg0_, jobject arg1_, uObject* arg2_);
    static Activity* New11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
};
// }

}}}} // ::g::Android::android::app
