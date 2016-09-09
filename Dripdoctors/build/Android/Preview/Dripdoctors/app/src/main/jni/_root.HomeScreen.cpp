// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\HomeScreen.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomeScreen.h>
#include <_root.HomeScreenType.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Node.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Int.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[1];

namespace g{

// public sealed class HomeScreen :14
// {
static void HomeScreen_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Int_typeof();
    type->SetFields(8,
        ::g::HomeScreenType_typeof(), offsetof(::g::HomeScreen, _type), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("ExitAppFinish", NULL, (void*)HomeScreen__ExitAppFinish_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("ExitAppIntent", NULL, (void*)HomeScreen__ExitAppIntent_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HomeScreen__New2_fn, 0, true, HomeScreen_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)HomeScreen__get_Type_fn, 0, false, ::g::HomeScreenType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)HomeScreen__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::HomeScreenType_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* HomeScreen_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(HomeScreen);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("HomeScreen", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = HomeScreen_build;
    type->fp_ctor_ = (void*)HomeScreen__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))HomeScreen__Perform_fn;
    return type;
}

// public generated HomeScreen() :14
void HomeScreen__ctor_2_fn(HomeScreen* __this)
{
    __this->ctor_2();
}

// public static extern void ExitAppFinish() :44
void HomeScreen__ExitAppFinish_fn()
{
    HomeScreen::ExitAppFinish();
}

// public static extern void ExitAppIntent() :51
void HomeScreen__ExitAppIntent_fn()
{
    HomeScreen::ExitAppIntent();
}

// public generated HomeScreen New() :14
void HomeScreen__New2_fn(HomeScreen** __retval)
{
    *__retval = HomeScreen::New2();
}

// protected override sealed void Perform(Fuse.Node target) :27
void HomeScreen__Perform_fn(HomeScreen* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("HomeScreen", "Perform(Fuse.Node)");

    if (__this->Type() == 0)
        HomeScreen::ExitAppFinish();
    else if (__this->Type() == 1)
        HomeScreen::ExitAppIntent();
}

// public HomeScreenType get_Type() :20
void HomeScreen__get_Type_fn(HomeScreen* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(HomeScreenType value) :21
void HomeScreen__set_Type_fn(HomeScreen* __this, int* value)
{
    __this->Type(*value);
}

// public generated HomeScreen() [instance] :14
void HomeScreen::ctor_2()
{
    uStackFrame __("HomeScreen", ".ctor()");
    ctor_1();
}

// public HomeScreenType get_Type() [instance] :20
int HomeScreen::Type()
{
    uStackFrame __("HomeScreen", "get_Type()");
    return _type;
}

// public void set_Type(HomeScreenType value) [instance] :21
void HomeScreen::Type(int value)
{
    uStackFrame __("HomeScreen", "set_Type(HomeScreenType)");
    _type = value;
}

// public static extern void ExitAppFinish() [static] :44
void HomeScreen::ExitAppFinish()
{
    uStackFrame __("HomeScreen", "ExitAppFinish()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ExitAppFinish227", "()V");
        _jni->CallStaticVoidMethod(__cls, __mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void ExitAppIntent() [static] :51
void HomeScreen::ExitAppIntent()
{
    uStackFrame __("HomeScreen", "ExitAppIntent()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ExitAppIntent228", "()V");
        _jni->CallStaticVoidMethod(__cls, __mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated HomeScreen New() [static] :14
HomeScreen* HomeScreen::New2()
{
    HomeScreen* obj1 = (HomeScreen*)uNew(HomeScreen_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

} // ::g
