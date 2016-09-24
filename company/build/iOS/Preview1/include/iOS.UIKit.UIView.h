// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.35.1/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIView :86638
// {
::g::iOS::Foundation::NSObject_type* UIView_typeof();
void UIView__frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void UIView__get_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void UIView__set_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* value);
void UIView__setFrame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* frame_);
void UIView__sizeThatFits_fn(UIView* __this, ::g::iOS::CoreGraphics::CGSize* size_, ::g::iOS::CoreGraphics::CGSize* __retval);

struct UIView : ::g::iOS::Foundation::NSObject
{
    ::g::iOS::CoreGraphics::CGRect frame();
    ::g::iOS::CoreGraphics::CGRect Frame();
    void Frame(::g::iOS::CoreGraphics::CGRect value);
    void setFrame(::g::iOS::CoreGraphics::CGRect frame_);
    ::g::iOS::CoreGraphics::CGSize sizeThatFits(::g::iOS::CoreGraphics::CGSize size_);
};
// }

}}} // ::g::iOS::UIKit
