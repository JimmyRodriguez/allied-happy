// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\.uno\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template1;}

namespace g{

// public partial sealed class MainView.Template1 :24
// {
::g::Uno::UX::Template_type* MainView__Template1_typeof();
void MainView__Template1__ctor_1_fn(MainView__Template1* __this, ::g::MainView* parent);
void MainView__Template1__New1_fn(MainView__Template1* __this, uObject** __retval);
void MainView__Template1__New2_fn(::g::MainView* parent, MainView__Template1** __retval);

struct MainView__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::MainView*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::MainView* parent);
    static MainView__Template1* New2(::g::MainView* parent);
};
// }

} // ::g
