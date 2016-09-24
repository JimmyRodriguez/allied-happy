// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.Foundation._NSRange.h>
#include <Uno.ULong.h>

namespace g{
namespace iOS{
namespace Foundation{

// /usr/local/share/uno/Packages/Experimental.iOS/0.35.1/struct/$.uno
// ------------------------------------------------------------------

// public extern struct _NSRange :4311
// {
static void _NSRange_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::ULong_typeof(), offsetof(::g::iOS::Foundation::_NSRange, Location), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::iOS::Foundation::_NSRange, Length), 0);
    type->Reflection.SetFields(2,
        new uField("Length", 1),
        new uField("Location", 0));
}

uStructType* _NSRange_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(_NSRange);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.Foundation._NSRange", options);
    type->fp_build_ = _NSRange_build;
    return type;
}
// }

}}} // ::g::iOS::Foundation
