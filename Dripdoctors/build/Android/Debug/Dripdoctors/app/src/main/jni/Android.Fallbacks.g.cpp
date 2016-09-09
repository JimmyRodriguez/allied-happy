// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Intent.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.location.Location.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.view.ActionProvider.h>
#include <Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MenuItem.h>
#include <Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <Android.android.view.SubMenu.h>
#include <Android.android.view.View.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_content_Context.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_android_location_LocationListener.h>
#include <Android.Fallbacks.Android_android_util_AttributeSet.h>
#include <Android.Fallbacks.Android_android_view_ActionMode.h>
#include <Android.Fallbacks.Android_android_view_ActionProvider.h>
#include <Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h>
#include <Android.Fallbacks.Android_android_view_Menu.h>
#include <Android.Fallbacks.Android_android_view_MenuItem.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h>
#include <Android.Fallbacks.Android_android_view_SubMenu.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.Fallbacks.Android_java_lang_Iterable.h>
#include <Android.Fallbacks.Android_java_lang_Runnable.h>
#include <Android.Fallbacks.Android_java_util_Collection.h>
#include <Android.Fallbacks.Android_java_util_Iterator.h>
#include <Android.Fallbacks.Android_java_util_List.h>
#include <Android.Fallbacks.Android_java_util_ListIterator.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.Iterator.h>
#include <Android.java.util.List.h>
#include <Android.java.util.ListIterator.h>
#include <Android.Runtime.JEnumerator.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
static uType* TYPES[17];

namespace g{
namespace Android{
namespace Fallbacks{

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_content_Context :1999
// {
static void Android_android_content_Context_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* Android_android_content_Context_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_content_Context);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_content_Context", options);
    type->SetBase(::g::Android::android::content::Context_typeof());
    type->fp_build_ = Android_android_content_Context_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_graphics_drawable_Drawable :10945
// {
static void Android_android_graphics_drawable_Drawable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* Android_android_graphics_drawable_Drawable_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_graphics_drawable_Drawable);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_graphics_drawable_Drawable", options);
    type->SetBase(::g::Android::android::graphics::drawable::Drawable_typeof());
    type->fp_build_ = Android_android_graphics_drawable_Drawable_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_location_LocationListener :27885
// {
static void Android_android_location_LocationListener_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_location_LocationListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_location_LocationListener_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(Android_android_location_LocationListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_location_LocationListener::onLocationChanged_8298_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_location_LocationListener::onProviderDisabled_8301_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_location_LocationListener::onProviderEnabled_8300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_location_LocationListener::onStatusChanged_8299_ID_, uFieldFlagsStatic);
}

Android_android_location_LocationListener_type* Android_android_location_LocationListener_typeof()
{
    static uSStrong<Android_android_location_LocationListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_location_LocationListener);
    options.TypeSize = sizeof(Android_android_location_LocationListener_type);
    type = (Android_android_location_LocationListener_type*)uClassType::New("Android.Fallbacks.Android_android_location_LocationListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_android_location_LocationListener_build;
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))Android_android_location_LocationListener__onLocationChanged_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))Android_android_location_LocationListener__onStatusChanged_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))Android_android_location_LocationListener__onProviderEnabled_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))Android_android_location_LocationListener__onProviderDisabled_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public void onLocationChanged(Android.android.location.Location arg0) :27888
void Android_android_location_LocationListener__onLocationChanged_fn(Android_android_location_LocationListener* __this, ::g::Android::android::location::Location* arg0)
{
    __this->onLocationChanged(arg0);
}

// public static extern void onLocationChanged_IMPL_8298(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27910
void Android_android_location_LocationListener__onLocationChanged_IMPL_8298_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_location_LocationListener::onLocationChanged_IMPL_8298(*arg0_, *arg1_, arg2_);
}

// public void onProviderDisabled(Android.java.lang.String arg0) :27903
void Android_android_location_LocationListener__onProviderDisabled_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0)
{
    __this->onProviderDisabled(arg0);
}

// public static extern void onProviderDisabled_IMPL_8301(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27919
void Android_android_location_LocationListener__onProviderDisabled_IMPL_8301_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_location_LocationListener::onProviderDisabled_IMPL_8301(*arg0_, *arg1_, arg2_);
}

// public void onProviderEnabled(Android.java.lang.String arg0) :27898
void Android_android_location_LocationListener__onProviderEnabled_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0)
{
    __this->onProviderEnabled(arg0);
}

// public static extern void onProviderEnabled_IMPL_8300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :27916
void Android_android_location_LocationListener__onProviderEnabled_IMPL_8300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_android_location_LocationListener::onProviderEnabled_IMPL_8300(*arg0_, *arg1_, arg2_);
}

// public void onStatusChanged(Android.java.lang.String arg0, int arg1, Android.android.os.Bundle arg2) :27893
void Android_android_location_LocationListener__onStatusChanged_fn(Android_android_location_LocationListener* __this, ::g::Android::java::lang::String* arg0, int* arg1, ::g::Android::android::os::Bundle* arg2)
{
    __this->onStatusChanged(arg0, *arg1, arg2);
}

// public static extern void onStatusChanged_IMPL_8299(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :27913
void Android_android_location_LocationListener__onStatusChanged_IMPL_8299_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_)
{
    Android_android_location_LocationListener::onStatusChanged_IMPL_8299(*arg0_, *arg1_, arg2_, *arg3_, arg4_);
}

jmethodID Android_android_location_LocationListener::onLocationChanged_8298_ID_;
jmethodID Android_android_location_LocationListener::onProviderDisabled_8301_ID_;
jmethodID Android_android_location_LocationListener::onProviderEnabled_8300_ID_;
jmethodID Android_android_location_LocationListener::onStatusChanged_8299_ID_;

// public void onLocationChanged(Android.android.location.Location arg0) [instance] :27888
void Android_android_location_LocationListener::onLocationChanged(::g::Android::android::location::Location* arg0)
{
    Android_android_location_LocationListener::onLocationChanged_IMPL_8298(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onProviderDisabled(Android.java.lang.String arg0) [instance] :27903
void Android_android_location_LocationListener::onProviderDisabled(::g::Android::java::lang::String* arg0)
{
    Android_android_location_LocationListener::onProviderDisabled_IMPL_8301(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onProviderEnabled(Android.java.lang.String arg0) [instance] :27898
void Android_android_location_LocationListener::onProviderEnabled(::g::Android::java::lang::String* arg0)
{
    Android_android_location_LocationListener::onProviderEnabled_IMPL_8300(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onStatusChanged(Android.java.lang.String arg0, int arg1, Android.android.os.Bundle arg2) [instance] :27893
void Android_android_location_LocationListener::onStatusChanged(::g::Android::java::lang::String* arg0, int arg1, ::g::Android::android::os::Bundle* arg2)
{
    Android_android_location_LocationListener::onStatusChanged_IMPL_8299(_subclassed, _javaObject, (uObject*)arg0, arg1, (uObject*)arg2);
}

// public static extern void onLocationChanged_IMPL_8298(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27910
void Android_android_location_LocationListener::onLocationChanged_IMPL_8298(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_location_LocationListener::onLocationChanged_8298_ID(),"android/location/LocationListener","onLocationChanged","(Landroid/location/Location;)V",GetMethodID,"Id for fallback method android.location.LocationListener.onLocationChanged could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_location_LocationListener::onLocationChanged_8298_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onProviderDisabled_IMPL_8301(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27919
void Android_android_location_LocationListener::onProviderDisabled_IMPL_8301(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_location_LocationListener::onProviderDisabled_8301_ID(),"android/location/LocationListener","onProviderDisabled","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.location.LocationListener.onProviderDisabled could not be cached",95);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_location_LocationListener::onProviderDisabled_8301_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onProviderEnabled_IMPL_8300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :27916
void Android_android_location_LocationListener::onProviderEnabled_IMPL_8300(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_location_LocationListener::onProviderEnabled_8300_ID(),"android/location/LocationListener","onProviderEnabled","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.location.LocationListener.onProviderEnabled could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_location_LocationListener::onProviderEnabled_8300_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onStatusChanged_IMPL_8299(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :27913
void Android_android_location_LocationListener::onStatusChanged_IMPL_8299(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_location_LocationListener::onStatusChanged_8299_ID(),"android/location/LocationListener","onStatusChanged","(Ljava/lang/String;ILandroid/os/Bundle;)V",GetMethodID,"Id for fallback method android.location.LocationListener.onStatusChanged could not be cached",92);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_location_LocationListener::onStatusChanged_8299_ID(), _obArg2, ((jint)arg3_), _obArg4);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_util_AttributeSet :23077
// {
static void Android_android_util_AttributeSet_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_util_AttributeSet_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_util_AttributeSet_type, interface1),
        ::g::Android::android::util::AttributeSet_typeof(), offsetof(Android_android_util_AttributeSet_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeBooleanValue_20306_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeBooleanValue_20312_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeCount_20299_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeFloatValue_20310_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeFloatValue_20316_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeIntValue_20308_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeIntValue_20314_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeListValue_20305_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeListValue_20311_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeName_20300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeNameResource_20304_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeResourceValue_20307_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeResourceValue_20313_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20309_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20315_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeValue_20301_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getAttributeValue_20302_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getClassAttribute_20318_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getIdAttribute_20317_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getIdAttributeResourceValue_20319_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getPositionDescription_20303_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_util_AttributeSet::getStyleAttribute_20320_ID_, uFieldFlagsStatic);
}

Android_android_util_AttributeSet_type* Android_android_util_AttributeSet_typeof()
{
    static uSStrong<Android_android_util_AttributeSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 27;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_util_AttributeSet);
    options.TypeSize = sizeof(Android_android_util_AttributeSet_type);
    type = (Android_android_util_AttributeSet_type*)uClassType::New("Android.Fallbacks.Android_android_util_AttributeSet", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_android_util_AttributeSet_build;
    type->interface2.fp_getAttributeCount = (void(*)(uObject*, int*))Android_android_util_AttributeSet__getAttributeCount_fn;
    type->interface2.fp_getAttributeName = (void(*)(uObject*, int*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getAttributeName_fn;
    type->interface2.fp_getAttributeValue1 = (void(*)(uObject*, int*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getAttributeValue1_fn;
    type->interface2.fp_getAttributeValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getAttributeValue_fn;
    type->interface2.fp_getPositionDescription = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getPositionDescription_fn;
    type->interface2.fp_getAttributeNameResource = (void(*)(uObject*, int*, int*))Android_android_util_AttributeSet__getAttributeNameResource_fn;
    type->interface2.fp_getAttributeListValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, ::g::Android::Runtime::ObjectArray*, int*, int*))Android_android_util_AttributeSet__getAttributeListValue_fn;
    type->interface2.fp_getAttributeBooleanValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, bool*, bool*))Android_android_util_AttributeSet__getAttributeBooleanValue_fn;
    type->interface2.fp_getAttributeResourceValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*))Android_android_util_AttributeSet__getAttributeResourceValue_fn;
    type->interface2.fp_getAttributeIntValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*))Android_android_util_AttributeSet__getAttributeIntValue_fn;
    type->interface2.fp_getAttributeUnsignedIntValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*))Android_android_util_AttributeSet__getAttributeUnsignedIntValue_fn;
    type->interface2.fp_getAttributeFloatValue = (void(*)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, float*, float*))Android_android_util_AttributeSet__getAttributeFloatValue_fn;
    type->interface2.fp_getAttributeListValue1 = (void(*)(uObject*, int*, ::g::Android::Runtime::ObjectArray*, int*, int*))Android_android_util_AttributeSet__getAttributeListValue1_fn;
    type->interface2.fp_getAttributeBooleanValue1 = (void(*)(uObject*, int*, bool*, bool*))Android_android_util_AttributeSet__getAttributeBooleanValue1_fn;
    type->interface2.fp_getAttributeResourceValue1 = (void(*)(uObject*, int*, int*, int*))Android_android_util_AttributeSet__getAttributeResourceValue1_fn;
    type->interface2.fp_getAttributeIntValue1 = (void(*)(uObject*, int*, int*, int*))Android_android_util_AttributeSet__getAttributeIntValue1_fn;
    type->interface2.fp_getAttributeUnsignedIntValue1 = (void(*)(uObject*, int*, int*, int*))Android_android_util_AttributeSet__getAttributeUnsignedIntValue1_fn;
    type->interface2.fp_getAttributeFloatValue1 = (void(*)(uObject*, int*, float*, float*))Android_android_util_AttributeSet__getAttributeFloatValue1_fn;
    type->interface2.fp_getIdAttribute = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getIdAttribute_fn;
    type->interface2.fp_getClassAttribute = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_android_util_AttributeSet__getClassAttribute_fn;
    type->interface2.fp_getIdAttributeResourceValue = (void(*)(uObject*, int*, int*))Android_android_util_AttributeSet__getIdAttributeResourceValue_fn;
    type->interface2.fp_getStyleAttribute = (void(*)(uObject*, int*))Android_android_util_AttributeSet__getStyleAttribute_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public bool getAttributeBooleanValue(Android.java.lang.String arg0, Android.java.lang.String arg1, bool arg2) :23115
void Android_android_util_AttributeSet__getAttributeBooleanValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, bool* arg2, bool* __retval)
{
    *__retval = __this->getAttributeBooleanValue(arg0, arg1, *arg2);
}

// public bool getAttributeBooleanValue(int arg0, bool arg1) :23145
void Android_android_util_AttributeSet__getAttributeBooleanValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, bool* arg1, bool* __retval)
{
    *__retval = __this->getAttributeBooleanValue1(*arg0, *arg1);
}

// public static extern bool getAttributeBooleanValue_IMPL_20306(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) :23213
void Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20306_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20306(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern bool getAttributeBooleanValue_IMPL_20312(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :23231
void Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20312_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_, bool* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20312(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int getAttributeCount() :23080
void Android_android_util_AttributeSet__getAttributeCount_fn(Android_android_util_AttributeSet* __this, int* __retval)
{
    *__retval = __this->getAttributeCount();
}

// public static extern int getAttributeCount_IMPL_20299(bool arg0, Android.Base.Primitives.ujobject arg1) :23192
void Android_android_util_AttributeSet__getAttributeCount_IMPL_20299_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeCount_IMPL_20299(*arg0_, *arg1_);
}

// public float getAttributeFloatValue(Android.java.lang.String arg0, Android.java.lang.String arg1, float arg2) :23135
void Android_android_util_AttributeSet__getAttributeFloatValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, float* arg2, float* __retval)
{
    *__retval = __this->getAttributeFloatValue(arg0, arg1, *arg2);
}

// public float getAttributeFloatValue(int arg0, float arg1) :23165
void Android_android_util_AttributeSet__getAttributeFloatValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, float* arg1, float* __retval)
{
    *__retval = __this->getAttributeFloatValue1(*arg0, *arg1);
}

// public static extern float getAttributeFloatValue_IMPL_20310(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, float arg4) :23225
void Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20310_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, float* arg4_, float* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20310(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern float getAttributeFloatValue_IMPL_20316(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, float arg3) :23243
void Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20316_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* arg3_, float* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20316(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int getAttributeIntValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) :23125
void Android_android_util_AttributeSet__getAttributeIntValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int* arg2, int* __retval)
{
    *__retval = __this->getAttributeIntValue(arg0, arg1, *arg2);
}

// public int getAttributeIntValue(int arg0, int arg1) :23155
void Android_android_util_AttributeSet__getAttributeIntValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, int* arg1, int* __retval)
{
    *__retval = __this->getAttributeIntValue1(*arg0, *arg1);
}

// public static extern int getAttributeIntValue_IMPL_20308(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :23219
void Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20308_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20308(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern int getAttributeIntValue_IMPL_20314(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :23237
void Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20314_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20314(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int getAttributeListValue(Android.java.lang.String arg0, Android.java.lang.String arg1, Android.Runtime.ObjectArray<Android.java.lang.String> arg2, int arg3) :23110
void Android_android_util_AttributeSet__getAttributeListValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::Runtime::ObjectArray* arg2, int* arg3, int* __retval)
{
    *__retval = __this->getAttributeListValue(arg0, arg1, arg2, *arg3);
}

// public int getAttributeListValue(int arg0, Android.Runtime.ObjectArray<Android.java.lang.String> arg1, int arg2) :23140
void Android_android_util_AttributeSet__getAttributeListValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, ::g::Android::Runtime::ObjectArray* arg1, int* arg2, int* __retval)
{
    *__retval = __this->getAttributeListValue1(*arg0, arg1, *arg2);
}

// public static extern int getAttributeListValue_IMPL_20305(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) :23210
void Android_android_util_AttributeSet__getAttributeListValue_IMPL_20305_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, int* arg5_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeListValue_IMPL_20305(*arg0_, *arg1_, arg2_, arg3_, arg4_, *arg5_);
}

// public static extern int getAttributeListValue_IMPL_20311(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :23228
void Android_android_util_AttributeSet__getAttributeListValue_IMPL_20311_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeListValue_IMPL_20311(*arg0_, *arg1_, *arg2_, arg3_, *arg4_);
}

// public Android.java.lang.String getAttributeName(int arg0) :23085
void Android_android_util_AttributeSet__getAttributeName_fn(Android_android_util_AttributeSet* __this, int* arg0, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getAttributeName(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeName_IMPL_20300(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :23195
void Android_android_util_AttributeSet__getAttributeName_IMPL_20300_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeName_IMPL_20300(*arg0_, *arg1_, *arg2_);
}

// public int getAttributeNameResource(int arg0) :23105
void Android_android_util_AttributeSet__getAttributeNameResource_fn(Android_android_util_AttributeSet* __this, int* arg0, int* __retval)
{
    *__retval = __this->getAttributeNameResource(*arg0);
}

// public static extern int getAttributeNameResource_IMPL_20304(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :23207
void Android_android_util_AttributeSet__getAttributeNameResource_IMPL_20304_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeNameResource_IMPL_20304(*arg0_, *arg1_, *arg2_);
}

// public int getAttributeResourceValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) :23120
void Android_android_util_AttributeSet__getAttributeResourceValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int* arg2, int* __retval)
{
    *__retval = __this->getAttributeResourceValue(arg0, arg1, *arg2);
}

// public int getAttributeResourceValue(int arg0, int arg1) :23150
void Android_android_util_AttributeSet__getAttributeResourceValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, int* arg1, int* __retval)
{
    *__retval = __this->getAttributeResourceValue1(*arg0, *arg1);
}

// public static extern int getAttributeResourceValue_IMPL_20307(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :23216
void Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20307_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20307(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern int getAttributeResourceValue_IMPL_20313(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :23234
void Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20313_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20313(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public int getAttributeUnsignedIntValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) :23130
void Android_android_util_AttributeSet__getAttributeUnsignedIntValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int* arg2, int* __retval)
{
    *__retval = __this->getAttributeUnsignedIntValue(arg0, arg1, *arg2);
}

// public int getAttributeUnsignedIntValue(int arg0, int arg1) :23160
void Android_android_util_AttributeSet__getAttributeUnsignedIntValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, int* arg1, int* __retval)
{
    *__retval = __this->getAttributeUnsignedIntValue1(*arg0, *arg1);
}

// public static extern int getAttributeUnsignedIntValue_IMPL_20309(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :23222
void Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20309_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20309(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static extern int getAttributeUnsignedIntValue_IMPL_20315(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :23240
void Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20315_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20315(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public Android.java.lang.String getAttributeValue(Android.java.lang.String arg0, Android.java.lang.String arg1) :23095
void Android_android_util_AttributeSet__getAttributeValue_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getAttributeValue(arg0, arg1);
}

// public Android.java.lang.String getAttributeValue(int arg0) :23090
void Android_android_util_AttributeSet__getAttributeValue1_fn(Android_android_util_AttributeSet* __this, int* arg0, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getAttributeValue1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeValue_IMPL_20301(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :23198
void Android_android_util_AttributeSet__getAttributeValue_IMPL_20301_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeValue_IMPL_20301(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeValue_IMPL_20302(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :23201
void Android_android_util_AttributeSet__getAttributeValue_IMPL_20302_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getAttributeValue_IMPL_20302(*arg0_, *arg1_, arg2_, arg3_);
}

// public Android.java.lang.String getClassAttribute() :23175
void Android_android_util_AttributeSet__getClassAttribute_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getClassAttribute();
}

// public static extern Android.Base.Wrappers.IJWrapper getClassAttribute_IMPL_20318(bool arg0, Android.Base.Primitives.ujobject arg1) :23249
void Android_android_util_AttributeSet__getClassAttribute_IMPL_20318_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getClassAttribute_IMPL_20318(*arg0_, *arg1_);
}

// public Android.java.lang.String getIdAttribute() :23170
void Android_android_util_AttributeSet__getIdAttribute_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getIdAttribute();
}

// public static extern Android.Base.Wrappers.IJWrapper getIdAttribute_IMPL_20317(bool arg0, Android.Base.Primitives.ujobject arg1) :23246
void Android_android_util_AttributeSet__getIdAttribute_IMPL_20317_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getIdAttribute_IMPL_20317(*arg0_, *arg1_);
}

// public int getIdAttributeResourceValue(int arg0) :23180
void Android_android_util_AttributeSet__getIdAttributeResourceValue_fn(Android_android_util_AttributeSet* __this, int* arg0, int* __retval)
{
    *__retval = __this->getIdAttributeResourceValue(*arg0);
}

// public static extern int getIdAttributeResourceValue_IMPL_20319(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :23252
void Android_android_util_AttributeSet__getIdAttributeResourceValue_IMPL_20319_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getIdAttributeResourceValue_IMPL_20319(*arg0_, *arg1_, *arg2_);
}

// public Android.java.lang.String getPositionDescription() :23100
void Android_android_util_AttributeSet__getPositionDescription_fn(Android_android_util_AttributeSet* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getPositionDescription();
}

// public static extern Android.Base.Wrappers.IJWrapper getPositionDescription_IMPL_20303(bool arg0, Android.Base.Primitives.ujobject arg1) :23204
void Android_android_util_AttributeSet__getPositionDescription_IMPL_20303_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_util_AttributeSet::getPositionDescription_IMPL_20303(*arg0_, *arg1_);
}

// public int getStyleAttribute() :23185
void Android_android_util_AttributeSet__getStyleAttribute_fn(Android_android_util_AttributeSet* __this, int* __retval)
{
    *__retval = __this->getStyleAttribute();
}

// public static extern int getStyleAttribute_IMPL_20320(bool arg0, Android.Base.Primitives.ujobject arg1) :23255
void Android_android_util_AttributeSet__getStyleAttribute_IMPL_20320_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_util_AttributeSet::getStyleAttribute_IMPL_20320(*arg0_, *arg1_);
}

jmethodID Android_android_util_AttributeSet::getAttributeBooleanValue_20306_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeBooleanValue_20312_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeCount_20299_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeFloatValue_20310_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeFloatValue_20316_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeIntValue_20308_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeIntValue_20314_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeListValue_20305_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeListValue_20311_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeName_20300_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeNameResource_20304_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeResourceValue_20307_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeResourceValue_20313_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20309_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20315_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeValue_20301_ID_;
jmethodID Android_android_util_AttributeSet::getAttributeValue_20302_ID_;
jmethodID Android_android_util_AttributeSet::getClassAttribute_20318_ID_;
jmethodID Android_android_util_AttributeSet::getIdAttribute_20317_ID_;
jmethodID Android_android_util_AttributeSet::getIdAttributeResourceValue_20319_ID_;
jmethodID Android_android_util_AttributeSet::getPositionDescription_20303_ID_;
jmethodID Android_android_util_AttributeSet::getStyleAttribute_20320_ID_;

// public bool getAttributeBooleanValue(Android.java.lang.String arg0, Android.java.lang.String arg1, bool arg2) [instance] :23115
bool Android_android_util_AttributeSet::getAttributeBooleanValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, bool arg2)
{
    return Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20306(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public bool getAttributeBooleanValue(int arg0, bool arg1) [instance] :23145
bool Android_android_util_AttributeSet::getAttributeBooleanValue1(int arg0, bool arg1)
{
    return Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20312(_subclassed, _javaObject, arg0, arg1);
}

// public int getAttributeCount() [instance] :23080
int Android_android_util_AttributeSet::getAttributeCount()
{
    return Android_android_util_AttributeSet::getAttributeCount_IMPL_20299(_subclassed, _javaObject);
}

// public float getAttributeFloatValue(Android.java.lang.String arg0, Android.java.lang.String arg1, float arg2) [instance] :23135
float Android_android_util_AttributeSet::getAttributeFloatValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, float arg2)
{
    return Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20310(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public float getAttributeFloatValue(int arg0, float arg1) [instance] :23165
float Android_android_util_AttributeSet::getAttributeFloatValue1(int arg0, float arg1)
{
    return Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20316(_subclassed, _javaObject, arg0, arg1);
}

// public int getAttributeIntValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) [instance] :23125
int Android_android_util_AttributeSet::getAttributeIntValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20308(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public int getAttributeIntValue(int arg0, int arg1) [instance] :23155
int Android_android_util_AttributeSet::getAttributeIntValue1(int arg0, int arg1)
{
    return Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20314(_subclassed, _javaObject, arg0, arg1);
}

// public int getAttributeListValue(Android.java.lang.String arg0, Android.java.lang.String arg1, Android.Runtime.ObjectArray<Android.java.lang.String> arg2, int arg3) [instance] :23110
int Android_android_util_AttributeSet::getAttributeListValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::Runtime::ObjectArray* arg2, int arg3)
{
    return Android_android_util_AttributeSet::getAttributeListValue_IMPL_20305(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, arg3);
}

// public int getAttributeListValue(int arg0, Android.Runtime.ObjectArray<Android.java.lang.String> arg1, int arg2) [instance] :23140
int Android_android_util_AttributeSet::getAttributeListValue1(int arg0, ::g::Android::Runtime::ObjectArray* arg1, int arg2)
{
    return Android_android_util_AttributeSet::getAttributeListValue_IMPL_20311(_subclassed, _javaObject, arg0, (uObject*)arg1, arg2);
}

// public Android.java.lang.String getAttributeName(int arg0) [instance] :23085
::g::Android::java::lang::String* Android_android_util_AttributeSet::getAttributeName(int arg0)
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getAttributeName_IMPL_20300(_subclassed, _javaObject, arg0), ::TYPES[1/*Android.java.lang.String*/]);
}

// public int getAttributeNameResource(int arg0) [instance] :23105
int Android_android_util_AttributeSet::getAttributeNameResource(int arg0)
{
    return Android_android_util_AttributeSet::getAttributeNameResource_IMPL_20304(_subclassed, _javaObject, arg0);
}

// public int getAttributeResourceValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) [instance] :23120
int Android_android_util_AttributeSet::getAttributeResourceValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20307(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public int getAttributeResourceValue(int arg0, int arg1) [instance] :23150
int Android_android_util_AttributeSet::getAttributeResourceValue1(int arg0, int arg1)
{
    return Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20313(_subclassed, _javaObject, arg0, arg1);
}

// public int getAttributeUnsignedIntValue(Android.java.lang.String arg0, Android.java.lang.String arg1, int arg2) [instance] :23130
int Android_android_util_AttributeSet::getAttributeUnsignedIntValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20309(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2);
}

// public int getAttributeUnsignedIntValue(int arg0, int arg1) [instance] :23160
int Android_android_util_AttributeSet::getAttributeUnsignedIntValue1(int arg0, int arg1)
{
    return Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20315(_subclassed, _javaObject, arg0, arg1);
}

// public Android.java.lang.String getAttributeValue(Android.java.lang.String arg0, Android.java.lang.String arg1) [instance] :23095
::g::Android::java::lang::String* Android_android_util_AttributeSet::getAttributeValue(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1)
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getAttributeValue_IMPL_20302(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1), ::TYPES[1/*Android.java.lang.String*/]);
}

// public Android.java.lang.String getAttributeValue(int arg0) [instance] :23090
::g::Android::java::lang::String* Android_android_util_AttributeSet::getAttributeValue1(int arg0)
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getAttributeValue_IMPL_20301(_subclassed, _javaObject, arg0), ::TYPES[1/*Android.java.lang.String*/]);
}

// public Android.java.lang.String getClassAttribute() [instance] :23175
::g::Android::java::lang::String* Android_android_util_AttributeSet::getClassAttribute()
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getClassAttribute_IMPL_20318(_subclassed, _javaObject), ::TYPES[1/*Android.java.lang.String*/]);
}

// public Android.java.lang.String getIdAttribute() [instance] :23170
::g::Android::java::lang::String* Android_android_util_AttributeSet::getIdAttribute()
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getIdAttribute_IMPL_20317(_subclassed, _javaObject), ::TYPES[1/*Android.java.lang.String*/]);
}

// public int getIdAttributeResourceValue(int arg0) [instance] :23180
int Android_android_util_AttributeSet::getIdAttributeResourceValue(int arg0)
{
    return Android_android_util_AttributeSet::getIdAttributeResourceValue_IMPL_20319(_subclassed, _javaObject, arg0);
}

// public Android.java.lang.String getPositionDescription() [instance] :23100
::g::Android::java::lang::String* Android_android_util_AttributeSet::getPositionDescription()
{
    return uCast< ::g::Android::java::lang::String*>(Android_android_util_AttributeSet::getPositionDescription_IMPL_20303(_subclassed, _javaObject), ::TYPES[1/*Android.java.lang.String*/]);
}

// public int getStyleAttribute() [instance] :23185
int Android_android_util_AttributeSet::getStyleAttribute()
{
    return Android_android_util_AttributeSet::getStyleAttribute_IMPL_20320(_subclassed, _javaObject);
}

// public static extern bool getAttributeBooleanValue_IMPL_20306(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) [static] :23213
bool Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20306(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeBooleanValue_20306_ID(),"android/util/AttributeSet","getAttributeBooleanValue","(Ljava/lang/String;Ljava/lang/String;Z)Z",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeBooleanValue could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_util_AttributeSet::getAttributeBooleanValue_20306_ID(), _obArg2, _obArg3, ((jboolean)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool getAttributeBooleanValue_IMPL_20312(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :23231
bool Android_android_util_AttributeSet::getAttributeBooleanValue_IMPL_20312(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeBooleanValue_20312_ID(),"android/util/AttributeSet","getAttributeBooleanValue","(IZ)Z",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeBooleanValue could not be cached",93);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_util_AttributeSet::getAttributeBooleanValue_20312_ID(), ((jint)arg2_), ((jboolean)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeCount_IMPL_20299(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23192
int Android_android_util_AttributeSet::getAttributeCount_IMPL_20299(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeCount_20299_ID(),"android/util/AttributeSet","getAttributeCount","()I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeCount could not be cached",86);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeCount_20299_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getAttributeFloatValue_IMPL_20310(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, float arg4) [static] :23225
float Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20310(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, float arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeFloatValue_20310_ID(),"android/util/AttributeSet","getAttributeFloatValue","(Ljava/lang/String;Ljava/lang/String;F)F",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeFloatValue could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, Android_android_util_AttributeSet::getAttributeFloatValue_20310_ID(), _obArg2, _obArg3, ((jfloat)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getAttributeFloatValue_IMPL_20316(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, float arg3) [static] :23243
float Android_android_util_AttributeSet::getAttributeFloatValue_IMPL_20316(bool arg0_, jobject arg1_, int arg2_, float arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeFloatValue_20316_ID(),"android/util/AttributeSet","getAttributeFloatValue","(IF)F",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeFloatValue could not be cached",91);
    
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, Android_android_util_AttributeSet::getAttributeFloatValue_20316_ID(), ((jint)arg2_), ((jfloat)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeIntValue_IMPL_20308(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :23219
int Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20308(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeIntValue_20308_ID(),"android/util/AttributeSet","getAttributeIntValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeIntValue could not be cached",89);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeIntValue_20308_ID(), _obArg2, _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeIntValue_IMPL_20314(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :23237
int Android_android_util_AttributeSet::getAttributeIntValue_IMPL_20314(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeIntValue_20314_ID(),"android/util/AttributeSet","getAttributeIntValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeIntValue could not be cached",89);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeIntValue_20314_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeListValue_IMPL_20305(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, int arg5) [static] :23210
int Android_android_util_AttributeSet::getAttributeListValue_IMPL_20305(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeListValue_20305_ID(),"android/util/AttributeSet","getAttributeListValue","(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeListValue could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeListValue_20305_ID(), _obArg2, _obArg3, _obArg4, ((jint)arg5_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeListValue_IMPL_20311(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :23228
int Android_android_util_AttributeSet::getAttributeListValue_IMPL_20311(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeListValue_20311_ID(),"android/util/AttributeSet","getAttributeListValue","(I[Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeListValue could not be cached",90);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeListValue_20311_ID(), ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeName_IMPL_20300(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :23195
uObject* Android_android_util_AttributeSet::getAttributeName_IMPL_20300(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeName_20300_ID(),"android/util/AttributeSet","getAttributeName","(I)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeName could not be cached",85);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getAttributeName_20300_ID(), ((jint)arg2_)),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeNameResource_IMPL_20304(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :23207
int Android_android_util_AttributeSet::getAttributeNameResource_IMPL_20304(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeNameResource_20304_ID(),"android/util/AttributeSet","getAttributeNameResource","(I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeNameResource could not be cached",93);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeNameResource_20304_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeResourceValue_IMPL_20307(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :23216
int Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20307(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeResourceValue_20307_ID(),"android/util/AttributeSet","getAttributeResourceValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeResourceValue could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeResourceValue_20307_ID(), _obArg2, _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeResourceValue_IMPL_20313(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :23234
int Android_android_util_AttributeSet::getAttributeResourceValue_IMPL_20313(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeResourceValue_20313_ID(),"android/util/AttributeSet","getAttributeResourceValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeResourceValue could not be cached",94);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeResourceValue_20313_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeUnsignedIntValue_IMPL_20309(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :23222
int Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20309(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20309_ID(),"android/util/AttributeSet","getAttributeUnsignedIntValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeUnsignedIntValue could not be cached",97);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20309_ID(), _obArg2, _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getAttributeUnsignedIntValue_IMPL_20315(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :23240
int Android_android_util_AttributeSet::getAttributeUnsignedIntValue_IMPL_20315(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20315_ID(),"android/util/AttributeSet","getAttributeUnsignedIntValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeUnsignedIntValue could not be cached",97);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getAttributeUnsignedIntValue_20315_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeValue_IMPL_20301(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :23198
uObject* Android_android_util_AttributeSet::getAttributeValue_IMPL_20301(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeValue_20301_ID(),"android/util/AttributeSet","getAttributeValue","(I)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeValue could not be cached",86);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getAttributeValue_20301_ID(), ((jint)arg2_)),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getAttributeValue_IMPL_20302(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :23201
uObject* Android_android_util_AttributeSet::getAttributeValue_IMPL_20302(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getAttributeValue_20302_ID(),"android/util/AttributeSet","getAttributeValue","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeValue could not be cached",86);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getAttributeValue_20302_ID(), _obArg2, _obArg3),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getClassAttribute_IMPL_20318(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23249
uObject* Android_android_util_AttributeSet::getClassAttribute_IMPL_20318(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getClassAttribute_20318_ID(),"android/util/AttributeSet","getClassAttribute","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getClassAttribute could not be cached",86);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getClassAttribute_20318_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getIdAttribute_IMPL_20317(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23246
uObject* Android_android_util_AttributeSet::getIdAttribute_IMPL_20317(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getIdAttribute_20317_ID(),"android/util/AttributeSet","getIdAttribute","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getIdAttribute could not be cached",83);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getIdAttribute_20317_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getIdAttributeResourceValue_IMPL_20319(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :23252
int Android_android_util_AttributeSet::getIdAttributeResourceValue_IMPL_20319(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getIdAttributeResourceValue_20319_ID(),"android/util/AttributeSet","getIdAttributeResourceValue","(I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getIdAttributeResourceValue could not be cached",96);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getIdAttributeResourceValue_20319_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getPositionDescription_IMPL_20303(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23204
uObject* Android_android_util_AttributeSet::getPositionDescription_IMPL_20303(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getPositionDescription_20303_ID(),"android/util/AttributeSet","getPositionDescription","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getPositionDescription could not be cached",91);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_util_AttributeSet::getPositionDescription_20303_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getStyleAttribute_IMPL_20320(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :23255
int Android_android_util_AttributeSet::getStyleAttribute_IMPL_20320(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_util_AttributeSet::getStyleAttribute_20320_ID(),"android/util/AttributeSet","getStyleAttribute","()I",GetMethodID,"Id for fallback method android.util.AttributeSet.getStyleAttribute could not be cached",86);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_util_AttributeSet::getStyleAttribute_20320_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_view_ActionMode :1137
// {
static void Android_android_view_ActionMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* Android_android_view_ActionMode_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_view_ActionMode);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_view_ActionMode", options);
    type->SetBase(::g::Android::android::view::ActionMode_typeof());
    type->fp_build_ = Android_android_view_ActionMode_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_view_ActionProvider :1251
// {
static void Android_android_view_ActionProvider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* Android_android_view_ActionProvider_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Android_android_view_ActionProvider);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.Fallbacks.Android_android_view_ActionProvider", options);
    type->SetBase(::g::Android::android::view::ActionProvider_typeof());
    type->fp_build_ = Android_android_view_ActionProvider_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_view_ContextMenuDLRContextMenuInfo :18697
// {
static void Android_android_view_ContextMenuDLRContextMenuInfo_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo_type, interface1),
        ::g::Android::android::view::ContextMenuDLRContextMenuInfo_typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo_type, interface2));
    type->SetFields(5);
}

Android_android_view_ContextMenuDLRContextMenuInfo_type* Android_android_view_ContextMenuDLRContextMenuInfo_typeof()
{
    static uSStrong<Android_android_view_ContextMenuDLRContextMenuInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_ContextMenuDLRContextMenuInfo);
    options.TypeSize = sizeof(Android_android_view_ContextMenuDLRContextMenuInfo_type);
    type = (Android_android_view_ContextMenuDLRContextMenuInfo_type*)uClassType::New("Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_android_view_ContextMenuDLRContextMenuInfo_build;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_view_Menu :19251
// {
static void Android_android_view_Menu_build(uType* type)
{
    ::TYPES[2] = ::g::Android::android::view::MenuItem_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[3] = ::g::Android::android::view::SubMenu_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_Menu_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_Menu_type, interface1),
        ::g::Android::android::view::Menu_typeof(), offsetof(Android_android_view_Menu_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::add_22256_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::add_22257_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::add_22258_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::add_22259_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addIntentOptions_22264_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addSubMenu_22260_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addSubMenu_22261_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addSubMenu_22262_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::addSubMenu_22263_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::clear_22267_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::close_22275_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::findItem_22272_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::getItem_22274_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::hasVisibleItems_22271_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::isShortcutKey_22277_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::performIdentifierAction_22278_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::performShortcut_22276_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::removeGroup_22266_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::removeItem_22265_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::setGroupCheckable_22268_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::setGroupEnabled_22270_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::setGroupVisible_22269_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::setQwertyMode_22279_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_Menu::size_22273_ID_, uFieldFlagsStatic);
}

Android_android_view_Menu_type* Android_android_view_Menu_typeof()
{
    static uSStrong<Android_android_view_Menu_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 29;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_Menu);
    options.TypeSize = sizeof(Android_android_view_Menu_type);
    type = (Android_android_view_Menu_type*)uClassType::New("Android.Fallbacks.Android_android_view_Menu", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_android_view_Menu_build;
    type->interface2.fp_add = (void(*)(uObject*, uObject*, uObject**))Android_android_view_Menu__add_fn;
    type->interface2.fp_add1 = (void(*)(uObject*, int*, uObject**))Android_android_view_Menu__add1_fn;
    type->interface2.fp_add2 = (void(*)(uObject*, int*, int*, int*, uObject*, uObject**))Android_android_view_Menu__add2_fn;
    type->interface2.fp_add3 = (void(*)(uObject*, int*, int*, int*, int*, uObject**))Android_android_view_Menu__add3_fn;
    type->interface2.fp_addSubMenu = (void(*)(uObject*, uObject*, uObject**))Android_android_view_Menu__addSubMenu_fn;
    type->interface2.fp_addSubMenu1 = (void(*)(uObject*, int*, uObject**))Android_android_view_Menu__addSubMenu1_fn;
    type->interface2.fp_addSubMenu2 = (void(*)(uObject*, int*, int*, int*, uObject*, uObject**))Android_android_view_Menu__addSubMenu2_fn;
    type->interface2.fp_addSubMenu3 = (void(*)(uObject*, int*, int*, int*, int*, uObject**))Android_android_view_Menu__addSubMenu3_fn;
    type->interface2.fp_addIntentOptions = (void(*)(uObject*, int*, int*, int*, ::g::Android::android::content::ComponentName*, ::g::Android::Runtime::ObjectArray*, ::g::Android::android::content::Intent*, int*, ::g::Android::Runtime::ObjectArray*, int*))Android_android_view_Menu__addIntentOptions_fn;
    type->interface2.fp_removeItem = (void(*)(uObject*, int*))Android_android_view_Menu__removeItem_fn;
    type->interface2.fp_removeGroup = (void(*)(uObject*, int*))Android_android_view_Menu__removeGroup_fn;
    type->interface2.fp_clear = (void(*)(uObject*))Android_android_view_Menu__clear_fn;
    type->interface2.fp_setGroupCheckable = (void(*)(uObject*, int*, bool*, bool*))Android_android_view_Menu__setGroupCheckable_fn;
    type->interface2.fp_setGroupVisible = (void(*)(uObject*, int*, bool*))Android_android_view_Menu__setGroupVisible_fn;
    type->interface2.fp_setGroupEnabled = (void(*)(uObject*, int*, bool*))Android_android_view_Menu__setGroupEnabled_fn;
    type->interface2.fp_hasVisibleItems = (void(*)(uObject*, bool*))Android_android_view_Menu__hasVisibleItems_fn;
    type->interface2.fp_findItem = (void(*)(uObject*, int*, uObject**))Android_android_view_Menu__findItem_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))Android_android_view_Menu__size_fn;
    type->interface2.fp_getItem = (void(*)(uObject*, int*, uObject**))Android_android_view_Menu__getItem_fn;
    type->interface2.fp_close = (void(*)(uObject*))Android_android_view_Menu__close_fn;
    type->interface2.fp_performShortcut = (void(*)(uObject*, int*, ::g::Android::android::view::KeyEvent*, int*, bool*))Android_android_view_Menu__performShortcut_fn;
    type->interface2.fp_isShortcutKey = (void(*)(uObject*, int*, ::g::Android::android::view::KeyEvent*, bool*))Android_android_view_Menu__isShortcutKey_fn;
    type->interface2.fp_performIdentifierAction = (void(*)(uObject*, int*, int*, bool*))Android_android_view_Menu__performIdentifierAction_fn;
    type->interface2.fp_setQwertyMode = (void(*)(uObject*, bool*))Android_android_view_Menu__setQwertyMode_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public Android.android.view.MenuItem add(Android.java.lang.CharSequence arg0) :19254
void Android_android_view_Menu__add_fn(Android_android_view_Menu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->add(arg0);
}

// public Android.android.view.MenuItem add(int arg0) :19259
void Android_android_view_Menu__add1_fn(Android_android_view_Menu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->add1(*arg0);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) :19264
void Android_android_view_Menu__add2_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval)
{
    *__retval = __this->add2(*arg0, *arg1, *arg2, arg3);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, int arg3) :19269
void Android_android_view_Menu__add3_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->add3(*arg0, *arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22256(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19376
void Android_android_view_Menu__add_IMPL_22256_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::add_IMPL_22256(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22257(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19379
void Android_android_view_Menu__add_IMPL_22257_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::add_IMPL_22257(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22258(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :19382
void Android_android_view_Menu__add_IMPL_22258_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::add_IMPL_22258(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22259(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :19385
void Android_android_view_Menu__add_IMPL_22259_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::add_IMPL_22259(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public int addIntentOptions(int arg0, int arg1, int arg2, Android.android.content.ComponentName arg3, Android.Runtime.ObjectArray<Android.android.content.Intent> arg4, Android.android.content.Intent arg5, int arg6, Android.Runtime.ObjectArray<Android.android.view.MenuItem> arg7) :19294
void Android_android_view_Menu__addIntentOptions_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int* arg6, ::g::Android::Runtime::ObjectArray* arg7, int* __retval)
{
    *__retval = __this->addIntentOptions(*arg0, *arg1, *arg2, arg3, arg4, arg5, *arg6, arg7);
}

// public static extern int addIntentOptions_IMPL_22264(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6, Android.Base.Wrappers.IJWrapper arg7, int arg8, Android.Base.Wrappers.IJWrapper arg9) :19400
void Android_android_view_Menu__addIntentOptions_IMPL_22264_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int* arg8_, uObject* arg9_, int* __retval)
{
    *__retval = Android_android_view_Menu::addIntentOptions_IMPL_22264(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_, arg6_, arg7_, *arg8_, arg9_);
}

// public Android.android.view.SubMenu addSubMenu(Android.java.lang.CharSequence arg0) :19274
void Android_android_view_Menu__addSubMenu_fn(Android_android_view_Menu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->addSubMenu(arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0) :19279
void Android_android_view_Menu__addSubMenu1_fn(Android_android_view_Menu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->addSubMenu1(*arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) :19284
void Android_android_view_Menu__addSubMenu2_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval)
{
    *__retval = __this->addSubMenu2(*arg0, *arg1, *arg2, arg3);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, int arg3) :19289
void Android_android_view_Menu__addSubMenu3_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->addSubMenu3(*arg0, *arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22260(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19388
void Android_android_view_Menu__addSubMenu_IMPL_22260_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::addSubMenu_IMPL_22260(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22261(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19391
void Android_android_view_Menu__addSubMenu_IMPL_22261_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::addSubMenu_IMPL_22261(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22262(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :19394
void Android_android_view_Menu__addSubMenu_IMPL_22262_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::addSubMenu_IMPL_22262(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22263(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :19397
void Android_android_view_Menu__addSubMenu_IMPL_22263_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::addSubMenu_IMPL_22263(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public void clear() :19309
void Android_android_view_Menu__clear_fn(Android_android_view_Menu* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_22267(bool arg0, Android.Base.Primitives.ujobject arg1) :19409
void Android_android_view_Menu__clear_IMPL_22267_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_Menu::clear_IMPL_22267(*arg0_, *arg1_);
}

// public void close() :19349
void Android_android_view_Menu__close_fn(Android_android_view_Menu* __this)
{
    __this->close();
}

// public static extern void close_IMPL_22275(bool arg0, Android.Base.Primitives.ujobject arg1) :19433
void Android_android_view_Menu__close_IMPL_22275_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_Menu::close_IMPL_22275(*arg0_, *arg1_);
}

// public Android.android.view.MenuItem findItem(int arg0) :19334
void Android_android_view_Menu__findItem_fn(Android_android_view_Menu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->findItem(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper findItem_IMPL_22272(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19424
void Android_android_view_Menu__findItem_IMPL_22272_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::findItem_IMPL_22272(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem getItem(int arg0) :19344
void Android_android_view_Menu__getItem_fn(Android_android_view_Menu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->getItem(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22274(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19430
void Android_android_view_Menu__getItem_IMPL_22274_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_Menu::getItem_IMPL_22274(*arg0_, *arg1_, *arg2_);
}

// public bool hasVisibleItems() :19329
void Android_android_view_Menu__hasVisibleItems_fn(Android_android_view_Menu* __this, bool* __retval)
{
    *__retval = __this->hasVisibleItems();
}

// public static extern bool hasVisibleItems_IMPL_22271(bool arg0, Android.Base.Primitives.ujobject arg1) :19421
void Android_android_view_Menu__hasVisibleItems_IMPL_22271_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_Menu::hasVisibleItems_IMPL_22271(*arg0_, *arg1_);
}

// public bool isShortcutKey(int arg0, Android.android.view.KeyEvent arg1) :19359
void Android_android_view_Menu__isShortcutKey_fn(Android_android_view_Menu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    *__retval = __this->isShortcutKey(*arg0, arg1);
}

// public static extern bool isShortcutKey_IMPL_22277(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :19439
void Android_android_view_Menu__isShortcutKey_IMPL_22277_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = Android_android_view_Menu::isShortcutKey_IMPL_22277(*arg0_, *arg1_, *arg2_, arg3_);
}

// public bool performIdentifierAction(int arg0, int arg1) :19364
void Android_android_view_Menu__performIdentifierAction_fn(Android_android_view_Menu* __this, int* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->performIdentifierAction(*arg0, *arg1);
}

// public static extern bool performIdentifierAction_IMPL_22278(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :19442
void Android_android_view_Menu__performIdentifierAction_IMPL_22278_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval)
{
    *__retval = Android_android_view_Menu::performIdentifierAction_IMPL_22278(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public bool performShortcut(int arg0, Android.android.view.KeyEvent arg1, int arg2) :19354
void Android_android_view_Menu__performShortcut_fn(Android_android_view_Menu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, int* arg2, bool* __retval)
{
    *__retval = __this->performShortcut(*arg0, arg1, *arg2);
}

// public static extern bool performShortcut_IMPL_22276(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :19436
void Android_android_view_Menu__performShortcut_IMPL_22276_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, bool* __retval)
{
    *__retval = Android_android_view_Menu::performShortcut_IMPL_22276(*arg0_, *arg1_, *arg2_, arg3_, *arg4_);
}

// public void removeGroup(int arg0) :19304
void Android_android_view_Menu__removeGroup_fn(Android_android_view_Menu* __this, int* arg0)
{
    __this->removeGroup(*arg0);
}

// public static extern void removeGroup_IMPL_22266(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19406
void Android_android_view_Menu__removeGroup_IMPL_22266_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_Menu::removeGroup_IMPL_22266(*arg0_, *arg1_, *arg2_);
}

// public void removeItem(int arg0) :19299
void Android_android_view_Menu__removeItem_fn(Android_android_view_Menu* __this, int* arg0)
{
    __this->removeItem(*arg0);
}

// public static extern void removeItem_IMPL_22265(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19403
void Android_android_view_Menu__removeItem_IMPL_22265_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_Menu::removeItem_IMPL_22265(*arg0_, *arg1_, *arg2_);
}

// public void setGroupCheckable(int arg0, bool arg1, bool arg2) :19314
void Android_android_view_Menu__setGroupCheckable_fn(Android_android_view_Menu* __this, int* arg0, bool* arg1, bool* arg2)
{
    __this->setGroupCheckable(*arg0, *arg1, *arg2);
}

// public static extern void setGroupCheckable_IMPL_22268(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3, bool arg4) :19412
void Android_android_view_Menu__setGroupCheckable_IMPL_22268_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_, bool* arg4_)
{
    Android_android_view_Menu::setGroupCheckable_IMPL_22268(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_);
}

// public void setGroupEnabled(int arg0, bool arg1) :19324
void Android_android_view_Menu__setGroupEnabled_fn(Android_android_view_Menu* __this, int* arg0, bool* arg1)
{
    __this->setGroupEnabled(*arg0, *arg1);
}

// public static extern void setGroupEnabled_IMPL_22270(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :19418
void Android_android_view_Menu__setGroupEnabled_IMPL_22270_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_)
{
    Android_android_view_Menu::setGroupEnabled_IMPL_22270(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setGroupVisible(int arg0, bool arg1) :19319
void Android_android_view_Menu__setGroupVisible_fn(Android_android_view_Menu* __this, int* arg0, bool* arg1)
{
    __this->setGroupVisible(*arg0, *arg1);
}

// public static extern void setGroupVisible_IMPL_22269(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :19415
void Android_android_view_Menu__setGroupVisible_IMPL_22269_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_)
{
    Android_android_view_Menu::setGroupVisible_IMPL_22269(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setQwertyMode(bool arg0) :19369
void Android_android_view_Menu__setQwertyMode_fn(Android_android_view_Menu* __this, bool* arg0)
{
    __this->setQwertyMode(*arg0);
}

// public static extern void setQwertyMode_IMPL_22279(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19445
void Android_android_view_Menu__setQwertyMode_IMPL_22279_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    Android_android_view_Menu::setQwertyMode_IMPL_22279(*arg0_, *arg1_, *arg2_);
}

// public int size() :19339
void Android_android_view_Menu__size_fn(Android_android_view_Menu* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_22273(bool arg0, Android.Base.Primitives.ujobject arg1) :19427
void Android_android_view_Menu__size_IMPL_22273_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_Menu::size_IMPL_22273(*arg0_, *arg1_);
}

jmethodID Android_android_view_Menu::add_22256_ID_;
jmethodID Android_android_view_Menu::add_22257_ID_;
jmethodID Android_android_view_Menu::add_22258_ID_;
jmethodID Android_android_view_Menu::add_22259_ID_;
jmethodID Android_android_view_Menu::addIntentOptions_22264_ID_;
jmethodID Android_android_view_Menu::addSubMenu_22260_ID_;
jmethodID Android_android_view_Menu::addSubMenu_22261_ID_;
jmethodID Android_android_view_Menu::addSubMenu_22262_ID_;
jmethodID Android_android_view_Menu::addSubMenu_22263_ID_;
jmethodID Android_android_view_Menu::clear_22267_ID_;
jmethodID Android_android_view_Menu::close_22275_ID_;
jmethodID Android_android_view_Menu::findItem_22272_ID_;
jmethodID Android_android_view_Menu::getItem_22274_ID_;
jmethodID Android_android_view_Menu::hasVisibleItems_22271_ID_;
jmethodID Android_android_view_Menu::isShortcutKey_22277_ID_;
jmethodID Android_android_view_Menu::performIdentifierAction_22278_ID_;
jmethodID Android_android_view_Menu::performShortcut_22276_ID_;
jmethodID Android_android_view_Menu::removeGroup_22266_ID_;
jmethodID Android_android_view_Menu::removeItem_22265_ID_;
jmethodID Android_android_view_Menu::setGroupCheckable_22268_ID_;
jmethodID Android_android_view_Menu::setGroupEnabled_22270_ID_;
jmethodID Android_android_view_Menu::setGroupVisible_22269_ID_;
jmethodID Android_android_view_Menu::setQwertyMode_22279_ID_;
jmethodID Android_android_view_Menu::size_22273_ID_;

// public Android.android.view.MenuItem add(Android.java.lang.CharSequence arg0) [instance] :19254
uObject* Android_android_view_Menu::add(uObject* arg0)
{
    return Android_android_view_Menu::add_IMPL_22256(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem add(int arg0) [instance] :19259
uObject* Android_android_view_Menu::add1(int arg0)
{
    return Android_android_view_Menu::add_IMPL_22257(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) [instance] :19264
uObject* Android_android_view_Menu::add2(int arg0, int arg1, int arg2, uObject* arg3)
{
    return Android_android_view_Menu::add_IMPL_22258(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, int arg3) [instance] :19269
uObject* Android_android_view_Menu::add3(int arg0, int arg1, int arg2, int arg3)
{
    return Android_android_view_Menu::add_IMPL_22259(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public int addIntentOptions(int arg0, int arg1, int arg2, Android.android.content.ComponentName arg3, Android.Runtime.ObjectArray<Android.android.content.Intent> arg4, Android.android.content.Intent arg5, int arg6, Android.Runtime.ObjectArray<Android.android.view.MenuItem> arg7) [instance] :19294
int Android_android_view_Menu::addIntentOptions(int arg0, int arg1, int arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int arg6, ::g::Android::Runtime::ObjectArray* arg7)
{
    return Android_android_view_Menu::addIntentOptions_IMPL_22264(_subclassed, _javaObject, arg0, arg1, arg2, (uObject*)arg3, (uObject*)arg4, (uObject*)arg5, arg6, (uObject*)arg7);
}

// public Android.android.view.SubMenu addSubMenu(Android.java.lang.CharSequence arg0) [instance] :19274
uObject* Android_android_view_Menu::addSubMenu(uObject* arg0)
{
    return Android_android_view_Menu::addSubMenu_IMPL_22260(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0) [instance] :19279
uObject* Android_android_view_Menu::addSubMenu1(int arg0)
{
    return Android_android_view_Menu::addSubMenu_IMPL_22261(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) [instance] :19284
uObject* Android_android_view_Menu::addSubMenu2(int arg0, int arg1, int arg2, uObject* arg3)
{
    return Android_android_view_Menu::addSubMenu_IMPL_22262(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, int arg3) [instance] :19289
uObject* Android_android_view_Menu::addSubMenu3(int arg0, int arg1, int arg2, int arg3)
{
    return Android_android_view_Menu::addSubMenu_IMPL_22263(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public void clear() [instance] :19309
void Android_android_view_Menu::clear()
{
    Android_android_view_Menu::clear_IMPL_22267(_subclassed, _javaObject);
}

// public void close() [instance] :19349
void Android_android_view_Menu::close()
{
    Android_android_view_Menu::close_IMPL_22275(_subclassed, _javaObject);
}

// public Android.android.view.MenuItem findItem(int arg0) [instance] :19334
uObject* Android_android_view_Menu::findItem(int arg0)
{
    return Android_android_view_Menu::findItem_IMPL_22272(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem getItem(int arg0) [instance] :19344
uObject* Android_android_view_Menu::getItem(int arg0)
{
    return Android_android_view_Menu::getItem_IMPL_22274(_subclassed, _javaObject, arg0);
}

// public bool hasVisibleItems() [instance] :19329
bool Android_android_view_Menu::hasVisibleItems()
{
    return Android_android_view_Menu::hasVisibleItems_IMPL_22271(_subclassed, _javaObject);
}

// public bool isShortcutKey(int arg0, Android.android.view.KeyEvent arg1) [instance] :19359
bool Android_android_view_Menu::isShortcutKey(int arg0, ::g::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_Menu::isShortcutKey_IMPL_22277(_subclassed, _javaObject, arg0, (uObject*)arg1);
}

// public bool performIdentifierAction(int arg0, int arg1) [instance] :19364
bool Android_android_view_Menu::performIdentifierAction(int arg0, int arg1)
{
    return Android_android_view_Menu::performIdentifierAction_IMPL_22278(_subclassed, _javaObject, arg0, arg1);
}

// public bool performShortcut(int arg0, Android.android.view.KeyEvent arg1, int arg2) [instance] :19354
bool Android_android_view_Menu::performShortcut(int arg0, ::g::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_Menu::performShortcut_IMPL_22276(_subclassed, _javaObject, arg0, (uObject*)arg1, arg2);
}

// public void removeGroup(int arg0) [instance] :19304
void Android_android_view_Menu::removeGroup(int arg0)
{
    Android_android_view_Menu::removeGroup_IMPL_22266(_subclassed, _javaObject, arg0);
}

// public void removeItem(int arg0) [instance] :19299
void Android_android_view_Menu::removeItem(int arg0)
{
    Android_android_view_Menu::removeItem_IMPL_22265(_subclassed, _javaObject, arg0);
}

// public void setGroupCheckable(int arg0, bool arg1, bool arg2) [instance] :19314
void Android_android_view_Menu::setGroupCheckable(int arg0, bool arg1, bool arg2)
{
    Android_android_view_Menu::setGroupCheckable_IMPL_22268(_subclassed, _javaObject, arg0, arg1, arg2);
}

// public void setGroupEnabled(int arg0, bool arg1) [instance] :19324
void Android_android_view_Menu::setGroupEnabled(int arg0, bool arg1)
{
    Android_android_view_Menu::setGroupEnabled_IMPL_22270(_subclassed, _javaObject, arg0, arg1);
}

// public void setGroupVisible(int arg0, bool arg1) [instance] :19319
void Android_android_view_Menu::setGroupVisible(int arg0, bool arg1)
{
    Android_android_view_Menu::setGroupVisible_IMPL_22269(_subclassed, _javaObject, arg0, arg1);
}

// public void setQwertyMode(bool arg0) [instance] :19369
void Android_android_view_Menu::setQwertyMode(bool arg0)
{
    Android_android_view_Menu::setQwertyMode_IMPL_22279(_subclassed, _javaObject, arg0);
}

// public int size() [instance] :19339
int Android_android_view_Menu::size()
{
    return Android_android_view_Menu::size_IMPL_22273(_subclassed, _javaObject);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22256(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19376
uObject* Android_android_view_Menu::add_IMPL_22256(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::add_22256_ID(),"android/view/Menu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::add_22256_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22257(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19379
uObject* Android_android_view_Menu::add_IMPL_22257(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::add_22257_ID(),"android/view/Menu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::add_22257_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22258(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :19382
uObject* Android_android_view_Menu::add_IMPL_22258(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::add_22258_ID(),"android/view/Menu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::add_22258_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22259(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :19385
uObject* Android_android_view_Menu::add_IMPL_22259(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::add_22259_ID(),"android/view/Menu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::add_22259_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int addIntentOptions_IMPL_22264(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6, Android.Base.Wrappers.IJWrapper arg7, int arg8, Android.Base.Wrappers.IJWrapper arg9) [static] :19400
int Android_android_view_Menu::addIntentOptions_IMPL_22264(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int arg8_, uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addIntentOptions_22264_ID(),"android/view/Menu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.Menu.addIntentOptions could not be cached",77);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg6 = ((!arg6_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg6_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg7 = ((!arg7_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg7_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg9 = ((!arg9_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg9_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_Menu::addIntentOptions_22264_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22260(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19388
uObject* Android_android_view_Menu::addSubMenu_IMPL_22260(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addSubMenu_22260_ID(),"android/view/Menu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::addSubMenu_22260_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22261(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19391
uObject* Android_android_view_Menu::addSubMenu_IMPL_22261(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addSubMenu_22261_ID(),"android/view/Menu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::addSubMenu_22261_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22262(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :19394
uObject* Android_android_view_Menu::addSubMenu_IMPL_22262(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addSubMenu_22262_ID(),"android/view/Menu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::addSubMenu_22262_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22263(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :19397
uObject* Android_android_view_Menu::addSubMenu_IMPL_22263(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::addSubMenu_22263_ID(),"android/view/Menu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::addSubMenu_22263_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_22267(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19409
void Android_android_view_Menu::clear_IMPL_22267(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::clear_22267_ID(),"android/view/Menu","clear","()V",GetMethodID,"Id for fallback method android.view.Menu.clear could not be cached",66);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::clear_22267_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void close_IMPL_22275(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19433
void Android_android_view_Menu::close_IMPL_22275(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::close_22275_ID(),"android/view/Menu","close","()V",GetMethodID,"Id for fallback method android.view.Menu.close could not be cached",66);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::close_22275_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper findItem_IMPL_22272(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19424
uObject* Android_android_view_Menu::findItem_IMPL_22272(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::findItem_22272_ID(),"android/view/Menu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.findItem could not be cached",69);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::findItem_22272_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22274(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19430
uObject* Android_android_view_Menu::getItem_IMPL_22274(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::getItem_22274_ID(),"android/view/Menu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.getItem could not be cached",68);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_Menu::getItem_22274_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasVisibleItems_IMPL_22271(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19421
bool Android_android_view_Menu::hasVisibleItems_IMPL_22271(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::hasVisibleItems_22271_ID(),"android/view/Menu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.Menu.hasVisibleItems could not be cached",76);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_Menu::hasVisibleItems_22271_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isShortcutKey_IMPL_22277(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :19439
bool Android_android_view_Menu::isShortcutKey_IMPL_22277(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::isShortcutKey_22277_ID(),"android/view/Menu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.Menu.isShortcutKey could not be cached",74);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_Menu::isShortcutKey_22277_ID(), ((jint)arg2_), _obArg3));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performIdentifierAction_IMPL_22278(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :19442
bool Android_android_view_Menu::performIdentifierAction_IMPL_22278(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::performIdentifierAction_22278_ID(),"android/view/Menu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.Menu.performIdentifierAction could not be cached",84);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_Menu::performIdentifierAction_22278_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performShortcut_IMPL_22276(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :19436
bool Android_android_view_Menu::performShortcut_IMPL_22276(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::performShortcut_22276_ID(),"android/view/Menu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.Menu.performShortcut could not be cached",76);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_Menu::performShortcut_22276_ID(), ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeGroup_IMPL_22266(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19406
void Android_android_view_Menu::removeGroup_IMPL_22266(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::removeGroup_22266_ID(),"android/view/Menu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.Menu.removeGroup could not be cached",72);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::removeGroup_22266_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void removeItem_IMPL_22265(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19403
void Android_android_view_Menu::removeItem_IMPL_22265(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::removeItem_22265_ID(),"android/view/Menu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.Menu.removeItem could not be cached",71);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::removeItem_22265_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupCheckable_IMPL_22268(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3, bool arg4) [static] :19412
void Android_android_view_Menu::setGroupCheckable_IMPL_22268(bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::setGroupCheckable_22268_ID(),"android/view/Menu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupCheckable could not be cached",78);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::setGroupCheckable_22268_ID(), ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupEnabled_IMPL_22270(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :19418
void Android_android_view_Menu::setGroupEnabled_IMPL_22270(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::setGroupEnabled_22270_ID(),"android/view/Menu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupEnabled could not be cached",76);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::setGroupEnabled_22270_ID(), ((jint)arg2_), ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupVisible_IMPL_22269(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :19415
void Android_android_view_Menu::setGroupVisible_IMPL_22269(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::setGroupVisible_22269_ID(),"android/view/Menu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupVisible could not be cached",76);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::setGroupVisible_22269_ID(), ((jint)arg2_), ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setQwertyMode_IMPL_22279(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19445
void Android_android_view_Menu::setQwertyMode_IMPL_22279(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::setQwertyMode_22279_ID(),"android/view/Menu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.Menu.setQwertyMode could not be cached",74);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_Menu::setQwertyMode_22279_ID(), ((jboolean)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int size_IMPL_22273(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19427
int Android_android_view_Menu::size_IMPL_22273(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_Menu::size_22273_ID(),"android/view/Menu","size","()I",GetMethodID,"Id for fallback method android.view.Menu.size could not be cached",65);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_Menu::size_22273_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_view_MenuItem :19521
// {
static void Android_android_view_MenuItem_build(uType* type)
{
    ::TYPES[4] = ::g::Android::android::view::ActionProvider_typeof();
    ::TYPES[5] = ::g::Android::android::view::View_typeof();
    ::TYPES[6] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[7] = ::g::Android::android::content::Intent_typeof();
    ::TYPES[8] = ::g::Android::android::view::ContextMenuDLRContextMenuInfo_typeof();
    ::TYPES[3] = ::g::Android::android::view::SubMenu_typeof();
    ::TYPES[9] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[2] = ::g::Android::android::view::MenuItem_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_MenuItem_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_MenuItem_type, interface1),
        ::g::Android::android::view::MenuItem_typeof(), offsetof(Android_android_view_MenuItem_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::collapseActionView_22332_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::expandActionView_22331_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getActionProvider_22330_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getActionView_22328_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getAlphabeticShortcut_22311_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getGroupId_22295_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getIcon_22304_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getIntent_22306_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getItemId_22294_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getMenuInfo_22323_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getNumericShortcut_22309_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getOrder_22296_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getSubMenu_22321_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getTitle_22299_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::getTitleCondensed_22301_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::hasSubMenu_22320_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isActionViewExpanded_22333_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isCheckable_22313_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isChecked_22315_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isEnabled_22319_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::isVisible_22317_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setActionProvider_22329_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setActionView_22326_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setActionView_22327_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setAlphabeticShortcut_22310_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setCheckable_22312_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setChecked_22314_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setEnabled_22318_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setIcon_22302_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setIcon_22303_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setIntent_22305_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setNumericShortcut_22308_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setOnActionExpandListener_22334_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setOnMenuItemClickListener_22322_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setShortcut_22307_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setShowAsAction_22324_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setShowAsActionFlags_22325_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setTitle_22297_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setTitle_22298_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setTitleCondensed_22300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItem::setVisible_22316_ID_, uFieldFlagsStatic);
}

Android_android_view_MenuItem_type* Android_android_view_MenuItem_typeof()
{
    static uSStrong<Android_android_view_MenuItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 46;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_MenuItem);
    options.TypeSize = sizeof(Android_android_view_MenuItem_type);
    type = (Android_android_view_MenuItem_type*)uClassType::New("Android.Fallbacks.Android_android_view_MenuItem", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_android_view_MenuItem_build;
    type->interface2.fp_getItemId = (void(*)(uObject*, int*))Android_android_view_MenuItem__getItemId_fn;
    type->interface2.fp_getGroupId = (void(*)(uObject*, int*))Android_android_view_MenuItem__getGroupId_fn;
    type->interface2.fp_getOrder = (void(*)(uObject*, int*))Android_android_view_MenuItem__getOrder_fn;
    type->interface2.fp_setTitle = (void(*)(uObject*, uObject*, uObject**))Android_android_view_MenuItem__setTitle_fn;
    type->interface2.fp_setTitle1 = (void(*)(uObject*, int*, uObject**))Android_android_view_MenuItem__setTitle1_fn;
    type->interface2.fp_getTitle = (void(*)(uObject*, uObject**))Android_android_view_MenuItem__getTitle_fn;
    type->interface2.fp_setTitleCondensed = (void(*)(uObject*, uObject*, uObject**))Android_android_view_MenuItem__setTitleCondensed_fn;
    type->interface2.fp_getTitleCondensed = (void(*)(uObject*, uObject**))Android_android_view_MenuItem__getTitleCondensed_fn;
    type->interface2.fp_setIcon = (void(*)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**))Android_android_view_MenuItem__setIcon_fn;
    type->interface2.fp_setIcon1 = (void(*)(uObject*, int*, uObject**))Android_android_view_MenuItem__setIcon1_fn;
    type->interface2.fp_getIcon = (void(*)(uObject*, ::g::Android::android::graphics::drawable::Drawable**))Android_android_view_MenuItem__getIcon_fn;
    type->interface2.fp_setIntent = (void(*)(uObject*, ::g::Android::android::content::Intent*, uObject**))Android_android_view_MenuItem__setIntent_fn;
    type->interface2.fp_getIntent = (void(*)(uObject*, ::g::Android::android::content::Intent**))Android_android_view_MenuItem__getIntent_fn;
    type->interface2.fp_setShortcut = (void(*)(uObject*, uChar*, uChar*, uObject**))Android_android_view_MenuItem__setShortcut_fn;
    type->interface2.fp_setNumericShortcut = (void(*)(uObject*, uChar*, uObject**))Android_android_view_MenuItem__setNumericShortcut_fn;
    type->interface2.fp_getNumericShortcut = (void(*)(uObject*, uChar*))Android_android_view_MenuItem__getNumericShortcut_fn;
    type->interface2.fp_setAlphabeticShortcut = (void(*)(uObject*, uChar*, uObject**))Android_android_view_MenuItem__setAlphabeticShortcut_fn;
    type->interface2.fp_getAlphabeticShortcut = (void(*)(uObject*, uChar*))Android_android_view_MenuItem__getAlphabeticShortcut_fn;
    type->interface2.fp_setCheckable = (void(*)(uObject*, bool*, uObject**))Android_android_view_MenuItem__setCheckable_fn;
    type->interface2.fp_isCheckable = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isCheckable_fn;
    type->interface2.fp_setChecked = (void(*)(uObject*, bool*, uObject**))Android_android_view_MenuItem__setChecked_fn;
    type->interface2.fp_isChecked = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isChecked_fn;
    type->interface2.fp_setVisible = (void(*)(uObject*, bool*, uObject**))Android_android_view_MenuItem__setVisible_fn;
    type->interface2.fp_isVisible = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isVisible_fn;
    type->interface2.fp_setEnabled = (void(*)(uObject*, bool*, uObject**))Android_android_view_MenuItem__setEnabled_fn;
    type->interface2.fp_isEnabled = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isEnabled_fn;
    type->interface2.fp_hasSubMenu = (void(*)(uObject*, bool*))Android_android_view_MenuItem__hasSubMenu_fn;
    type->interface2.fp_getSubMenu = (void(*)(uObject*, uObject**))Android_android_view_MenuItem__getSubMenu_fn;
    type->interface2.fp_setOnMenuItemClickListener = (void(*)(uObject*, uObject*, uObject**))Android_android_view_MenuItem__setOnMenuItemClickListener_fn;
    type->interface2.fp_getMenuInfo = (void(*)(uObject*, uObject**))Android_android_view_MenuItem__getMenuInfo_fn;
    type->interface2.fp_setShowAsAction = (void(*)(uObject*, int*))Android_android_view_MenuItem__setShowAsAction_fn;
    type->interface2.fp_setShowAsActionFlags = (void(*)(uObject*, int*, uObject**))Android_android_view_MenuItem__setShowAsActionFlags_fn;
    type->interface2.fp_setActionView = (void(*)(uObject*, ::g::Android::android::view::View*, uObject**))Android_android_view_MenuItem__setActionView_fn;
    type->interface2.fp_setActionView1 = (void(*)(uObject*, int*, uObject**))Android_android_view_MenuItem__setActionView1_fn;
    type->interface2.fp_getActionView = (void(*)(uObject*, ::g::Android::android::view::View**))Android_android_view_MenuItem__getActionView_fn;
    type->interface2.fp_setActionProvider = (void(*)(uObject*, ::g::Android::android::view::ActionProvider*, uObject**))Android_android_view_MenuItem__setActionProvider_fn;
    type->interface2.fp_getActionProvider = (void(*)(uObject*, ::g::Android::android::view::ActionProvider**))Android_android_view_MenuItem__getActionProvider_fn;
    type->interface2.fp_expandActionView = (void(*)(uObject*, bool*))Android_android_view_MenuItem__expandActionView_fn;
    type->interface2.fp_collapseActionView = (void(*)(uObject*, bool*))Android_android_view_MenuItem__collapseActionView_fn;
    type->interface2.fp_isActionViewExpanded = (void(*)(uObject*, bool*))Android_android_view_MenuItem__isActionViewExpanded_fn;
    type->interface2.fp_setOnActionExpandListener = (void(*)(uObject*, uObject*, uObject**))Android_android_view_MenuItem__setOnActionExpandListener_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public bool collapseActionView() :19714
void Android_android_view_MenuItem__collapseActionView_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->collapseActionView();
}

// public static extern bool collapseActionView_IMPL_22332(bool arg0, Android.Base.Primitives.ujobject arg1) :19845
void Android_android_view_MenuItem__collapseActionView_IMPL_22332_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::collapseActionView_IMPL_22332(*arg0_, *arg1_);
}

// public bool expandActionView() :19709
void Android_android_view_MenuItem__expandActionView_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->expandActionView();
}

// public static extern bool expandActionView_IMPL_22331(bool arg0, Android.Base.Primitives.ujobject arg1) :19842
void Android_android_view_MenuItem__expandActionView_IMPL_22331_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::expandActionView_IMPL_22331(*arg0_, *arg1_);
}

// public Android.android.view.ActionProvider getActionProvider() :19704
void Android_android_view_MenuItem__getActionProvider_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::ActionProvider** __retval)
{
    *__retval = __this->getActionProvider();
}

// public static extern Android.Base.Wrappers.IJWrapper getActionProvider_IMPL_22330(bool arg0, Android.Base.Primitives.ujobject arg1) :19839
void Android_android_view_MenuItem__getActionProvider_IMPL_22330_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getActionProvider_IMPL_22330(*arg0_, *arg1_);
}

// public Android.android.view.View getActionView() :19694
void Android_android_view_MenuItem__getActionView_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::View** __retval)
{
    *__retval = __this->getActionView();
}

// public static extern Android.Base.Wrappers.IJWrapper getActionView_IMPL_22328(bool arg0, Android.Base.Primitives.ujobject arg1) :19833
void Android_android_view_MenuItem__getActionView_IMPL_22328_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getActionView_IMPL_22328(*arg0_, *arg1_);
}

// public char getAlphabeticShortcut() :19609
void Android_android_view_MenuItem__getAlphabeticShortcut_fn(Android_android_view_MenuItem* __this, uChar* __retval)
{
    *__retval = __this->getAlphabeticShortcut();
}

// public static extern char getAlphabeticShortcut_IMPL_22311(bool arg0, Android.Base.Primitives.ujobject arg1) :19782
void Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311_fn(bool* arg0_, jobject* arg1_, uChar* __retval)
{
    *__retval = Android_android_view_MenuItem::getAlphabeticShortcut_IMPL_22311(*arg0_, *arg1_);
}

// public int getGroupId() :19529
void Android_android_view_MenuItem__getGroupId_fn(Android_android_view_MenuItem* __this, int* __retval)
{
    *__retval = __this->getGroupId();
}

// public static extern int getGroupId_IMPL_22295(bool arg0, Android.Base.Primitives.ujobject arg1) :19734
void Android_android_view_MenuItem__getGroupId_IMPL_22295_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_MenuItem::getGroupId_IMPL_22295(*arg0_, *arg1_);
}

// public Android.android.graphics.drawable.Drawable getIcon() :19574
void Android_android_view_MenuItem__getIcon_fn(Android_android_view_MenuItem* __this, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getIcon();
}

// public static extern Android.Base.Wrappers.IJWrapper getIcon_IMPL_22304(bool arg0, Android.Base.Primitives.ujobject arg1) :19761
void Android_android_view_MenuItem__getIcon_IMPL_22304_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getIcon_IMPL_22304(*arg0_, *arg1_);
}

// public Android.android.content.Intent getIntent() :19584
void Android_android_view_MenuItem__getIntent_fn(Android_android_view_MenuItem* __this, ::g::Android::android::content::Intent** __retval)
{
    *__retval = __this->getIntent();
}

// public static extern Android.Base.Wrappers.IJWrapper getIntent_IMPL_22306(bool arg0, Android.Base.Primitives.ujobject arg1) :19767
void Android_android_view_MenuItem__getIntent_IMPL_22306_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getIntent_IMPL_22306(*arg0_, *arg1_);
}

// public int getItemId() :19524
void Android_android_view_MenuItem__getItemId_fn(Android_android_view_MenuItem* __this, int* __retval)
{
    *__retval = __this->getItemId();
}

// public static extern int getItemId_IMPL_22294(bool arg0, Android.Base.Primitives.ujobject arg1) :19731
void Android_android_view_MenuItem__getItemId_IMPL_22294_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_MenuItem::getItemId_IMPL_22294(*arg0_, *arg1_);
}

// public Android.android.view.ContextMenuDLRContextMenuInfo getMenuInfo() :19669
void Android_android_view_MenuItem__getMenuInfo_fn(Android_android_view_MenuItem* __this, uObject** __retval)
{
    *__retval = __this->getMenuInfo();
}

// public static extern Android.Base.Wrappers.IJWrapper getMenuInfo_IMPL_22323(bool arg0, Android.Base.Primitives.ujobject arg1) :19818
void Android_android_view_MenuItem__getMenuInfo_IMPL_22323_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getMenuInfo_IMPL_22323(*arg0_, *arg1_);
}

// public char getNumericShortcut() :19599
void Android_android_view_MenuItem__getNumericShortcut_fn(Android_android_view_MenuItem* __this, uChar* __retval)
{
    *__retval = __this->getNumericShortcut();
}

// public static extern char getNumericShortcut_IMPL_22309(bool arg0, Android.Base.Primitives.ujobject arg1) :19776
void Android_android_view_MenuItem__getNumericShortcut_IMPL_22309_fn(bool* arg0_, jobject* arg1_, uChar* __retval)
{
    *__retval = Android_android_view_MenuItem::getNumericShortcut_IMPL_22309(*arg0_, *arg1_);
}

// public int getOrder() :19534
void Android_android_view_MenuItem__getOrder_fn(Android_android_view_MenuItem* __this, int* __retval)
{
    *__retval = __this->getOrder();
}

// public static extern int getOrder_IMPL_22296(bool arg0, Android.Base.Primitives.ujobject arg1) :19737
void Android_android_view_MenuItem__getOrder_IMPL_22296_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_MenuItem::getOrder_IMPL_22296(*arg0_, *arg1_);
}

// public Android.android.view.SubMenu getSubMenu() :19659
void Android_android_view_MenuItem__getSubMenu_fn(Android_android_view_MenuItem* __this, uObject** __retval)
{
    *__retval = __this->getSubMenu();
}

// public static extern Android.Base.Wrappers.IJWrapper getSubMenu_IMPL_22321(bool arg0, Android.Base.Primitives.ujobject arg1) :19812
void Android_android_view_MenuItem__getSubMenu_IMPL_22321_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getSubMenu_IMPL_22321(*arg0_, *arg1_);
}

// public Android.java.lang.CharSequence getTitle() :19549
void Android_android_view_MenuItem__getTitle_fn(Android_android_view_MenuItem* __this, uObject** __retval)
{
    *__retval = __this->getTitle();
}

// public static extern Android.Base.Wrappers.IJWrapper getTitle_IMPL_22299(bool arg0, Android.Base.Primitives.ujobject arg1) :19746
void Android_android_view_MenuItem__getTitle_IMPL_22299_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getTitle_IMPL_22299(*arg0_, *arg1_);
}

// public Android.java.lang.CharSequence getTitleCondensed() :19559
void Android_android_view_MenuItem__getTitleCondensed_fn(Android_android_view_MenuItem* __this, uObject** __retval)
{
    *__retval = __this->getTitleCondensed();
}

// public static extern Android.Base.Wrappers.IJWrapper getTitleCondensed_IMPL_22301(bool arg0, Android.Base.Primitives.ujobject arg1) :19752
void Android_android_view_MenuItem__getTitleCondensed_IMPL_22301_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::getTitleCondensed_IMPL_22301(*arg0_, *arg1_);
}

// public bool hasSubMenu() :19654
void Android_android_view_MenuItem__hasSubMenu_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->hasSubMenu();
}

// public static extern bool hasSubMenu_IMPL_22320(bool arg0, Android.Base.Primitives.ujobject arg1) :19809
void Android_android_view_MenuItem__hasSubMenu_IMPL_22320_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::hasSubMenu_IMPL_22320(*arg0_, *arg1_);
}

// public bool isActionViewExpanded() :19719
void Android_android_view_MenuItem__isActionViewExpanded_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isActionViewExpanded();
}

// public static extern bool isActionViewExpanded_IMPL_22333(bool arg0, Android.Base.Primitives.ujobject arg1) :19848
void Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isActionViewExpanded_IMPL_22333(*arg0_, *arg1_);
}

// public bool isCheckable() :19619
void Android_android_view_MenuItem__isCheckable_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isCheckable();
}

// public static extern bool isCheckable_IMPL_22313(bool arg0, Android.Base.Primitives.ujobject arg1) :19788
void Android_android_view_MenuItem__isCheckable_IMPL_22313_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isCheckable_IMPL_22313(*arg0_, *arg1_);
}

// public bool isChecked() :19629
void Android_android_view_MenuItem__isChecked_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isChecked();
}

// public static extern bool isChecked_IMPL_22315(bool arg0, Android.Base.Primitives.ujobject arg1) :19794
void Android_android_view_MenuItem__isChecked_IMPL_22315_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isChecked_IMPL_22315(*arg0_, *arg1_);
}

// public bool isEnabled() :19649
void Android_android_view_MenuItem__isEnabled_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isEnabled();
}

// public static extern bool isEnabled_IMPL_22319(bool arg0, Android.Base.Primitives.ujobject arg1) :19806
void Android_android_view_MenuItem__isEnabled_IMPL_22319_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isEnabled_IMPL_22319(*arg0_, *arg1_);
}

// public bool isVisible() :19639
void Android_android_view_MenuItem__isVisible_fn(Android_android_view_MenuItem* __this, bool* __retval)
{
    *__retval = __this->isVisible();
}

// public static extern bool isVisible_IMPL_22317(bool arg0, Android.Base.Primitives.ujobject arg1) :19800
void Android_android_view_MenuItem__isVisible_IMPL_22317_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_MenuItem::isVisible_IMPL_22317(*arg0_, *arg1_);
}

// public Android.android.view.MenuItem setActionProvider(Android.android.view.ActionProvider arg0) :19699
void Android_android_view_MenuItem__setActionProvider_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::ActionProvider* arg0, uObject** __retval)
{
    *__retval = __this->setActionProvider(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setActionProvider_IMPL_22329(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19836
void Android_android_view_MenuItem__setActionProvider_IMPL_22329_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setActionProvider_IMPL_22329(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setActionView(Android.android.view.View arg0) :19684
void Android_android_view_MenuItem__setActionView_fn(Android_android_view_MenuItem* __this, ::g::Android::android::view::View* arg0, uObject** __retval)
{
    *__retval = __this->setActionView(arg0);
}

// public Android.android.view.MenuItem setActionView(int arg0) :19689
void Android_android_view_MenuItem__setActionView1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setActionView1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setActionView_IMPL_22326(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19827
void Android_android_view_MenuItem__setActionView_IMPL_22326_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setActionView_IMPL_22326(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setActionView_IMPL_22327(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19830
void Android_android_view_MenuItem__setActionView_IMPL_22327_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setActionView_IMPL_22327(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setAlphabeticShortcut(char arg0) :19604
void Android_android_view_MenuItem__setAlphabeticShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uObject** __retval)
{
    *__retval = __this->setAlphabeticShortcut(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setAlphabeticShortcut_IMPL_22310(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) :19779
void Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setAlphabeticShortcut_IMPL_22310(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setCheckable(bool arg0) :19614
void Android_android_view_MenuItem__setCheckable_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval)
{
    *__retval = __this->setCheckable(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setCheckable_IMPL_22312(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19785
void Android_android_view_MenuItem__setCheckable_IMPL_22312_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setCheckable_IMPL_22312(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setChecked(bool arg0) :19624
void Android_android_view_MenuItem__setChecked_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval)
{
    *__retval = __this->setChecked(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setChecked_IMPL_22314(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19791
void Android_android_view_MenuItem__setChecked_IMPL_22314_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setChecked_IMPL_22314(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setEnabled(bool arg0) :19644
void Android_android_view_MenuItem__setEnabled_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval)
{
    *__retval = __this->setEnabled(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setEnabled_IMPL_22318(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19803
void Android_android_view_MenuItem__setEnabled_IMPL_22318_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setEnabled_IMPL_22318(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setIcon(Android.android.graphics.drawable.Drawable arg0) :19564
void Android_android_view_MenuItem__setIcon_fn(Android_android_view_MenuItem* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval)
{
    *__retval = __this->setIcon(arg0);
}

// public Android.android.view.MenuItem setIcon(int arg0) :19569
void Android_android_view_MenuItem__setIcon1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setIcon1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22302(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19755
void Android_android_view_MenuItem__setIcon_IMPL_22302_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setIcon_IMPL_22302(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22303(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19758
void Android_android_view_MenuItem__setIcon_IMPL_22303_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setIcon_IMPL_22303(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setIntent(Android.android.content.Intent arg0) :19579
void Android_android_view_MenuItem__setIntent_fn(Android_android_view_MenuItem* __this, ::g::Android::android::content::Intent* arg0, uObject** __retval)
{
    *__retval = __this->setIntent(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setIntent_IMPL_22305(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19764
void Android_android_view_MenuItem__setIntent_IMPL_22305_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setIntent_IMPL_22305(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setNumericShortcut(char arg0) :19594
void Android_android_view_MenuItem__setNumericShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uObject** __retval)
{
    *__retval = __this->setNumericShortcut(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setNumericShortcut_IMPL_22308(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) :19773
void Android_android_view_MenuItem__setNumericShortcut_IMPL_22308_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setNumericShortcut_IMPL_22308(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setOnActionExpandListener(Android.android.view.MenuItemDLROnActionExpandListener arg0) :19724
void Android_android_view_MenuItem__setOnActionExpandListener_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setOnActionExpandListener(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setOnActionExpandListener_IMPL_22334(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19851
void Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setOnActionExpandListener_IMPL_22334(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setOnMenuItemClickListener(Android.android.view.MenuItemDLROnMenuItemClickListener arg0) :19664
void Android_android_view_MenuItem__setOnMenuItemClickListener_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setOnMenuItemClickListener(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setOnMenuItemClickListener_IMPL_22322(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19815
void Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setOnMenuItemClickListener_IMPL_22322(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setShortcut(char arg0, char arg1) :19589
void Android_android_view_MenuItem__setShortcut_fn(Android_android_view_MenuItem* __this, uChar* arg0, uChar* arg1, uObject** __retval)
{
    *__retval = __this->setShortcut(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper setShortcut_IMPL_22307(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2, char arg3) :19770
void Android_android_view_MenuItem__setShortcut_IMPL_22307_fn(bool* arg0_, jobject* arg1_, uChar* arg2_, uChar* arg3_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setShortcut_IMPL_22307(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setShowAsAction(int arg0) :19674
void Android_android_view_MenuItem__setShowAsAction_fn(Android_android_view_MenuItem* __this, int* arg0)
{
    __this->setShowAsAction(*arg0);
}

// public static extern void setShowAsAction_IMPL_22324(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19821
void Android_android_view_MenuItem__setShowAsAction_IMPL_22324_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_MenuItem::setShowAsAction_IMPL_22324(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setShowAsActionFlags(int arg0) :19679
void Android_android_view_MenuItem__setShowAsActionFlags_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setShowAsActionFlags(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setShowAsActionFlags_IMPL_22325(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19824
void Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setShowAsActionFlags_IMPL_22325(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setTitle(Android.java.lang.CharSequence arg0) :19539
void Android_android_view_MenuItem__setTitle_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setTitle(arg0);
}

// public Android.android.view.MenuItem setTitle(int arg0) :19544
void Android_android_view_MenuItem__setTitle1_fn(Android_android_view_MenuItem* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setTitle1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setTitle_IMPL_22297(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19740
void Android_android_view_MenuItem__setTitle_IMPL_22297_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setTitle_IMPL_22297(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setTitle_IMPL_22298(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :19743
void Android_android_view_MenuItem__setTitle_IMPL_22298_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setTitle_IMPL_22298(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem setTitleCondensed(Android.java.lang.CharSequence arg0) :19554
void Android_android_view_MenuItem__setTitleCondensed_fn(Android_android_view_MenuItem* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setTitleCondensed(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setTitleCondensed_IMPL_22300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19749
void Android_android_view_MenuItem__setTitleCondensed_IMPL_22300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setTitleCondensed_IMPL_22300(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.MenuItem setVisible(bool arg0) :19634
void Android_android_view_MenuItem__setVisible_fn(Android_android_view_MenuItem* __this, bool* arg0, uObject** __retval)
{
    *__retval = __this->setVisible(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setVisible_IMPL_22316(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :19797
void Android_android_view_MenuItem__setVisible_IMPL_22316_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_MenuItem::setVisible_IMPL_22316(*arg0_, *arg1_, *arg2_);
}

jmethodID Android_android_view_MenuItem::collapseActionView_22332_ID_;
jmethodID Android_android_view_MenuItem::expandActionView_22331_ID_;
jmethodID Android_android_view_MenuItem::getActionProvider_22330_ID_;
jmethodID Android_android_view_MenuItem::getActionView_22328_ID_;
jmethodID Android_android_view_MenuItem::getAlphabeticShortcut_22311_ID_;
jmethodID Android_android_view_MenuItem::getGroupId_22295_ID_;
jmethodID Android_android_view_MenuItem::getIcon_22304_ID_;
jmethodID Android_android_view_MenuItem::getIntent_22306_ID_;
jmethodID Android_android_view_MenuItem::getItemId_22294_ID_;
jmethodID Android_android_view_MenuItem::getMenuInfo_22323_ID_;
jmethodID Android_android_view_MenuItem::getNumericShortcut_22309_ID_;
jmethodID Android_android_view_MenuItem::getOrder_22296_ID_;
jmethodID Android_android_view_MenuItem::getSubMenu_22321_ID_;
jmethodID Android_android_view_MenuItem::getTitle_22299_ID_;
jmethodID Android_android_view_MenuItem::getTitleCondensed_22301_ID_;
jmethodID Android_android_view_MenuItem::hasSubMenu_22320_ID_;
jmethodID Android_android_view_MenuItem::isActionViewExpanded_22333_ID_;
jmethodID Android_android_view_MenuItem::isCheckable_22313_ID_;
jmethodID Android_android_view_MenuItem::isChecked_22315_ID_;
jmethodID Android_android_view_MenuItem::isEnabled_22319_ID_;
jmethodID Android_android_view_MenuItem::isVisible_22317_ID_;
jmethodID Android_android_view_MenuItem::setActionProvider_22329_ID_;
jmethodID Android_android_view_MenuItem::setActionView_22326_ID_;
jmethodID Android_android_view_MenuItem::setActionView_22327_ID_;
jmethodID Android_android_view_MenuItem::setAlphabeticShortcut_22310_ID_;
jmethodID Android_android_view_MenuItem::setCheckable_22312_ID_;
jmethodID Android_android_view_MenuItem::setChecked_22314_ID_;
jmethodID Android_android_view_MenuItem::setEnabled_22318_ID_;
jmethodID Android_android_view_MenuItem::setIcon_22302_ID_;
jmethodID Android_android_view_MenuItem::setIcon_22303_ID_;
jmethodID Android_android_view_MenuItem::setIntent_22305_ID_;
jmethodID Android_android_view_MenuItem::setNumericShortcut_22308_ID_;
jmethodID Android_android_view_MenuItem::setOnActionExpandListener_22334_ID_;
jmethodID Android_android_view_MenuItem::setOnMenuItemClickListener_22322_ID_;
jmethodID Android_android_view_MenuItem::setShortcut_22307_ID_;
jmethodID Android_android_view_MenuItem::setShowAsAction_22324_ID_;
jmethodID Android_android_view_MenuItem::setShowAsActionFlags_22325_ID_;
jmethodID Android_android_view_MenuItem::setTitle_22297_ID_;
jmethodID Android_android_view_MenuItem::setTitle_22298_ID_;
jmethodID Android_android_view_MenuItem::setTitleCondensed_22300_ID_;
jmethodID Android_android_view_MenuItem::setVisible_22316_ID_;

// public bool collapseActionView() [instance] :19714
bool Android_android_view_MenuItem::collapseActionView()
{
    return Android_android_view_MenuItem::collapseActionView_IMPL_22332(_subclassed, _javaObject);
}

// public bool expandActionView() [instance] :19709
bool Android_android_view_MenuItem::expandActionView()
{
    return Android_android_view_MenuItem::expandActionView_IMPL_22331(_subclassed, _javaObject);
}

// public Android.android.view.ActionProvider getActionProvider() [instance] :19704
::g::Android::android::view::ActionProvider* Android_android_view_MenuItem::getActionProvider()
{
    return uCast< ::g::Android::android::view::ActionProvider*>(Android_android_view_MenuItem::getActionProvider_IMPL_22330(_subclassed, _javaObject), ::TYPES[4/*Android.android.view.ActionProvider*/]);
}

// public Android.android.view.View getActionView() [instance] :19694
::g::Android::android::view::View* Android_android_view_MenuItem::getActionView()
{
    return uCast< ::g::Android::android::view::View*>(Android_android_view_MenuItem::getActionView_IMPL_22328(_subclassed, _javaObject), ::TYPES[5/*Android.android.view.View*/]);
}

// public char getAlphabeticShortcut() [instance] :19609
uChar Android_android_view_MenuItem::getAlphabeticShortcut()
{
    return Android_android_view_MenuItem::getAlphabeticShortcut_IMPL_22311(_subclassed, _javaObject);
}

// public int getGroupId() [instance] :19529
int Android_android_view_MenuItem::getGroupId()
{
    return Android_android_view_MenuItem::getGroupId_IMPL_22295(_subclassed, _javaObject);
}

// public Android.android.graphics.drawable.Drawable getIcon() [instance] :19574
::g::Android::android::graphics::drawable::Drawable* Android_android_view_MenuItem::getIcon()
{
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(Android_android_view_MenuItem::getIcon_IMPL_22304(_subclassed, _javaObject), ::TYPES[6/*Android.android.graphics.drawable.Drawable*/]);
}

// public Android.android.content.Intent getIntent() [instance] :19584
::g::Android::android::content::Intent* Android_android_view_MenuItem::getIntent()
{
    return uCast< ::g::Android::android::content::Intent*>(Android_android_view_MenuItem::getIntent_IMPL_22306(_subclassed, _javaObject), ::TYPES[7/*Android.android.content.Intent*/]);
}

// public int getItemId() [instance] :19524
int Android_android_view_MenuItem::getItemId()
{
    return Android_android_view_MenuItem::getItemId_IMPL_22294(_subclassed, _javaObject);
}

// public Android.android.view.ContextMenuDLRContextMenuInfo getMenuInfo() [instance] :19669
uObject* Android_android_view_MenuItem::getMenuInfo()
{
    return Android_android_view_MenuItem::getMenuInfo_IMPL_22323(_subclassed, _javaObject);
}

// public char getNumericShortcut() [instance] :19599
uChar Android_android_view_MenuItem::getNumericShortcut()
{
    return Android_android_view_MenuItem::getNumericShortcut_IMPL_22309(_subclassed, _javaObject);
}

// public int getOrder() [instance] :19534
int Android_android_view_MenuItem::getOrder()
{
    return Android_android_view_MenuItem::getOrder_IMPL_22296(_subclassed, _javaObject);
}

// public Android.android.view.SubMenu getSubMenu() [instance] :19659
uObject* Android_android_view_MenuItem::getSubMenu()
{
    return Android_android_view_MenuItem::getSubMenu_IMPL_22321(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence getTitle() [instance] :19549
uObject* Android_android_view_MenuItem::getTitle()
{
    return Android_android_view_MenuItem::getTitle_IMPL_22299(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence getTitleCondensed() [instance] :19559
uObject* Android_android_view_MenuItem::getTitleCondensed()
{
    return Android_android_view_MenuItem::getTitleCondensed_IMPL_22301(_subclassed, _javaObject);
}

// public bool hasSubMenu() [instance] :19654
bool Android_android_view_MenuItem::hasSubMenu()
{
    return Android_android_view_MenuItem::hasSubMenu_IMPL_22320(_subclassed, _javaObject);
}

// public bool isActionViewExpanded() [instance] :19719
bool Android_android_view_MenuItem::isActionViewExpanded()
{
    return Android_android_view_MenuItem::isActionViewExpanded_IMPL_22333(_subclassed, _javaObject);
}

// public bool isCheckable() [instance] :19619
bool Android_android_view_MenuItem::isCheckable()
{
    return Android_android_view_MenuItem::isCheckable_IMPL_22313(_subclassed, _javaObject);
}

// public bool isChecked() [instance] :19629
bool Android_android_view_MenuItem::isChecked()
{
    return Android_android_view_MenuItem::isChecked_IMPL_22315(_subclassed, _javaObject);
}

// public bool isEnabled() [instance] :19649
bool Android_android_view_MenuItem::isEnabled()
{
    return Android_android_view_MenuItem::isEnabled_IMPL_22319(_subclassed, _javaObject);
}

// public bool isVisible() [instance] :19639
bool Android_android_view_MenuItem::isVisible()
{
    return Android_android_view_MenuItem::isVisible_IMPL_22317(_subclassed, _javaObject);
}

// public Android.android.view.MenuItem setActionProvider(Android.android.view.ActionProvider arg0) [instance] :19699
uObject* Android_android_view_MenuItem::setActionProvider(::g::Android::android::view::ActionProvider* arg0)
{
    return Android_android_view_MenuItem::setActionProvider_IMPL_22329(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.MenuItem setActionView(Android.android.view.View arg0) [instance] :19684
uObject* Android_android_view_MenuItem::setActionView(::g::Android::android::view::View* arg0)
{
    return Android_android_view_MenuItem::setActionView_IMPL_22326(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.MenuItem setActionView(int arg0) [instance] :19689
uObject* Android_android_view_MenuItem::setActionView1(int arg0)
{
    return Android_android_view_MenuItem::setActionView_IMPL_22327(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setAlphabeticShortcut(char arg0) [instance] :19604
uObject* Android_android_view_MenuItem::setAlphabeticShortcut(uChar arg0)
{
    return Android_android_view_MenuItem::setAlphabeticShortcut_IMPL_22310(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setCheckable(bool arg0) [instance] :19614
uObject* Android_android_view_MenuItem::setCheckable(bool arg0)
{
    return Android_android_view_MenuItem::setCheckable_IMPL_22312(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setChecked(bool arg0) [instance] :19624
uObject* Android_android_view_MenuItem::setChecked(bool arg0)
{
    return Android_android_view_MenuItem::setChecked_IMPL_22314(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setEnabled(bool arg0) [instance] :19644
uObject* Android_android_view_MenuItem::setEnabled(bool arg0)
{
    return Android_android_view_MenuItem::setEnabled_IMPL_22318(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setIcon(Android.android.graphics.drawable.Drawable arg0) [instance] :19564
uObject* Android_android_view_MenuItem::setIcon(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    return Android_android_view_MenuItem::setIcon_IMPL_22302(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.MenuItem setIcon(int arg0) [instance] :19569
uObject* Android_android_view_MenuItem::setIcon1(int arg0)
{
    return Android_android_view_MenuItem::setIcon_IMPL_22303(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setIntent(Android.android.content.Intent arg0) [instance] :19579
uObject* Android_android_view_MenuItem::setIntent(::g::Android::android::content::Intent* arg0)
{
    return Android_android_view_MenuItem::setIntent_IMPL_22305(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.MenuItem setNumericShortcut(char arg0) [instance] :19594
uObject* Android_android_view_MenuItem::setNumericShortcut(uChar arg0)
{
    return Android_android_view_MenuItem::setNumericShortcut_IMPL_22308(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setOnActionExpandListener(Android.android.view.MenuItemDLROnActionExpandListener arg0) [instance] :19724
uObject* Android_android_view_MenuItem::setOnActionExpandListener(uObject* arg0)
{
    return Android_android_view_MenuItem::setOnActionExpandListener_IMPL_22334(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setOnMenuItemClickListener(Android.android.view.MenuItemDLROnMenuItemClickListener arg0) [instance] :19664
uObject* Android_android_view_MenuItem::setOnMenuItemClickListener(uObject* arg0)
{
    return Android_android_view_MenuItem::setOnMenuItemClickListener_IMPL_22322(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setShortcut(char arg0, char arg1) [instance] :19589
uObject* Android_android_view_MenuItem::setShortcut(uChar arg0, uChar arg1)
{
    return Android_android_view_MenuItem::setShortcut_IMPL_22307(_subclassed, _javaObject, arg0, arg1);
}

// public void setShowAsAction(int arg0) [instance] :19674
void Android_android_view_MenuItem::setShowAsAction(int arg0)
{
    Android_android_view_MenuItem::setShowAsAction_IMPL_22324(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setShowAsActionFlags(int arg0) [instance] :19679
uObject* Android_android_view_MenuItem::setShowAsActionFlags(int arg0)
{
    return Android_android_view_MenuItem::setShowAsActionFlags_IMPL_22325(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setTitle(Android.java.lang.CharSequence arg0) [instance] :19539
uObject* Android_android_view_MenuItem::setTitle(uObject* arg0)
{
    return Android_android_view_MenuItem::setTitle_IMPL_22297(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setTitle(int arg0) [instance] :19544
uObject* Android_android_view_MenuItem::setTitle1(int arg0)
{
    return Android_android_view_MenuItem::setTitle_IMPL_22298(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setTitleCondensed(Android.java.lang.CharSequence arg0) [instance] :19554
uObject* Android_android_view_MenuItem::setTitleCondensed(uObject* arg0)
{
    return Android_android_view_MenuItem::setTitleCondensed_IMPL_22300(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem setVisible(bool arg0) [instance] :19634
uObject* Android_android_view_MenuItem::setVisible(bool arg0)
{
    return Android_android_view_MenuItem::setVisible_IMPL_22316(_subclassed, _javaObject, arg0);
}

// public static extern bool collapseActionView_IMPL_22332(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19845
bool Android_android_view_MenuItem::collapseActionView_IMPL_22332(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::collapseActionView_22332_ID(),"android/view/MenuItem","collapseActionView","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.collapseActionView could not be cached",83);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::collapseActionView_22332_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool expandActionView_IMPL_22331(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19842
bool Android_android_view_MenuItem::expandActionView_IMPL_22331(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::expandActionView_22331_ID(),"android/view/MenuItem","expandActionView","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.expandActionView could not be cached",81);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::expandActionView_22331_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getActionProvider_IMPL_22330(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19839
uObject* Android_android_view_MenuItem::getActionProvider_IMPL_22330(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getActionProvider_22330_ID(),"android/view/MenuItem","getActionProvider","()Landroid/view/ActionProvider;",GetMethodID,"Id for fallback method android.view.MenuItem.getActionProvider could not be cached",82);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getActionProvider_22330_ID()),result,::g::Android::Fallbacks::Android_android_view_ActionProvider_typeof(),::g::Android::android::view::ActionProvider*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getActionView_IMPL_22328(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19833
uObject* Android_android_view_MenuItem::getActionView_IMPL_22328(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getActionView_22328_ID(),"android/view/MenuItem","getActionView","()Landroid/view/View;",GetMethodID,"Id for fallback method android.view.MenuItem.getActionView could not be cached",78);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getActionView_22328_ID()),result,::g::Android::android::view::View_typeof(),::g::Android::android::view::View*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern char getAlphabeticShortcut_IMPL_22311(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19782
uChar Android_android_view_MenuItem::getAlphabeticShortcut_IMPL_22311(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getAlphabeticShortcut_22311_ID(),"android/view/MenuItem","getAlphabeticShortcut","()C",GetMethodID,"Id for fallback method android.view.MenuItem.getAlphabeticShortcut could not be cached",86);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_android_view_MenuItem::getAlphabeticShortcut_22311_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getGroupId_IMPL_22295(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19734
int Android_android_view_MenuItem::getGroupId_IMPL_22295(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getGroupId_22295_ID(),"android/view/MenuItem","getGroupId","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getGroupId could not be cached",75);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_MenuItem::getGroupId_22295_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getIcon_IMPL_22304(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19761
uObject* Android_android_view_MenuItem::getIcon_IMPL_22304(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getIcon_22304_ID(),"android/view/MenuItem","getIcon","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.view.MenuItem.getIcon could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getIcon_22304_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getIntent_IMPL_22306(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19767
uObject* Android_android_view_MenuItem::getIntent_IMPL_22306(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getIntent_22306_ID(),"android/view/MenuItem","getIntent","()Landroid/content/Intent;",GetMethodID,"Id for fallback method android.view.MenuItem.getIntent could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getIntent_22306_ID()),result,::g::Android::android::content::Intent_typeof(),::g::Android::android::content::Intent*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getItemId_IMPL_22294(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19731
int Android_android_view_MenuItem::getItemId_IMPL_22294(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getItemId_22294_ID(),"android/view/MenuItem","getItemId","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getItemId could not be cached",74);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_MenuItem::getItemId_22294_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getMenuInfo_IMPL_22323(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19818
uObject* Android_android_view_MenuItem::getMenuInfo_IMPL_22323(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getMenuInfo_22323_ID(),"android/view/MenuItem","getMenuInfo","()Landroid/view/ContextMenu$ContextMenuInfo;",GetMethodID,"Id for fallback method android.view.MenuItem.getMenuInfo could not be cached",76);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getMenuInfo_22323_ID()),result,::g::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern char getNumericShortcut_IMPL_22309(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19776
uChar Android_android_view_MenuItem::getNumericShortcut_IMPL_22309(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getNumericShortcut_22309_ID(),"android/view/MenuItem","getNumericShortcut","()C",GetMethodID,"Id for fallback method android.view.MenuItem.getNumericShortcut could not be cached",83);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_android_view_MenuItem::getNumericShortcut_22309_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getOrder_IMPL_22296(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19737
int Android_android_view_MenuItem::getOrder_IMPL_22296(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getOrder_22296_ID(),"android/view/MenuItem","getOrder","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getOrder could not be cached",73);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_MenuItem::getOrder_22296_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSubMenu_IMPL_22321(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19812
uObject* Android_android_view_MenuItem::getSubMenu_IMPL_22321(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getSubMenu_22321_ID(),"android/view/MenuItem","getSubMenu","()Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.MenuItem.getSubMenu could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getSubMenu_22321_ID()),result,::g::Android::Fallbacks::Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getTitle_IMPL_22299(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19746
uObject* Android_android_view_MenuItem::getTitle_IMPL_22299(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getTitle_22299_ID(),"android/view/MenuItem","getTitle","()Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.MenuItem.getTitle could not be cached",73);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getTitle_22299_ID()),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getTitleCondensed_IMPL_22301(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19752
uObject* Android_android_view_MenuItem::getTitleCondensed_IMPL_22301(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::getTitleCondensed_22301_ID(),"android/view/MenuItem","getTitleCondensed","()Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.MenuItem.getTitleCondensed could not be cached",82);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::getTitleCondensed_22301_ID()),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasSubMenu_IMPL_22320(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19809
bool Android_android_view_MenuItem::hasSubMenu_IMPL_22320(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::hasSubMenu_22320_ID(),"android/view/MenuItem","hasSubMenu","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.hasSubMenu could not be cached",75);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::hasSubMenu_22320_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isActionViewExpanded_IMPL_22333(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19848
bool Android_android_view_MenuItem::isActionViewExpanded_IMPL_22333(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isActionViewExpanded_22333_ID(),"android/view/MenuItem","isActionViewExpanded","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isActionViewExpanded could not be cached",85);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isActionViewExpanded_22333_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isCheckable_IMPL_22313(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19788
bool Android_android_view_MenuItem::isCheckable_IMPL_22313(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isCheckable_22313_ID(),"android/view/MenuItem","isCheckable","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isCheckable could not be cached",76);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isCheckable_22313_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isChecked_IMPL_22315(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19794
bool Android_android_view_MenuItem::isChecked_IMPL_22315(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isChecked_22315_ID(),"android/view/MenuItem","isChecked","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isChecked could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isChecked_22315_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isEnabled_IMPL_22319(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19806
bool Android_android_view_MenuItem::isEnabled_IMPL_22319(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isEnabled_22319_ID(),"android/view/MenuItem","isEnabled","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isEnabled could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isEnabled_22319_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isVisible_IMPL_22317(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :19800
bool Android_android_view_MenuItem::isVisible_IMPL_22317(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::isVisible_22317_ID(),"android/view/MenuItem","isVisible","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isVisible could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItem::isVisible_22317_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setActionProvider_IMPL_22329(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19836
uObject* Android_android_view_MenuItem::setActionProvider_IMPL_22329(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setActionProvider_22329_ID(),"android/view/MenuItem","setActionProvider","(Landroid/view/ActionProvider;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionProvider could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setActionProvider_22329_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setActionView_IMPL_22326(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19827
uObject* Android_android_view_MenuItem::setActionView_IMPL_22326(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setActionView_22326_ID(),"android/view/MenuItem","setActionView","(Landroid/view/View;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionView could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setActionView_22326_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setActionView_IMPL_22327(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19830
uObject* Android_android_view_MenuItem::setActionView_IMPL_22327(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setActionView_22327_ID(),"android/view/MenuItem","setActionView","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionView could not be cached",78);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setActionView_22327_ID(), ((jint)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setAlphabeticShortcut_IMPL_22310(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) [static] :19779
uObject* Android_android_view_MenuItem::setAlphabeticShortcut_IMPL_22310(bool arg0_, jobject arg1_, uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setAlphabeticShortcut_22310_ID(),"android/view/MenuItem","setAlphabeticShortcut","(C)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setAlphabeticShortcut could not be cached",86);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setAlphabeticShortcut_22310_ID(), ((jchar)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setCheckable_IMPL_22312(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19785
uObject* Android_android_view_MenuItem::setCheckable_IMPL_22312(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setCheckable_22312_ID(),"android/view/MenuItem","setCheckable","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setCheckable could not be cached",77);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setCheckable_22312_ID(), ((jboolean)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setChecked_IMPL_22314(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19791
uObject* Android_android_view_MenuItem::setChecked_IMPL_22314(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setChecked_22314_ID(),"android/view/MenuItem","setChecked","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setChecked could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setChecked_22314_ID(), ((jboolean)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setEnabled_IMPL_22318(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19803
uObject* Android_android_view_MenuItem::setEnabled_IMPL_22318(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setEnabled_22318_ID(),"android/view/MenuItem","setEnabled","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setEnabled could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setEnabled_22318_ID(), ((jboolean)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22302(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19755
uObject* Android_android_view_MenuItem::setIcon_IMPL_22302(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setIcon_22302_ID(),"android/view/MenuItem","setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIcon could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setIcon_22302_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22303(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19758
uObject* Android_android_view_MenuItem::setIcon_IMPL_22303(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setIcon_22303_ID(),"android/view/MenuItem","setIcon","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIcon could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setIcon_22303_ID(), ((jint)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIntent_IMPL_22305(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19764
uObject* Android_android_view_MenuItem::setIntent_IMPL_22305(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setIntent_22305_ID(),"android/view/MenuItem","setIntent","(Landroid/content/Intent;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIntent could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setIntent_22305_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setNumericShortcut_IMPL_22308(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2) [static] :19773
uObject* Android_android_view_MenuItem::setNumericShortcut_IMPL_22308(bool arg0_, jobject arg1_, uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setNumericShortcut_22308_ID(),"android/view/MenuItem","setNumericShortcut","(C)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setNumericShortcut could not be cached",83);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setNumericShortcut_22308_ID(), ((jchar)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setOnActionExpandListener_IMPL_22334(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19851
uObject* Android_android_view_MenuItem::setOnActionExpandListener_IMPL_22334(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setOnActionExpandListener_22334_ID(),"android/view/MenuItem","setOnActionExpandListener","(Landroid/view/MenuItem$OnActionExpandListener;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setOnActionExpandListener could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setOnActionExpandListener_22334_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setOnMenuItemClickListener_IMPL_22322(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19815
uObject* Android_android_view_MenuItem::setOnMenuItemClickListener_IMPL_22322(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setOnMenuItemClickListener_22322_ID(),"android/view/MenuItem","setOnMenuItemClickListener","(Landroid/view/MenuItem$OnMenuItemClickListener;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setOnMenuItemClickListener could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setOnMenuItemClickListener_22322_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setShortcut_IMPL_22307(bool arg0, Android.Base.Primitives.ujobject arg1, char arg2, char arg3) [static] :19770
uObject* Android_android_view_MenuItem::setShortcut_IMPL_22307(bool arg0_, jobject arg1_, uChar arg2_, uChar arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setShortcut_22307_ID(),"android/view/MenuItem","setShortcut","(CC)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setShortcut could not be cached",76);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setShortcut_22307_ID(), ((jchar)arg2_), ((jchar)arg3_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void setShowAsAction_IMPL_22324(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19821
void Android_android_view_MenuItem::setShowAsAction_IMPL_22324(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setShowAsAction_22324_ID(),"android/view/MenuItem","setShowAsAction","(I)V",GetMethodID,"Id for fallback method android.view.MenuItem.setShowAsAction could not be cached",80);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_MenuItem::setShowAsAction_22324_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper setShowAsActionFlags_IMPL_22325(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19824
uObject* Android_android_view_MenuItem::setShowAsActionFlags_IMPL_22325(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setShowAsActionFlags_22325_ID(),"android/view/MenuItem","setShowAsActionFlags","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setShowAsActionFlags could not be cached",85);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setShowAsActionFlags_22325_ID(), ((jint)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setTitle_IMPL_22297(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19740
uObject* Android_android_view_MenuItem::setTitle_IMPL_22297(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setTitle_22297_ID(),"android/view/MenuItem","setTitle","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitle could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setTitle_22297_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setTitle_IMPL_22298(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :19743
uObject* Android_android_view_MenuItem::setTitle_IMPL_22298(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setTitle_22298_ID(),"android/view/MenuItem","setTitle","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitle could not be cached",73);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setTitle_22298_ID(), ((jint)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setTitleCondensed_IMPL_22300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19749
uObject* Android_android_view_MenuItem::setTitleCondensed_IMPL_22300(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setTitleCondensed_22300_ID(),"android/view/MenuItem","setTitleCondensed","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitleCondensed could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setTitleCondensed_22300_ID(), _obArg2),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setVisible_IMPL_22316(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :19797
uObject* Android_android_view_MenuItem::setVisible_IMPL_22316(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItem::setVisible_22316_ID(),"android/view/MenuItem","setVisible","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setVisible could not be cached",75);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_MenuItem::setVisible_22316_ID(), ((jboolean)arg2_)),result,Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_view_MenuItemDLROnActionExpandListener :19461
// {
static void Android_android_view_MenuItemDLROnActionExpandListener_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener_type, interface1),
        ::g::Android::android::view::MenuItemDLROnActionExpandListener_typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_22292_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_22291_ID_, uFieldFlagsStatic);
}

Android_android_view_MenuItemDLROnActionExpandListener_type* Android_android_view_MenuItemDLROnActionExpandListener_typeof()
{
    static uSStrong<Android_android_view_MenuItemDLROnActionExpandListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_MenuItemDLROnActionExpandListener);
    options.TypeSize = sizeof(Android_android_view_MenuItemDLROnActionExpandListener_type);
    type = (Android_android_view_MenuItemDLROnActionExpandListener_type*)uClassType::New("Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_android_view_MenuItemDLROnActionExpandListener_build;
    type->interface2.fp_onMenuItemActionExpand = (void(*)(uObject*, uObject*, bool*))Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_fn;
    type->interface2.fp_onMenuItemActionCollapse = (void(*)(uObject*, uObject*, bool*))Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public bool onMenuItemActionCollapse(Android.android.view.MenuItem arg0) :19469
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_fn(Android_android_view_MenuItemDLROnActionExpandListener* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->onMenuItemActionCollapse(arg0);
}

// public static extern bool onMenuItemActionCollapse_IMPL_22292(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19479
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_IMPL_22292(*arg0_, *arg1_, arg2_);
}

// public bool onMenuItemActionExpand(Android.android.view.MenuItem arg0) :19464
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_fn(Android_android_view_MenuItemDLROnActionExpandListener* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->onMenuItemActionExpand(arg0);
}

// public static extern bool onMenuItemActionExpand_IMPL_22291(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19476
void Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_IMPL_22291(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_22292_ID_;
jmethodID Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_22291_ID_;

// public bool onMenuItemActionCollapse(Android.android.view.MenuItem arg0) [instance] :19469
bool Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse(uObject* arg0)
{
    return Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_IMPL_22292(_subclassed, _javaObject, arg0);
}

// public bool onMenuItemActionExpand(Android.android.view.MenuItem arg0) [instance] :19464
bool Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand(uObject* arg0)
{
    return Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_IMPL_22291(_subclassed, _javaObject, arg0);
}

// public static extern bool onMenuItemActionCollapse_IMPL_22292(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19479
bool Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_IMPL_22292(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_22292_ID(),"android/view/MenuItem$OnActionExpandListener","onMenuItemActionCollapse","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnActionExpandListener.onMenuItemActionCollapse could not be cached",112);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionCollapse_22292_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onMenuItemActionExpand_IMPL_22291(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19476
bool Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_IMPL_22291(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_22291_ID(),"android/view/MenuItem$OnActionExpandListener","onMenuItemActionExpand","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnActionExpandListener.onMenuItemActionExpand could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItemDLROnActionExpandListener::onMenuItemActionExpand_22291_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_view_MenuItemDLROnMenuItemClickListener :19495
// {
static void Android_android_view_MenuItemDLROnMenuItemClickListener_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener_type, interface1),
        ::g::Android::android::view::MenuItemDLROnMenuItemClickListener_typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_22293_ID_, uFieldFlagsStatic);
}

Android_android_view_MenuItemDLROnMenuItemClickListener_type* Android_android_view_MenuItemDLROnMenuItemClickListener_typeof()
{
    static uSStrong<Android_android_view_MenuItemDLROnMenuItemClickListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_android_view_MenuItemDLROnMenuItemClickListener);
    options.TypeSize = sizeof(Android_android_view_MenuItemDLROnMenuItemClickListener_type);
    type = (Android_android_view_MenuItemDLROnMenuItemClickListener_type*)uClassType::New("Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemClickListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_android_view_MenuItemDLROnMenuItemClickListener_build;
    type->interface2.fp_onMenuItemClick = (void(*)(uObject*, uObject*, bool*))Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public bool onMenuItemClick(Android.android.view.MenuItem arg0) :19498
void Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_fn(Android_android_view_MenuItemDLROnMenuItemClickListener* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->onMenuItemClick(arg0);
}

// public static extern bool onMenuItemClick_IMPL_22293(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :19505
void Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_IMPL_22293(*arg0_, *arg1_, arg2_);
}

jmethodID Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_22293_ID_;

// public bool onMenuItemClick(Android.android.view.MenuItem arg0) [instance] :19498
bool Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick(uObject* arg0)
{
    return Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_IMPL_22293(_subclassed, _javaObject, arg0);
}

// public static extern bool onMenuItemClick_IMPL_22293(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :19505
bool Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_IMPL_22293(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_22293_ID(),"android/view/MenuItem$OnMenuItemClickListener","onMenuItemClick","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnMenuItemClickListener.onMenuItemClick could not be cached",104);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_MenuItemDLROnMenuItemClickListener::onMenuItemClick_22293_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_android_view_SubMenu :19909
// {
static void Android_android_view_SubMenu_build(uType* type)
{
    ::TYPES[2] = ::g::Android::android::view::MenuItem_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[3] = ::g::Android::android::view::SubMenu_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_android_view_SubMenu_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_android_view_SubMenu_type, interface1),
        ::g::Android::android::view::SubMenu_typeof(), offsetof(Android_android_view_SubMenu_type, interface2),
        ::g::Android::android::view::Menu_typeof(), offsetof(Android_android_view_SubMenu_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::add_22256_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::add_22257_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::add_22258_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::add_22259_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addIntentOptions_22264_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addSubMenu_22260_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addSubMenu_22261_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addSubMenu_22262_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::addSubMenu_22263_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::clear_22267_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::clearHeader_22582_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::close_22275_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::findItem_22272_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::getItem_22274_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::getItem_22585_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::hasVisibleItems_22271_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::isShortcutKey_22277_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::performIdentifierAction_22278_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::performShortcut_22276_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::removeGroup_22266_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::removeItem_22265_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setGroupCheckable_22268_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setGroupEnabled_22270_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setGroupVisible_22269_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderIcon_22579_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderIcon_22580_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderTitle_22577_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderTitle_22578_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setHeaderView_22581_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setIcon_22583_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setIcon_22584_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::setQwertyMode_22279_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_android_view_SubMenu::size_22273_ID_, uFieldFlagsStatic);
}

Android_android_view_SubMenu_type* Android_android_view_SubMenu_typeof()
{
    static uSStrong<Android_android_view_SubMenu_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 38;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_android_view_SubMenu);
    options.TypeSize = sizeof(Android_android_view_SubMenu_type);
    type = (Android_android_view_SubMenu_type*)uClassType::New("Android.Fallbacks.Android_android_view_SubMenu", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_android_view_SubMenu_build;
    type->interface2.fp_setHeaderTitle1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__setHeaderTitle1_fn;
    type->interface2.fp_setHeaderTitle = (void(*)(uObject*, uObject*, uObject**))Android_android_view_SubMenu__setHeaderTitle_fn;
    type->interface2.fp_setHeaderIcon1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__setHeaderIcon1_fn;
    type->interface2.fp_setHeaderIcon = (void(*)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**))Android_android_view_SubMenu__setHeaderIcon_fn;
    type->interface2.fp_setHeaderView = (void(*)(uObject*, ::g::Android::android::view::View*, uObject**))Android_android_view_SubMenu__setHeaderView_fn;
    type->interface2.fp_clearHeader = (void(*)(uObject*))Android_android_view_SubMenu__clearHeader_fn;
    type->interface2.fp_setIcon1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__setIcon1_fn;
    type->interface2.fp_setIcon = (void(*)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**))Android_android_view_SubMenu__setIcon_fn;
    type->interface2.fp_getItem = (void(*)(uObject*, uObject**))Android_android_view_SubMenu__getItem_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_add = (void(*)(uObject*, uObject*, uObject**))Android_android_view_SubMenu__add_fn;
    type->interface3.fp_add1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__add1_fn;
    type->interface3.fp_add2 = (void(*)(uObject*, int*, int*, int*, uObject*, uObject**))Android_android_view_SubMenu__add2_fn;
    type->interface3.fp_add3 = (void(*)(uObject*, int*, int*, int*, int*, uObject**))Android_android_view_SubMenu__add3_fn;
    type->interface3.fp_addSubMenu = (void(*)(uObject*, uObject*, uObject**))Android_android_view_SubMenu__addSubMenu_fn;
    type->interface3.fp_addSubMenu1 = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__addSubMenu1_fn;
    type->interface3.fp_addSubMenu2 = (void(*)(uObject*, int*, int*, int*, uObject*, uObject**))Android_android_view_SubMenu__addSubMenu2_fn;
    type->interface3.fp_addSubMenu3 = (void(*)(uObject*, int*, int*, int*, int*, uObject**))Android_android_view_SubMenu__addSubMenu3_fn;
    type->interface3.fp_addIntentOptions = (void(*)(uObject*, int*, int*, int*, ::g::Android::android::content::ComponentName*, ::g::Android::Runtime::ObjectArray*, ::g::Android::android::content::Intent*, int*, ::g::Android::Runtime::ObjectArray*, int*))Android_android_view_SubMenu__addIntentOptions_fn;
    type->interface3.fp_removeItem = (void(*)(uObject*, int*))Android_android_view_SubMenu__removeItem_fn;
    type->interface3.fp_removeGroup = (void(*)(uObject*, int*))Android_android_view_SubMenu__removeGroup_fn;
    type->interface3.fp_clear = (void(*)(uObject*))Android_android_view_SubMenu__clear_fn;
    type->interface3.fp_setGroupCheckable = (void(*)(uObject*, int*, bool*, bool*))Android_android_view_SubMenu__setGroupCheckable_fn;
    type->interface3.fp_setGroupVisible = (void(*)(uObject*, int*, bool*))Android_android_view_SubMenu__setGroupVisible_fn;
    type->interface3.fp_setGroupEnabled = (void(*)(uObject*, int*, bool*))Android_android_view_SubMenu__setGroupEnabled_fn;
    type->interface3.fp_hasVisibleItems = (void(*)(uObject*, bool*))Android_android_view_SubMenu__hasVisibleItems_fn;
    type->interface3.fp_findItem = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__findItem_fn;
    type->interface3.fp_size = (void(*)(uObject*, int*))Android_android_view_SubMenu__size_fn;
    type->interface3.fp_getItem = (void(*)(uObject*, int*, uObject**))Android_android_view_SubMenu__getItem1_fn;
    type->interface3.fp_close = (void(*)(uObject*))Android_android_view_SubMenu__close_fn;
    type->interface3.fp_performShortcut = (void(*)(uObject*, int*, ::g::Android::android::view::KeyEvent*, int*, bool*))Android_android_view_SubMenu__performShortcut_fn;
    type->interface3.fp_isShortcutKey = (void(*)(uObject*, int*, ::g::Android::android::view::KeyEvent*, bool*))Android_android_view_SubMenu__isShortcutKey_fn;
    type->interface3.fp_performIdentifierAction = (void(*)(uObject*, int*, int*, bool*))Android_android_view_SubMenu__performIdentifierAction_fn;
    type->interface3.fp_setQwertyMode = (void(*)(uObject*, bool*))Android_android_view_SubMenu__setQwertyMode_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public Android.android.view.MenuItem add(Android.java.lang.CharSequence arg0) :19957
void Android_android_view_SubMenu__add_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->add(arg0);
}

// public Android.android.view.MenuItem add(int arg0) :19962
void Android_android_view_SubMenu__add1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->add1(*arg0);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) :19967
void Android_android_view_SubMenu__add2_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval)
{
    *__retval = __this->add2(*arg0, *arg1, *arg2, arg3);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, int arg3) :19972
void Android_android_view_SubMenu__add3_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->add3(*arg0, *arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22256(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20106
void Android_android_view_SubMenu__add_IMPL_22256_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::add_IMPL_22256(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22257(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20109
void Android_android_view_SubMenu__add_IMPL_22257_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::add_IMPL_22257(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22258(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :20112
void Android_android_view_SubMenu__add_IMPL_22258_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::add_IMPL_22258(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22259(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :20115
void Android_android_view_SubMenu__add_IMPL_22259_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::add_IMPL_22259(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public int addIntentOptions(int arg0, int arg1, int arg2, Android.android.content.ComponentName arg3, Android.Runtime.ObjectArray<Android.android.content.Intent> arg4, Android.android.content.Intent arg5, int arg6, Android.Runtime.ObjectArray<Android.android.view.MenuItem> arg7) :19997
void Android_android_view_SubMenu__addIntentOptions_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int* arg6, ::g::Android::Runtime::ObjectArray* arg7, int* __retval)
{
    *__retval = __this->addIntentOptions(*arg0, *arg1, *arg2, arg3, arg4, arg5, *arg6, arg7);
}

// public static extern int addIntentOptions_IMPL_22264(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6, Android.Base.Wrappers.IJWrapper arg7, int arg8, Android.Base.Wrappers.IJWrapper arg9) :20130
void Android_android_view_SubMenu__addIntentOptions_IMPL_22264_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int* arg8_, uObject* arg9_, int* __retval)
{
    *__retval = Android_android_view_SubMenu::addIntentOptions_IMPL_22264(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_, arg6_, arg7_, *arg8_, arg9_);
}

// public Android.android.view.SubMenu addSubMenu(Android.java.lang.CharSequence arg0) :19977
void Android_android_view_SubMenu__addSubMenu_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->addSubMenu(arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0) :19982
void Android_android_view_SubMenu__addSubMenu1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->addSubMenu1(*arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) :19987
void Android_android_view_SubMenu__addSubMenu2_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, uObject* arg3, uObject** __retval)
{
    *__retval = __this->addSubMenu2(*arg0, *arg1, *arg2, arg3);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, int arg3) :19992
void Android_android_view_SubMenu__addSubMenu3_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, int* arg2, int* arg3, uObject** __retval)
{
    *__retval = __this->addSubMenu3(*arg0, *arg1, *arg2, *arg3);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22260(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20118
void Android_android_view_SubMenu__addSubMenu_IMPL_22260_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::addSubMenu_IMPL_22260(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22261(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20121
void Android_android_view_SubMenu__addSubMenu_IMPL_22261_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::addSubMenu_IMPL_22261(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22262(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) :20124
void Android_android_view_SubMenu__addSubMenu_IMPL_22262_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, uObject* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::addSubMenu_IMPL_22262(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, arg5_);
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22263(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :20127
void Android_android_view_SubMenu__addSubMenu_IMPL_22263_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::addSubMenu_IMPL_22263(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public void clear() :20012
void Android_android_view_SubMenu__clear_fn(Android_android_view_SubMenu* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_22267(bool arg0, Android.Base.Primitives.ujobject arg1) :20139
void Android_android_view_SubMenu__clear_IMPL_22267_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_SubMenu::clear_IMPL_22267(*arg0_, *arg1_);
}

// public void clearHeader() :19937
void Android_android_view_SubMenu__clearHeader_fn(Android_android_view_SubMenu* __this)
{
    __this->clearHeader();
}

// public static extern void clearHeader_IMPL_22582(bool arg0, Android.Base.Primitives.ujobject arg1) :20094
void Android_android_view_SubMenu__clearHeader_IMPL_22582_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_SubMenu::clearHeader_IMPL_22582(*arg0_, *arg1_);
}

// public void close() :20052
void Android_android_view_SubMenu__close_fn(Android_android_view_SubMenu* __this)
{
    __this->close();
}

// public static extern void close_IMPL_22275(bool arg0, Android.Base.Primitives.ujobject arg1) :20163
void Android_android_view_SubMenu__close_IMPL_22275_fn(bool* arg0_, jobject* arg1_)
{
    Android_android_view_SubMenu::close_IMPL_22275(*arg0_, *arg1_);
}

// public Android.android.view.MenuItem findItem(int arg0) :20037
void Android_android_view_SubMenu__findItem_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->findItem(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper findItem_IMPL_22272(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20154
void Android_android_view_SubMenu__findItem_IMPL_22272_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::findItem_IMPL_22272(*arg0_, *arg1_, *arg2_);
}

// public Android.android.view.MenuItem getItem() :19952
void Android_android_view_SubMenu__getItem_fn(Android_android_view_SubMenu* __this, uObject** __retval)
{
    *__retval = __this->getItem();
}

// public Android.android.view.MenuItem getItem(int arg0) :20047
void Android_android_view_SubMenu__getItem1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->getItem1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22274(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20160
void Android_android_view_SubMenu__getItem_IMPL_22274_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::getItem_IMPL_22274(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22585(bool arg0, Android.Base.Primitives.ujobject arg1) :20103
void Android_android_view_SubMenu__getItem_IMPL_22585_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::getItem_IMPL_22585(*arg0_, *arg1_);
}

// public bool hasVisibleItems() :20032
void Android_android_view_SubMenu__hasVisibleItems_fn(Android_android_view_SubMenu* __this, bool* __retval)
{
    *__retval = __this->hasVisibleItems();
}

// public static extern bool hasVisibleItems_IMPL_22271(bool arg0, Android.Base.Primitives.ujobject arg1) :20151
void Android_android_view_SubMenu__hasVisibleItems_IMPL_22271_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_android_view_SubMenu::hasVisibleItems_IMPL_22271(*arg0_, *arg1_);
}

// public bool isShortcutKey(int arg0, Android.android.view.KeyEvent arg1) :20062
void Android_android_view_SubMenu__isShortcutKey_fn(Android_android_view_SubMenu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    *__retval = __this->isShortcutKey(*arg0, arg1);
}

// public static extern bool isShortcutKey_IMPL_22277(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :20169
void Android_android_view_SubMenu__isShortcutKey_IMPL_22277_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = Android_android_view_SubMenu::isShortcutKey_IMPL_22277(*arg0_, *arg1_, *arg2_, arg3_);
}

// public bool performIdentifierAction(int arg0, int arg1) :20067
void Android_android_view_SubMenu__performIdentifierAction_fn(Android_android_view_SubMenu* __this, int* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->performIdentifierAction(*arg0, *arg1);
}

// public static extern bool performIdentifierAction_IMPL_22278(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :20172
void Android_android_view_SubMenu__performIdentifierAction_IMPL_22278_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval)
{
    *__retval = Android_android_view_SubMenu::performIdentifierAction_IMPL_22278(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public bool performShortcut(int arg0, Android.android.view.KeyEvent arg1, int arg2) :20057
void Android_android_view_SubMenu__performShortcut_fn(Android_android_view_SubMenu* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, int* arg2, bool* __retval)
{
    *__retval = __this->performShortcut(*arg0, arg1, *arg2);
}

// public static extern bool performShortcut_IMPL_22276(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :20166
void Android_android_view_SubMenu__performShortcut_IMPL_22276_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, int* arg4_, bool* __retval)
{
    *__retval = Android_android_view_SubMenu::performShortcut_IMPL_22276(*arg0_, *arg1_, *arg2_, arg3_, *arg4_);
}

// public void removeGroup(int arg0) :20007
void Android_android_view_SubMenu__removeGroup_fn(Android_android_view_SubMenu* __this, int* arg0)
{
    __this->removeGroup(*arg0);
}

// public static extern void removeGroup_IMPL_22266(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20136
void Android_android_view_SubMenu__removeGroup_IMPL_22266_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_SubMenu::removeGroup_IMPL_22266(*arg0_, *arg1_, *arg2_);
}

// public void removeItem(int arg0) :20002
void Android_android_view_SubMenu__removeItem_fn(Android_android_view_SubMenu* __this, int* arg0)
{
    __this->removeItem(*arg0);
}

// public static extern void removeItem_IMPL_22265(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20133
void Android_android_view_SubMenu__removeItem_IMPL_22265_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    Android_android_view_SubMenu::removeItem_IMPL_22265(*arg0_, *arg1_, *arg2_);
}

// public void setGroupCheckable(int arg0, bool arg1, bool arg2) :20017
void Android_android_view_SubMenu__setGroupCheckable_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1, bool* arg2)
{
    __this->setGroupCheckable(*arg0, *arg1, *arg2);
}

// public static extern void setGroupCheckable_IMPL_22268(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3, bool arg4) :20142
void Android_android_view_SubMenu__setGroupCheckable_IMPL_22268_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_, bool* arg4_)
{
    Android_android_view_SubMenu::setGroupCheckable_IMPL_22268(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_);
}

// public void setGroupEnabled(int arg0, bool arg1) :20027
void Android_android_view_SubMenu__setGroupEnabled_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1)
{
    __this->setGroupEnabled(*arg0, *arg1);
}

// public static extern void setGroupEnabled_IMPL_22270(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :20148
void Android_android_view_SubMenu__setGroupEnabled_IMPL_22270_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_)
{
    Android_android_view_SubMenu::setGroupEnabled_IMPL_22270(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setGroupVisible(int arg0, bool arg1) :20022
void Android_android_view_SubMenu__setGroupVisible_fn(Android_android_view_SubMenu* __this, int* arg0, bool* arg1)
{
    __this->setGroupVisible(*arg0, *arg1);
}

// public static extern void setGroupVisible_IMPL_22269(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) :20145
void Android_android_view_SubMenu__setGroupVisible_IMPL_22269_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_)
{
    Android_android_view_SubMenu::setGroupVisible_IMPL_22269(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public Android.android.view.SubMenu setHeaderIcon(Android.android.graphics.drawable.Drawable arg0) :19927
void Android_android_view_SubMenu__setHeaderIcon_fn(Android_android_view_SubMenu* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderIcon(arg0);
}

// public Android.android.view.SubMenu setHeaderIcon(int arg0) :19922
void Android_android_view_SubMenu__setHeaderIcon1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderIcon1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderIcon_IMPL_22579(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20085
void Android_android_view_SubMenu__setHeaderIcon_IMPL_22579_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderIcon_IMPL_22579(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderIcon_IMPL_22580(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20088
void Android_android_view_SubMenu__setHeaderIcon_IMPL_22580_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderIcon_IMPL_22580(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.SubMenu setHeaderTitle(Android.java.lang.CharSequence arg0) :19917
void Android_android_view_SubMenu__setHeaderTitle_fn(Android_android_view_SubMenu* __this, uObject* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderTitle(arg0);
}

// public Android.android.view.SubMenu setHeaderTitle(int arg0) :19912
void Android_android_view_SubMenu__setHeaderTitle1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderTitle1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderTitle_IMPL_22577(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20079
void Android_android_view_SubMenu__setHeaderTitle_IMPL_22577_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderTitle_IMPL_22577(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderTitle_IMPL_22578(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20082
void Android_android_view_SubMenu__setHeaderTitle_IMPL_22578_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderTitle_IMPL_22578(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.SubMenu setHeaderView(Android.android.view.View arg0) :19932
void Android_android_view_SubMenu__setHeaderView_fn(Android_android_view_SubMenu* __this, ::g::Android::android::view::View* arg0, uObject** __retval)
{
    *__retval = __this->setHeaderView(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderView_IMPL_22581(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20091
void Android_android_view_SubMenu__setHeaderView_IMPL_22581_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setHeaderView_IMPL_22581(*arg0_, *arg1_, arg2_);
}

// public Android.android.view.SubMenu setIcon(Android.android.graphics.drawable.Drawable arg0) :19947
void Android_android_view_SubMenu__setIcon_fn(Android_android_view_SubMenu* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject** __retval)
{
    *__retval = __this->setIcon(arg0);
}

// public Android.android.view.SubMenu setIcon(int arg0) :19942
void Android_android_view_SubMenu__setIcon1_fn(Android_android_view_SubMenu* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->setIcon1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22583(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :20097
void Android_android_view_SubMenu__setIcon_IMPL_22583_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setIcon_IMPL_22583(*arg0_, *arg1_, *arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22584(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :20100
void Android_android_view_SubMenu__setIcon_IMPL_22584_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_android_view_SubMenu::setIcon_IMPL_22584(*arg0_, *arg1_, arg2_);
}

// public void setQwertyMode(bool arg0) :20072
void Android_android_view_SubMenu__setQwertyMode_fn(Android_android_view_SubMenu* __this, bool* arg0)
{
    __this->setQwertyMode(*arg0);
}

// public static extern void setQwertyMode_IMPL_22279(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :20175
void Android_android_view_SubMenu__setQwertyMode_IMPL_22279_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    Android_android_view_SubMenu::setQwertyMode_IMPL_22279(*arg0_, *arg1_, *arg2_);
}

// public int size() :20042
void Android_android_view_SubMenu__size_fn(Android_android_view_SubMenu* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_22273(bool arg0, Android.Base.Primitives.ujobject arg1) :20157
void Android_android_view_SubMenu__size_IMPL_22273_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_android_view_SubMenu::size_IMPL_22273(*arg0_, *arg1_);
}

jmethodID Android_android_view_SubMenu::add_22256_ID_;
jmethodID Android_android_view_SubMenu::add_22257_ID_;
jmethodID Android_android_view_SubMenu::add_22258_ID_;
jmethodID Android_android_view_SubMenu::add_22259_ID_;
jmethodID Android_android_view_SubMenu::addIntentOptions_22264_ID_;
jmethodID Android_android_view_SubMenu::addSubMenu_22260_ID_;
jmethodID Android_android_view_SubMenu::addSubMenu_22261_ID_;
jmethodID Android_android_view_SubMenu::addSubMenu_22262_ID_;
jmethodID Android_android_view_SubMenu::addSubMenu_22263_ID_;
jmethodID Android_android_view_SubMenu::clear_22267_ID_;
jmethodID Android_android_view_SubMenu::clearHeader_22582_ID_;
jmethodID Android_android_view_SubMenu::close_22275_ID_;
jmethodID Android_android_view_SubMenu::findItem_22272_ID_;
jmethodID Android_android_view_SubMenu::getItem_22274_ID_;
jmethodID Android_android_view_SubMenu::getItem_22585_ID_;
jmethodID Android_android_view_SubMenu::hasVisibleItems_22271_ID_;
jmethodID Android_android_view_SubMenu::isShortcutKey_22277_ID_;
jmethodID Android_android_view_SubMenu::performIdentifierAction_22278_ID_;
jmethodID Android_android_view_SubMenu::performShortcut_22276_ID_;
jmethodID Android_android_view_SubMenu::removeGroup_22266_ID_;
jmethodID Android_android_view_SubMenu::removeItem_22265_ID_;
jmethodID Android_android_view_SubMenu::setGroupCheckable_22268_ID_;
jmethodID Android_android_view_SubMenu::setGroupEnabled_22270_ID_;
jmethodID Android_android_view_SubMenu::setGroupVisible_22269_ID_;
jmethodID Android_android_view_SubMenu::setHeaderIcon_22579_ID_;
jmethodID Android_android_view_SubMenu::setHeaderIcon_22580_ID_;
jmethodID Android_android_view_SubMenu::setHeaderTitle_22577_ID_;
jmethodID Android_android_view_SubMenu::setHeaderTitle_22578_ID_;
jmethodID Android_android_view_SubMenu::setHeaderView_22581_ID_;
jmethodID Android_android_view_SubMenu::setIcon_22583_ID_;
jmethodID Android_android_view_SubMenu::setIcon_22584_ID_;
jmethodID Android_android_view_SubMenu::setQwertyMode_22279_ID_;
jmethodID Android_android_view_SubMenu::size_22273_ID_;

// public Android.android.view.MenuItem add(Android.java.lang.CharSequence arg0) [instance] :19957
uObject* Android_android_view_SubMenu::add(uObject* arg0)
{
    return Android_android_view_SubMenu::add_IMPL_22256(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem add(int arg0) [instance] :19962
uObject* Android_android_view_SubMenu::add1(int arg0)
{
    return Android_android_view_SubMenu::add_IMPL_22257(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) [instance] :19967
uObject* Android_android_view_SubMenu::add2(int arg0, int arg1, int arg2, uObject* arg3)
{
    return Android_android_view_SubMenu::add_IMPL_22258(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.view.MenuItem add(int arg0, int arg1, int arg2, int arg3) [instance] :19972
uObject* Android_android_view_SubMenu::add3(int arg0, int arg1, int arg2, int arg3)
{
    return Android_android_view_SubMenu::add_IMPL_22259(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public int addIntentOptions(int arg0, int arg1, int arg2, Android.android.content.ComponentName arg3, Android.Runtime.ObjectArray<Android.android.content.Intent> arg4, Android.android.content.Intent arg5, int arg6, Android.Runtime.ObjectArray<Android.android.view.MenuItem> arg7) [instance] :19997
int Android_android_view_SubMenu::addIntentOptions(int arg0, int arg1, int arg2, ::g::Android::android::content::ComponentName* arg3, ::g::Android::Runtime::ObjectArray* arg4, ::g::Android::android::content::Intent* arg5, int arg6, ::g::Android::Runtime::ObjectArray* arg7)
{
    return Android_android_view_SubMenu::addIntentOptions_IMPL_22264(_subclassed, _javaObject, arg0, arg1, arg2, (uObject*)arg3, (uObject*)arg4, (uObject*)arg5, arg6, (uObject*)arg7);
}

// public Android.android.view.SubMenu addSubMenu(Android.java.lang.CharSequence arg0) [instance] :19977
uObject* Android_android_view_SubMenu::addSubMenu(uObject* arg0)
{
    return Android_android_view_SubMenu::addSubMenu_IMPL_22260(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0) [instance] :19982
uObject* Android_android_view_SubMenu::addSubMenu1(int arg0)
{
    return Android_android_view_SubMenu::addSubMenu_IMPL_22261(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, Android.java.lang.CharSequence arg3) [instance] :19987
uObject* Android_android_view_SubMenu::addSubMenu2(int arg0, int arg1, int arg2, uObject* arg3)
{
    return Android_android_view_SubMenu::addSubMenu_IMPL_22262(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public Android.android.view.SubMenu addSubMenu(int arg0, int arg1, int arg2, int arg3) [instance] :19992
uObject* Android_android_view_SubMenu::addSubMenu3(int arg0, int arg1, int arg2, int arg3)
{
    return Android_android_view_SubMenu::addSubMenu_IMPL_22263(_subclassed, _javaObject, arg0, arg1, arg2, arg3);
}

// public void clear() [instance] :20012
void Android_android_view_SubMenu::clear()
{
    Android_android_view_SubMenu::clear_IMPL_22267(_subclassed, _javaObject);
}

// public void clearHeader() [instance] :19937
void Android_android_view_SubMenu::clearHeader()
{
    Android_android_view_SubMenu::clearHeader_IMPL_22582(_subclassed, _javaObject);
}

// public void close() [instance] :20052
void Android_android_view_SubMenu::close()
{
    Android_android_view_SubMenu::close_IMPL_22275(_subclassed, _javaObject);
}

// public Android.android.view.MenuItem findItem(int arg0) [instance] :20037
uObject* Android_android_view_SubMenu::findItem(int arg0)
{
    return Android_android_view_SubMenu::findItem_IMPL_22272(_subclassed, _javaObject, arg0);
}

// public Android.android.view.MenuItem getItem() [instance] :19952
uObject* Android_android_view_SubMenu::getItem()
{
    return Android_android_view_SubMenu::getItem_IMPL_22585(_subclassed, _javaObject);
}

// public Android.android.view.MenuItem getItem(int arg0) [instance] :20047
uObject* Android_android_view_SubMenu::getItem1(int arg0)
{
    return Android_android_view_SubMenu::getItem_IMPL_22274(_subclassed, _javaObject, arg0);
}

// public bool hasVisibleItems() [instance] :20032
bool Android_android_view_SubMenu::hasVisibleItems()
{
    return Android_android_view_SubMenu::hasVisibleItems_IMPL_22271(_subclassed, _javaObject);
}

// public bool isShortcutKey(int arg0, Android.android.view.KeyEvent arg1) [instance] :20062
bool Android_android_view_SubMenu::isShortcutKey(int arg0, ::g::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_SubMenu::isShortcutKey_IMPL_22277(_subclassed, _javaObject, arg0, (uObject*)arg1);
}

// public bool performIdentifierAction(int arg0, int arg1) [instance] :20067
bool Android_android_view_SubMenu::performIdentifierAction(int arg0, int arg1)
{
    return Android_android_view_SubMenu::performIdentifierAction_IMPL_22278(_subclassed, _javaObject, arg0, arg1);
}

// public bool performShortcut(int arg0, Android.android.view.KeyEvent arg1, int arg2) [instance] :20057
bool Android_android_view_SubMenu::performShortcut(int arg0, ::g::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_SubMenu::performShortcut_IMPL_22276(_subclassed, _javaObject, arg0, (uObject*)arg1, arg2);
}

// public void removeGroup(int arg0) [instance] :20007
void Android_android_view_SubMenu::removeGroup(int arg0)
{
    Android_android_view_SubMenu::removeGroup_IMPL_22266(_subclassed, _javaObject, arg0);
}

// public void removeItem(int arg0) [instance] :20002
void Android_android_view_SubMenu::removeItem(int arg0)
{
    Android_android_view_SubMenu::removeItem_IMPL_22265(_subclassed, _javaObject, arg0);
}

// public void setGroupCheckable(int arg0, bool arg1, bool arg2) [instance] :20017
void Android_android_view_SubMenu::setGroupCheckable(int arg0, bool arg1, bool arg2)
{
    Android_android_view_SubMenu::setGroupCheckable_IMPL_22268(_subclassed, _javaObject, arg0, arg1, arg2);
}

// public void setGroupEnabled(int arg0, bool arg1) [instance] :20027
void Android_android_view_SubMenu::setGroupEnabled(int arg0, bool arg1)
{
    Android_android_view_SubMenu::setGroupEnabled_IMPL_22270(_subclassed, _javaObject, arg0, arg1);
}

// public void setGroupVisible(int arg0, bool arg1) [instance] :20022
void Android_android_view_SubMenu::setGroupVisible(int arg0, bool arg1)
{
    Android_android_view_SubMenu::setGroupVisible_IMPL_22269(_subclassed, _javaObject, arg0, arg1);
}

// public Android.android.view.SubMenu setHeaderIcon(Android.android.graphics.drawable.Drawable arg0) [instance] :19927
uObject* Android_android_view_SubMenu::setHeaderIcon(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    return Android_android_view_SubMenu::setHeaderIcon_IMPL_22580(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.SubMenu setHeaderIcon(int arg0) [instance] :19922
uObject* Android_android_view_SubMenu::setHeaderIcon1(int arg0)
{
    return Android_android_view_SubMenu::setHeaderIcon_IMPL_22579(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu setHeaderTitle(Android.java.lang.CharSequence arg0) [instance] :19917
uObject* Android_android_view_SubMenu::setHeaderTitle(uObject* arg0)
{
    return Android_android_view_SubMenu::setHeaderTitle_IMPL_22578(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu setHeaderTitle(int arg0) [instance] :19912
uObject* Android_android_view_SubMenu::setHeaderTitle1(int arg0)
{
    return Android_android_view_SubMenu::setHeaderTitle_IMPL_22577(_subclassed, _javaObject, arg0);
}

// public Android.android.view.SubMenu setHeaderView(Android.android.view.View arg0) [instance] :19932
uObject* Android_android_view_SubMenu::setHeaderView(::g::Android::android::view::View* arg0)
{
    return Android_android_view_SubMenu::setHeaderView_IMPL_22581(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.SubMenu setIcon(Android.android.graphics.drawable.Drawable arg0) [instance] :19947
uObject* Android_android_view_SubMenu::setIcon(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    return Android_android_view_SubMenu::setIcon_IMPL_22584(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.android.view.SubMenu setIcon(int arg0) [instance] :19942
uObject* Android_android_view_SubMenu::setIcon1(int arg0)
{
    return Android_android_view_SubMenu::setIcon_IMPL_22583(_subclassed, _javaObject, arg0);
}

// public void setQwertyMode(bool arg0) [instance] :20072
void Android_android_view_SubMenu::setQwertyMode(bool arg0)
{
    Android_android_view_SubMenu::setQwertyMode_IMPL_22279(_subclassed, _javaObject, arg0);
}

// public int size() [instance] :20042
int Android_android_view_SubMenu::size()
{
    return Android_android_view_SubMenu::size_IMPL_22273(_subclassed, _javaObject);
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22256(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20106
uObject* Android_android_view_SubMenu::add_IMPL_22256(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::add_22256_ID(),"android/view/SubMenu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::add_22256_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22257(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20109
uObject* Android_android_view_SubMenu::add_IMPL_22257(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::add_22257_ID(),"android/view/SubMenu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::add_22257_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22258(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :20112
uObject* Android_android_view_SubMenu::add_IMPL_22258(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::add_22258_ID(),"android/view/SubMenu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::add_22258_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper add_IMPL_22259(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :20115
uObject* Android_android_view_SubMenu::add_IMPL_22259(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::add_22259_ID(),"android/view/SubMenu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::add_22259_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int addIntentOptions_IMPL_22264(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6, Android.Base.Wrappers.IJWrapper arg7, int arg8, Android.Base.Wrappers.IJWrapper arg9) [static] :20130
int Android_android_view_SubMenu::addIntentOptions_IMPL_22264(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_, uObject* arg6_, uObject* arg7_, int arg8_, uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addIntentOptions_22264_ID(),"android/view/SubMenu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.SubMenu.addIntentOptions could not be cached",80);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg6 = ((!arg6_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg6_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg7 = ((!arg7_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg7_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg9 = ((!arg9_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg9_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_SubMenu::addIntentOptions_22264_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22260(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20118
uObject* Android_android_view_SubMenu::addSubMenu_IMPL_22260(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addSubMenu_22260_ID(),"android/view/SubMenu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::addSubMenu_22260_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22261(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20121
uObject* Android_android_view_SubMenu::addSubMenu_IMPL_22261(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addSubMenu_22261_ID(),"android/view/SubMenu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::addSubMenu_22261_ID(), ((jint)arg2_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22262(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :20124
uObject* Android_android_view_SubMenu::addSubMenu_IMPL_22262(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addSubMenu_22262_ID(),"android/view/SubMenu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::addSubMenu_22262_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper addSubMenu_IMPL_22263(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :20127
uObject* Android_android_view_SubMenu::addSubMenu_IMPL_22263(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::addSubMenu_22263_ID(),"android/view/SubMenu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::addSubMenu_22263_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_22267(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20139
void Android_android_view_SubMenu::clear_IMPL_22267(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::clear_22267_ID(),"android/view/SubMenu","clear","()V",GetMethodID,"Id for fallback method android.view.SubMenu.clear could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::clear_22267_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void clearHeader_IMPL_22582(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20094
void Android_android_view_SubMenu::clearHeader_IMPL_22582(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::clearHeader_22582_ID(),"android/view/SubMenu","clearHeader","()V",GetMethodID,"Id for fallback method android.view.SubMenu.clearHeader could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::clearHeader_22582_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void close_IMPL_22275(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20163
void Android_android_view_SubMenu::close_IMPL_22275(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::close_22275_ID(),"android/view/SubMenu","close","()V",GetMethodID,"Id for fallback method android.view.SubMenu.close could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::close_22275_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper findItem_IMPL_22272(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20154
uObject* Android_android_view_SubMenu::findItem_IMPL_22272(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::findItem_22272_ID(),"android/view/SubMenu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.findItem could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::findItem_22272_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22274(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20160
uObject* Android_android_view_SubMenu::getItem_IMPL_22274(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::getItem_22274_ID(),"android/view/SubMenu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.getItem could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::getItem_22274_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getItem_IMPL_22585(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20103
uObject* Android_android_view_SubMenu::getItem_IMPL_22585(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::getItem_22585_ID(),"android/view/SubMenu","getItem","()Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.getItem could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::getItem_22585_ID()),result,::g::Android::Fallbacks::Android_android_view_MenuItem_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasVisibleItems_IMPL_22271(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20151
bool Android_android_view_SubMenu::hasVisibleItems_IMPL_22271(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::hasVisibleItems_22271_ID(),"android/view/SubMenu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.SubMenu.hasVisibleItems could not be cached",79);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SubMenu::hasVisibleItems_22271_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isShortcutKey_IMPL_22277(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :20169
bool Android_android_view_SubMenu::isShortcutKey_IMPL_22277(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::isShortcutKey_22277_ID(),"android/view/SubMenu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.SubMenu.isShortcutKey could not be cached",77);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SubMenu::isShortcutKey_22277_ID(), ((jint)arg2_), _obArg3));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performIdentifierAction_IMPL_22278(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :20172
bool Android_android_view_SubMenu::performIdentifierAction_IMPL_22278(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::performIdentifierAction_22278_ID(),"android/view/SubMenu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.SubMenu.performIdentifierAction could not be cached",87);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SubMenu::performIdentifierAction_22278_ID(), ((jint)arg2_), ((jint)arg3_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performShortcut_IMPL_22276(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :20166
bool Android_android_view_SubMenu::performShortcut_IMPL_22276(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::performShortcut_22276_ID(),"android/view/SubMenu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.SubMenu.performShortcut could not be cached",79);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_android_view_SubMenu::performShortcut_22276_ID(), ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeGroup_IMPL_22266(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20136
void Android_android_view_SubMenu::removeGroup_IMPL_22266(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::removeGroup_22266_ID(),"android/view/SubMenu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.SubMenu.removeGroup could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::removeGroup_22266_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void removeItem_IMPL_22265(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20133
void Android_android_view_SubMenu::removeItem_IMPL_22265(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::removeItem_22265_ID(),"android/view/SubMenu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.SubMenu.removeItem could not be cached",74);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::removeItem_22265_ID(), ((jint)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupCheckable_IMPL_22268(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3, bool arg4) [static] :20142
void Android_android_view_SubMenu::setGroupCheckable_IMPL_22268(bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setGroupCheckable_22268_ID(),"android/view/SubMenu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupCheckable could not be cached",81);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::setGroupCheckable_22268_ID(), ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupEnabled_IMPL_22270(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :20148
void Android_android_view_SubMenu::setGroupEnabled_IMPL_22270(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setGroupEnabled_22270_ID(),"android/view/SubMenu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupEnabled could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::setGroupEnabled_22270_ID(), ((jint)arg2_), ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGroupVisible_IMPL_22269(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, bool arg3) [static] :20145
void Android_android_view_SubMenu::setGroupVisible_IMPL_22269(bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setGroupVisible_22269_ID(),"android/view/SubMenu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupVisible could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::setGroupVisible_22269_ID(), ((jint)arg2_), ((jboolean)arg3_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderIcon_IMPL_22579(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20085
uObject* Android_android_view_SubMenu::setHeaderIcon_IMPL_22579(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderIcon_22579_ID(),"android/view/SubMenu","setHeaderIcon","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderIcon could not be cached",77);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderIcon_22579_ID(), ((jint)arg2_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderIcon_IMPL_22580(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20088
uObject* Android_android_view_SubMenu::setHeaderIcon_IMPL_22580(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderIcon_22580_ID(),"android/view/SubMenu","setHeaderIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderIcon could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderIcon_22580_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderTitle_IMPL_22577(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20079
uObject* Android_android_view_SubMenu::setHeaderTitle_IMPL_22577(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderTitle_22577_ID(),"android/view/SubMenu","setHeaderTitle","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderTitle could not be cached",78);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderTitle_22577_ID(), ((jint)arg2_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderTitle_IMPL_22578(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20082
uObject* Android_android_view_SubMenu::setHeaderTitle_IMPL_22578(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderTitle_22578_ID(),"android/view/SubMenu","setHeaderTitle","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderTitle could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderTitle_22578_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setHeaderView_IMPL_22581(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20091
uObject* Android_android_view_SubMenu::setHeaderView_IMPL_22581(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setHeaderView_22581_ID(),"android/view/SubMenu","setHeaderView","(Landroid/view/View;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderView could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setHeaderView_22581_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22583(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :20097
uObject* Android_android_view_SubMenu::setIcon_IMPL_22583(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setIcon_22583_ID(),"android/view/SubMenu","setIcon","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setIcon could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setIcon_22583_ID(), ((jint)arg2_)),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setIcon_IMPL_22584(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :20100
uObject* Android_android_view_SubMenu::setIcon_IMPL_22584(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setIcon_22584_ID(),"android/view/SubMenu","setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setIcon could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_android_view_SubMenu::setIcon_22584_ID(), _obArg2),result,Android_android_view_SubMenu_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void setQwertyMode_IMPL_22279(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :20175
void Android_android_view_SubMenu::setQwertyMode_IMPL_22279(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::setQwertyMode_22279_ID(),"android/view/SubMenu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.SubMenu.setQwertyMode could not be cached",77);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_android_view_SubMenu::setQwertyMode_22279_ID(), ((jboolean)arg2_));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int size_IMPL_22273(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20157
int Android_android_view_SubMenu::size_IMPL_22273(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_android_view_SubMenu::size_22273_ID(),"android/view/SubMenu","size","()I",GetMethodID,"Id for fallback method android.view.SubMenu.size could not be cached",68);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_android_view_SubMenu::size_22273_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_java_lang_CharSequence :30953
// {
static void Android_java_lang_CharSequence_build(uType* type)
{
    ::TYPES[9] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_lang_CharSequence_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_lang_CharSequence_type, interface1),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(Android_java_lang_CharSequence_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_CharSequence::charAt_30511_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_CharSequence::length_30510_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_CharSequence::subSequence_30512_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_CharSequence::toString_30513_ID_, uFieldFlagsStatic);
}

Android_java_lang_CharSequence_type* Android_java_lang_CharSequence_typeof()
{
    static uSStrong<Android_java_lang_CharSequence_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_java_lang_CharSequence);
    options.TypeSize = sizeof(Android_java_lang_CharSequence_type);
    type = (Android_java_lang_CharSequence_type*)uClassType::New("Android.Fallbacks.Android_java_lang_CharSequence", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_java_lang_CharSequence_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Android_java_lang_CharSequence__toString_fn;
    type->interface2.fp_length = (void(*)(uObject*, int*))Android_java_lang_CharSequence__length_fn;
    type->interface2.fp_charAt = (void(*)(uObject*, int*, uChar*))Android_java_lang_CharSequence__charAt_fn;
    type->interface2.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))Android_java_lang_CharSequence__subSequence_fn;
    type->interface2.fp_toString = (void(*)(uObject*, ::g::Android::java::lang::String**))Android_java_lang_CharSequence__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public char charAt(int arg0) :30961
void Android_java_lang_CharSequence__charAt_fn(Android_java_lang_CharSequence* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :30981
void Android_java_lang_CharSequence__charAt_IMPL_30511_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = Android_java_lang_CharSequence::charAt_IMPL_30511(*arg0_, *arg1_, *arg2_);
}

// public int length() :30956
void Android_java_lang_CharSequence__length_fn(Android_java_lang_CharSequence* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) :30978
void Android_java_lang_CharSequence__length_IMPL_30510_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_lang_CharSequence::length_IMPL_30510(*arg0_, *arg1_);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :30966
void Android_java_lang_CharSequence__subSequence_fn(Android_java_lang_CharSequence* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :30984
void Android_java_lang_CharSequence__subSequence_IMPL_30512_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_java_lang_CharSequence::subSequence_IMPL_30512(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :30971
void Android_java_lang_CharSequence__toString_fn(Android_java_lang_CharSequence* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Android_java_lang_CharSequence::toString_IMPL_30513(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) :30987
void Android_java_lang_CharSequence__toString_IMPL_30513_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_lang_CharSequence::toString_IMPL_30513(*arg0_, *arg1_);
}

jmethodID Android_java_lang_CharSequence::charAt_30511_ID_;
jmethodID Android_java_lang_CharSequence::length_30510_ID_;
jmethodID Android_java_lang_CharSequence::subSequence_30512_ID_;
jmethodID Android_java_lang_CharSequence::toString_30513_ID_;

// public char charAt(int arg0) [instance] :30961
uChar Android_java_lang_CharSequence::charAt(int arg0)
{
    return Android_java_lang_CharSequence::charAt_IMPL_30511(_subclassed, _javaObject, arg0);
}

// public int length() [instance] :30956
int Android_java_lang_CharSequence::length()
{
    return Android_java_lang_CharSequence::length_IMPL_30510(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :30966
uObject* Android_java_lang_CharSequence::subSequence(int arg0, int arg1)
{
    return Android_java_lang_CharSequence::subSequence_IMPL_30512(_subclassed, _javaObject, arg0, arg1);
}

// public static extern char charAt_IMPL_30511(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :30981
uChar Android_java_lang_CharSequence::charAt_IMPL_30511(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_CharSequence::charAt_30511_ID(),"java/lang/CharSequence","charAt","(I)C",GetMethodID,"Id for fallback method java.lang.CharSequence.charAt could not be cached",72);
    
    uChar result;
    result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, Android_java_lang_CharSequence::charAt_30511_ID(), ((jint)arg2_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int length_IMPL_30510(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :30978
int Android_java_lang_CharSequence::length_IMPL_30510(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_CharSequence::length_30510_ID(),"java/lang/CharSequence","length","()I",GetMethodID,"Id for fallback method java.lang.CharSequence.length could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_lang_CharSequence::length_30510_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_30512(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :30984
uObject* Android_java_lang_CharSequence::subSequence_IMPL_30512(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_CharSequence::subSequence_30512_ID(),"java/lang/CharSequence","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.CharSequence.subSequence could not be cached",77);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_lang_CharSequence::subSequence_30512_ID(), ((jint)arg2_), ((jint)arg3_)),result,Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_30513(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :30987
uObject* Android_java_lang_CharSequence::toString_IMPL_30513(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_CharSequence::toString_30513_ID(),"java/lang/CharSequence","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.CharSequence.toString could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_lang_CharSequence::toString_30513_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_java_lang_Iterable :31047
// {
static void Android_java_lang_Iterable_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[11] = ::g::Android::java::lang::Iterable_typeof();
    ::TYPES[12] = ::g::Android::java::util::Iterator_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_lang_Iterable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_lang_Iterable_type, interface1),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(Android_java_lang_Iterable_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(Android_java_lang_Iterable_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_Iterable::iterator_31161_ID_, uFieldFlagsStatic);
}

Android_java_lang_Iterable_type* Android_java_lang_Iterable_typeof()
{
    static uSStrong<Android_java_lang_Iterable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_java_lang_Iterable);
    options.TypeSize = sizeof(Android_java_lang_Iterable_type);
    type = (Android_java_lang_Iterable_type*)uClassType::New("Android.Fallbacks.Android_java_lang_Iterable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_java_lang_Iterable_build;
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))Android_java_lang_Iterable__iterator_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))Android_java_lang_Iterable__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() :31050
void Android_java_lang_Iterable__GetEnumerator_fn(Android_java_lang_Iterable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Android.java.util.Iterator iterator() :31052
void Android_java_lang_Iterable__iterator_fn(Android_java_lang_Iterable* __this, uObject** __retval)
{
    *__retval = __this->iterator();
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_31161(bool arg0, Android.Base.Primitives.ujobject arg1) :31059
void Android_java_lang_Iterable__iterator_IMPL_31161_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_lang_Iterable::iterator_IMPL_31161(*arg0_, *arg1_);
}

jmethodID Android_java_lang_Iterable::iterator_31161_ID_;

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() [instance] :31050
uObject* Android_java_lang_Iterable::GetEnumerator()
{
    return (uObject*)::g::Android::Runtime::JEnumerator::New1((uObject*)this);
}

// public Android.java.util.Iterator iterator() [instance] :31052
uObject* Android_java_lang_Iterable::iterator()
{
    return Android_java_lang_Iterable::iterator_IMPL_31161(_subclassed, _javaObject);
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_31161(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31059
uObject* Android_java_lang_Iterable::iterator_IMPL_31161(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_Iterable::iterator_31161_ID(),"java/lang/Iterable","iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.lang.Iterable.iterator could not be cached",70);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_lang_Iterable::iterator_31161_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_java_lang_Runnable :31101
// {
static void Android_java_lang_Runnable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_lang_Runnable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_lang_Runnable_type, interface1),
        ::g::Android::java::lang::Runnable_typeof(), offsetof(Android_java_lang_Runnable_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_lang_Runnable::run_31342_ID_, uFieldFlagsStatic);
}

Android_java_lang_Runnable_type* Android_java_lang_Runnable_typeof()
{
    static uSStrong<Android_java_lang_Runnable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_java_lang_Runnable);
    options.TypeSize = sizeof(Android_java_lang_Runnable_type);
    type = (Android_java_lang_Runnable_type*)uClassType::New("Android.Fallbacks.Android_java_lang_Runnable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_java_lang_Runnable_build;
    type->interface2.fp_run = (void(*)(uObject*))Android_java_lang_Runnable__run_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public void run() :31104
void Android_java_lang_Runnable__run_fn(Android_java_lang_Runnable* __this)
{
    __this->run();
}

// public static extern void run_IMPL_31342(bool arg0, Android.Base.Primitives.ujobject arg1) :31111
void Android_java_lang_Runnable__run_IMPL_31342_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_lang_Runnable::run_IMPL_31342(*arg0_, *arg1_);
}

jmethodID Android_java_lang_Runnable::run_31342_ID_;

// public void run() [instance] :31104
void Android_java_lang_Runnable::run()
{
    Android_java_lang_Runnable::run_IMPL_31342(_subclassed, _javaObject);
}

// public static extern void run_IMPL_31342(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31111
void Android_java_lang_Runnable::run_IMPL_31342(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_lang_Runnable::run_31342_ID(),"java/lang/Runnable","run","()V",GetMethodID,"Id for fallback method java.lang.Runnable.run could not be cached",65);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_lang_Runnable::run_31342_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_java_util_Collection :31153
// {
static void Android_java_util_Collection_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[11] = ::g::Android::java::lang::Iterable_typeof();
    ::TYPES[12] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[13] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_Collection_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_Collection_type, interface1),
        ::g::Android::java::util::Collection_typeof(), offsetof(Android_java_util_Collection_type, interface2),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(Android_java_util_Collection_type, interface3),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(Android_java_util_Collection_type, interface4));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::add_37811_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::addAll_37812_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::clear_37813_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::contains_37814_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::containsAll_37815_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::equals_37816_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::hashCode_37817_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::isEmpty_37818_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::iterator_37819_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::remove_37820_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::removeAll_37821_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::retainAll_37822_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::size_37823_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::toArray_37824_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Collection::toArray_37825_ID_, uFieldFlagsStatic);
}

Android_java_util_Collection_type* Android_java_util_Collection_typeof()
{
    static uSStrong<Android_java_util_Collection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Android_java_util_Collection);
    options.TypeSize = sizeof(Android_java_util_Collection_type);
    type = (Android_java_util_Collection_type*)uClassType::New("Android.Fallbacks.Android_java_util_Collection", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_java_util_Collection_build;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Android_java_util_Collection__hashCode1_fn;
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_Collection__add_fn;
    type->interface2.fp_addAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_Collection__addAll_fn;
    type->interface2.fp_clear = (void(*)(uObject*))Android_java_util_Collection__clear_fn;
    type->interface2.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_Collection__contains_fn;
    type->interface2.fp_containsAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_Collection__containsAll_fn;
    type->interface2.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_Collection__equals1_fn;
    type->interface2.fp_hashCode = (void(*)(uObject*, int*))Android_java_util_Collection__hashCode1_fn;
    type->interface2.fp_isEmpty = (void(*)(uObject*, bool*))Android_java_util_Collection__isEmpty_fn;
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_Collection__iterator_fn;
    type->interface2.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_Collection__remove_fn;
    type->interface2.fp_removeAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_Collection__removeAll_fn;
    type->interface2.fp_retainAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_Collection__retainAll_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))Android_java_util_Collection__size_fn;
    type->interface2.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))Android_java_util_Collection__toArray_fn;
    type->interface2.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))Android_java_util_Collection__toArray1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_Collection__iterator_fn;
    type->interface4.fp_GetEnumerator = (void(*)(uObject*, uObject**))Android_java_util_Collection__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public bool add(Android.java.lang.Object arg0) :31158
void Android_java_util_Collection__add_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->add(arg0);
}

// public static extern bool add_IMPL_37811(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31235
void Android_java_util_Collection__add_IMPL_37811_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::add_IMPL_37811(*arg0_, *arg1_, arg2_);
}

// public bool addAll(Android.java.util.Collection arg0) :31163
void Android_java_util_Collection__addAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->addAll(arg0);
}

// public static extern bool addAll_IMPL_37812(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31238
void Android_java_util_Collection__addAll_IMPL_37812_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::addAll_IMPL_37812(*arg0_, *arg1_, arg2_);
}

// public void clear() :31168
void Android_java_util_Collection__clear_fn(Android_java_util_Collection* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_37813(bool arg0, Android.Base.Primitives.ujobject arg1) :31241
void Android_java_util_Collection__clear_IMPL_37813_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_util_Collection::clear_IMPL_37813(*arg0_, *arg1_);
}

// public bool contains(Android.java.lang.Object arg0) :31173
void Android_java_util_Collection__contains_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->contains(arg0);
}

// public static extern bool contains_IMPL_37814(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31244
void Android_java_util_Collection__contains_IMPL_37814_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::contains_IMPL_37814(*arg0_, *arg1_, arg2_);
}

// public bool containsAll(Android.java.util.Collection arg0) :31178
void Android_java_util_Collection__containsAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->containsAll(arg0);
}

// public static extern bool containsAll_IMPL_37815(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31247
void Android_java_util_Collection__containsAll_IMPL_37815_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::containsAll_IMPL_37815(*arg0_, *arg1_, arg2_);
}

// public bool equals(Android.java.lang.Object arg0) :31183
void Android_java_util_Collection__equals1_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->equals1(arg0);
}

// public static extern bool equals_IMPL_37816(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31250
void Android_java_util_Collection__equals_IMPL_37816_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::equals_IMPL_37816(*arg0_, *arg1_, arg2_);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() :31156
void Android_java_util_Collection__GetEnumerator_fn(Android_java_util_Collection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public override sealed int hashCode() :31188
void Android_java_util_Collection__hashCode1_fn(Android_java_util_Collection* __this, int* __retval)
{
    return *__retval = Android_java_util_Collection::hashCode_IMPL_37817(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_37817(bool arg0, Android.Base.Primitives.ujobject arg1) :31253
void Android_java_util_Collection__hashCode_IMPL_37817_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_Collection::hashCode_IMPL_37817(*arg0_, *arg1_);
}

// public bool isEmpty() :31193
void Android_java_util_Collection__isEmpty_fn(Android_java_util_Collection* __this, bool* __retval)
{
    *__retval = __this->isEmpty();
}

// public static extern bool isEmpty_IMPL_37818(bool arg0, Android.Base.Primitives.ujobject arg1) :31256
void Android_java_util_Collection__isEmpty_IMPL_37818_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_Collection::isEmpty_IMPL_37818(*arg0_, *arg1_);
}

// public Android.java.util.Iterator iterator() :31198
void Android_java_util_Collection__iterator_fn(Android_java_util_Collection* __this, uObject** __retval)
{
    *__retval = __this->iterator();
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_37819(bool arg0, Android.Base.Primitives.ujobject arg1) :31259
void Android_java_util_Collection__iterator_IMPL_37819_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_Collection::iterator_IMPL_37819(*arg0_, *arg1_);
}

// public bool remove(Android.java.lang.Object arg0) :31203
void Android_java_util_Collection__remove_fn(Android_java_util_Collection* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->remove(arg0);
}

// public static extern bool remove_IMPL_37820(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31262
void Android_java_util_Collection__remove_IMPL_37820_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::remove_IMPL_37820(*arg0_, *arg1_, arg2_);
}

// public bool removeAll(Android.java.util.Collection arg0) :31208
void Android_java_util_Collection__removeAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->removeAll(arg0);
}

// public static extern bool removeAll_IMPL_37821(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31265
void Android_java_util_Collection__removeAll_IMPL_37821_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::removeAll_IMPL_37821(*arg0_, *arg1_, arg2_);
}

// public bool retainAll(Android.java.util.Collection arg0) :31213
void Android_java_util_Collection__retainAll_fn(Android_java_util_Collection* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->retainAll(arg0);
}

// public static extern bool retainAll_IMPL_37822(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31268
void Android_java_util_Collection__retainAll_IMPL_37822_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_Collection::retainAll_IMPL_37822(*arg0_, *arg1_, arg2_);
}

// public int size() :31218
void Android_java_util_Collection__size_fn(Android_java_util_Collection* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_37823(bool arg0, Android.Base.Primitives.ujobject arg1) :31271
void Android_java_util_Collection__size_IMPL_37823_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_Collection::size_IMPL_37823(*arg0_, *arg1_);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() :31223
void Android_java_util_Collection__toArray_fn(Android_java_util_Collection* __this, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->toArray();
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) :31228
void Android_java_util_Collection__toArray1_fn(Android_java_util_Collection* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->toArray1(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37824(bool arg0, Android.Base.Primitives.ujobject arg1) :31274
void Android_java_util_Collection__toArray_IMPL_37824_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_Collection::toArray_IMPL_37824(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37825(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31277
void Android_java_util_Collection__toArray_IMPL_37825_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_Collection::toArray_IMPL_37825(*arg0_, *arg1_, arg2_);
}

jmethodID Android_java_util_Collection::add_37811_ID_;
jmethodID Android_java_util_Collection::addAll_37812_ID_;
jmethodID Android_java_util_Collection::clear_37813_ID_;
jmethodID Android_java_util_Collection::contains_37814_ID_;
jmethodID Android_java_util_Collection::containsAll_37815_ID_;
jmethodID Android_java_util_Collection::equals_37816_ID_;
jmethodID Android_java_util_Collection::hashCode_37817_ID_;
jmethodID Android_java_util_Collection::isEmpty_37818_ID_;
jmethodID Android_java_util_Collection::iterator_37819_ID_;
jmethodID Android_java_util_Collection::remove_37820_ID_;
jmethodID Android_java_util_Collection::removeAll_37821_ID_;
jmethodID Android_java_util_Collection::retainAll_37822_ID_;
jmethodID Android_java_util_Collection::size_37823_ID_;
jmethodID Android_java_util_Collection::toArray_37824_ID_;
jmethodID Android_java_util_Collection::toArray_37825_ID_;

// public bool add(Android.java.lang.Object arg0) [instance] :31158
bool Android_java_util_Collection::add(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_Collection::add_IMPL_37811(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool addAll(Android.java.util.Collection arg0) [instance] :31163
bool Android_java_util_Collection::addAll(uObject* arg0)
{
    return Android_java_util_Collection::addAll_IMPL_37812(_subclassed, _javaObject, arg0);
}

// public void clear() [instance] :31168
void Android_java_util_Collection::clear()
{
    Android_java_util_Collection::clear_IMPL_37813(_subclassed, _javaObject);
}

// public bool contains(Android.java.lang.Object arg0) [instance] :31173
bool Android_java_util_Collection::contains(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_Collection::contains_IMPL_37814(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool containsAll(Android.java.util.Collection arg0) [instance] :31178
bool Android_java_util_Collection::containsAll(uObject* arg0)
{
    return Android_java_util_Collection::containsAll_IMPL_37815(_subclassed, _javaObject, arg0);
}

// public bool equals(Android.java.lang.Object arg0) [instance] :31183
bool Android_java_util_Collection::equals1(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_Collection::equals_IMPL_37816(_subclassed, _javaObject, (uObject*)arg0);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() [instance] :31156
uObject* Android_java_util_Collection::GetEnumerator()
{
    return (uObject*)::g::Android::Runtime::JEnumerator::New1((uObject*)this);
}

// public bool isEmpty() [instance] :31193
bool Android_java_util_Collection::isEmpty()
{
    return Android_java_util_Collection::isEmpty_IMPL_37818(_subclassed, _javaObject);
}

// public Android.java.util.Iterator iterator() [instance] :31198
uObject* Android_java_util_Collection::iterator()
{
    return Android_java_util_Collection::iterator_IMPL_37819(_subclassed, _javaObject);
}

// public bool remove(Android.java.lang.Object arg0) [instance] :31203
bool Android_java_util_Collection::remove(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_Collection::remove_IMPL_37820(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool removeAll(Android.java.util.Collection arg0) [instance] :31208
bool Android_java_util_Collection::removeAll(uObject* arg0)
{
    return Android_java_util_Collection::removeAll_IMPL_37821(_subclassed, _javaObject, arg0);
}

// public bool retainAll(Android.java.util.Collection arg0) [instance] :31213
bool Android_java_util_Collection::retainAll(uObject* arg0)
{
    return Android_java_util_Collection::retainAll_IMPL_37822(_subclassed, _javaObject, arg0);
}

// public int size() [instance] :31218
int Android_java_util_Collection::size()
{
    return Android_java_util_Collection::size_IMPL_37823(_subclassed, _javaObject);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() [instance] :31223
::g::Android::Runtime::ObjectArray* Android_java_util_Collection::toArray()
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_java_util_Collection::toArray_IMPL_37824(_subclassed, _javaObject), ::TYPES[13/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) [instance] :31228
::g::Android::Runtime::ObjectArray* Android_java_util_Collection::toArray1(::g::Android::Runtime::ObjectArray* arg0)
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_java_util_Collection::toArray_IMPL_37825(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[13/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public static extern bool add_IMPL_37811(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31235
bool Android_java_util_Collection::add_IMPL_37811(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::add_37811_ID(),"java/util/Collection","add","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.Collection.add could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::add_37811_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_37812(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31238
bool Android_java_util_Collection::addAll_IMPL_37812(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::addAll_37812_ID(),"java/util/Collection","addAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.Collection.addAll could not be cached",70);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::addAll_37812_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_37813(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31241
void Android_java_util_Collection::clear_IMPL_37813(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::clear_37813_ID(),"java/util/Collection","clear","()V",GetMethodID,"Id for fallback method java.util.Collection.clear could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_Collection::clear_37813_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool contains_IMPL_37814(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31244
bool Android_java_util_Collection::contains_IMPL_37814(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::contains_37814_ID(),"java/util/Collection","contains","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.Collection.contains could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::contains_37814_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool containsAll_IMPL_37815(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31247
bool Android_java_util_Collection::containsAll_IMPL_37815(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::containsAll_37815_ID(),"java/util/Collection","containsAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.Collection.containsAll could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::containsAll_37815_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_37816(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31250
bool Android_java_util_Collection::equals_IMPL_37816(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::equals_37816_ID(),"java/util/Collection","equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.Collection.equals could not be cached",70);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::equals_37816_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_37817(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31253
int Android_java_util_Collection::hashCode_IMPL_37817(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::hashCode_37817_ID(),"java/util/Collection","hashCode","()I",GetMethodID,"Id for fallback method java.util.Collection.hashCode could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_Collection::hashCode_37817_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isEmpty_IMPL_37818(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31256
bool Android_java_util_Collection::isEmpty_IMPL_37818(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::isEmpty_37818_ID(),"java/util/Collection","isEmpty","()Z",GetMethodID,"Id for fallback method java.util.Collection.isEmpty could not be cached",71);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::isEmpty_37818_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_37819(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31259
uObject* Android_java_util_Collection::iterator_IMPL_37819(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::iterator_37819_ID(),"java/util/Collection","iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.util.Collection.iterator could not be cached",72);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_Collection::iterator_37819_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool remove_IMPL_37820(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31262
bool Android_java_util_Collection::remove_IMPL_37820(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::remove_37820_ID(),"java/util/Collection","remove","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.Collection.remove could not be cached",70);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::remove_37820_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool removeAll_IMPL_37821(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31265
bool Android_java_util_Collection::removeAll_IMPL_37821(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::removeAll_37821_ID(),"java/util/Collection","removeAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.Collection.removeAll could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::removeAll_37821_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool retainAll_IMPL_37822(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31268
bool Android_java_util_Collection::retainAll_IMPL_37822(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::retainAll_37822_ID(),"java/util/Collection","retainAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.Collection.retainAll could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Collection::retainAll_37822_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int size_IMPL_37823(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31271
int Android_java_util_Collection::size_IMPL_37823(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::size_37823_ID(),"java/util/Collection","size","()I",GetMethodID,"Id for fallback method java.util.Collection.size could not be cached",68);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_Collection::size_37823_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37824(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31274
uObject* Android_java_util_Collection::toArray_IMPL_37824(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::toArray_37824_ID(),"java/util/Collection","toArray","()[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.Collection.toArray could not be cached",71);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_Collection::toArray_37824_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_37825(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31277
uObject* Android_java_util_Collection::toArray_IMPL_37825(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Collection::toArray_37825_ID(),"java/util/Collection","toArray","([Ljava/lang/Object;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.Collection.toArray could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_Collection::toArray_37825_ID(), _obArg2),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_java_util_Iterator :31721
// {
static void Android_java_util_Iterator_build(uType* type)
{
    ::TYPES[14] = ::g::Android::java::lang::Object_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_Iterator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_Iterator_type, interface1),
        ::g::Android::java::util::Iterator_typeof(), offsetof(Android_java_util_Iterator_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Iterator::hasNext_38163_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Iterator::next_38164_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_Iterator::remove_38165_ID_, uFieldFlagsStatic);
}

Android_java_util_Iterator_type* Android_java_util_Iterator_typeof()
{
    static uSStrong<Android_java_util_Iterator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Android_java_util_Iterator);
    options.TypeSize = sizeof(Android_java_util_Iterator_type);
    type = (Android_java_util_Iterator_type*)uClassType::New("Android.Fallbacks.Android_java_util_Iterator", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_java_util_Iterator_build;
    type->interface2.fp_hasNext = (void(*)(uObject*, bool*))Android_java_util_Iterator__hasNext_fn;
    type->interface2.fp_next = (void(*)(uObject*, ::g::Android::java::lang::Object**))Android_java_util_Iterator__next_fn;
    type->interface2.fp_remove = (void(*)(uObject*))Android_java_util_Iterator__remove_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public bool hasNext() :31724
void Android_java_util_Iterator__hasNext_fn(Android_java_util_Iterator* __this, bool* __retval)
{
    *__retval = __this->hasNext();
}

// public static extern bool hasNext_IMPL_38163(bool arg0, Android.Base.Primitives.ujobject arg1) :31741
void Android_java_util_Iterator__hasNext_IMPL_38163_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_Iterator::hasNext_IMPL_38163(*arg0_, *arg1_);
}

// public Android.java.lang.Object next() :31729
void Android_java_util_Iterator__next_fn(Android_java_util_Iterator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->next();
}

// public static extern Android.Base.Wrappers.IJWrapper next_IMPL_38164(bool arg0, Android.Base.Primitives.ujobject arg1) :31744
void Android_java_util_Iterator__next_IMPL_38164_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_Iterator::next_IMPL_38164(*arg0_, *arg1_);
}

// public void remove() :31734
void Android_java_util_Iterator__remove_fn(Android_java_util_Iterator* __this)
{
    __this->remove();
}

// public static extern void remove_IMPL_38165(bool arg0, Android.Base.Primitives.ujobject arg1) :31747
void Android_java_util_Iterator__remove_IMPL_38165_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_util_Iterator::remove_IMPL_38165(*arg0_, *arg1_);
}

jmethodID Android_java_util_Iterator::hasNext_38163_ID_;
jmethodID Android_java_util_Iterator::next_38164_ID_;
jmethodID Android_java_util_Iterator::remove_38165_ID_;

// public bool hasNext() [instance] :31724
bool Android_java_util_Iterator::hasNext()
{
    return Android_java_util_Iterator::hasNext_IMPL_38163(_subclassed, _javaObject);
}

// public Android.java.lang.Object next() [instance] :31729
::g::Android::java::lang::Object* Android_java_util_Iterator::next()
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_Iterator::next_IMPL_38164(_subclassed, _javaObject), ::TYPES[14/*Android.java.lang.Object*/]);
}

// public void remove() [instance] :31734
void Android_java_util_Iterator::remove()
{
    Android_java_util_Iterator::remove_IMPL_38165(_subclassed, _javaObject);
}

// public static extern bool hasNext_IMPL_38163(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31741
bool Android_java_util_Iterator::hasNext_IMPL_38163(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Iterator::hasNext_38163_ID(),"java/util/Iterator","hasNext","()Z",GetMethodID,"Id for fallback method java.util.Iterator.hasNext could not be cached",69);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_Iterator::hasNext_38163_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper next_IMPL_38164(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31744
uObject* Android_java_util_Iterator::next_IMPL_38164(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Iterator::next_38164_ID(),"java/util/Iterator","next","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.Iterator.next could not be cached",66);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_Iterator::next_38164_ID()),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void remove_IMPL_38165(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31747
void Android_java_util_Iterator::remove_IMPL_38165(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_Iterator::remove_38165_ID(),"java/util/Iterator","remove","()V",GetMethodID,"Id for fallback method java.util.Iterator.remove could not be cached",68);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_Iterator::remove_38165_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_java_util_List :31763
// {
static void Android_java_util_List_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[14] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    ::TYPES[11] = ::g::Android::java::lang::Iterable_typeof();
    ::TYPES[12] = ::g::Android::java::util::Iterator_typeof();
    ::TYPES[15] = ::g::Android::java::util::ListIterator_typeof();
    ::TYPES[16] = ::g::Android::java::util::List_typeof();
    ::TYPES[13] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_List_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_List_type, interface1),
        ::g::Android::java::util::List_typeof(), offsetof(Android_java_util_List_type, interface2),
        ::g::Android::java::util::Collection_typeof(), offsetof(Android_java_util_List_type, interface3),
        ::g::Android::java::lang::Iterable_typeof(), offsetof(Android_java_util_List_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(Android_java_util_List_type, interface5));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::add_38220_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::add_38221_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::addAll_38222_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::addAll_38223_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::clear_38224_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::contains_38225_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::containsAll_38226_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::equals_38227_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::get_38228_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::hashCode_38229_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::indexOf_38230_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::isEmpty_38231_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::iterator_38232_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::lastIndexOf_38233_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::listIterator_38234_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::listIterator_38235_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::remove_38236_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::remove_38237_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::removeAll_38238_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::retainAll_38239_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::set_38240_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::size_38241_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::subList_38242_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::toArray_38243_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_List::toArray_38244_ID_, uFieldFlagsStatic);
}

Android_java_util_List_type* Android_java_util_List_typeof()
{
    static uSStrong<Android_java_util_List_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Android_java_util_List);
    options.TypeSize = sizeof(Android_java_util_List_type);
    type = (Android_java_util_List_type*)uClassType::New("Android.Fallbacks.Android_java_util_List", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_java_util_List_build;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Android_java_util_List__hashCode1_fn;
    type->interface2.fp_add1 = (void(*)(uObject*, int*, ::g::Android::java::lang::Object*))Android_java_util_List__add1_fn;
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__add_fn;
    type->interface2.fp_addAll1 = (void(*)(uObject*, int*, uObject*, bool*))Android_java_util_List__addAll1_fn;
    type->interface2.fp_addAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__addAll_fn;
    type->interface2.fp_clear = (void(*)(uObject*))Android_java_util_List__clear_fn;
    type->interface2.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__contains_fn;
    type->interface2.fp_containsAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__containsAll_fn;
    type->interface2.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__equals1_fn;
    type->interface2.fp_get = (void(*)(uObject*, int*, ::g::Android::java::lang::Object**))Android_java_util_List__get_fn;
    type->interface2.fp_hashCode = (void(*)(uObject*, int*))Android_java_util_List__hashCode1_fn;
    type->interface2.fp_indexOf = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_java_util_List__indexOf_fn;
    type->interface2.fp_isEmpty = (void(*)(uObject*, bool*))Android_java_util_List__isEmpty_fn;
    type->interface2.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_List__iterator_fn;
    type->interface2.fp_lastIndexOf = (void(*)(uObject*, ::g::Android::java::lang::Object*, int*))Android_java_util_List__lastIndexOf_fn;
    type->interface2.fp_listIterator = (void(*)(uObject*, uObject**))Android_java_util_List__listIterator_fn;
    type->interface2.fp_listIterator1 = (void(*)(uObject*, int*, uObject**))Android_java_util_List__listIterator1_fn;
    type->interface2.fp_remove1 = (void(*)(uObject*, int*, ::g::Android::java::lang::Object**))Android_java_util_List__remove1_fn;
    type->interface2.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__remove_fn;
    type->interface2.fp_removeAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__removeAll_fn;
    type->interface2.fp_retainAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__retainAll_fn;
    type->interface2.fp_set = (void(*)(uObject*, int*, ::g::Android::java::lang::Object*, ::g::Android::java::lang::Object**))Android_java_util_List__set_fn;
    type->interface2.fp_size = (void(*)(uObject*, int*))Android_java_util_List__size_fn;
    type->interface2.fp_subList = (void(*)(uObject*, int*, int*, uObject**))Android_java_util_List__subList_fn;
    type->interface2.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))Android_java_util_List__toArray_fn;
    type->interface2.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))Android_java_util_List__toArray1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__add_fn;
    type->interface3.fp_addAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__addAll_fn;
    type->interface3.fp_clear = (void(*)(uObject*))Android_java_util_List__clear_fn;
    type->interface3.fp_contains = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__contains_fn;
    type->interface3.fp_containsAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__containsAll_fn;
    type->interface3.fp_equals = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__equals1_fn;
    type->interface3.fp_hashCode = (void(*)(uObject*, int*))Android_java_util_List__hashCode1_fn;
    type->interface3.fp_isEmpty = (void(*)(uObject*, bool*))Android_java_util_List__isEmpty_fn;
    type->interface3.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_List__iterator_fn;
    type->interface3.fp_remove = (void(*)(uObject*, ::g::Android::java::lang::Object*, bool*))Android_java_util_List__remove_fn;
    type->interface3.fp_removeAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__removeAll_fn;
    type->interface3.fp_retainAll = (void(*)(uObject*, uObject*, bool*))Android_java_util_List__retainAll_fn;
    type->interface3.fp_size = (void(*)(uObject*, int*))Android_java_util_List__size_fn;
    type->interface3.fp_toArray = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray**))Android_java_util_List__toArray_fn;
    type->interface3.fp_toArray1 = (void(*)(uObject*, ::g::Android::Runtime::ObjectArray*, ::g::Android::Runtime::ObjectArray**))Android_java_util_List__toArray1_fn;
    type->interface4.fp_iterator = (void(*)(uObject*, uObject**))Android_java_util_List__iterator_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))Android_java_util_List__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public bool add(Android.java.lang.Object arg0) :31773
void Android_java_util_List__add_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->add(arg0);
}

// public void add(int arg0, Android.java.lang.Object arg1) :31768
void Android_java_util_List__add1_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object* arg1)
{
    __this->add1(*arg0, arg1);
}

// public static extern void add_IMPL_38220(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :31895
void Android_java_util_List__add_IMPL_38220_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_)
{
    Android_java_util_List::add_IMPL_38220(*arg0_, *arg1_, *arg2_, arg3_);
}

// public static extern bool add_IMPL_38221(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31898
void Android_java_util_List__add_IMPL_38221_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::add_IMPL_38221(*arg0_, *arg1_, arg2_);
}

// public bool addAll(Android.java.util.Collection arg0) :31783
void Android_java_util_List__addAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->addAll(arg0);
}

// public bool addAll(int arg0, Android.java.util.Collection arg1) :31778
void Android_java_util_List__addAll1_fn(Android_java_util_List* __this, int* arg0, uObject* arg1, bool* __retval)
{
    *__retval = __this->addAll1(*arg0, arg1);
}

// public static extern bool addAll_IMPL_38222(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :31901
void Android_java_util_List__addAll_IMPL_38222_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = Android_java_util_List::addAll_IMPL_38222(*arg0_, *arg1_, *arg2_, arg3_);
}

// public static extern bool addAll_IMPL_38223(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31904
void Android_java_util_List__addAll_IMPL_38223_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::addAll_IMPL_38223(*arg0_, *arg1_, arg2_);
}

// public void clear() :31788
void Android_java_util_List__clear_fn(Android_java_util_List* __this)
{
    __this->clear();
}

// public static extern void clear_IMPL_38224(bool arg0, Android.Base.Primitives.ujobject arg1) :31907
void Android_java_util_List__clear_IMPL_38224_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_util_List::clear_IMPL_38224(*arg0_, *arg1_);
}

// public bool contains(Android.java.lang.Object arg0) :31793
void Android_java_util_List__contains_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->contains(arg0);
}

// public static extern bool contains_IMPL_38225(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31910
void Android_java_util_List__contains_IMPL_38225_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::contains_IMPL_38225(*arg0_, *arg1_, arg2_);
}

// public bool containsAll(Android.java.util.Collection arg0) :31798
void Android_java_util_List__containsAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->containsAll(arg0);
}

// public static extern bool containsAll_IMPL_38226(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31913
void Android_java_util_List__containsAll_IMPL_38226_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::containsAll_IMPL_38226(*arg0_, *arg1_, arg2_);
}

// public bool equals(Android.java.lang.Object arg0) :31803
void Android_java_util_List__equals1_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->equals1(arg0);
}

// public static extern bool equals_IMPL_38227(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31916
void Android_java_util_List__equals_IMPL_38227_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::equals_IMPL_38227(*arg0_, *arg1_, arg2_);
}

// public Android.java.lang.Object get(int arg0) :31808
void Android_java_util_List__get_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->get(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper get_IMPL_38228(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :31919
void Android_java_util_List__get_IMPL_38228_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_List::get_IMPL_38228(*arg0_, *arg1_, *arg2_);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() :31766
void Android_java_util_List__GetEnumerator_fn(Android_java_util_List* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public override sealed int hashCode() :31813
void Android_java_util_List__hashCode1_fn(Android_java_util_List* __this, int* __retval)
{
    return *__retval = Android_java_util_List::hashCode_IMPL_38229(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_38229(bool arg0, Android.Base.Primitives.ujobject arg1) :31922
void Android_java_util_List__hashCode_IMPL_38229_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_List::hashCode_IMPL_38229(*arg0_, *arg1_);
}

// public int indexOf(Android.java.lang.Object arg0) :31818
void Android_java_util_List__indexOf_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->indexOf(arg0);
}

// public static extern int indexOf_IMPL_38230(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31925
void Android_java_util_List__indexOf_IMPL_38230_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_java_util_List::indexOf_IMPL_38230(*arg0_, *arg1_, arg2_);
}

// public bool isEmpty() :31823
void Android_java_util_List__isEmpty_fn(Android_java_util_List* __this, bool* __retval)
{
    *__retval = __this->isEmpty();
}

// public static extern bool isEmpty_IMPL_38231(bool arg0, Android.Base.Primitives.ujobject arg1) :31928
void Android_java_util_List__isEmpty_IMPL_38231_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_List::isEmpty_IMPL_38231(*arg0_, *arg1_);
}

// public Android.java.util.Iterator iterator() :31828
void Android_java_util_List__iterator_fn(Android_java_util_List* __this, uObject** __retval)
{
    *__retval = __this->iterator();
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_38232(bool arg0, Android.Base.Primitives.ujobject arg1) :31931
void Android_java_util_List__iterator_IMPL_38232_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_List::iterator_IMPL_38232(*arg0_, *arg1_);
}

// public int lastIndexOf(Android.java.lang.Object arg0) :31833
void Android_java_util_List__lastIndexOf_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, int* __retval)
{
    *__retval = __this->lastIndexOf(arg0);
}

// public static extern int lastIndexOf_IMPL_38233(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31934
void Android_java_util_List__lastIndexOf_IMPL_38233_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = Android_java_util_List::lastIndexOf_IMPL_38233(*arg0_, *arg1_, arg2_);
}

// public Android.java.util.ListIterator listIterator() :31838
void Android_java_util_List__listIterator_fn(Android_java_util_List* __this, uObject** __retval)
{
    *__retval = __this->listIterator();
}

// public Android.java.util.ListIterator listIterator(int arg0) :31843
void Android_java_util_List__listIterator1_fn(Android_java_util_List* __this, int* arg0, uObject** __retval)
{
    *__retval = __this->listIterator1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_38234(bool arg0, Android.Base.Primitives.ujobject arg1) :31937
void Android_java_util_List__listIterator_IMPL_38234_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_List::listIterator_IMPL_38234(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_38235(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :31940
void Android_java_util_List__listIterator_IMPL_38235_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_List::listIterator_IMPL_38235(*arg0_, *arg1_, *arg2_);
}

// public bool remove(Android.java.lang.Object arg0) :31853
void Android_java_util_List__remove_fn(Android_java_util_List* __this, ::g::Android::java::lang::Object* arg0, bool* __retval)
{
    *__retval = __this->remove(arg0);
}

// public Android.java.lang.Object remove(int arg0) :31848
void Android_java_util_List__remove1_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->remove1(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper remove_IMPL_38236(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :31943
void Android_java_util_List__remove_IMPL_38236_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_List::remove_IMPL_38236(*arg0_, *arg1_, *arg2_);
}

// public static extern bool remove_IMPL_38237(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31946
void Android_java_util_List__remove_IMPL_38237_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::remove_IMPL_38237(*arg0_, *arg1_, arg2_);
}

// public bool removeAll(Android.java.util.Collection arg0) :31858
void Android_java_util_List__removeAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->removeAll(arg0);
}

// public static extern bool removeAll_IMPL_38238(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31949
void Android_java_util_List__removeAll_IMPL_38238_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::removeAll_IMPL_38238(*arg0_, *arg1_, arg2_);
}

// public bool retainAll(Android.java.util.Collection arg0) :31863
void Android_java_util_List__retainAll_fn(Android_java_util_List* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->retainAll(arg0);
}

// public static extern bool retainAll_IMPL_38239(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31952
void Android_java_util_List__retainAll_IMPL_38239_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Android_java_util_List::retainAll_IMPL_38239(*arg0_, *arg1_, arg2_);
}

// public Android.java.lang.Object set(int arg0, Android.java.lang.Object arg1) :31868
void Android_java_util_List__set_fn(Android_java_util_List* __this, int* arg0, ::g::Android::java::lang::Object* arg1, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->set(*arg0, arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper set_IMPL_38240(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :31955
void Android_java_util_List__set_IMPL_38240_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = Android_java_util_List::set_IMPL_38240(*arg0_, *arg1_, *arg2_, arg3_);
}

// public int size() :31873
void Android_java_util_List__size_fn(Android_java_util_List* __this, int* __retval)
{
    *__retval = __this->size();
}

// public static extern int size_IMPL_38241(bool arg0, Android.Base.Primitives.ujobject arg1) :31958
void Android_java_util_List__size_IMPL_38241_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_List::size_IMPL_38241(*arg0_, *arg1_);
}

// public Android.java.util.List subList(int arg0, int arg1) :31878
void Android_java_util_List__subList_fn(Android_java_util_List* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subList(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subList_IMPL_38242(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :31961
void Android_java_util_List__subList_IMPL_38242_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = Android_java_util_List::subList_IMPL_38242(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() :31883
void Android_java_util_List__toArray_fn(Android_java_util_List* __this, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->toArray();
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) :31888
void Android_java_util_List__toArray1_fn(Android_java_util_List* __this, ::g::Android::Runtime::ObjectArray* arg0, ::g::Android::Runtime::ObjectArray** __retval)
{
    *__retval = __this->toArray1(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_38243(bool arg0, Android.Base.Primitives.ujobject arg1) :31964
void Android_java_util_List__toArray_IMPL_38243_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_List::toArray_IMPL_38243(*arg0_, *arg1_);
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_38244(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :31967
void Android_java_util_List__toArray_IMPL_38244_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Android_java_util_List::toArray_IMPL_38244(*arg0_, *arg1_, arg2_);
}

jmethodID Android_java_util_List::add_38220_ID_;
jmethodID Android_java_util_List::add_38221_ID_;
jmethodID Android_java_util_List::addAll_38222_ID_;
jmethodID Android_java_util_List::addAll_38223_ID_;
jmethodID Android_java_util_List::clear_38224_ID_;
jmethodID Android_java_util_List::contains_38225_ID_;
jmethodID Android_java_util_List::containsAll_38226_ID_;
jmethodID Android_java_util_List::equals_38227_ID_;
jmethodID Android_java_util_List::get_38228_ID_;
jmethodID Android_java_util_List::hashCode_38229_ID_;
jmethodID Android_java_util_List::indexOf_38230_ID_;
jmethodID Android_java_util_List::isEmpty_38231_ID_;
jmethodID Android_java_util_List::iterator_38232_ID_;
jmethodID Android_java_util_List::lastIndexOf_38233_ID_;
jmethodID Android_java_util_List::listIterator_38234_ID_;
jmethodID Android_java_util_List::listIterator_38235_ID_;
jmethodID Android_java_util_List::remove_38236_ID_;
jmethodID Android_java_util_List::remove_38237_ID_;
jmethodID Android_java_util_List::removeAll_38238_ID_;
jmethodID Android_java_util_List::retainAll_38239_ID_;
jmethodID Android_java_util_List::set_38240_ID_;
jmethodID Android_java_util_List::size_38241_ID_;
jmethodID Android_java_util_List::subList_38242_ID_;
jmethodID Android_java_util_List::toArray_38243_ID_;
jmethodID Android_java_util_List::toArray_38244_ID_;

// public bool add(Android.java.lang.Object arg0) [instance] :31773
bool Android_java_util_List::add(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::add_IMPL_38221(_subclassed, _javaObject, (uObject*)arg0);
}

// public void add(int arg0, Android.java.lang.Object arg1) [instance] :31768
void Android_java_util_List::add1(int arg0, ::g::Android::java::lang::Object* arg1)
{
    Android_java_util_List::add_IMPL_38220(_subclassed, _javaObject, arg0, (uObject*)arg1);
}

// public bool addAll(Android.java.util.Collection arg0) [instance] :31783
bool Android_java_util_List::addAll(uObject* arg0)
{
    return Android_java_util_List::addAll_IMPL_38223(_subclassed, _javaObject, arg0);
}

// public bool addAll(int arg0, Android.java.util.Collection arg1) [instance] :31778
bool Android_java_util_List::addAll1(int arg0, uObject* arg1)
{
    return Android_java_util_List::addAll_IMPL_38222(_subclassed, _javaObject, arg0, arg1);
}

// public void clear() [instance] :31788
void Android_java_util_List::clear()
{
    Android_java_util_List::clear_IMPL_38224(_subclassed, _javaObject);
}

// public bool contains(Android.java.lang.Object arg0) [instance] :31793
bool Android_java_util_List::contains(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::contains_IMPL_38225(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool containsAll(Android.java.util.Collection arg0) [instance] :31798
bool Android_java_util_List::containsAll(uObject* arg0)
{
    return Android_java_util_List::containsAll_IMPL_38226(_subclassed, _javaObject, arg0);
}

// public bool equals(Android.java.lang.Object arg0) [instance] :31803
bool Android_java_util_List::equals1(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::equals_IMPL_38227(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.java.lang.Object get(int arg0) [instance] :31808
::g::Android::java::lang::Object* Android_java_util_List::get(int arg0)
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_List::get_IMPL_38228(_subclassed, _javaObject, arg0), ::TYPES[14/*Android.java.lang.Object*/]);
}

// public Uno.Collections.IEnumerator<Android.java.lang.Object> GetEnumerator() [instance] :31766
uObject* Android_java_util_List::GetEnumerator()
{
    return (uObject*)::g::Android::Runtime::JEnumerator::New1((uObject*)this);
}

// public int indexOf(Android.java.lang.Object arg0) [instance] :31818
int Android_java_util_List::indexOf(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::indexOf_IMPL_38230(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool isEmpty() [instance] :31823
bool Android_java_util_List::isEmpty()
{
    return Android_java_util_List::isEmpty_IMPL_38231(_subclassed, _javaObject);
}

// public Android.java.util.Iterator iterator() [instance] :31828
uObject* Android_java_util_List::iterator()
{
    return Android_java_util_List::iterator_IMPL_38232(_subclassed, _javaObject);
}

// public int lastIndexOf(Android.java.lang.Object arg0) [instance] :31833
int Android_java_util_List::lastIndexOf(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::lastIndexOf_IMPL_38233(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.java.util.ListIterator listIterator() [instance] :31838
uObject* Android_java_util_List::listIterator()
{
    return Android_java_util_List::listIterator_IMPL_38234(_subclassed, _javaObject);
}

// public Android.java.util.ListIterator listIterator(int arg0) [instance] :31843
uObject* Android_java_util_List::listIterator1(int arg0)
{
    return Android_java_util_List::listIterator_IMPL_38235(_subclassed, _javaObject, arg0);
}

// public bool remove(Android.java.lang.Object arg0) [instance] :31853
bool Android_java_util_List::remove(::g::Android::java::lang::Object* arg0)
{
    return Android_java_util_List::remove_IMPL_38237(_subclassed, _javaObject, (uObject*)arg0);
}

// public Android.java.lang.Object remove(int arg0) [instance] :31848
::g::Android::java::lang::Object* Android_java_util_List::remove1(int arg0)
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_List::remove_IMPL_38236(_subclassed, _javaObject, arg0), ::TYPES[14/*Android.java.lang.Object*/]);
}

// public bool removeAll(Android.java.util.Collection arg0) [instance] :31858
bool Android_java_util_List::removeAll(uObject* arg0)
{
    return Android_java_util_List::removeAll_IMPL_38238(_subclassed, _javaObject, arg0);
}

// public bool retainAll(Android.java.util.Collection arg0) [instance] :31863
bool Android_java_util_List::retainAll(uObject* arg0)
{
    return Android_java_util_List::retainAll_IMPL_38239(_subclassed, _javaObject, arg0);
}

// public Android.java.lang.Object set(int arg0, Android.java.lang.Object arg1) [instance] :31868
::g::Android::java::lang::Object* Android_java_util_List::set(int arg0, ::g::Android::java::lang::Object* arg1)
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_List::set_IMPL_38240(_subclassed, _javaObject, arg0, (uObject*)arg1), ::TYPES[14/*Android.java.lang.Object*/]);
}

// public int size() [instance] :31873
int Android_java_util_List::size()
{
    return Android_java_util_List::size_IMPL_38241(_subclassed, _javaObject);
}

// public Android.java.util.List subList(int arg0, int arg1) [instance] :31878
uObject* Android_java_util_List::subList(int arg0, int arg1)
{
    return Android_java_util_List::subList_IMPL_38242(_subclassed, _javaObject, arg0, arg1);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray() [instance] :31883
::g::Android::Runtime::ObjectArray* Android_java_util_List::toArray()
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_java_util_List::toArray_IMPL_38243(_subclassed, _javaObject), ::TYPES[13/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public Android.Runtime.ObjectArray<Android.java.lang.Object> toArray(Android.Runtime.ObjectArray<Android.java.lang.Object> arg0) [instance] :31888
::g::Android::Runtime::ObjectArray* Android_java_util_List::toArray1(::g::Android::Runtime::ObjectArray* arg0)
{
    return uCast< ::g::Android::Runtime::ObjectArray*>(Android_java_util_List::toArray_IMPL_38244(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[13/*Android.Runtime.ObjectArray<Android.java.lang.Object>*/]);
}

// public static extern void add_IMPL_38220(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :31895
void Android_java_util_List::add_IMPL_38220(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::add_38220_ID(),"java/util/List","add","(ILjava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.List.add could not be cached",61);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_List::add_38220_ID(), ((jint)arg2_), _obArg3);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool add_IMPL_38221(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31898
bool Android_java_util_List::add_IMPL_38221(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::add_38221_ID(),"java/util/List","add","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.List.add could not be cached",61);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::add_38221_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_38222(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :31901
bool Android_java_util_List::addAll_IMPL_38222(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::addAll_38222_ID(),"java/util/List","addAll","(ILjava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.addAll could not be cached",64);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::addAll_38222_ID(), ((jint)arg2_), _obArg3));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool addAll_IMPL_38223(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31904
bool Android_java_util_List::addAll_IMPL_38223(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::addAll_38223_ID(),"java/util/List","addAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.addAll could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::addAll_38223_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void clear_IMPL_38224(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31907
void Android_java_util_List::clear_IMPL_38224(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::clear_38224_ID(),"java/util/List","clear","()V",GetMethodID,"Id for fallback method java.util.List.clear could not be cached",63);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_List::clear_38224_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool contains_IMPL_38225(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31910
bool Android_java_util_List::contains_IMPL_38225(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::contains_38225_ID(),"java/util/List","contains","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.List.contains could not be cached",66);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::contains_38225_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool containsAll_IMPL_38226(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31913
bool Android_java_util_List::containsAll_IMPL_38226(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::containsAll_38226_ID(),"java/util/List","containsAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.containsAll could not be cached",69);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::containsAll_38226_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool equals_IMPL_38227(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31916
bool Android_java_util_List::equals_IMPL_38227(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::equals_38227_ID(),"java/util/List","equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.List.equals could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::equals_38227_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper get_IMPL_38228(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :31919
uObject* Android_java_util_List::get_IMPL_38228(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::get_38228_ID(),"java/util/List","get","(I)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.get could not be cached",61);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::get_38228_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_38229(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31922
int Android_java_util_List::hashCode_IMPL_38229(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::hashCode_38229_ID(),"java/util/List","hashCode","()I",GetMethodID,"Id for fallback method java.util.List.hashCode could not be cached",66);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_List::hashCode_38229_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int indexOf_IMPL_38230(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31925
int Android_java_util_List::indexOf_IMPL_38230(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::indexOf_38230_ID(),"java/util/List","indexOf","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.util.List.indexOf could not be cached",65);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_List::indexOf_38230_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isEmpty_IMPL_38231(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31928
bool Android_java_util_List::isEmpty_IMPL_38231(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::isEmpty_38231_ID(),"java/util/List","isEmpty","()Z",GetMethodID,"Id for fallback method java.util.List.isEmpty could not be cached",65);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::isEmpty_38231_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper iterator_IMPL_38232(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31931
uObject* Android_java_util_List::iterator_IMPL_38232(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::iterator_38232_ID(),"java/util/List","iterator","()Ljava/util/Iterator;",GetMethodID,"Id for fallback method java.util.List.iterator could not be cached",66);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::iterator_38232_ID()),result,::g::Android::Fallbacks::Android_java_util_Iterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int lastIndexOf_IMPL_38233(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31934
int Android_java_util_List::lastIndexOf_IMPL_38233(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::lastIndexOf_38233_ID(),"java/util/List","lastIndexOf","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method java.util.List.lastIndexOf could not be cached",69);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_List::lastIndexOf_38233_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_38234(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31937
uObject* Android_java_util_List::listIterator_IMPL_38234(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::listIterator_38234_ID(),"java/util/List","listIterator","()Ljava/util/ListIterator;",GetMethodID,"Id for fallback method java.util.List.listIterator could not be cached",70);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::listIterator_38234_ID()),result,::g::Android::Fallbacks::Android_java_util_ListIterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper listIterator_IMPL_38235(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :31940
uObject* Android_java_util_List::listIterator_IMPL_38235(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::listIterator_38235_ID(),"java/util/List","listIterator","(I)Ljava/util/ListIterator;",GetMethodID,"Id for fallback method java.util.List.listIterator could not be cached",70);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::listIterator_38235_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_java_util_ListIterator_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper remove_IMPL_38236(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :31943
uObject* Android_java_util_List::remove_IMPL_38236(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::remove_38236_ID(),"java/util/List","remove","(I)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.remove could not be cached",64);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::remove_38236_ID(), ((jint)arg2_)),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool remove_IMPL_38237(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31946
bool Android_java_util_List::remove_IMPL_38237(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::remove_38237_ID(),"java/util/List","remove","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method java.util.List.remove could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::remove_38237_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool removeAll_IMPL_38238(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31949
bool Android_java_util_List::removeAll_IMPL_38238(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::removeAll_38238_ID(),"java/util/List","removeAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.removeAll could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::removeAll_38238_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool retainAll_IMPL_38239(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31952
bool Android_java_util_List::retainAll_IMPL_38239(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::retainAll_38239_ID(),"java/util/List","retainAll","(Ljava/util/Collection;)Z",GetMethodID,"Id for fallback method java.util.List.retainAll could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_List::retainAll_38239_ID(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper set_IMPL_38240(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :31955
uObject* Android_java_util_List::set_IMPL_38240(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::set_38240_ID(),"java/util/List","set","(ILjava/lang/Object;)Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.set could not be cached",61);
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::set_38240_ID(), ((jint)arg2_), _obArg3),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int size_IMPL_38241(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31958
int Android_java_util_List::size_IMPL_38241(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::size_38241_ID(),"java/util/List","size","()I",GetMethodID,"Id for fallback method java.util.List.size could not be cached",62);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_List::size_38241_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper subList_IMPL_38242(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :31961
uObject* Android_java_util_List::subList_IMPL_38242(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::subList_38242_ID(),"java/util/List","subList","(II)Ljava/util/List;",GetMethodID,"Id for fallback method java.util.List.subList could not be cached",65);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::subList_38242_ID(), ((jint)arg2_), ((jint)arg3_)),result,Android_java_util_List_typeof(),uObject*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_38243(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :31964
uObject* Android_java_util_List::toArray_IMPL_38243(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::toArray_38243_ID(),"java/util/List","toArray","()[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.toArray could not be cached",65);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::toArray_38243_ID()),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toArray_IMPL_38244(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :31967
uObject* Android_java_util_List::toArray_IMPL_38244(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_List::toArray_38244_ID(),"java/util/List","toArray","([Ljava/lang/Object;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.List.toArray could not be cached",65);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_List::toArray_38244_ID(), _obArg2),result,::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()),::g::Android::Runtime::ObjectArray*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\Fallbacks\$.uno
// ------------------------------------------------------------------

// public sealed extern class Android_java_util_ListIterator :31983
// {
static void Android_java_util_ListIterator_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[14] = ::g::Android::java::lang::Object_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Android_java_util_ListIterator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Android_java_util_ListIterator_type, interface1),
        ::g::Android::java::util::ListIterator_typeof(), offsetof(Android_java_util_ListIterator_type, interface2),
        ::g::Android::java::util::Iterator_typeof(), offsetof(Android_java_util_ListIterator_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::add_38245_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::hasNext_38246_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::hasPrevious_38247_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::next_38248_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::nextIndex_38249_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::previous_38250_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::previousIndex_38251_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::remove_38252_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Fallbacks::Android_java_util_ListIterator::set_38253_ID_, uFieldFlagsStatic);
}

Android_java_util_ListIterator_type* Android_java_util_ListIterator_typeof()
{
    static uSStrong<Android_java_util_ListIterator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Android_java_util_ListIterator);
    options.TypeSize = sizeof(Android_java_util_ListIterator_type);
    type = (Android_java_util_ListIterator_type*)uClassType::New("Android.Fallbacks.Android_java_util_ListIterator", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Android_java_util_ListIterator_build;
    type->interface2.fp_add = (void(*)(uObject*, ::g::Android::java::lang::Object*))Android_java_util_ListIterator__add_fn;
    type->interface2.fp_hasNext = (void(*)(uObject*, bool*))Android_java_util_ListIterator__hasNext_fn;
    type->interface2.fp_hasPrevious = (void(*)(uObject*, bool*))Android_java_util_ListIterator__hasPrevious_fn;
    type->interface2.fp_next = (void(*)(uObject*, ::g::Android::java::lang::Object**))Android_java_util_ListIterator__next_fn;
    type->interface2.fp_nextIndex = (void(*)(uObject*, int*))Android_java_util_ListIterator__nextIndex_fn;
    type->interface2.fp_previous = (void(*)(uObject*, ::g::Android::java::lang::Object**))Android_java_util_ListIterator__previous_fn;
    type->interface2.fp_previousIndex = (void(*)(uObject*, int*))Android_java_util_ListIterator__previousIndex_fn;
    type->interface2.fp_remove = (void(*)(uObject*))Android_java_util_ListIterator__remove_fn;
    type->interface2.fp_set = (void(*)(uObject*, ::g::Android::java::lang::Object*))Android_java_util_ListIterator__set_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_hasNext = (void(*)(uObject*, bool*))Android_java_util_ListIterator__hasNext_fn;
    type->interface3.fp_next = (void(*)(uObject*, ::g::Android::java::lang::Object**))Android_java_util_ListIterator__next_fn;
    type->interface3.fp_remove = (void(*)(uObject*))Android_java_util_ListIterator__remove_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public void add(Android.java.lang.Object arg0) :31986
void Android_java_util_ListIterator__add_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->add(arg0);
}

// public static extern void add_IMPL_38245(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :32033
void Android_java_util_ListIterator__add_IMPL_38245_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_java_util_ListIterator::add_IMPL_38245(*arg0_, *arg1_, arg2_);
}

// public bool hasNext() :31991
void Android_java_util_ListIterator__hasNext_fn(Android_java_util_ListIterator* __this, bool* __retval)
{
    *__retval = __this->hasNext();
}

// public static extern bool hasNext_IMPL_38246(bool arg0, Android.Base.Primitives.ujobject arg1) :32036
void Android_java_util_ListIterator__hasNext_IMPL_38246_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_ListIterator::hasNext_IMPL_38246(*arg0_, *arg1_);
}

// public bool hasPrevious() :31996
void Android_java_util_ListIterator__hasPrevious_fn(Android_java_util_ListIterator* __this, bool* __retval)
{
    *__retval = __this->hasPrevious();
}

// public static extern bool hasPrevious_IMPL_38247(bool arg0, Android.Base.Primitives.ujobject arg1) :32039
void Android_java_util_ListIterator__hasPrevious_IMPL_38247_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = Android_java_util_ListIterator::hasPrevious_IMPL_38247(*arg0_, *arg1_);
}

// public Android.java.lang.Object next() :32001
void Android_java_util_ListIterator__next_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->next();
}

// public static extern Android.Base.Wrappers.IJWrapper next_IMPL_38248(bool arg0, Android.Base.Primitives.ujobject arg1) :32042
void Android_java_util_ListIterator__next_IMPL_38248_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_ListIterator::next_IMPL_38248(*arg0_, *arg1_);
}

// public int nextIndex() :32006
void Android_java_util_ListIterator__nextIndex_fn(Android_java_util_ListIterator* __this, int* __retval)
{
    *__retval = __this->nextIndex();
}

// public static extern int nextIndex_IMPL_38249(bool arg0, Android.Base.Primitives.ujobject arg1) :32045
void Android_java_util_ListIterator__nextIndex_IMPL_38249_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_ListIterator::nextIndex_IMPL_38249(*arg0_, *arg1_);
}

// public Android.java.lang.Object previous() :32011
void Android_java_util_ListIterator__previous_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->previous();
}

// public static extern Android.Base.Wrappers.IJWrapper previous_IMPL_38250(bool arg0, Android.Base.Primitives.ujobject arg1) :32048
void Android_java_util_ListIterator__previous_IMPL_38250_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Android_java_util_ListIterator::previous_IMPL_38250(*arg0_, *arg1_);
}

// public int previousIndex() :32016
void Android_java_util_ListIterator__previousIndex_fn(Android_java_util_ListIterator* __this, int* __retval)
{
    *__retval = __this->previousIndex();
}

// public static extern int previousIndex_IMPL_38251(bool arg0, Android.Base.Primitives.ujobject arg1) :32051
void Android_java_util_ListIterator__previousIndex_IMPL_38251_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Android_java_util_ListIterator::previousIndex_IMPL_38251(*arg0_, *arg1_);
}

// public void remove() :32021
void Android_java_util_ListIterator__remove_fn(Android_java_util_ListIterator* __this)
{
    __this->remove();
}

// public static extern void remove_IMPL_38252(bool arg0, Android.Base.Primitives.ujobject arg1) :32054
void Android_java_util_ListIterator__remove_IMPL_38252_fn(bool* arg0_, jobject* arg1_)
{
    Android_java_util_ListIterator::remove_IMPL_38252(*arg0_, *arg1_);
}

// public void set(Android.java.lang.Object arg0) :32026
void Android_java_util_ListIterator__set_fn(Android_java_util_ListIterator* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->set(arg0);
}

// public static extern void set_IMPL_38253(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :32057
void Android_java_util_ListIterator__set_IMPL_38253_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Android_java_util_ListIterator::set_IMPL_38253(*arg0_, *arg1_, arg2_);
}

jmethodID Android_java_util_ListIterator::add_38245_ID_;
jmethodID Android_java_util_ListIterator::hasNext_38246_ID_;
jmethodID Android_java_util_ListIterator::hasPrevious_38247_ID_;
jmethodID Android_java_util_ListIterator::next_38248_ID_;
jmethodID Android_java_util_ListIterator::nextIndex_38249_ID_;
jmethodID Android_java_util_ListIterator::previous_38250_ID_;
jmethodID Android_java_util_ListIterator::previousIndex_38251_ID_;
jmethodID Android_java_util_ListIterator::remove_38252_ID_;
jmethodID Android_java_util_ListIterator::set_38253_ID_;

// public void add(Android.java.lang.Object arg0) [instance] :31986
void Android_java_util_ListIterator::add(::g::Android::java::lang::Object* arg0)
{
    Android_java_util_ListIterator::add_IMPL_38245(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool hasNext() [instance] :31991
bool Android_java_util_ListIterator::hasNext()
{
    return Android_java_util_ListIterator::hasNext_IMPL_38246(_subclassed, _javaObject);
}

// public bool hasPrevious() [instance] :31996
bool Android_java_util_ListIterator::hasPrevious()
{
    return Android_java_util_ListIterator::hasPrevious_IMPL_38247(_subclassed, _javaObject);
}

// public Android.java.lang.Object next() [instance] :32001
::g::Android::java::lang::Object* Android_java_util_ListIterator::next()
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_ListIterator::next_IMPL_38248(_subclassed, _javaObject), ::TYPES[14/*Android.java.lang.Object*/]);
}

// public int nextIndex() [instance] :32006
int Android_java_util_ListIterator::nextIndex()
{
    return Android_java_util_ListIterator::nextIndex_IMPL_38249(_subclassed, _javaObject);
}

// public Android.java.lang.Object previous() [instance] :32011
::g::Android::java::lang::Object* Android_java_util_ListIterator::previous()
{
    return uCast< ::g::Android::java::lang::Object*>(Android_java_util_ListIterator::previous_IMPL_38250(_subclassed, _javaObject), ::TYPES[14/*Android.java.lang.Object*/]);
}

// public int previousIndex() [instance] :32016
int Android_java_util_ListIterator::previousIndex()
{
    return Android_java_util_ListIterator::previousIndex_IMPL_38251(_subclassed, _javaObject);
}

// public void remove() [instance] :32021
void Android_java_util_ListIterator::remove()
{
    Android_java_util_ListIterator::remove_IMPL_38252(_subclassed, _javaObject);
}

// public void set(Android.java.lang.Object arg0) [instance] :32026
void Android_java_util_ListIterator::set(::g::Android::java::lang::Object* arg0)
{
    Android_java_util_ListIterator::set_IMPL_38253(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern void add_IMPL_38245(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :32033
void Android_java_util_ListIterator::add_IMPL_38245(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::add_38245_ID(),"java/util/ListIterator","add","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.ListIterator.add could not be cached",69);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_ListIterator::add_38245_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool hasNext_IMPL_38246(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32036
bool Android_java_util_ListIterator::hasNext_IMPL_38246(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::hasNext_38246_ID(),"java/util/ListIterator","hasNext","()Z",GetMethodID,"Id for fallback method java.util.ListIterator.hasNext could not be cached",73);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_ListIterator::hasNext_38246_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasPrevious_IMPL_38247(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32039
bool Android_java_util_ListIterator::hasPrevious_IMPL_38247(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::hasPrevious_38247_ID(),"java/util/ListIterator","hasPrevious","()Z",GetMethodID,"Id for fallback method java.util.ListIterator.hasPrevious could not be cached",77);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Android_java_util_ListIterator::hasPrevious_38247_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper next_IMPL_38248(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32042
uObject* Android_java_util_ListIterator::next_IMPL_38248(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::next_38248_ID(),"java/util/ListIterator","next","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.ListIterator.next could not be cached",70);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_ListIterator::next_38248_ID()),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int nextIndex_IMPL_38249(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32045
int Android_java_util_ListIterator::nextIndex_IMPL_38249(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::nextIndex_38249_ID(),"java/util/ListIterator","nextIndex","()I",GetMethodID,"Id for fallback method java.util.ListIterator.nextIndex could not be cached",75);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_ListIterator::nextIndex_38249_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper previous_IMPL_38250(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32048
uObject* Android_java_util_ListIterator::previous_IMPL_38250(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::previous_38250_ID(),"java/util/ListIterator","previous","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.util.ListIterator.previous could not be cached",74);
    
    uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Android_java_util_ListIterator::previous_38250_ID()),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int previousIndex_IMPL_38251(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32051
int Android_java_util_ListIterator::previousIndex_IMPL_38251(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::previousIndex_38251_ID(),"java/util/ListIterator","previousIndex","()I",GetMethodID,"Id for fallback method java.util.ListIterator.previousIndex could not be cached",79);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, Android_java_util_ListIterator::previousIndex_38251_ID()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void remove_IMPL_38252(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :32054
void Android_java_util_ListIterator::remove_IMPL_38252(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::remove_38252_ID(),"java/util/ListIterator","remove","()V",GetMethodID,"Id for fallback method java.util.ListIterator.remove could not be cached",72);
    
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_ListIterator::remove_38252_ID());
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void set_IMPL_38253(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :32057
void Android_java_util_ListIterator::set_IMPL_38253(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(Android_java_util_ListIterator::set_38253_ID(),"java/util/ListIterator","set","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.ListIterator.set could not be cached",69);
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    U_JNIVAR->CallVoidMethod(arg1_, Android_java_util_ListIterator::set_38253_ID(), _obArg2);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

}}} // ::g::Android::Fallbacks
