// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\build\Android\Preview\cache\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Landing.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{

// public partial sealed class MainView.Template :5
// {
// static Template() :12
static void MainView__Template__cctor__fn(uType* __type)
{
    MainView__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"landing"*/]);
}

static void MainView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("landing");
    ::TYPES[0] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parent1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New2_fn, 0, true, MainView__Template_typeof(), 1, ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = MainView__Template_build;
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template__New1_fn;
    return type;
}

// public Template(MainView parent) :8
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :15
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template", "New()");
    ::g::Landing* self = ::g::Landing::New5(uPtr(__this->__parent1)->router);
    self->Name(MainView__Template::__selector0());
    return *__retval = self, void();
}

// public Template New(MainView parent) :8
void MainView__Template__New2_fn(::g::MainView* parent, MainView__Template** __retval)
{
    *__retval = MainView__Template::New2(parent);
}

::g::Uno::UX::Selector MainView__Template::__selector0_;

// public Template(MainView parent) [instance] :8
void MainView__Template::ctor_1(::g::MainView* parent)
{
    uStackFrame __("MainView.Template", ".ctor(MainView)");
    ctor_(::STRINGS[0/*"landing"*/], false);
    __parent1 = parent;
}

// public Template New(MainView parent) [static] :8
MainView__Template* MainView__Template::New2(::g::MainView* parent)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
