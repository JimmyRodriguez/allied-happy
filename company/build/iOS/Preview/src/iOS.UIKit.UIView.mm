// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.35.1/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIView_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIView :86638
// {
static void UIView_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(5,
        new uFunction("frame", NULL, (void*)UIView__frame_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("get_Frame", NULL, (void*)UIView__get_Frame_fn, 0, false, ::g::iOS::CoreGraphics::CGRect_typeof(), 0),
        new uFunction("set_Frame", NULL, (void*)UIView__set_Frame_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("setFrame", NULL, (void*)UIView__setFrame_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::CoreGraphics::CGRect_typeof()),
        new uFunction("sizeThatFits", NULL, (void*)UIView__sizeThatFits_fn, 0, false, ::g::iOS::CoreGraphics::CGSize_typeof(), 1, ::g::iOS::CoreGraphics::CGSize_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

::g::iOS::Foundation::NSObject_type* UIView_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIView);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.UIKit.UIView", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = UIView_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public extern iOS.CoreGraphics.CGRect frame() :87223
void UIView__frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->frame();
}

// public iOS.CoreGraphics.CGRect get_Frame() :86778
void UIView__get_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->Frame();
}

// public void set_Frame(iOS.CoreGraphics.CGRect value) :86779
void UIView__set_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    __this->Frame(*value);
}

// public extern void setFrame(iOS.CoreGraphics.CGRect frame) :87226
void UIView__setFrame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* frame_)
{
    __this->setFrame(*frame_);
}

// public extern iOS.CoreGraphics.CGSize sizeThatFits(iOS.CoreGraphics.CGSize size) :87217
void UIView__sizeThatFits_fn(UIView* __this, ::g::iOS::CoreGraphics::CGSize* size_, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->sizeThatFits(*size_);
}

// public extern iOS.CoreGraphics.CGRect frame() [instance] :87223
::g::iOS::CoreGraphics::CGRect UIView::frame()
{
    uStackFrame __("iOS.UIKit.UIView", "frame()");
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(frame));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public iOS.CoreGraphics.CGRect get_Frame() [instance] :86778
::g::iOS::CoreGraphics::CGRect UIView::Frame()
{
    uStackFrame __("iOS.UIKit.UIView", "get_Frame()");
    return frame();
}

// public void set_Frame(iOS.CoreGraphics.CGRect value) [instance] :86779
void UIView::Frame(::g::iOS::CoreGraphics::CGRect value)
{
    uStackFrame __("iOS.UIKit.UIView", "set_Frame(iOS.CoreGraphics.CGRect)");
    setFrame(value);
}

// public extern void setFrame(iOS.CoreGraphics.CGRect frame) [instance] :87226
void UIView::setFrame(::g::iOS::CoreGraphics::CGRect frame_)
{
    uStackFrame __("iOS.UIKit.UIView", "setFrame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect frame__ = frame_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setFrame:),
        uObjC::Struct::FromUno_CGRect(frame__, ::CGRect()));
}

// public extern iOS.CoreGraphics.CGSize sizeThatFits(iOS.CoreGraphics.CGSize size) [instance] :87217
::g::iOS::CoreGraphics::CGSize UIView::sizeThatFits(::g::iOS::CoreGraphics::CGSize size_)
{
    uStackFrame __("iOS.UIKit.UIView", "sizeThatFits(iOS.CoreGraphics.CGSize)");
    ::g::iOS::CoreGraphics::CGSize size__ = size_;
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(sizeThatFits:),
        uObjC::Struct::FromUno_CGSize(size__, ::CGSize()));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}
// }

}}} // ::g::iOS::UIKit
