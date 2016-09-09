// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\build\Android\Preview\cache\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Login.h>
#include <_root.MainView.h>
#include <_root.MainView.Template1.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{

// public partial sealed class MainView.Template1 :24
// {
// static Template1() :31
static void MainView__Template1__cctor__fn(uType* __type)
{
    MainView__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"login"*/]);
}

static void MainView__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("login");
    ::TYPES[0] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template1, __parent1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template1__New2_fn, 0, true, MainView__Template1_typeof(), 1, ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = MainView__Template1_build;
    type->fp_cctor_ = MainView__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template1__New1_fn;
    return type;
}

// public Template1(MainView parent) :27
void MainView__Template1__ctor_1_fn(MainView__Template1* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :34
void MainView__Template1__New1_fn(MainView__Template1* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template1", "New()");
    ::g::Login* self = ::g::Login::New5(uPtr(__this->__parent1)->router);
    self->Name(MainView__Template1::__selector0());
    return *__retval = self, void();
}

// public Template1 New(MainView parent) :27
void MainView__Template1__New2_fn(::g::MainView* parent, MainView__Template1** __retval)
{
    *__retval = MainView__Template1::New2(parent);
}

::g::Uno::UX::Selector MainView__Template1::__selector0_;

// public Template1(MainView parent) [instance] :27
void MainView__Template1::ctor_1(::g::MainView* parent)
{
    uStackFrame __("MainView.Template1", ".ctor(MainView)");
    ctor_(::STRINGS[0/*"login"*/], false);
    __parent1 = parent;
}

// public Template1 New(MainView parent) [static] :27
MainView__Template1* MainView__Template1::New2(::g::MainView* parent)
{
    MainView__Template1* obj1 = (MainView__Template1*)uNew(MainView__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
