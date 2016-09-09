// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\build\Android\Preview\cache\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomeScreen.h>
#include <_root.HomeScreenType.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.GeoLocation.GeoLocation.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[2];
static uType* TYPES[8];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :62
static void MainView__cctor__fn(uType* __type)
{
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"router"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("landing");
    ::TYPES[0] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[4] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[6] = ::g::Uno::UX::Template_typeof();
    ::TYPES[7] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(9,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MainView, router), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :66
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :70
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :66
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

::g::Uno::UX::Selector MainView::__selector0_;

// public MainView() [instance] :66
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :70
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp1 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Storage::StorageModule* temp2 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::GeoLocation::GeoLocation* temp3 = ::g::Fuse::GeoLocation::GeoLocation::New2();
    ::g::Polyfills::Window::WindowModule* temp4 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp5 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp6 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp7 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp8 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp9 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp10 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp11 = ::g::FuseJS::UserEvents::New2();
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::ClientPanel* temp12 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Triggers::OnBackButton* temp13 = ::g::Fuse::Triggers::OnBackButton::New3();
    ::g::HomeScreen* temp14 = ::g::HomeScreen::New2();
    ::g::Fuse::Controls::Navigator* temp15 = ::g::Fuse::Controls::Navigator::New4();
    MainView__Template* landing = MainView__Template::New2(this);
    MainView__Template1* login = MainView__Template1::New2(this);
    MainView__Template2* home = MainView__Template2::New2(this);
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StatusBarBackground* temp17 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp18 = ::g::Fuse::Controls::BottomBarBackground::New3();
    Background(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(router)->Name(MainView::__selector0());
    temp12->Background(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    temp14->Type(0);
    temp15->DefaultTemplate(::STRINGS[1/*"landing"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Templates1()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), landing);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Templates1()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Templates1()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), home);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
}

// public MainView New() [static] :66
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
