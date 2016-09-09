// This file was generated based on C:\ProgramData\Uno\Packages\Android\0.32.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Android{namespace Base{struct Permissions;}}}

namespace g{
namespace Android{
namespace Base{

// public sealed extern class Permissions :165
// {
uType* Permissions_typeof();
void Permissions___access_fine_location_fn(void** __retval);
void Permissions___internet_fn(void** __retval);
void Permissions__get_ACCESS_FINE_LOCATION_fn(void** __retval);
void Permissions__get_INTERNET_fn(void** __retval);
void Permissions__RequestPermission_fn(void* x);

struct Permissions : uObject
{
    static void* _access_fine_location();
    static void* _internet();
    static void RequestPermission(void* x);
    static void* ACCESS_FINE_LOCATION();
    static void* INTERNET();
};
// }

}}} // ::g::Android::Base
