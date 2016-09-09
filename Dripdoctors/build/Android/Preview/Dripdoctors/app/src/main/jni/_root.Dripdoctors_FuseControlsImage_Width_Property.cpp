// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\build\Android\Preview\cache\Dripdoctors.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Dripdoctors_FuseControlsImage_Width_Property.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Dripdoctors_FuseControlsImage_Width_Property :10
// {
static void Dripdoctors_FuseControlsImage_Width_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::Dripdoctors_FuseControlsImage_Width_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* Dripdoctors_FuseControlsImage_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Dripdoctors_FuseControlsImage_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Dripdoctors_FuseControlsImage_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_build_ = Dripdoctors_FuseControlsImage_Width_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))Dripdoctors_FuseControlsImage_Width_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Dripdoctors_FuseControlsImage_Width_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))Dripdoctors_FuseControlsImage_Width_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))Dripdoctors_FuseControlsImage_Width_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public Dripdoctors_FuseControlsImage_Width_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :13
void Dripdoctors_FuseControlsImage_Width_Property__ctor_2_fn(Dripdoctors_FuseControlsImage_Width_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.Size Get() :15
void Dripdoctors_FuseControlsImage_Width_Property__Get_fn(Dripdoctors_FuseControlsImage_Width_Property* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Dripdoctors_FuseControlsImage_Width_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// public Dripdoctors_FuseControlsImage_Width_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :13
void Dripdoctors_FuseControlsImage_Width_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, Dripdoctors_FuseControlsImage_Width_Property** __retval)
{
    *__retval = Dripdoctors_FuseControlsImage_Width_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void Dripdoctors_FuseControlsImage_Width_Property__get_Object_fn(Dripdoctors_FuseControlsImage_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("Dripdoctors_FuseControlsImage_Width_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :16
void Dripdoctors_FuseControlsImage_Width_Property__Set_fn(Dripdoctors_FuseControlsImage_Width_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    uStackFrame __("Dripdoctors_FuseControlsImage_Width_Property", "Set(Uno.UX.Size,Uno.UX.IPropertyListener)");
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public override sealed bool get_SupportsOriginSetter() :17
void Dripdoctors_FuseControlsImage_Width_Property__get_SupportsOriginSetter_fn(Dripdoctors_FuseControlsImage_Width_Property* __this, bool* __retval)
{
    uStackFrame __("Dripdoctors_FuseControlsImage_Width_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public Dripdoctors_FuseControlsImage_Width_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :13
void Dripdoctors_FuseControlsImage_Width_Property::ctor_2(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("Dripdoctors_FuseControlsImage_Width_Property", ".ctor(Fuse.Controls.Image,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public Dripdoctors_FuseControlsImage_Width_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :13
Dripdoctors_FuseControlsImage_Width_Property* Dripdoctors_FuseControlsImage_Width_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    Dripdoctors_FuseControlsImage_Width_Property* obj1 = (Dripdoctors_FuseControlsImage_Width_Property*)uNew(Dripdoctors_FuseControlsImage_Width_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
