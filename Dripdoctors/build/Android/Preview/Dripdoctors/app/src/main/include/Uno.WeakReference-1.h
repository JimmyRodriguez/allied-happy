// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct WeakReference;}}

namespace g{
namespace Uno{

// public sealed class WeakReference<T> :8750
// {
uType* WeakReference_typeof();
void WeakReference__ctor__fn(WeakReference* __this, uObject* target);
void WeakReference__New1_fn(uType* __type, uObject* target, WeakReference** __retval);
void WeakReference__TryGetTarget_fn(WeakReference* __this, uObject** target, bool* __retval);

struct WeakReference : uObject
{
    uWeak<uObject*> _target;

    void ctor_(uObject* target);
    bool TryGetTarget(uObject** target);
    static WeakReference* New1(uType* __type, uObject* target);
};
// }

}} // ::g::Uno
