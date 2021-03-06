// This file was generated based on '/usr/local/share/uno/Packages/ObjC/0.35.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Lifetime.h>

namespace g{
namespace ObjC{
namespace Bindings{

// public extern class Object :81
// {
// ~Object() :100
static void Object__Finalize_fn(Object* __this)
{
    uStackFrame __("ObjC.Bindings.Object", "Finalize()");
    __this->__clearHandle1();
}

static void Object_build(uType* type)
{
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(Object_type, interface0));
    type->SetFields(0,
        ::g::ObjC::ID_typeof(), offsetof(::g::ObjC::Bindings::Object, __handle1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Handle", NULL, (void*)Object__get_Handle_fn, 0, false, ::g::ObjC::ID_typeof(), 0),
        new uFunction("isEqual", NULL, (void*)Object__isEqual_fn, 0, false, ::g::Uno::Bool_typeof(), 1, Object_typeof()));

    {
        type->ObjCDefaultObjectSize = sizeof(*(uObject*)0);
        type->ObjCNativeClass = (::id) @protocol(NSObject);
    }
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("ObjC.Bindings.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Object__ToString_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))Object__get_Handle_fn;
    return type;
}

// protected Object() :91
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// public Object(ObjC.ID handle) :95
void Object__ctor_1_fn(Object* __this, ::id* handle)
{
    __this->ctor_1(*handle);
}

// private extern void __clearHandle() :87
void Object____clearHandle1_fn(Object* __this)
{
    __this->__clearHandle1();
}

// private extern void __initHandle(ObjC.ID handle) :89
void Object____initHandle1_fn(Object* __this, ::id* handle_)
{
    __this->__initHandle1(*handle_);
}

// public override sealed bool Equals(object obj) :113
void Object__Equals_fn(Object* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("ObjC.Bindings.Object", "Equals(object)");
    Object* objCObject = uAs<Object*>(obj, Object_typeof());

    if (::g::ObjC::ID::op_Equality(Object::op_Implicit(objCObject), Object::op_Implicit(NULL)))
        return *__retval = false, void();

    return *__retval = __this->isEqual(objCObject), void();
}

// public override sealed extern int GetHashCode() :122
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("ObjC.Bindings.Object", "GetHashCode()");
    return *__retval = (int) [__this->__handle1 hash], void();
}

// public ObjC.ID get_Handle() :128
void Object__get_Handle_fn(Object* __this, ::id* __retval)
{
    *__retval = __this->Handle();
}

// public extern bool isEqual(ObjC.Bindings.Object obj) :111
void Object__isEqual_fn(Object* __this, Object* obj_, bool* __retval)
{
    *__retval = __this->isEqual(obj_);
}

// public static implicit operator ObjC.ID(ObjC.Bindings.Object obj) :105
void Object__op_Implicit_fn(Object* obj, ::id* __retval)
{
    *__retval = Object::op_Implicit(obj);
}

// public override sealed extern string ToString() :124
void Object__ToString_fn(Object* __this, uString** __retval)
{
    uStackFrame __("ObjC.Bindings.Object", "ToString()");
    return *__retval = uObjC::UnoString([__this->__handle1 description]), void();
}

// protected Object() [instance] :91
void Object::ctor_()
{
}

// public Object(ObjC.ID handle) [instance] :95
void Object::ctor_1(::id handle)
{
    uStackFrame __("ObjC.Bindings.Object", ".ctor(ObjC.ID)");
    __initHandle1(handle);
}

// private extern void __clearHandle() [instance] :87
void Object::__clearHandle1()
{
    uStackFrame __("ObjC.Bindings.Object", "__clearHandle()");
    uObjC::Lifetime::Detach(this);
}

// private extern void __initHandle(ObjC.ID handle) [instance] :89
void Object::__initHandle1(::id handle_)
{
    uStackFrame __("ObjC.Bindings.Object", "__initHandle(ObjC.ID)");
    uObjC::Lifetime::Attach(this, handle_);
}

// public ObjC.ID get_Handle() [instance] :128
::id Object::Handle()
{
    uStackFrame __("ObjC.Bindings.Object", "get_Handle()");
    return __handle1;
}

// public extern bool isEqual(ObjC.Bindings.Object obj) [instance] :111
bool Object::isEqual(Object* obj_)
{
    uStackFrame __("ObjC.Bindings.Object", "isEqual(ObjC.Bindings.Object)");
    return (bool) [this->__handle1 isEqual: obj_->__handle1];
}

// public static implicit operator ObjC.ID(ObjC.Bindings.Object obj) [static] :105
::id Object::op_Implicit(Object* obj)
{
    uStackFrame __("ObjC.Bindings.Object", "op_Implicit(ObjC.Bindings.Object)~ObjC.ID");
    return ::g::Uno::Object::ReferenceEquals(obj, NULL) ? ::g::ObjC::ID::Null_ : uPtr(obj)->Handle();
}
// }

}}} // ::g::ObjC::Bindings
