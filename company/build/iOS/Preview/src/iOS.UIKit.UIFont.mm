// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.35.1/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIFont
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIFont*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIFont_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIFont.h>
#include <Uno.Double.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIFont :75079
// {
static void UIFont_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIFont_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(UIFont_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(2,
        new uFunction("_fontWithNameSize", NULL, (void*)UIFont___fontWithNameSize_fn, 0, true, UIFont_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("_systemFontOfSize", NULL, (void*)UIFont___systemFontOfSize_fn, 0, true, UIFont_typeof(), 1, ::g::Uno::Double_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }
}

UIFont_type* UIFont_typeof()
{
    static uSStrong<UIFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIFont);
    options.TypeSize = sizeof(UIFont_type);
    type = (UIFont_type*)uClassType::New("iOS.UIKit.UIFont", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_build_ = UIFont_build;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    return type;
}

// public static extern iOS.UIKit.UIFont _fontWithNameSize(string fontName, double fontSize) :75138
void UIFont___fontWithNameSize_fn(uString* fontName_, double* fontSize_, UIFont** __retval)
{
    *__retval = UIFont::_fontWithNameSize(fontName_, *fontSize_);
}

// public static extern iOS.UIKit.UIFont _systemFontOfSize(double fontSize) :75147
void UIFont___systemFontOfSize_fn(double* fontSize_, UIFont** __retval)
{
    *__retval = UIFont::_systemFontOfSize(*fontSize_);
}

// public static extern iOS.UIKit.UIFont _fontWithNameSize(string fontName, double fontSize) [static] :75138
UIFont* UIFont::_fontWithNameSize(uString* fontName_, double fontSize_)
{
    uStackFrame __("iOS.UIKit.UIFont", "_fontWithNameSize(string,double)");
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIFont*, @selector(fontWithName:size:),
        uObjC::NativeString(fontName_),
        (CGFloat)fontSize_);
    return (UIFont*)uObjC::Lifetime::GetUnoObject(__return, UIFont_typeof());
}

// public static extern iOS.UIKit.UIFont _systemFontOfSize(double fontSize) [static] :75147
UIFont* UIFont::_systemFontOfSize(double fontSize_)
{
    uStackFrame __("iOS.UIKit.UIFont", "_systemFontOfSize(double)");
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIFont*, @selector(systemFontOfSize:),
        (CGFloat)fontSize_);
    return (UIFont*)uObjC::Lifetime::GetUnoObject(__return, UIFont_typeof());
}
// }

}}} // ::g::iOS::UIKit
