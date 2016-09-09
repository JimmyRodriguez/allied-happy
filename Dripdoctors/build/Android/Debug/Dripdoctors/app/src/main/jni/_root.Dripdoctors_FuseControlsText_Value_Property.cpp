// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\.uno\Dripdoctors.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Dripdoctors_FuseControlsText_Value_Property.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Dripdoctors_FuseControlsText_Value_Property :1
// {
static void Dripdoctors_FuseControlsText_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::Dripdoctors_FuseControlsText_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* Dripdoctors_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Dripdoctors_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Dripdoctors_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = Dripdoctors_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))Dripdoctors_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Dripdoctors_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))Dripdoctors_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))Dripdoctors_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Dripdoctors_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :4
void Dripdoctors_FuseControlsText_Value_Property__ctor_2_fn(Dripdoctors_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :6
void Dripdoctors_FuseControlsText_Value_Property__Get_fn(Dripdoctors_FuseControlsText_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public Dripdoctors_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :4
void Dripdoctors_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, Dripdoctors_FuseControlsText_Value_Property** __retval)
{
    *__retval = Dripdoctors_FuseControlsText_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void Dripdoctors_FuseControlsText_Value_Property__get_Object_fn(Dripdoctors_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :7
void Dripdoctors_FuseControlsText_Value_Property__Set_fn(Dripdoctors_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :8
void Dripdoctors_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(Dripdoctors_FuseControlsText_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Dripdoctors_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :4
void Dripdoctors_FuseControlsText_Value_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public Dripdoctors_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :4
Dripdoctors_FuseControlsText_Value_Property* Dripdoctors_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    Dripdoctors_FuseControlsText_Value_Property* obj1 = (Dripdoctors_FuseControlsText_Value_Property*)uNew(Dripdoctors_FuseControlsText_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
