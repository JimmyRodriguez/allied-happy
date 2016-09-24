// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.util.AttributeSet.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Fallbacks.Android_android_util_AttributeSet.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>

namespace g{
namespace Android{
namespace android{
namespace util{

// /usr/local/share/uno/Packages/Android/0.35.1/Android/android/util/$.uno
// -----------------------------------------------------------------------

// public abstract extern interface AttributeSet :6223
// {
uInterfaceType* AttributeSet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.util.AttributeSet", 0, 0);
    type->Reflection.SetFunctions(22,
        new uFunction("getAttributeBooleanValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeBooleanValue), false, ::g::Uno::Bool_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("getAttributeBooleanValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeBooleanValue1), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("getAttributeCount", NULL, NULL, offsetof(AttributeSet, fp_getAttributeCount), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getAttributeFloatValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeFloatValue), false, ::g::Uno::Float_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("getAttributeFloatValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeFloatValue1), false, ::g::Uno::Float_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("getAttributeIntValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeIntValue), false, ::g::Uno::Int_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeIntValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeIntValue1), false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeListValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeListValue), false, ::g::Uno::Int_typeof(), 4, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::String_typeof()), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeListValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeListValue1), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::String_typeof()), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeName", NULL, NULL, offsetof(AttributeSet, fp_getAttributeName), false, ::g::Android::java::lang::String_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getAttributeNameResource", NULL, NULL, offsetof(AttributeSet, fp_getAttributeNameResource), false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getAttributeResourceValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeResourceValue), false, ::g::Uno::Int_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeResourceValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeResourceValue1), false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeUnsignedIntValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeUnsignedIntValue), false, ::g::Uno::Int_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeUnsignedIntValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeUnsignedIntValue1), false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getAttributeValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeValue), false, ::g::Android::java::lang::String_typeof(), 2, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("getAttributeValue", NULL, NULL, offsetof(AttributeSet, fp_getAttributeValue1), false, ::g::Android::java::lang::String_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getClassAttribute", NULL, NULL, offsetof(AttributeSet, fp_getClassAttribute), false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getIdAttribute", NULL, NULL, offsetof(AttributeSet, fp_getIdAttribute), false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getIdAttributeResourceValue", NULL, NULL, offsetof(AttributeSet, fp_getIdAttributeResourceValue), false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("getPositionDescription", NULL, NULL, offsetof(AttributeSet, fp_getPositionDescription), false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getStyleAttribute", NULL, NULL, offsetof(AttributeSet, fp_getStyleAttribute), false, ::g::Uno::Int_typeof(), 0));
    return type;
}
// }

}}}} // ::g::Android::android::util
