// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Intent.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.view.ActionMode.h>
#include <Android.android.view.ActionProvider.h>
#include <Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.Menu.h>
#include <Android.android.view.MenuItem.h>
#include <Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.SubMenu.h>
#include <Android.android.view.View.h>
#include <Android.android.view.WindowManagerDLRLayoutParams.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_view_ActionMode.h>
#include <Android.Fallbacks.Android_android_view_ActionProvider.h>
#include <Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h>
#include <Android.Fallbacks.Android_android_view_Menu.h>
#include <Android.Fallbacks.Android_android_view_MenuItem.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h>
#include <Android.Fallbacks.Android_android_view_SubMenu.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[1];

namespace g{
namespace Android{
namespace android{
namespace view{

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public abstract extern class ActionMode :246
// {
static void ActionMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* ActionMode_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ActionMode);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ActionMode", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = ActionMode_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public abstract extern class ActionProvider :364
// {
static void ActionProvider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* ActionProvider_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ActionProvider);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ActionProvider", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = ActionProvider_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public abstract extern interface ContextMenuDLRContextMenuInfo :26700
// {
uInterfaceType* ContextMenuDLRContextMenuInfo_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.ContextMenuDLRContextMenuInfo", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public extern class ContextThemeWrapper :11
// {
static void ContextThemeWrapper_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* ContextThemeWrapper_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ContextThemeWrapper);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ContextThemeWrapper", options);
    type->SetBase(::g::Android::android::content::ContextWrapper_typeof());
    type->fp_build_ = ContextThemeWrapper_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public ContextThemeWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void ContextThemeWrapper__ctor_11_fn(ContextThemeWrapper* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_11(*obj, utype, *hasFallbackClass, *resolveType);
}

// public ContextThemeWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void ContextThemeWrapper::ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.view.ContextThemeWrapper", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_8(obj, utype, hasFallbackClass, resolveType);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public sealed extern class KeyEvent :12892
// {
static void KeyEvent_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::KeyEvent::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::KeyEvent::toString_22231_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)KeyEvent___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_22231", NULL, (void*)KeyEvent__toString_IMPL_22231_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* KeyEvent_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(KeyEvent);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.KeyEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = KeyEvent_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))KeyEvent__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :12896
void KeyEvent___Init3_fn()
{
    KeyEvent::_Init3();
}

// public override sealed Android.java.lang.String toString() :17770
void KeyEvent__toString_fn(KeyEvent* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.view.KeyEvent", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(KeyEvent::toString_IMPL_22231(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22231(bool arg0, Android.Base.Primitives.ujobject arg1) :17960
void KeyEvent__toString_IMPL_22231_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = KeyEvent::toString_IMPL_22231(*arg0_, *arg1_);
}

jclass KeyEvent::_javaClass3_;
jmethodID KeyEvent::toString_22231_ID_;

// public static extern new void _Init() [static] :12896
void KeyEvent::_Init3()
{
    uStackFrame __("Android.android.view.KeyEvent", "_Init()");
    if (KeyEvent::_javaClass3()) { return; }
    INIT_JNI;
    KeyEvent::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/KeyEvent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!KeyEvent::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.KeyEvent'", 45);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22231(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :17960
uObject* KeyEvent::toString_IMPL_22231(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.view.KeyEvent", "toString_IMPL_22231(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(KeyEvent::_javaClass3(),KeyEvent::_Init3());
    
    uObject* result;
    CACHE_METHOD(KeyEvent::toString_22231_ID(),KeyEvent::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.KeyEvent.toString could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, KeyEvent::_javaClass3(), KeyEvent::toString_22231_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, KeyEvent::toString_22231_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public abstract extern interface Menu :26715
// {
uInterfaceType* Menu_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.Menu", 0, 0);
    type->Reflection.SetFunctions(24,
        new uFunction("add", NULL, NULL, offsetof(Menu, fp_add), false, ::g::Android::android::view::MenuItem_typeof(), 1, ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("add", NULL, NULL, offsetof(Menu, fp_add1), false, ::g::Android::android::view::MenuItem_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("add", NULL, NULL, offsetof(Menu, fp_add2), false, ::g::Android::android::view::MenuItem_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("add", NULL, NULL, offsetof(Menu, fp_add3), false, ::g::Android::android::view::MenuItem_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("addIntentOptions", NULL, NULL, offsetof(Menu, fp_addIntentOptions), false, ::g::Uno::Int_typeof(), 8, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::android::content::ComponentName_typeof(), ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::content::Intent_typeof()), ::g::Android::android::content::Intent_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::view::MenuItem_typeof())),
        new uFunction("addSubMenu", NULL, NULL, offsetof(Menu, fp_addSubMenu), false, ::g::Android::android::view::SubMenu_typeof(), 1, ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("addSubMenu", NULL, NULL, offsetof(Menu, fp_addSubMenu1), false, ::g::Android::android::view::SubMenu_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("addSubMenu", NULL, NULL, offsetof(Menu, fp_addSubMenu2), false, ::g::Android::android::view::SubMenu_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("addSubMenu", NULL, NULL, offsetof(Menu, fp_addSubMenu3), false, ::g::Android::android::view::SubMenu_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("clear", NULL, NULL, offsetof(Menu, fp_clear), false, uVoid_typeof(), 0),
        new uFunction("close", NULL, NULL, offsetof(Menu, fp_close), false, uVoid_typeof(), 0),
        new uFunction("findItem", NULL, NULL, offsetof(Menu, fp_findItem), false, ::g::Android::android::view::MenuItem_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getItem", NULL, NULL, offsetof(Menu, fp_getItem), false, ::g::Android::android::view::MenuItem_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("hasVisibleItems", NULL, NULL, offsetof(Menu, fp_hasVisibleItems), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isShortcutKey", NULL, NULL, offsetof(Menu, fp_isShortcutKey), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::android::view::KeyEvent_typeof()),
        new uFunction("performIdentifierAction", NULL, NULL, offsetof(Menu, fp_performIdentifierAction), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("performShortcut", NULL, NULL, offsetof(Menu, fp_performShortcut), false, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Android::android::view::KeyEvent_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("removeGroup", NULL, NULL, offsetof(Menu, fp_removeGroup), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("removeItem", NULL, NULL, offsetof(Menu, fp_removeItem), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setGroupCheckable", NULL, NULL, offsetof(Menu, fp_setGroupCheckable), false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setGroupEnabled", NULL, NULL, offsetof(Menu, fp_setGroupEnabled), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setGroupVisible", NULL, NULL, offsetof(Menu, fp_setGroupVisible), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setQwertyMode", NULL, NULL, offsetof(Menu, fp_setQwertyMode), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("size", NULL, NULL, offsetof(Menu, fp_size), false, ::g::Uno::Int_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public abstract extern interface MenuItem :26956
// {
uInterfaceType* MenuItem_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItem", 0, 0);
    type->Reflection.SetFunctions(41,
        new uFunction("collapseActionView", NULL, NULL, offsetof(MenuItem, fp_collapseActionView), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("expandActionView", NULL, NULL, offsetof(MenuItem, fp_expandActionView), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("getActionProvider", NULL, NULL, offsetof(MenuItem, fp_getActionProvider), false, ::g::Android::android::view::ActionProvider_typeof(), 0),
        new uFunction("getActionView", NULL, NULL, offsetof(MenuItem, fp_getActionView), false, ::g::Android::android::view::View_typeof(), 0),
        new uFunction("getAlphabeticShortcut", NULL, NULL, offsetof(MenuItem, fp_getAlphabeticShortcut), false, ::g::Uno::Char_typeof(), 0),
        new uFunction("getGroupId", NULL, NULL, offsetof(MenuItem, fp_getGroupId), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getIcon", NULL, NULL, offsetof(MenuItem, fp_getIcon), false, ::g::Android::android::graphics::drawable::Drawable_typeof(), 0),
        new uFunction("getIntent", NULL, NULL, offsetof(MenuItem, fp_getIntent), false, ::g::Android::android::content::Intent_typeof(), 0),
        new uFunction("getItemId", NULL, NULL, offsetof(MenuItem, fp_getItemId), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getMenuInfo", NULL, NULL, offsetof(MenuItem, fp_getMenuInfo), false, ::g::Android::android::view::ContextMenuDLRContextMenuInfo_typeof(), 0),
        new uFunction("getNumericShortcut", NULL, NULL, offsetof(MenuItem, fp_getNumericShortcut), false, ::g::Uno::Char_typeof(), 0),
        new uFunction("getOrder", NULL, NULL, offsetof(MenuItem, fp_getOrder), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getSubMenu", NULL, NULL, offsetof(MenuItem, fp_getSubMenu), false, ::g::Android::android::view::SubMenu_typeof(), 0),
        new uFunction("getTitle", NULL, NULL, offsetof(MenuItem, fp_getTitle), false, ::g::Android::java::lang::CharSequence_typeof(), 0),
        new uFunction("getTitleCondensed", NULL, NULL, offsetof(MenuItem, fp_getTitleCondensed), false, ::g::Android::java::lang::CharSequence_typeof(), 0),
        new uFunction("hasSubMenu", NULL, NULL, offsetof(MenuItem, fp_hasSubMenu), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isActionViewExpanded", NULL, NULL, offsetof(MenuItem, fp_isActionViewExpanded), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isCheckable", NULL, NULL, offsetof(MenuItem, fp_isCheckable), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isChecked", NULL, NULL, offsetof(MenuItem, fp_isChecked), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isEnabled", NULL, NULL, offsetof(MenuItem, fp_isEnabled), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isVisible", NULL, NULL, offsetof(MenuItem, fp_isVisible), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("setActionProvider", NULL, NULL, offsetof(MenuItem, fp_setActionProvider), false, MenuItem_typeof(), 1, ::g::Android::android::view::ActionProvider_typeof()),
        new uFunction("setActionView", NULL, NULL, offsetof(MenuItem, fp_setActionView), false, MenuItem_typeof(), 1, ::g::Android::android::view::View_typeof()),
        new uFunction("setActionView", NULL, NULL, offsetof(MenuItem, fp_setActionView1), false, MenuItem_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setAlphabeticShortcut", NULL, NULL, offsetof(MenuItem, fp_setAlphabeticShortcut), false, MenuItem_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("setCheckable", NULL, NULL, offsetof(MenuItem, fp_setCheckable), false, MenuItem_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setChecked", NULL, NULL, offsetof(MenuItem, fp_setChecked), false, MenuItem_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setEnabled", NULL, NULL, offsetof(MenuItem, fp_setEnabled), false, MenuItem_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setIcon", NULL, NULL, offsetof(MenuItem, fp_setIcon), false, MenuItem_typeof(), 1, ::g::Android::android::graphics::drawable::Drawable_typeof()),
        new uFunction("setIcon", NULL, NULL, offsetof(MenuItem, fp_setIcon1), false, MenuItem_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setIntent", NULL, NULL, offsetof(MenuItem, fp_setIntent), false, MenuItem_typeof(), 1, ::g::Android::android::content::Intent_typeof()),
        new uFunction("setNumericShortcut", NULL, NULL, offsetof(MenuItem, fp_setNumericShortcut), false, MenuItem_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("setOnActionExpandListener", NULL, NULL, offsetof(MenuItem, fp_setOnActionExpandListener), false, MenuItem_typeof(), 1, ::g::Android::android::view::MenuItemDLROnActionExpandListener_typeof()),
        new uFunction("setOnMenuItemClickListener", NULL, NULL, offsetof(MenuItem, fp_setOnMenuItemClickListener), false, MenuItem_typeof(), 1, ::g::Android::android::view::MenuItemDLROnMenuItemClickListener_typeof()),
        new uFunction("setShortcut", NULL, NULL, offsetof(MenuItem, fp_setShortcut), false, MenuItem_typeof(), 2, ::g::Uno::Char_typeof(), ::g::Uno::Char_typeof()),
        new uFunction("setShowAsAction", NULL, NULL, offsetof(MenuItem, fp_setShowAsAction), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setShowAsActionFlags", NULL, NULL, offsetof(MenuItem, fp_setShowAsActionFlags), false, MenuItem_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setTitle", NULL, NULL, offsetof(MenuItem, fp_setTitle), false, MenuItem_typeof(), 1, ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("setTitle", NULL, NULL, offsetof(MenuItem, fp_setTitle1), false, MenuItem_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setTitleCondensed", NULL, NULL, offsetof(MenuItem, fp_setTitleCondensed), false, MenuItem_typeof(), 1, ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("setVisible", NULL, NULL, offsetof(MenuItem, fp_setVisible), false, MenuItem_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public abstract extern interface MenuItemDLROnActionExpandListener :26920
// {
uInterfaceType* MenuItemDLROnActionExpandListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItemDLROnActionExpandListener", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("onMenuItemActionCollapse", NULL, NULL, offsetof(MenuItemDLROnActionExpandListener, fp_onMenuItemActionCollapse), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::view::MenuItem_typeof()),
        new uFunction("onMenuItemActionExpand", NULL, NULL, offsetof(MenuItemDLROnActionExpandListener, fp_onMenuItemActionExpand), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::view::MenuItem_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public abstract extern interface MenuItemDLROnMenuItemClickListener :26939
// {
uInterfaceType* MenuItemDLROnMenuItemClickListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItemDLROnMenuItemClickListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onMenuItemClick", NULL, NULL, offsetof(MenuItemDLROnMenuItemClickListener, fp_onMenuItemClick), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::view::MenuItem_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public sealed extern class MotionEvent :18487
// {
static void MotionEvent_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::toString_22526_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)MotionEvent___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_22526", NULL, (void*)MotionEvent__toString_IMPL_22526_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* MotionEvent_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.MotionEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = MotionEvent_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))MotionEvent__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :18491
void MotionEvent___Init3_fn()
{
    MotionEvent::_Init3();
}

// public override sealed Android.java.lang.String toString() :20358
void MotionEvent__toString_fn(MotionEvent* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.view.MotionEvent", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(MotionEvent::toString_IMPL_22526(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22526(bool arg0, Android.Base.Primitives.ujobject arg1) :20632
void MotionEvent__toString_IMPL_22526_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = MotionEvent::toString_IMPL_22526(*arg0_, *arg1_);
}

jclass MotionEvent::_javaClass3_;
jmethodID MotionEvent::toString_22526_ID_;

// public static extern new void _Init() [static] :18491
void MotionEvent::_Init3()
{
    uStackFrame __("Android.android.view.MotionEvent", "_Init()");
    if (MotionEvent::_javaClass3()) { return; }
    INIT_JNI;
    MotionEvent::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/MotionEvent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!MotionEvent::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.MotionEvent'", 48);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22526(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20632
uObject* MotionEvent::toString_IMPL_22526(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.view.MotionEvent", "toString_IMPL_22526(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    uObject* result;
    CACHE_METHOD(MotionEvent::toString_22526_ID(),MotionEvent::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.MotionEvent.toString could not be cached",76);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::toString_22526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, MotionEvent::toString_22526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public abstract extern interface SubMenu :27093
// {
uInterfaceType* SubMenu_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.SubMenu", 0, 0);
    type->Reflection.SetFunctions(9,
        new uFunction("clearHeader", NULL, NULL, offsetof(SubMenu, fp_clearHeader), false, uVoid_typeof(), 0),
        new uFunction("getItem", NULL, NULL, offsetof(SubMenu, fp_getItem), false, ::g::Android::android::view::MenuItem_typeof(), 0),
        new uFunction("setHeaderIcon", NULL, NULL, offsetof(SubMenu, fp_setHeaderIcon), false, SubMenu_typeof(), 1, ::g::Android::android::graphics::drawable::Drawable_typeof()),
        new uFunction("setHeaderIcon", NULL, NULL, offsetof(SubMenu, fp_setHeaderIcon1), false, SubMenu_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setHeaderTitle", NULL, NULL, offsetof(SubMenu, fp_setHeaderTitle), false, SubMenu_typeof(), 1, ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("setHeaderTitle", NULL, NULL, offsetof(SubMenu, fp_setHeaderTitle1), false, SubMenu_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setHeaderView", NULL, NULL, offsetof(SubMenu, fp_setHeaderView), false, SubMenu_typeof(), 1, ::g::Android::android::view::View_typeof()),
        new uFunction("setIcon", NULL, NULL, offsetof(SubMenu, fp_setIcon), false, SubMenu_typeof(), 1, ::g::Android::android::graphics::drawable::Drawable_typeof()),
        new uFunction("setIcon", NULL, NULL, offsetof(SubMenu, fp_setIcon1), false, SubMenu_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public sealed extern class View :962
// {
static void View_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::View::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::toString_22818_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)View___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_22818", NULL, (void*)View__toString_IMPL_22818_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* View_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.View", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = View_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))View__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :966
void View___Init2_fn()
{
    View::_Init2();
}

// public override sealed Android.java.lang.String toString() :2474
void View__toString_fn(View* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.view.View", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(View::toString_IMPL_22818(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22818(bool arg0, Android.Base.Primitives.ujobject arg1) :5124
void View__toString_IMPL_22818_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = View::toString_IMPL_22818(*arg0_, *arg1_);
}

jclass View::_javaClass2_;
jmethodID View::toString_22818_ID_;

// public static extern new void _Init() [static] :966
void View::_Init2()
{
    uStackFrame __("Android.android.view.View", "_Init()");
    if (View::_javaClass2()) { return; }
    INIT_JNI;
    View::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/View"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!View::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.View'", 41);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22818(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5124
uObject* View::toString_IMPL_22818(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.view.View", "toString_IMPL_22818(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    uObject* result;
    CACHE_METHOD(View::toString_22818_ID(),View::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.View.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, View::_javaClass2(), View::toString_22818_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, View::toString_22818_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\android\view\$.uno
// ---------------------------------------------------------------------

// public sealed extern class WindowManagerDLRLayoutParams :23968
// {
static void WindowManagerDLRLayoutParams_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::WindowManagerDLRLayoutParams::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::WindowManagerDLRLayoutParams::toString_23907_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)WindowManagerDLRLayoutParams___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_23907", NULL, (void*)WindowManagerDLRLayoutParams__toString_IMPL_23907_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* WindowManagerDLRLayoutParams_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WindowManagerDLRLayoutParams);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.WindowManagerDLRLayoutParams", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = WindowManagerDLRLayoutParams_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))WindowManagerDLRLayoutParams__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :23972
void WindowManagerDLRLayoutParams___Init3_fn()
{
    WindowManagerDLRLayoutParams::_Init3();
}

// public override sealed Android.java.lang.String toString() :26290
void WindowManagerDLRLayoutParams__toString_fn(WindowManagerDLRLayoutParams* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.view.WindowManagerDLRLayoutParams", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(WindowManagerDLRLayoutParams::toString_IMPL_23907(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_23907(bool arg0, Android.Base.Primitives.ujobject arg1) :26325
void WindowManagerDLRLayoutParams__toString_IMPL_23907_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WindowManagerDLRLayoutParams::toString_IMPL_23907(*arg0_, *arg1_);
}

jclass WindowManagerDLRLayoutParams::_javaClass3_;
jmethodID WindowManagerDLRLayoutParams::toString_23907_ID_;

// public static extern new void _Init() [static] :23972
void WindowManagerDLRLayoutParams::_Init3()
{
    uStackFrame __("Android.android.view.WindowManagerDLRLayoutParams", "_Init()");
    if (WindowManagerDLRLayoutParams::_javaClass3()) { return; }
    INIT_JNI;
    WindowManagerDLRLayoutParams::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/WindowManager$LayoutParams"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!WindowManagerDLRLayoutParams::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.WindowManager$LayoutParams'", 63);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_23907(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26325
uObject* WindowManagerDLRLayoutParams::toString_IMPL_23907(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.view.WindowManagerDLRLayoutParams", "toString_IMPL_23907(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(WindowManagerDLRLayoutParams::_javaClass3(),WindowManagerDLRLayoutParams::_Init3());
    
    uObject* result;
    CACHE_METHOD(WindowManagerDLRLayoutParams::toString_23907_ID(),WindowManagerDLRLayoutParams::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.WindowManager$LayoutParams.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WindowManagerDLRLayoutParams::_javaClass3(), WindowManagerDLRLayoutParams::toString_23907_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WindowManagerDLRLayoutParams::toString_23907_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::android::view
