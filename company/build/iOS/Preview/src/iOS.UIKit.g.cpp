// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.UIKit.NSLineBreakMode.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.UIInterfaceOrientation.h>

namespace g{
namespace iOS{
namespace UIKit{

// /usr/local/share/uno/Packages/Experimental.iOS/0.35.1/enum/$.uno
// ----------------------------------------------------------------

// public enum NSLineBreakMode :6831
uEnumType* NSLineBreakMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.NSLineBreakMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "NSLineBreakByWordWrapping", 0LL,
        "NSLineBreakByCharWrapping", 1LL,
        "NSLineBreakByClipping", 2LL,
        "NSLineBreakByTruncatingHead", 3LL,
        "NSLineBreakByTruncatingTail", 4LL,
        "NSLineBreakByTruncatingMiddle", 5LL);
    return type;
}

// /usr/local/share/uno/Packages/Experimental.iOS/0.35.1/enum/$.uno
// ----------------------------------------------------------------

// public enum NSTextAlignment :7485
uEnumType* NSTextAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.NSTextAlignment", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "NSTextAlignmentLeft", 0LL,
        "NSTextAlignmentCenter", 1LL,
        "NSTextAlignmentRight", 2LL,
        "NSTextAlignmentJustified", 3LL,
        "NSTextAlignmentNatural", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Experimental.iOS/0.35.1/enum/$.uno
// ----------------------------------------------------------------

// public enum UIInterfaceOrientation :10102
uEnumType* UIInterfaceOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIInterfaceOrientation", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "UIInterfaceOrientationUnknown", 0LL,
        "UIInterfaceOrientationPortrait", 1LL,
        "UIInterfaceOrientationPortraitUpsideDown", 2LL,
        "UIInterfaceOrientationLandscapeLeft", 4LL,
        "UIInterfaceOrientationLandscapeRight", 3LL);
    return type;
}

}}} // ::g::iOS::UIKit
