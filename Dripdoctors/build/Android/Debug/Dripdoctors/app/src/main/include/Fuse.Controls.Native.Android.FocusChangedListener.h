// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct FocusChangedListener;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class FocusChangedListener :2055
// {
struct FocusChangedListener_type : uType
{
    ::g::Uno::IDisposable interface0;
};

FocusChangedListener_type* FocusChangedListener_typeof();
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle);
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this);
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus);

struct FocusChangedListener : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Java::Object*> _view;

    void Dispose();
    void OnFocusChange(bool hasFocus);
    static void ClearListener(::g::Java::Object* viewHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
