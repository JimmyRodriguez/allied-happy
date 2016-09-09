// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\build\Android\Preview\cache\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template2;}

namespace g{

// public partial sealed class MainView.Template2 :43
// {
::g::Uno::UX::Template_type* MainView__Template2_typeof();
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent);
void MainView__Template2__New1_fn(MainView__Template2* __this, uObject** __retval);
void MainView__Template2__New2_fn(::g::MainView* parent, MainView__Template2** __retval);

struct MainView__Template2 : ::g::Uno::UX::Template
{
    uStrong< ::g::MainView*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template2_typeof()->Init(), __selector0_; }

    void ctor_1(::g::MainView* parent);
    static MainView__Template2* New2(::g::MainView* parent);
};
// }

} // ::g
