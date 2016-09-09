// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\build\Android\Preview\cache\Dripdoctors.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Dripdoctors_FuseControlsText_Value_Property;}

namespace g{

// internal sealed class Dripdoctors_FuseControlsText_Value_Property :1
// {
::g::Uno::UX::Property1_type* Dripdoctors_FuseControlsText_Value_Property_typeof();
void Dripdoctors_FuseControlsText_Value_Property__ctor_2_fn(Dripdoctors_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name);
void Dripdoctors_FuseControlsText_Value_Property__Get_fn(Dripdoctors_FuseControlsText_Value_Property* __this, uString** __retval);
void Dripdoctors_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, Dripdoctors_FuseControlsText_Value_Property** __retval);
void Dripdoctors_FuseControlsText_Value_Property__get_Object_fn(Dripdoctors_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Dripdoctors_FuseControlsText_Value_Property__Set_fn(Dripdoctors_FuseControlsText_Value_Property* __this, uString* v, uObject* origin);
void Dripdoctors_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(Dripdoctors_FuseControlsText_Value_Property* __this, bool* __retval);

struct Dripdoctors_FuseControlsText_Value_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Text*> _obj;

    void ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
    static Dripdoctors_FuseControlsText_Value_Property* New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
