// This file was generated based on '/Users/jimmysidney/workspace/apps-fuse/company/build/iOS/Preview/cache/ux11/company.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.company_FuseControlsText_Value_Property.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class company_FuseControlsText_Value_Property :10
// {
static void company_FuseControlsText_Value_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::company_FuseControlsText_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* company_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(company_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("company_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = company_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))company_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))company_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))company_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))company_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public company_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :13
void company_FuseControlsText_Value_Property__ctor_2_fn(company_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :15
void company_FuseControlsText_Value_Property__Get_fn(company_FuseControlsText_Value_Property* __this, uString** __retval)
{
    uStackFrame __("company_FuseControlsText_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public company_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :13
void company_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, company_FuseControlsText_Value_Property** __retval)
{
    *__retval = company_FuseControlsText_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void company_FuseControlsText_Value_Property__get_Object_fn(company_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("company_FuseControlsText_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :16
void company_FuseControlsText_Value_Property__Set_fn(company_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("company_FuseControlsText_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :17
void company_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(company_FuseControlsText_Value_Property* __this, bool* __retval)
{
    uStackFrame __("company_FuseControlsText_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public company_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :13
void company_FuseControlsText_Value_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("company_FuseControlsText_Value_Property", ".ctor(Fuse.Controls.Text,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public company_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :13
company_FuseControlsText_Value_Property* company_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    company_FuseControlsText_Value_Property* obj1 = (company_FuseControlsText_Value_Property*)uNew(company_FuseControlsText_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
