// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\.uno\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Home.h>
#include <_root.MainView.h>
#include <_root.MainView.Template2.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{

// public partial sealed class MainView.Template2 :43
// {
// static Template2() :50
static void MainView__Template2__cctor__fn(uType* __type)
{
    MainView__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"home"*/]);
}

static void MainView__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("home");
    ::TYPES[0] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parent1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = MainView__Template2_build;
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template2__New1_fn;
    return type;
}

// public Template2(MainView parent) :46
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :53
void MainView__Template2__New1_fn(MainView__Template2* __this, uObject** __retval)
{
    ::g::Home* self = ::g::Home::New5(uPtr(__this->__parent1)->router);
    self->Name(MainView__Template2::__selector0());
    return *__retval = self, void();
}

// public Template2 New(MainView parent) :46
void MainView__Template2__New2_fn(::g::MainView* parent, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New2(parent);
}

::g::Uno::UX::Selector MainView__Template2::__selector0_;

// public Template2(MainView parent) [instance] :46
void MainView__Template2::ctor_1(::g::MainView* parent)
{
    ctor_(::STRINGS[0/*"home"*/], false);
    __parent1 = parent;
}

// public Template2 New(MainView parent) [static] :46
MainView__Template2* MainView__Template2::New2(::g::MainView* parent)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
