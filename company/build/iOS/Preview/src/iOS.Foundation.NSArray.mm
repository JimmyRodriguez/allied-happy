// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.35.1/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSArray
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSArray*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSArray_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <Uno.ULong.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSArray :35375
// {
static void NSArray_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSArray_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSArray_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction("count", NULL, (void*)NSArray__count_fn, 0, false, ::g::Uno::ULong_typeof(), 0));

    {
        uObjC_REGISTER_TYPE();
    }
}

NSArray_type* NSArray_typeof()
{
    static uSStrong<NSArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSArray);
    options.TypeSize = sizeof(NSArray_type);
    type = (NSArray_type*)uClassType::New("iOS.Foundation.NSArray", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = NSArray_build;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSArray__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public NSArray() :35378
void NSArray__ctor_4_fn(NSArray* __this)
{
    __this->ctor_4();
}

// public extern ulong count() :35420
void NSArray__count_fn(NSArray* __this, uint64_t* __retval)
{
    *__retval = __this->count();
}

// public override extern void init() :35414
void NSArray__init_fn(NSArray* __this)
{
    uStackFrame __("iOS.Foundation.NSArray", "init()");
    uObjC_DO_INIT(__this, @selector(init));
}

// public NSArray() [instance] :35378
void NSArray::ctor_4()
{
    uStackFrame __("iOS.Foundation.NSArray", ".ctor()");
    ctor_2();
}

// public extern ulong count() [instance] :35420
uint64_t NSArray::count()
{
    uStackFrame __("iOS.Foundation.NSArray", "count()");
    unsigned long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, unsigned long, @selector(count));
    return (uint64_t)__return;
}
// }

}}} // ::g::iOS::Foundation
