// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Threading\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Threading{struct Monitor;}}}

namespace g{
namespace Uno{
namespace Threading{

// public static class Monitor :23
// {
uClassType* Monitor_typeof();
void Monitor__Enter_fn(uObject* obj);
void Monitor__Exit_fn(uObject* obj);

struct Monitor : uObject
{
    static void Enter(uObject* obj);
    static void Exit(uObject* obj);
};
// }

}}} // ::g::Uno::Threading
