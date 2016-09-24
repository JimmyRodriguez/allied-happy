// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.35.1/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace QuartzCore{struct CALayer;}}}

namespace g{
namespace iOS{
namespace QuartzCore{

// public extern class CALayer :13458
// {
::g::iOS::Foundation::NSObject_type* CALayer_typeof();
void CALayer__ctor_4_fn(CALayer* __this);
void CALayer__backgroundColor_fn(CALayer* __this, app::CGColorRef** __retval);
void CALayer__get_BackgroundColor_fn(CALayer* __this, app::CGColorRef** __retval);
void CALayer__set_BackgroundColor_fn(CALayer* __this, app::CGColorRef** value);
void CALayer__init_fn(CALayer* __this);
void CALayer__New5_fn(CALayer** __retval);
void CALayer__setBackgroundColor_fn(CALayer* __this, app::CGColorRef** backgroundColor_);

struct CALayer : ::g::iOS::Foundation::NSObject
{
    void ctor_4();
    app::CGColorRef* backgroundColor();
    app::CGColorRef* BackgroundColor();
    void BackgroundColor(app::CGColorRef* value);
    void setBackgroundColor(app::CGColorRef* backgroundColor_);
    static CALayer* New5();
};
// }

}}} // ::g::iOS::QuartzCore
