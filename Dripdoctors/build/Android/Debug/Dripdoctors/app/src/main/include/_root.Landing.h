// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\.uno\Landing.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Landing;}

namespace g{

// public partial sealed class Landing :2
// {
::g::Fuse::Controls::Control_type* Landing_typeof();
void Landing__ctor_8_fn(Landing* __this, ::g::Fuse::Navigation::Router* router1);
void Landing__InitializeUX_fn(Landing* __this);
void Landing__New5_fn(::g::Fuse::Navigation::Router* router1, Landing** __retval);

struct Landing : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Landing_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Landing_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Landing_typeof()->Init(), __selector1_; }
    uStrong< ::g::Fuse::Controls::Image*> landing;
    uStrong< ::g::Uno::UX::Property1*> landing_Width_inst;
    static uSStrong< ::g::Fuse::Resources::FileImageSource*> logoDripDoctors_;
    static uSStrong< ::g::Fuse::Resources::FileImageSource*>& logoDripDoctors() { return Landing_typeof()->Init(), logoDripDoctors_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static Landing* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
