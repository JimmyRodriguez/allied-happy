#include <BootstrapperImpl_Android.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.android.app.Activity.h>
#include <Android.android.app.Fragment.h>
#include <Android.android.app.TaskStackBuilder.h>
#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.Configuration.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.location.Location.h>
#include <Android.android.location.LocationManager.h>
#include <Android.android.os.Build.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Handler.h>
#include <Android.android.os.Looper.h>
#include <Android.android.view.ActionMode.h>
#include <Android.android.view.ActionProvider.h>
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.WindowManagerDLRLayoutParams.h>
#include <Android.com.fuse.ExperimentalHttp.HttpRequest.h>
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
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.BooleanArray.h>
#include <Android.Runtime.ByteArray.h>
#include <Android.Runtime.CharArray.h>
#include <Android.Runtime.DoubleArray.h>
#include <Android.Runtime.FloatArray.h>
#include <Android.Runtime.IntArray.h>
#include <Android.Runtime.LongArray.h>
#include <Android.Runtime.RunnableAction.h>
#include <Android.Runtime.ShortArray.h>
#include <Fuse.GeoLocation.LocationListenerBase.h>
void BootstrapperImpl() {
    ::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.content.Context", 23, ::g::Android::Fallbacks::Android_android_content_Context_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.graphics.drawable.Drawable", 34, ::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.location.LocationListener", 33, ::g::Android::Fallbacks::Android_android_location_LocationListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.util.AttributeSet", 25, ::g::Android::Fallbacks::Android_android_util_AttributeSet_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ActionMode", 23, ::g::Android::Fallbacks::Android_android_view_ActionMode_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ActionProvider", 27, ::g::Android::Fallbacks::Android_android_view_ActionProvider_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ContextMenu$ContextMenuInfo", 40, ::g::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.Menu", 17, ::g::Android::Fallbacks::Android_android_view_Menu_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem", 21, ::g::Android::Fallbacks::Android_android_view_MenuItem_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem$OnActionExpandListener", 44, ::g::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem$OnMenuItemClickListener", 45, ::g::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.SubMenu", 20, ::g::Android::Fallbacks::Android_android_view_SubMenu_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.lang.CharSequence", 22, ::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.lang.Iterable", 18, ::g::Android::Fallbacks::Android_java_lang_Iterable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.lang.Runnable", 18, ::g::Android::Fallbacks::Android_java_lang_Runnable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.util.Collection", 20, ::g::Android::Fallbacks::Android_java_util_Collection_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.util.Iterator", 18, ::g::Android::Fallbacks::Android_java_util_Iterator_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.util.List", 14, ::g::Android::Fallbacks::Android_java_util_List_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.util.ListIterator", 22, ::g::Android::Fallbacks::Android_java_util_ListIterator_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[B", 2, ::g::Android::Runtime::ByteArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[C", 2, ::g::Android::Runtime::CharArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[D", 2, ::g::Android::Runtime::DoubleArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[F", 2, ::g::Android::Runtime::FloatArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[I", 2, ::g::Android::Runtime::IntArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[J", 2, ::g::Android::Runtime::LongArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[S", 2, ::g::Android::Runtime::ShortArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[Z", 2, ::g::Android::Runtime::BooleanArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.Activity", 20, ::g::Android::android::app::Activity_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.Fragment", 20, ::g::Android::android::app::Fragment_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.TaskStackBuilder", 28, ::g::Android::android::app::TaskStackBuilder_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.ComponentName", 29, ::g::Android::android::content::ComponentName_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.Context", 23, ::g::Android::android::content::Context_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.ContextWrapper", 30, ::g::Android::android::content::ContextWrapper_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.Intent", 22, ::g::Android::android::content::Intent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.res.Configuration", 33, ::g::Android::android::content::res::Configuration_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Bitmap", 23, ::g::Android::android::graphics::Bitmap_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Canvas", 23, ::g::Android::android::graphics::Canvas_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.Drawable", 34, ::g::Android::android::graphics::drawable::Drawable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.location.Location", 25, ::g::Android::android::location::Location_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.location.LocationManager", 32, ::g::Android::android::location::LocationManager_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Build", 16, ::g::Android::android::os::Build_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Bundle", 17, ::g::Android::android::os::Bundle_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Handler", 18, ::g::Android::android::os::Handler_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Looper", 17, ::g::Android::android::os::Looper_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ActionMode", 23, ::g::Android::android::view::ActionMode_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ActionProvider", 27, ::g::Android::android::view::ActionProvider_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ContextThemeWrapper", 32, ::g::Android::android::view::ContextThemeWrapper_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.KeyEvent", 21, ::g::Android::android::view::KeyEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.MotionEvent", 24, ::g::Android::android::view::MotionEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.View", 17, ::g::Android::android::view::View_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.WindowManager$LayoutParams", 39, ::g::Android::android::view::WindowManagerDLRLayoutParams_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Android_Runtime_RunnableAction", 38, ::g::Android::Runtime::RunnableAction_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_GeoLocation_LocationListenerBase", 45, ::g::Fuse::GeoLocation::LocationListenerBase_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("com.fuse.ExperimentalHttp.HttpRequest", 37, ::g::Android::com::fuse::ExperimentalHttp::HttpRequest_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.Class", 15, ::g::Android::java::lang::Class_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.Object", 16, ::g::Android::java::lang::Object_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.String", 16, ::g::Android::java::lang::String_typeof());
}
