// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Fallbacks.Android_java_util_Collection.h>
#include <Android.Fallbacks.Android_java_util_Iterator.h>
#include <Android.Fallbacks.Android_java_util_List.h>
#include <Android.Fallbacks.Android_java_util_ListIterator.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.Iterator.h>
#include <Android.java.util.List.h>
#include <Android.java.util.ListIterator.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>

namespace g{
namespace Android{
namespace java{
namespace util{

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\util\$.uno
// ------------------------------------------------------------------

// public abstract extern interface Collection :14474
// {
uInterfaceType* Collection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Collection", 0, 0);
    type->Reflection.SetFunctions(15,
        new uFunction("add", NULL, NULL, offsetof(Collection, fp_add), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("addAll", NULL, NULL, offsetof(Collection, fp_addAll), false, ::g::Uno::Bool_typeof(), 1, Collection_typeof()),
        new uFunction("clear", NULL, NULL, offsetof(Collection, fp_clear), false, uVoid_typeof(), 0),
        new uFunction("contains", NULL, NULL, offsetof(Collection, fp_contains), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("containsAll", NULL, NULL, offsetof(Collection, fp_containsAll), false, ::g::Uno::Bool_typeof(), 1, Collection_typeof()),
        new uFunction("equals", NULL, NULL, offsetof(Collection, fp_equals), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("hashCode", NULL, NULL, offsetof(Collection, fp_hashCode), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("isEmpty", NULL, NULL, offsetof(Collection, fp_isEmpty), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("iterator", NULL, NULL, offsetof(Collection, fp_iterator), false, ::g::Android::java::util::Iterator_typeof(), 0),
        new uFunction("remove", NULL, NULL, offsetof(Collection, fp_remove), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("removeAll", NULL, NULL, offsetof(Collection, fp_removeAll), false, ::g::Uno::Bool_typeof(), 1, Collection_typeof()),
        new uFunction("retainAll", NULL, NULL, offsetof(Collection, fp_retainAll), false, ::g::Uno::Bool_typeof(), 1, Collection_typeof()),
        new uFunction("size", NULL, NULL, offsetof(Collection, fp_size), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("toArray", NULL, NULL, offsetof(Collection, fp_toArray), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 0),
        new uFunction("toArray", NULL, NULL, offsetof(Collection, fp_toArray1), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 1, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof())));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\util\$.uno
// ------------------------------------------------------------------

// public abstract extern interface Iterator :14733
// {
uInterfaceType* Iterator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Iterator", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("hasNext", NULL, NULL, offsetof(Iterator, fp_hasNext), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("next", NULL, NULL, offsetof(Iterator, fp_next), false, ::g::Android::java::lang::Object_typeof(), 0),
        new uFunction("remove", NULL, NULL, offsetof(Iterator, fp_remove), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\util\$.uno
// ------------------------------------------------------------------

// public abstract extern interface List :14519
// {
uInterfaceType* List_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.List", 0, 0);
    type->Reflection.SetFunctions(25,
        new uFunction("add", NULL, NULL, offsetof(List, fp_add), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("add", NULL, NULL, offsetof(List, fp_add1), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::lang::Object_typeof()),
        new uFunction("addAll", NULL, NULL, offsetof(List, fp_addAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("addAll", NULL, NULL, offsetof(List, fp_addAll1), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::util::Collection_typeof()),
        new uFunction("clear", NULL, NULL, offsetof(List, fp_clear), false, uVoid_typeof(), 0),
        new uFunction("contains", NULL, NULL, offsetof(List, fp_contains), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("containsAll", NULL, NULL, offsetof(List, fp_containsAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("equals", NULL, NULL, offsetof(List, fp_equals), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("get", NULL, NULL, offsetof(List, fp_get), false, ::g::Android::java::lang::Object_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("hashCode", NULL, NULL, offsetof(List, fp_hashCode), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("indexOf", NULL, NULL, offsetof(List, fp_indexOf), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("isEmpty", NULL, NULL, offsetof(List, fp_isEmpty), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("iterator", NULL, NULL, offsetof(List, fp_iterator), false, ::g::Android::java::util::Iterator_typeof(), 0),
        new uFunction("lastIndexOf", NULL, NULL, offsetof(List, fp_lastIndexOf), false, ::g::Uno::Int_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("listIterator", NULL, NULL, offsetof(List, fp_listIterator), false, ::g::Android::java::util::ListIterator_typeof(), 0),
        new uFunction("listIterator", NULL, NULL, offsetof(List, fp_listIterator1), false, ::g::Android::java::util::ListIterator_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("remove", NULL, NULL, offsetof(List, fp_remove), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("remove", NULL, NULL, offsetof(List, fp_remove1), false, ::g::Android::java::lang::Object_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("removeAll", NULL, NULL, offsetof(List, fp_removeAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("retainAll", NULL, NULL, offsetof(List, fp_retainAll), false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::util::Collection_typeof()),
        new uFunction("set", NULL, NULL, offsetof(List, fp_set), false, ::g::Android::java::lang::Object_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Android::java::lang::Object_typeof()),
        new uFunction("size", NULL, NULL, offsetof(List, fp_size), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("subList", NULL, NULL, offsetof(List, fp_subList), false, List_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("toArray", NULL, NULL, offsetof(List, fp_toArray), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 0),
        new uFunction("toArray", NULL, NULL, offsetof(List, fp_toArray1), false, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), 1, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::Object_typeof())));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.32.1\Android\java\util\$.uno
// ------------------------------------------------------------------

// public abstract extern interface ListIterator :14859
// {
uInterfaceType* ListIterator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.ListIterator", 0, 0);
    type->Reflection.SetFunctions(9,
        new uFunction("add", NULL, NULL, offsetof(ListIterator, fp_add), false, uVoid_typeof(), 1, ::g::Android::java::lang::Object_typeof()),
        new uFunction("hasNext", NULL, NULL, offsetof(ListIterator, fp_hasNext), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("hasPrevious", NULL, NULL, offsetof(ListIterator, fp_hasPrevious), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("next", NULL, NULL, offsetof(ListIterator, fp_next), false, ::g::Android::java::lang::Object_typeof(), 0),
        new uFunction("nextIndex", NULL, NULL, offsetof(ListIterator, fp_nextIndex), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("previous", NULL, NULL, offsetof(ListIterator, fp_previous), false, ::g::Android::java::lang::Object_typeof(), 0),
        new uFunction("previousIndex", NULL, NULL, offsetof(ListIterator, fp_previousIndex), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("remove", NULL, NULL, offsetof(ListIterator, fp_remove), false, uVoid_typeof(), 0),
        new uFunction("set", NULL, NULL, offsetof(ListIterator, fp_set), false, uVoid_typeof(), 1, ::g::Android::java::lang::Object_typeof()));
    return type;
}
// }

}}}} // ::g::Android::java::util
