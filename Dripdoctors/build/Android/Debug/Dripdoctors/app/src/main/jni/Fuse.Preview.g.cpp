// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Preview.ISelection.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Object.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Preview{

// C:\ProgramData\Uno\Packages\FuseCore\0.32.14\$.uno
// --------------------------------------------------

// public abstract interface ISelection :8450
// {
uInterfaceType* ISelection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Preview.ISelection", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.32.14\$.uno
// --------------------------------------------------

// public static class SelectionManager :8429
// {
static void SelectionManager_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Preview::ISelection_typeof();
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Fuse::Preview::ISelection_typeof(), (uintptr_t)&::g::Fuse::Preview::SelectionManager::_Selection_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof()), (uintptr_t)&::g::Fuse::Preview::SelectionManager::SelectionChanged1_, uFieldFlagsStatic);
}

uClassType* SelectionManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Preview.SelectionManager", options);
    type->fp_build_ = SelectionManager_build;
    return type;
}

// public static bool IsSelected(object obj) :8442
void SelectionManager__IsSelected_fn(uObject* obj, bool* __retval)
{
    *__retval = SelectionManager::IsSelected(obj);
}

// public static generated Fuse.Preview.ISelection get_Selection() :8431
void SelectionManager__get_Selection_fn(uObject** __retval)
{
    *__retval = SelectionManager::Selection();
}

// private static generated void set_Selection(Fuse.Preview.ISelection value) :8431
void SelectionManager__set_Selection_fn(uObject* value)
{
    SelectionManager::Selection(value);
}

// public static generated void add_SelectionChanged(Uno.EventHandler<Uno.EventArgs> value) :8432
void SelectionManager__add_SelectionChanged_fn(uDelegate* value)
{
    SelectionManager::add_SelectionChanged(value);
}

// public static generated void remove_SelectionChanged(Uno.EventHandler<Uno.EventArgs> value) :8432
void SelectionManager__remove_SelectionChanged_fn(uDelegate* value)
{
    SelectionManager::remove_SelectionChanged(value);
}

uSStrong<uObject*> SelectionManager::_Selection_;
uSStrong<uDelegate*> SelectionManager::SelectionChanged1_;

// public static bool IsSelected(object obj) [static] :8442
bool SelectionManager::IsSelected(uObject* obj)
{
    if (SelectionManager::Selection() != NULL)
        return ::g::Fuse::Preview::ISelection::IsSelected(uInterface(uPtr(SelectionManager::Selection()), ::TYPES[0/*Fuse.Preview.ISelection*/]), obj);

    return false;
}

// public static generated Fuse.Preview.ISelection get_Selection() [static] :8431
uObject* SelectionManager::Selection()
{
    return SelectionManager::_Selection_;
}

// private static generated void set_Selection(Fuse.Preview.ISelection value) [static] :8431
void SelectionManager::Selection(uObject* value)
{
    SelectionManager::_Selection_ = value;
}

// public static generated void add_SelectionChanged(Uno.EventHandler<Uno.EventArgs> value) [static] :8432
void SelectionManager::add_SelectionChanged(uDelegate* value)
{
    SelectionManager::SelectionChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SelectionManager::SelectionChanged1_, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public static generated void remove_SelectionChanged(Uno.EventHandler<Uno.EventArgs> value) [static] :8432
void SelectionManager::remove_SelectionChanged(uDelegate* value)
{
    SelectionManager::SelectionChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SelectionManager::SelectionChanged1_, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}
// }

}}} // ::g::Fuse::Preview
