// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.35.1/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CALayer
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::QuartzCore::CALayer*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::QuartzCore::CALayer_typeof()

#include <QuartzCore/QuartzCore.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.QuartzCore.CALayer.h>

namespace g{
namespace iOS{
namespace QuartzCore{

// public extern class CALayer :13458
// {
static void CALayer_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(5,
        new uFunction("backgroundColor", NULL, (void*)CALayer__backgroundColor_fn, 0, false, ::g::iOS::CoreGraphics::CGColorRef_typeof(), 0),
        new uFunction("get_BackgroundColor", NULL, (void*)CALayer__get_BackgroundColor_fn, 0, false, ::g::iOS::CoreGraphics::CGColorRef_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)CALayer__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGColorRef_typeof()),
        new uFunction(".ctor", NULL, (void*)CALayer__New5_fn, 0, true, CALayer_typeof(), 0),
        new uFunction("setBackgroundColor", NULL, (void*)CALayer__setBackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGColorRef_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSObject_type* CALayer_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CALayer);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.QuartzCore.CALayer", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = CALayer_build;
    type->fp_ctor_ = (void*)CALayer__New5_fn;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))CALayer__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public CALayer() :13461
void CALayer__ctor_4_fn(CALayer* __this)
{
    __this->ctor_4();
}

// public extern iOS.CoreGraphics.CGColorRef backgroundColor() :14106
void CALayer__backgroundColor_fn(CALayer* __this, app::CGColorRef** __retval)
{
    *__retval = __this->backgroundColor();
}

// public iOS.CoreGraphics.CGColorRef get_BackgroundColor() :13637
void CALayer__get_BackgroundColor_fn(CALayer* __this, app::CGColorRef** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(iOS.CoreGraphics.CGColorRef value) :13638
void CALayer__set_BackgroundColor_fn(CALayer* __this, app::CGColorRef** value)
{
    __this->BackgroundColor(*value);
}

// public override sealed extern void init() :13812
void CALayer__init_fn(CALayer* __this)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public CALayer New() :13461
void CALayer__New5_fn(CALayer** __retval)
{
    *__retval = CALayer::New5();
}

// public extern void setBackgroundColor(iOS.CoreGraphics.CGColorRef backgroundColor) :14109
void CALayer__setBackgroundColor_fn(CALayer* __this, app::CGColorRef** backgroundColor_)
{
    __this->setBackgroundColor(*backgroundColor_);
}

// public CALayer() [instance] :13461
void CALayer::ctor_4()
{
    uStackFrame __("iOS.QuartzCore.CALayer", ".ctor()");
    ctor_2();
}

// public extern iOS.CoreGraphics.CGColorRef backgroundColor() [instance] :14106
app::CGColorRef* CALayer::backgroundColor()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "backgroundColor()");
    ::CGColorRef __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGColorRef, @selector(backgroundColor));
    return (app::CGColorRef*)(size_t) __return;
}

// public iOS.CoreGraphics.CGColorRef get_BackgroundColor() [instance] :13637
app::CGColorRef* CALayer::BackgroundColor()
{
    uStackFrame __("iOS.QuartzCore.CALayer", "get_BackgroundColor()");
    return backgroundColor();
}

// public void set_BackgroundColor(iOS.CoreGraphics.CGColorRef value) [instance] :13638
void CALayer::BackgroundColor(app::CGColorRef* value)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "set_BackgroundColor(iOS.CoreGraphics.CGColorRef)");
    setBackgroundColor(value);
}

// public extern void setBackgroundColor(iOS.CoreGraphics.CGColorRef backgroundColor) [instance] :14109
void CALayer::setBackgroundColor(app::CGColorRef* backgroundColor_)
{
    uStackFrame __("iOS.QuartzCore.CALayer", "setBackgroundColor(iOS.CoreGraphics.CGColorRef)");
    app::CGColorRef* backgroundColor__ = backgroundColor_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setBackgroundColor:),
        (::CGColorRef)(size_t) backgroundColor__);
}

// public CALayer New() [static] :13461
CALayer* CALayer::New5()
{
    CALayer* obj1 = (CALayer*)uNew(CALayer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::iOS::QuartzCore
