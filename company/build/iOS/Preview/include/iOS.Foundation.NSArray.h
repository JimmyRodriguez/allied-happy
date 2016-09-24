// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.35.1/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSArray;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSArray :35375
// {
struct NSArray_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

NSArray_type* NSArray_typeof();
void NSArray__ctor_4_fn(NSArray* __this);
void NSArray__count_fn(NSArray* __this, uint64_t* __retval);
void NSArray__init_fn(NSArray* __this);

struct NSArray : ::g::iOS::Foundation::NSObject
{
    void ctor_4();
    uint64_t count();
};
// }

}}} // ::g::iOS::Foundation
