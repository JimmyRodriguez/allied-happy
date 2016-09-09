// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.DataContextChangedHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.AnyChangeObserver.h>
#include <Fuse.Reactive.ArrayMirror.h>
#include <Fuse.Reactive.BindAttempt.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Closure.h>
#include <Fuse.Reactive.ClosureArgs.h>
#include <Fuse.Reactive.ClosureHandler.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.ContextBinding.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.CallClosure.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.JavaScript.EvaluateDataContext.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.LazyObservableProperty.h>
#include <Fuse.Reactive.ListMirror.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.ObjectMirror.h>
#include <Fuse.Reactive.Observable.Add.h>
#include <Fuse.Reactive.Observable.h>
#include <Fuse.Reactive.Observable.InsertAt.h>
#include <Fuse.Reactive.Observable.NewAll.h>
#include <Fuse.Reactive.Observable.NewAt.h>
#include <Fuse.Reactive.Observable.Operation.h>
#include <Fuse.Reactive.Observable.RemoveAt.h>
#include <Fuse.Reactive.Observable.Set.h>
#include <Fuse.Reactive.Observable.Subscription.h>
#include <Fuse.Reactive.PathObserver.h>
#include <Fuse.Reactive.RootableScriptModule.h>
#include <Fuse.Reactive.SegmentObserver.h>
#include <Fuse.Reactive.Select.h>
#include <Fuse.Reactive.ThreadWorker.Closure-1.h>
#include <Fuse.Reactive.ThreadWorker.Flag.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.ThreadWorker.MethodClosure.h>
#include <Fuse.Reactive.ValueMirror.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileEmpty.h>
#include <Fuse.Reactive.WhileNotEmpty.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[74];
static uType* TYPES[91];

namespace g{
namespace Fuse{
namespace Reactive{

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class Observable.Add :2223
// {
static void Observable__Add_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__Add, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Add_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Add);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Add", options);
    type->SetBase(::g::Fuse::Reactive::Observable__Operation_typeof());
    type->fp_build_ = Observable__Add_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__Add__OnPerform_fn;
    type->fp_SendMessage = (void(*)(::g::Fuse::Reactive::Observable__Operation*, ::g::Fuse::Reactive::Observable__Subscription*))Observable__Add__SendMessage_fn;
    return type;
}

// public Add(Fuse.Reactive.Observable obs, object value) :2227
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    __this->ctor_1(obs, value);
}

// public Add New(Fuse.Reactive.Observable obs, object value) :2227
void Observable__Add__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, Observable__Add** __retval)
{
    *__retval = Observable__Add::New1(obs, value);
}

// protected override sealed void OnPerform() :2232
void Observable__Add__OnPerform_fn(Observable__Add* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.Add", "OnPerform()");
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);
}

// protected override sealed void SendMessage(Fuse.Reactive.Observable.Subscription sub) :2237
void Observable__Add__SendMessage_fn(Observable__Add* __this, ::g::Fuse::Reactive::Observable__Subscription* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.Add", "SendMessage(Fuse.Reactive.Observable.Subscription)");
    ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(uPtr(sub)->Observer()), ::TYPES[0/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// public Add(Fuse.Reactive.Observable obs, object value) [instance] :2227
void Observable__Add::ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Observable.Add", ".ctor(Fuse.Reactive.Observable,object)");
    ctor_(obs);
    _value = value;
}

// public Add New(Fuse.Reactive.Observable obs, object value) [static] :2227
Observable__Add* Observable__Add::New1(::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    Observable__Add* obj1 = (Observable__Add*)uNew(Observable__Add_typeof());
    obj1->ctor_1(obs, value);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\Subscription\$.uno
// --------------------------------------------------------------------

// internal sealed class AnyChangeObserver :11
// {
static void AnyChangeObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(AnyChangeObserver_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _anyChange), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _hasInitialValue), 0);
}

AnyChangeObserver_type* AnyChangeObserver_typeof()
{
    static uSStrong<AnyChangeObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AnyChangeObserver);
    options.TypeSize = sizeof(AnyChangeObserver_type);
    type = (AnyChangeObserver_type*)uClassType::New("Fuse.Reactive.AnyChangeObserver", options);
    type->fp_build_ = AnyChangeObserver_build;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))AnyChangeObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))AnyChangeObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))AnyChangeObserver__OnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))AnyChangeObserver__OnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))AnyChangeObserver__OnFailed_fn;
    return type;
}

// public AnyChangeObserver(Uno.Action anyChange) :16
void AnyChangeObserver__ctor__fn(AnyChangeObserver* __this, uDelegate* anyChange)
{
    __this->ctor_(anyChange);
}

// public AnyChangeObserver New(Uno.Action anyChange) :16
void AnyChangeObserver__New1_fn(uDelegate* anyChange, AnyChangeObserver** __retval)
{
    *__retval = AnyChangeObserver::New1(anyChange);
}

// public void OnAdd(object addedValue) :44
void AnyChangeObserver__OnAdd_fn(AnyChangeObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnFailed(string message) :33
void AnyChangeObserver__OnFailed_fn(AnyChangeObserver* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :56
void AnyChangeObserver__OnInsertAt_fn(AnyChangeObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Reactive.ListMirror values) :21
void AnyChangeObserver__OnNewAll_fn(AnyChangeObserver* __this, ::g::Fuse::Reactive::ListMirror* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :27
void AnyChangeObserver__OnNewAt_fn(AnyChangeObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemoveAt(int index) :50
void AnyChangeObserver__OnRemoveAt_fn(AnyChangeObserver* __this, int* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnSet(object value) :38
void AnyChangeObserver__OnSet_fn(AnyChangeObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// public AnyChangeObserver(Uno.Action anyChange) [instance] :16
void AnyChangeObserver::ctor_(uDelegate* anyChange)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", ".ctor(Uno.Action)");
    _anyChange = anyChange;
}

// public void OnAdd(object addedValue) [instance] :44
void AnyChangeObserver::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnAdd(object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnFailed(string message) [instance] :33
void AnyChangeObserver::OnFailed(uString* message)
{
}

// public void OnInsertAt(int index, object value) [instance] :56
void AnyChangeObserver::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnInsertAt(int,object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAll(Fuse.Reactive.ListMirror values) [instance] :21
void AnyChangeObserver::OnNewAll(::g::Fuse::Reactive::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnNewAll(Fuse.Reactive.ListMirror)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAt(int index, object newValue) [instance] :27
void AnyChangeObserver::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnNewAt(int,object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnRemoveAt(int index) [instance] :50
void AnyChangeObserver::OnRemoveAt(int index)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnRemoveAt(int)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnSet(object value) [instance] :38
void AnyChangeObserver::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnSet(object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public AnyChangeObserver New(Uno.Action anyChange) [static] :16
AnyChangeObserver* AnyChangeObserver::New1(uDelegate* anyChange)
{
    AnyChangeObserver* obj1 = (AnyChangeObserver*)uNew(AnyChangeObserver_typeof());
    obj1->ctor_(anyChange);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class ArrayMirror :8
// {
static void ArrayMirror_build(uType* type)
{
    ::TYPES[1] = uObject_typeof();
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[3] = ::g::Fuse::Reactive::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(::g::Fuse::Reactive::ListMirror_type, interface0));
    type->SetFields(1,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::ArrayMirror, _items), 0);
}

::g::Fuse::Reactive::ListMirror_type* ArrayMirror_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ArrayMirror);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ListMirror_type);
    type = (::g::Fuse::Reactive::ListMirror_type*)uClassType::New("Fuse.Reactive.ArrayMirror", options);
    type->SetBase(::g::Fuse::Reactive::ListMirror_typeof());
    type->fp_build_ = ArrayMirror_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Reactive::ListMirror*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Reactive::ListMirror*, int*))ArrayMirror__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))ArrayMirror__Unsubscribe_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))ArrayMirror__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))ArrayMirror__get_Item_fn;
    return type;
}

// internal ArrayMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :12
void ArrayMirror__ctor_2_fn(ArrayMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_2(worker, arr);
}

// public override sealed object get_Item(int index) :32
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", "get_Item(int)");
    int index_ = *index;
    return *__retval = uPtr(__this->_items)->Strong<uObject*>(index_), void();
}

// internal object[] get_ItemsReadonly() :19
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval)
{
    *__retval = __this->ItemsReadonly();
}

// public override sealed int get_Length() :37
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", "get_Length()");
    return *__retval = uPtr(__this->_items)->Length(), void();
}

// internal ArrayMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :12
void ArrayMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval)
{
    *__retval = ArrayMirror::New1(worker, arr);
}

// public override sealed void Unsubscribe() :21
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this)
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", "Unsubscribe()");

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Fuse::Reactive::ValueMirror* d = uAs< ::g::Fuse::Reactive::ValueMirror*>(uPtr(__this->_items)->Strong<uObject*>(i), ::TYPES[3/*Fuse.Reactive.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ArrayMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [instance] :12
void ArrayMirror::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Array)");
    ctor_1(arr);
    _items = uArray::New(::TYPES[2/*object[]*/], uPtr(arr)->Length());

    for (int i = 0; i < uPtr(_items)->Length(); i++)
        uPtr(_items)->Strong<uObject*>(i) = uPtr(worker)->Reflect(uPtr(arr)->Item(i));
}

// internal object[] get_ItemsReadonly() [instance] :19
uArray* ArrayMirror::ItemsReadonly()
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", "get_ItemsReadonly()");
    return _items;
}

// internal ArrayMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [static] :12
ArrayMirror* ArrayMirror::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    ArrayMirror* obj1 = (ArrayMirror*)uNew(ArrayMirror_typeof());
    obj1->ctor_2(worker, arr);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\Subscription\$.uno
// --------------------------------------------------------------------

// internal sealed class BindAttempt :118
// {
static void BindAttempt_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof());
    ::TYPES[6] = ::g::Fuse::DataContextChangedHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _cur), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _isDisposed), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _observedNodes), 0,
        ::g::Fuse::Reactive::PathObserver_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _po), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _segmentObservers), 0);
}

uType* BindAttempt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(BindAttempt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.BindAttempt", options);
    type->fp_build_ = BindAttempt_build;
    return type;
}

// public BindAttempt(Fuse.Reactive.PathObserver po) :125
void BindAttempt__ctor__fn(BindAttempt* __this, ::g::Fuse::Reactive::PathObserver* po)
{
    __this->ctor_(po);
}

// public void Dispose() :176
void BindAttempt__Dispose_fn(BindAttempt* __this)
{
    __this->Dispose();
}

// internal void Fail() :146
void BindAttempt__Fail_fn(BindAttempt* __this)
{
    __this->Fail();
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) :125
void BindAttempt__New1_fn(::g::Fuse::Reactive::PathObserver* po, BindAttempt** __retval)
{
    *__retval = BindAttempt::New1(po);
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) :169
void BindAttempt__OnDataContextChanged_fn(BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataContextChanged(sender, args);
}

// internal void Restart() :163
void BindAttempt__Restart_fn(BindAttempt* __this)
{
    __this->Restart();
}

// private void TryBind() :132
void BindAttempt__TryBind_fn(BindAttempt* __this)
{
    __this->TryBind();
}

// public BindAttempt(Fuse.Reactive.PathObserver po) [instance] :125
void BindAttempt::ctor_(::g::Fuse::Reactive::PathObserver* po)
{
    uStackFrame __("Fuse.Reactive.BindAttempt", ".ctor(Fuse.Reactive.PathObserver)");
    _observedNodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Node>*/]));
    _segmentObservers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.Reactive.SegmentObserver>*/]));
    _po = po;
    _cur = uPtr(po)->Node;
    TryBind();
}

// public void Dispose() [instance] :176
void BindAttempt::Dispose()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Dispose()");
    ::g::Fuse::Reactive::SegmentObserver* ret2;
    ::g::Fuse::Node* ret3;

    if (_isDisposed)
        return;

    _isDisposed = true;

    for (int i = 0; i < uPtr(_segmentObservers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_segmentObservers), uCRef<int>(i), &ret2), ret2))->Dispose();

    uPtr(_segmentObservers)->Clear();
    _segmentObservers = NULL;

    for (int i1 = 0; i1 < uPtr(_observedNodes)->Count(); i1++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observedNodes), uCRef<int>(i1), &ret3), ret3))->remove_DataContextChanged(uDelegate::New(::TYPES[6/*Fuse.DataContextChangedHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));

    uPtr(_observedNodes)->Clear();
    _observedNodes = NULL;
}

// internal void Fail() [instance] :146
void BindAttempt::Fail()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Fail()");

    if (_isDisposed)
        return;

    uObject* curdc = uPtr(_cur)->DataContext();

    while (_cur != NULL)
    {
        uObject* dc = uPtr(_cur)->DataContext();

        if ((dc != NULL) && (dc != curdc))
        {
            TryBind();
            return;
        }

        _cur = uPtr(_cur)->Parent();
    }
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) [instance] :169
void BindAttempt::OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "OnDataContextChanged(object,Uno.EventArgs)");
    Restart();
}

// internal void Restart() [instance] :163
void BindAttempt::Restart()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Restart()");

    if (_isDisposed)
        return;

    uPtr(_po)->RestartBinding();
}

// private void TryBind() [instance] :132
void BindAttempt::TryBind()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "TryBind()");
    uObject* dc = uPtr(_cur)->DataContext();
    ::g::Uno::Collections::List__Add_fn(uPtr(_observedNodes), _cur);
    uPtr(_cur)->add_DataContextChanged(uDelegate::New(::TYPES[6/*Fuse.DataContextChangedHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));

    if (dc != NULL)
    {
        ::g::Fuse::Reactive::SegmentObserver* so = ::g::Fuse::Reactive::SegmentObserver::New1(uPtr(_po)->Binding, this);
        so->Init(uPtr(_cur)->DataContext(), uPtr(_po)->Path);
        ::g::Uno::Collections::List__Add_fn(uPtr(_segmentObservers), so);
    }
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) [static] :125
BindAttempt* BindAttempt::New1(::g::Fuse::Reactive::PathObserver* po)
{
    BindAttempt* obj1 = (BindAttempt*)uNew(BindAttempt_typeof());
    obj1->ctor_(po);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class EventBinding.CallClosure :1055
// {
static void EventBinding__CallClosure_build(uType* type)
{
    ::STRINGS[0] = uString::Const("node");
    ::STRINGS[1] = uString::Const("data");
    ::STRINGS[2] = uString::Const("sender");
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[12] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[2] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventBinding__CallClosure_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _args), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _data), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _node), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _sender), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, Function), 0);
}

EventBinding__CallClosure_type* EventBinding__CallClosure_typeof()
{
    static uSStrong<EventBinding__CallClosure_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventBinding__CallClosure);
    options.TypeSize = sizeof(EventBinding__CallClosure_type);
    type = (EventBinding__CallClosure_type*)uClassType::New("Fuse.Reactive.EventBinding.CallClosure", options);
    type->fp_build_ = EventBinding__CallClosure_build;
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))EventBinding__CallClosure__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))EventBinding__CallClosure__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventBinding__CallClosure__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventBinding__CallClosure__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventBinding__CallClosure__AddObject_fn;
    return type;
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) :1064
void EventBinding__CallClosure__ctor__fn(EventBinding__CallClosure* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// public void AddBool(string key, bool value) :1113
void EventBinding__CallClosure__AddBool_fn(EventBinding__CallClosure* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :1108
void EventBinding__CallClosure__AddDouble_fn(EventBinding__CallClosure* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :1103
void EventBinding__CallClosure__AddInt_fn(EventBinding__CallClosure* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :1092
void EventBinding__CallClosure__AddObject_fn(EventBinding__CallClosure* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :1098
void EventBinding__CallClosure__AddString_fn(EventBinding__CallClosure* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public void Call() :1079
void EventBinding__CallClosure__Call_fn(EventBinding__CallClosure* __this)
{
    __this->Call();
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) :1064
void EventBinding__CallClosure__New1_fn(uObject* args, uObject* sender, EventBinding__CallClosure** __retval)
{
    *__retval = EventBinding__CallClosure::New1(args, sender);
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) [instance] :1064
void EventBinding__CallClosure::ctor_(uObject* args, uObject* sender)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", ".ctor(Fuse.Scripting.IScriptEvent,object)");
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[7/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = ::g::Fuse::Reactive::ValueMirror::Unbox(uPtr(_node)->DataContext());

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[8/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// public void AddBool(string key, bool value) [instance] :1113
void EventBinding__CallClosure::AddBool(uString* key, bool value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddBool(string,bool)");
    AddObject(key, uBox(::TYPES[13/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :1108
void EventBinding__CallClosure::AddDouble(uString* key, double value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddDouble(string,double)");
    AddObject(key, uBox(::TYPES[17/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :1103
void EventBinding__CallClosure::AddInt(uString* key, int value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddInt(string,int)");
    AddObject(key, uBox(::TYPES[17/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :1092
void EventBinding__CallClosure::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddObject(string,object)");

    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(value));
}

// public void AddString(string key, string value) [instance] :1098
void EventBinding__CallClosure::AddString(uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddString(string,string)");
    AddObject(key, value);
}

// public void Call() [instance] :1079
void EventBinding__CallClosure::Call()
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "Call()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();

    if (_node != NULL)
        uPtr(obj)->Item(::STRINGS[0/*"node"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(_node));

    if (_data != NULL)
        uPtr(obj)->Item(::STRINGS[1/*"data"*/], _data);

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(_sender), NULL))
        uPtr(obj)->Item(::STRINGS[2/*"sender"*/], uBox(::TYPES[33/*Uno.UX.Selector*/], _sender));

    if (_args != NULL)

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_args), &ret3), ret3); enum1.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = enum1.Current(::TYPES[11/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            uPtr(obj)->Item(arg.Key(::TYPES[12/*Uno.Collections.KeyValuePair<string, object>*/]), arg.Value(::TYPES[12/*Uno.Collections.KeyValuePair<string, object>*/]));
        }

    uPtr(Function)->Call(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 1, obj));
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) [static] :1064
EventBinding__CallClosure* EventBinding__CallClosure::New1(uObject* args, uObject* sender)
{
    EventBinding__CallClosure* obj2 = (EventBinding__CallClosure*)uNew(EventBinding__CallClosure_typeof());
    obj2->ctor_(args, sender);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class Case :1660
// {
static void Case_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[15] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[17] = ::g::Uno::Double_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), offsetof(::g::Fuse::Reactive::Case, _factories), 0,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(::g::Fuse::Reactive::Case, _match), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Case, _value), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Case, _IsDefault), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Case__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Case__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Factories", NULL, (void*)Case__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), 0),
        new uFunction("get_IsDefault", NULL, (void*)Case__get_IsDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsDefault", NULL, (void*)Case__set_IsDefault_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Case__New1_fn, 0, true, Case_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Case__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Case__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Case__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Case__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Case__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Case__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* Case_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Case);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Case", options);
    type->fp_build_ = Case_build;
    type->fp_ctor_ = (void*)Case__New1_fn;
    return type;
}

// public generated Case() :1660
void Case__ctor__fn(Case* __this)
{
    __this->ctor_();
}

// public bool get_Bool() :1699
void Case__get_Bool_fn(Case* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1700
void Case__set_Bool_fn(Case* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() :1715
void Case__get_Factories_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Invalidate() :1726
void Case__Invalidate_fn(Case* __this)
{
    __this->Invalidate();
}

// public generated bool get_IsDefault() :1705
void Case__get_IsDefault_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public generated void set_IsDefault(bool value) :1706
void Case__set_IsDefault_fn(Case* __this, bool* value)
{
    __this->IsDefault(*value);
}

// public generated Case New() :1660
void Case__New1_fn(Case** __retval)
{
    *__retval = Case::New1();
}

// public double get_Number() :1691
void Case__get_Number_fn(Case* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1692
void Case__set_Number_fn(Case* __this, double* value)
{
    __this->Number(*value);
}

// private void OnFactoriesChanged(Uno.UX.Template f) :1721
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Template* f)
{
    __this->OnFactoriesChanged(f);
}

// public string get_String() :1683
void Case__get_String_fn(Case* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1684
void Case__set_String_fn(Case* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1668
void Case__get_Value_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1669
void Case__set_Value_fn(Case* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Case() [instance] :1660
void Case::ctor_()
{
}

// public bool get_Bool() [instance] :1699
bool Case::Bool()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Bool()");
    return uIs((uObject*)_value, ::TYPES[13/*bool*/]) ? uUnbox<bool>(::TYPES[13/*bool*/], _value) : false;
}

// public void set_Bool(bool value) [instance] :1700
void Case::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Bool(bool)");
    Value(uBox(::TYPES[13/*bool*/], value));
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() [instance] :1715
uObject* Case::Factories()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Factories()");
    uObject* ind1 = _factories;
    return (ind1 != NULL) ? ind1 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[15/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[16/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[16/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this))));
}

// private void Invalidate() [instance] :1726
void Case::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Case", "Invalidate()");

    if (_match != NULL)
        uPtr(_match)->Invalidate();
}

// public generated bool get_IsDefault() [instance] :1705
bool Case::IsDefault()
{
    uStackFrame __("Fuse.Reactive.Case", "get_IsDefault()");
    return _IsDefault;
}

// public generated void set_IsDefault(bool value) [instance] :1706
void Case::IsDefault(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_IsDefault(bool)");
    _IsDefault = value;
}

// public double get_Number() [instance] :1691
double Case::Number()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Number()");
    return uIs((uObject*)_value, ::TYPES[17/*double*/]) ? uUnbox<double>(::TYPES[17/*double*/], _value) : 0.0;
}

// public void set_Number(double value) [instance] :1692
void Case::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Number(double)");
    Value(uBox(::TYPES[17/*double*/], value));
}

// private void OnFactoriesChanged(Uno.UX.Template f) [instance] :1721
void Case::OnFactoriesChanged(::g::Uno::UX::Template* f)
{
    uStackFrame __("Fuse.Reactive.Case", "OnFactoriesChanged(Uno.UX.Template)");
    Invalidate();
}

// public string get_String() [instance] :1683
uString* Case::String()
{
    uStackFrame __("Fuse.Reactive.Case", "get_String()");
    return uAs<uString*>(_value, ::TYPES[18/*string*/]);
}

// public void set_String(string value) [instance] :1684
void Case::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1668
uObject* Case::Value()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1669
void Case::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Value(object)");

    if (_value != value)
    {
        _value = value;
        Invalidate();
    }
}

// public generated Case New() [static] :1660
Case* Case::New1()
{
    Case* obj2 = (Case*)uNew(Case_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class Closure :122
// {
static void Closure_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[20] = ::g::Fuse::Reactive::ClosureHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::Closure, _nameTable), 0,
        ::g::Fuse::Reactive::ClosureHandler_typeof(), offsetof(::g::Fuse::Reactive::Closure, _ready), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Closure__New2_fn, 0, true, Closure_typeof(), 1, ::g::Uno::UX::NameTable_typeof()),
        new uFunction("add_Ready", NULL, (void*)Closure__add_Ready_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::ClosureHandler_typeof()),
        new uFunction("remove_Ready", NULL, (void*)Closure__remove_Ready_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::ClosureHandler_typeof()));
}

::g::Fuse::Node_type* Closure_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Closure);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Reactive.Closure", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_build_ = Closure_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Closure__OnRooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Closure(Uno.UX.NameTable nameTable) :127
void Closure__ctor_2_fn(Closure* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_2(nameTable);
}

// public Closure New(Uno.UX.NameTable nameTable) :127
void Closure__New2_fn(::g::Uno::UX::NameTable* nameTable, Closure** __retval)
{
    *__retval = Closure::New2(nameTable);
}

// protected override sealed void OnRooted() :172
void Closure__OnRooted_fn(Closure* __this)
{
    uStackFrame __("Fuse.Reactive.Closure", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->ScheduleReady();
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) :159
void Closure__add_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->add_Ready(value);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) :166
void Closure__remove_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->remove_Ready(value);
}

// private void ScheduleReady() :178
void Closure__ScheduleReady_fn(Closure* __this)
{
    __this->ScheduleReady();
}

// public Closure(Uno.UX.NameTable nameTable) [instance] :127
void Closure::ctor_2(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Reactive.Closure", ".ctor(Uno.UX.NameTable)");
    ctor_1();
    _nameTable = nameTable;
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) [instance] :159
void Closure::add_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "add_Ready(Fuse.Reactive.ClosureHandler)");

    if (IsRootingCompleted())
        ScheduleReady();

    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_ready, value), ::TYPES[20/*Fuse.Reactive.ClosureHandler*/]);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) [instance] :166
void Closure::remove_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "remove_Ready(Fuse.Reactive.ClosureHandler)");
    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_ready, value), ::TYPES[20/*Fuse.Reactive.ClosureHandler*/]);
}

// private void ScheduleReady() [instance] :178
void Closure::ScheduleReady()
{
    uStackFrame __("Fuse.Reactive.Closure", "ScheduleReady()");

    if (::g::Uno::Delegate::op_Inequality(_ready, NULL))
        uPtr(_ready)->Invoke(2, this, (::g::Fuse::Reactive::ClosureArgs*)::g::Fuse::Reactive::ClosureArgs::New2(_nameTable));
}

// public Closure New(Uno.UX.NameTable nameTable) [static] :127
Closure* Closure::New2(::g::Uno::UX::NameTable* nameTable)
{
    Closure* obj1 = (Closure*)uNew(Closure_typeof());
    obj1->ctor_2(nameTable);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class ThreadWorker.Closure<T> :2645
// {
static void ThreadWorker__Closure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::ThreadWorker__Closure, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ThreadWorker__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ThreadWorker__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.Closure`1", options);
    type->fp_build_ = ThreadWorker__Closure_build;
    return type;
}

// public Closure(Uno.Action<T> action, T arg) :2650
void ThreadWorker__Closure__ctor__fn(ThreadWorker__Closure* __this, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Reactive.ThreadWorker.Closure`1", ".ctor(Uno.Action<T>,T)");
    __this->_action = action;
    __this->_arg() = arg;
}

// public Closure New(Uno.Action<T> action, T arg) :2650
void ThreadWorker__Closure__New1_fn(uType* __type, uDelegate* action, void* arg, ThreadWorker__Closure** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    ThreadWorker__Closure* obj1 = (ThreadWorker__Closure*)uNew(__type);
    ThreadWorker__Closure__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :2656
void ThreadWorker__Closure__Run_fn(ThreadWorker__Closure* __this)
{
    __this->Run();
}

// public void Run() [instance] :2656
void ThreadWorker__Closure::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.Closure`1", "Run()");
    uPtr(_action)->InvokeVoid(_arg());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class ClosureArgs :90
// {
static void ClosureArgs_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    ::TYPES[22] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof());
    ::TYPES[9] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ClosureArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ClosureArgs, _names), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Serialize", NULL, (void*)ClosureArgs__Serialize_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Scripting::IEventSerializer_typeof()));
}

ClosureArgs_type* ClosureArgs_typeof()
{
    static uSStrong<ClosureArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClosureArgs);
    options.TypeSize = sizeof(ClosureArgs_type);
    type = (ClosureArgs_type*)uClassType::New("Fuse.Reactive.ClosureArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_build_ = ClosureArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ClosureArgs__Serialize_fn;
    return type;
}

// internal ClosureArgs(Uno.UX.NameTable names) :94
void ClosureArgs__ctor_1_fn(ClosureArgs* __this, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_1(names);
}

// internal ClosureArgs New(Uno.UX.NameTable names) :94
void ClosureArgs__New2_fn(::g::Uno::UX::NameTable* names, ClosureArgs** __retval)
{
    *__retval = ClosureArgs::New2(names);
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) :99
void ClosureArgs__Serialize_fn(ClosureArgs* __this, uObject* s)
{
    __this->Serialize(s);
}

// internal ClosureArgs(Uno.UX.NameTable names) [instance] :94
void ClosureArgs::ctor_1(::g::Uno::UX::NameTable* names)
{
    uStackFrame __("Fuse.Reactive.ClosureArgs", ".ctor(Uno.UX.NameTable)");
    ctor_();
    _names = names;
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) [instance] :99
void ClosureArgs::Serialize(uObject* s)
{
    uStackFrame __("Fuse.Reactive.ClosureArgs", "Serialize(Fuse.Scripting.IEventSerializer)");
    uObject* ret2;
    ::g::Uno::UX::NameTable* nt = _names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[21/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            uString* name = uPtr(uPtr(nt)->Entries)->Strong<uString*>(e);
            uObject* obj = uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_names)->Objects()), ::TYPES[22/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret2), ret2));
            ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[9/*Fuse.Scripting.IEventSerializer*/]), name, obj);
        }

        nt = uPtr(nt)->ParentTable;
    }
}

// internal ClosureArgs New(Uno.UX.NameTable names) [static] :94
ClosureArgs* ClosureArgs::New2(::g::Uno::UX::NameTable* names)
{
    ClosureArgs* obj1 = (ClosureArgs*)uNew(ClosureArgs_typeof());
    obj1->ctor_1(names);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public delegate void ClosureHandler(object sender, Fuse.Reactive.ClosureArgs args) :117
uDelegateType* ClosureHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.ClosureHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Reactive::ClosureArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\FuseJS\$.uno
// --------------------------------------------------------------

// internal static class Console :74
// {
static void Console_build(uType* type)
{
    ::STRINGS[3] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.32.14\\FuseJS\\$.uno");
    ::STRINGS[4] = uString::Const("null");
    ::STRINGS[5] = uString::Const("\"");
    ::STRINGS[6] = uString::Const("function");
    ::STRINGS[7] = uString::Const("Object");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[9] = uString::Const(": ");
    ::STRINGS[10] = uString::Const("Array[");
    ::STRINGS[11] = uString::Const("]");
    ::STRINGS[12] = uString::Const("  ");
    ::STRINGS[13] = uString::Const("log");
    ::STRINGS[14] = uString::Const("dir");
    ::STRINGS[15] = uString::Const("console");
    ::TYPES[23] = ::g::Uno::Int_typeof();
    ::TYPES[24] = ::g::Uno::Float_typeof();
    ::TYPES[17] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :95
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :107
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :176
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :76
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :85
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :95
uObject* Console::Dir(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(object[])");
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 1, ::STRINGS[3/*"C:\\Program...*/], 103);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :107
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(Uno.Text.StringBuilder,object,[int],[int])");
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[4/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[23/*int*/]) || uIs(obj, ::TYPES[24/*float*/])) || uIs(obj, ::TYPES[17/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[13/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[18/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[5/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[5/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[25/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[6/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[26/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[26/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[7/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*""*/], k), ::STRINGS[9/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[27/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[27/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[10/*"Array["*/], uBox<int>(::TYPES[23/*int*/], uPtr(a)->Length())), ::STRINGS[11/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[8/*""*/], uBox<int>(::TYPES[23/*int*/], i)), ::STRINGS[9/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :176
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Indent(Uno.Text.StringBuilder,int)");

    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[12/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :76
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.Console", "Init(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[13/*"log"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[14/*"dir"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[15/*"console"*/], console);
}

// private static object Log(object[] args) [static] :85
uObject* Console::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[4/*"null"*/], 1, ::STRINGS[3/*"C:\\Program...*/], 89);

    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public abstract class ContextBinding :49
// {
static void ContextBinding_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    type->SetFields(1,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _pathSubscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _Key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Key", NULL, (void*)ContextBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

ContextBinding_type* ContextBinding_typeof()
{
    static uSStrong<ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ContextBinding);
    options.TypeSize = sizeof(ContextBinding_type);
    type = (ContextBinding_type*)uClassType::New("Fuse.Reactive.ContextBinding", options);
    type->SetBase(::g::Fuse::Binding_typeof());
    type->fp_build_ = ContextBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnUnrooted_fn;
    return type;
}

// protected ContextBinding(string key) :54
void ContextBinding__ctor_1_fn(ContextBinding* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :52
void ContextBinding__get_Key_fn(ContextBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :52
void ContextBinding__set_Key_fn(ContextBinding* __this, uString* value)
{
    __this->Key(value);
}

// protected override void OnRooted() :61
void ContextBinding__OnRooted_fn(ContextBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "OnRooted()");
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_pathSubscription = (uObject*)::g::Fuse::Reactive::PathObserver::New1(__this, __this->Parent(), __this->Key());
}

// protected override void OnUnrooted() :67
void ContextBinding__OnUnrooted_fn(ContextBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "OnUnrooted()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_pathSubscription), ::TYPES[29/*Uno.IDisposable*/]));
    __this->_pathSubscription = NULL;
    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// protected ContextBinding(string key) [instance] :54
void ContextBinding::ctor_1(uString* key)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", ".ctor(string)");
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :52
uString* ContextBinding::Key()
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :52
void ContextBinding::Key(uString* value)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "set_Key(string)");
    _Key = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public class DataBinding<T> :217
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Not handled: OnAdd");
    ::STRINGS[17] = uString::Const("Not handled: OnFailed");
    ::STRINGS[18] = uString::Const("Not handled: OnInsertAt");
    ::STRINGS[19] = uString::Const("Not handled: OnNewAll");
    ::STRINGS[20] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[21] = uString::Const("Not handled: OnRemoveAt");
    ::STRINGS[22] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.32.14\\$.uno");
    ::STRINGS[23] = uString::Const("TryPushAsMarshalledValue");
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[31] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[32] = ::g::Fuse::INameListener_typeof();
    ::TYPES[33] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    ::TYPES[34] = ::g::Fuse::Scripting::Marshal_typeof();
    ::TYPES[35] = ::g::Uno::Exception_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[36] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[37] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface2));
    type->SetFields(3,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _hasOriginalValue), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Reactive::Observable__Subscription_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)DataBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)DataBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), 0));
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::ContextBinding_typeof());
    type->fp_build_ = DataBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_PushValue = DataBinding__PushValue_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public DataBinding(Uno.UX.Property<T> target, string key) :223
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_2(target, key);
}

// private static bool Acceptor(object obj) :397
void DataBinding__Acceptor_fn(uType* __type, uObject* obj, bool* __retval)
{
    *__retval = DataBinding::Acceptor(__type, obj);
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :296
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.INameListener.OnNameChanged(Fuse.Node,Uno.UX.Selector)");
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :233
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :243
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnFailed(string)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[17/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :259
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror values) :248
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Reactive::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror)");

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :238
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[20/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :254
void DataBinding__FuseReactiveIObserverOnRemoveAt_fn(DataBinding* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[21/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :228
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushValue(newValue);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) :223
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataBinding** __retval)
{
    *__retval = DataBinding::New1(__type, target, key);
}

// internal override sealed void NewValue(object value) :311
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "NewValue(object)");

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    if (uIs(value, __types[0]))
        __this->PushValue(value);
    else if (uIs(value, ::TYPES[30/*Fuse.Reactive.Observable*/]))
    {
        ::g::Fuse::Reactive::Observable* obs = uCast< ::g::Fuse::Reactive::Observable*>(value, ::TYPES[30/*Fuse.Reactive.Observable*/]);
        __this->_subscription = uPtr(obs)->Subscribe((uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :267
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnRooted()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Reactive::ContextBinding__OnRooted_fn(__this);

    if (!__this->_hasOriginalValue)
    {
        __this->_originalValue() = (uPtr(__this->Target())->Get_ex(&ret2), ret2);
        __this->_hasOriginalValue = true;
    }

    if (uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :280
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnUnrooted()");
    ::g::Fuse::NameRegistry::RemoveListener((uObject*)__this);

    if (uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    uPtr(__this->Target())->Set_ex(uT(__this->__type->GetBase(DataBinding_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(DataBinding_typeof())->T(0)->ValueSize)), (uObject*)__this);
    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
}

// protected virtual void PushValue(object newValue) :340
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "PushValue(object)");

    if (__this->Parent() == NULL)
        return;

    __this->_currentValue = newValue;

    if (__this->TryPushAsValue(newValue))
        return;
    else if (__this->TryPushAsName(newValue))
        return;
    else
        __this->TryPushAsMarshalledValue(newValue);
}

// public generated Uno.UX.Property<T> get_Target() :220
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :220
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :390
void DataBinding__ToSelector_fn(uType* __type, uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(__type, newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :402
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :363
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :351
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :301
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((__this->_subscription != NULL) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
        uPtr(__this->_subscription)->SetExclusive(uBoxPtr(__types[0], (uPtr(__this->Target())->Get_ex(&ret4), ret4)));
}

// public DataBinding(Uno.UX.Property<T> target, string key) [instance] :223
void DataBinding::ctor_2(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_1(key);
    Target(target);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :220
::g::Uno::UX::Property1* DataBinding::Target()
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :220
void DataBinding::Target(::g::Uno::UX::Property1* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :402
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(0/*Fuse.Scripting.Marshal.TryConvertTo<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsMarshalledValue(object)");
    uT value(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret3;

    if ((::g::Fuse::Scripting::Marshal__TryConvertTo1_fn(__types[1], newValue, &value, &ret3), ret3))
    {
        try
        {
            uPtr(Target())->Set_ex(value, (uObject*)this);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Fuse::Diagnostics::UserError(uPtr(e)->ToString(), Target(), ::STRINGS[22/*"C:\\Program...*/], 413, ::STRINGS[23/*"TryPushAsMa...*/]);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :363
bool DataBinding::TryPushAsName(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsName(object)");
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(__type, newValue);

    if (!name.IsNull())
    {
        ::g::Fuse::NameRegistry::AddListener(name, (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[36/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, NULL, __type));

        if (k != NULL)
        {
            uPtr(Target())->Set_ex(uUnboxAny(__types[0], k), (uObject*)this);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(__types[0])) && !::g::Fuse::Scripting::Marshal::CanConvertClass(__types[0]))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :351
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsValue(object)");

    if (uIs(newValue, __types[0]))
    {
        ::g::Fuse::NameRegistry::RemoveListener((uObject*)this);
        uPtr(Target())->Set_ex(uUnboxAny(__types[0], newValue), (uObject*)this);
        return true;
    }

    return false;
}

// private static bool Acceptor(object obj) [static] :397
bool DataBinding::Acceptor(uType* __type, uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Acceptor(object)");
    return uIs(obj, __types[0]);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) [static] :223
DataBinding* DataBinding::New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    DataBinding* obj1 = (DataBinding*)uNew(__type);
    obj1->ctor_2(target, key);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :390
::g::Uno::UX::Selector DataBinding::ToSelector(uType* __type, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "ToSelector(object)");
    return uIs(newValue, ::TYPES[33/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[33/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[18/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[18/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class DataToResourceBinding<T> :421
// {
static void DataToResourceBinding_build(uType* type)
{
    ::TYPES[38] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[31] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    ::TYPES[39] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::DataToResourceBinding, _key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)DataToResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DataToResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.DataToResourceBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->fp_build_ = DataToResourceBinding_build;
    type->fp_PushValue = (void(*)(::g::Fuse::Reactive::DataBinding*, uObject*))DataToResourceBinding__PushValue_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) :424
void DataToResourceBinding__ctor_3_fn(DataToResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_3(target, key);
}

// private bool AcceptFunction(object obj) :456
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->AcceptFunction(obj);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) :424
void DataToResourceBinding__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataToResourceBinding** __retval)
{
    *__retval = DataToResourceBinding::New2(__type, target, key);
}

// private void OnChanged() :445
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void PushValue(object value) :431
void DataToResourceBinding__PushValue_fn(DataToResourceBinding* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "PushValue(object)");
    uString* key = uAs<uString*>(value, ::TYPES[18/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    if (::g::Uno::String::op_Inequality(__this->_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));

    __this->_key = key;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) [instance] :424
void DataToResourceBinding::ctor_3(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2(target, key);
}

// private bool AcceptFunction(object obj) [instance] :456
bool DataToResourceBinding::AcceptFunction(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "AcceptFunction(object)");
    return uIs(obj, __types[0]);
}

// private void OnChanged() [instance] :445
void DataToResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "OnChanged()");

    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (Parent() == NULL)
        return;

    uObject* v;

    if (uPtr(Parent())->TryGetResource(_key, uDelegate::New(::TYPES[38/*Uno.Predicate<object>*/], (void*)DataToResourceBinding__AcceptFunction_fn, this), &v))
        uPtr((::g::Uno::UX::Property1*)Target())->Set_ex(uUnboxAny(__types[0], v), (uObject*)this);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) [static] :424
DataToResourceBinding* DataToResourceBinding::New2(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    DataToResourceBinding* obj1 = (DataToResourceBinding*)uNew(__type);
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\FuseJS\$.uno
// --------------------------------------------------------------

// internal static class DebugLog :56
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[24] = uString::Const("debug_log");
    ::STRINGS[4] = uString::Const("null");
    ::STRINGS[3] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.32.14\\FuseJS\\$.uno");
    ::TYPES[1] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :58
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :63
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :58
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Init(Fuse.Scripting.Context)");
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[24/*"debug_log"*/], uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :63
uObject* DebugLog::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[4/*"null"*/], 1, ::STRINGS[3/*"C:\\Program...*/], 67);

    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class Each :523
// {
// static Each() :523
static void Each__cctor_1_fn(uType* __type)
{
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Removing an out of bounds item index");
    ::STRINGS[22] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.32.14\\$.uno");
    ::STRINGS[26] = uString::Const("Fuse.Reactive.IObserver.OnRemoveAt");
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()));
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[41] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = uObject_typeof();
    ::TYPES[42] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[43] = ::g::Fuse::Reactive::ObjectMirror_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[44] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[46] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[47] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[48] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[49] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[50] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()));
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[51] = ::g::Fuse::Reactive::ListMirror_typeof();
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[15] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Each_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Each_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Each_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Each_type, interface3),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Each_type, interface4),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(Each_type, interface5));
    type->SetFields(13,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Each, _count), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Each, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Each, _listening), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Each, _matchKey), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof())), offsetof(::g::Fuse::Reactive::Each, _nodes), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Each, _subscription), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), offsetof(::g::Fuse::Reactive::Each, _templates), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Each, _TemplateKey), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Reactive::Each, _TemplateSource), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Reactive::Each::_eachHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Count", NULL, (void*)Each__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Count", NULL, (void*)Each__set_Count_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetItems", NULL, (void*)Each__GetItems_fn, 0, true, uObject_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetMatchKey", NULL, (void*)Each__GetMatchKey_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Items", NULL, (void*)Each__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)Each__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_MatchKey", NULL, (void*)Each__get_MatchKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_MatchKey", NULL, (void*)Each__set_MatchKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Each__New2_fn, 0, true, Each_typeof(), 0),
        new uFunction("SetItems", NULL, (void*)Each__SetItems_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), uObject_typeof()),
        new uFunction("SetMatchKey", NULL, (void*)Each__SetMatchKey_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_TemplateKey", NULL, (void*)Each__get_TemplateKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_TemplateKey", NULL, (void*)Each__set_TemplateKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Templates", NULL, (void*)Each__get_Templates_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), 0),
        new uFunction("get_TemplateSource", NULL, (void*)Each__get_TemplateSource_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_TemplateSource", NULL, (void*)Each__set_TemplateSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

Each_type* Each_typeof()
{
    static uSStrong<Each_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(Each_type);
    type = (Each_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New2_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Each__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Each__OnUnrooted_fn;
    type->interface5.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))Each__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnSet_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))Each__FuseReactiveIObserverOnFailed_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnAdd_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))Each__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnInsertAt_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnNewAt_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))Each__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Each() :580
void Each__ctor_3_fn(Each* __this)
{
    __this->ctor_3();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) :575
void Each__ctor_4_fn(Each* __this, uObject* templates)
{
    __this->ctor_4(templates);
}

// private void AddNew(object dataContext) :911
void Each__AddNew_fn(Each* __this, uObject* dataContext)
{
    __this->AddNew(dataContext);
}

// private void AddTemplate(Uno.UX.Template f, object dataContext, Uno.Collections.List<Fuse.Node> newElements) :972
void Each__AddTemplate_fn(Each* __this, ::g::Uno::UX::Template* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    __this->AddTemplate(f, dataContext, newElements);
}

// public int get_Count() :695
void Each__get_Count_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void set_Count(int value) :699
void Each__set_Count_fn(Each* __this, int* value)
{
    __this->Count(*value);
}

// private void Fuse.ITemplateObserver.OnTemplatesChangedWileRooted() :645
void Each__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Each* __this)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.ITemplateObserver.OnTemplatesChangedWileRooted()");
    __this->Repopulate();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :787
void Each__FuseReactiveIObserverOnAdd_fn(Each* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnAdd(object)");

    if (!__this->_listening)
        return;

    __this->AddNew(addedValue);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :780
void Each__FuseReactiveIObserverOnFailed_fn(Each* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnFailed(string)");

    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :811
void Each__FuseReactiveIObserverOnInsertAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->InsertNew(index_, value);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror values) :830
void Each__FuseReactiveIObserverOnNewAll_fn(Each* __this, ::g::Fuse::Reactive::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror)");

    if (!__this->_listening)
        return;

    __this->RemoveAll();

    for (int i = 0; i < uPtr(values)->Length(); i++)
        __this->AddNew(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(values)->Item(i)));

    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :819
void Each__FuseReactiveIObserverOnNewAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret13;
    ::g::Uno::Collections::List* ret14;
    int index_ = *index;

    if (!__this->_listening)
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_nodes), uCRef<int>(index_), &ret14), ret14)), &ret13), ret13); enum2.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* e = enum2.Current(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(e)->DataContext(value);
    }

    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :794
void Each__FuseReactiveIObserverOnRemoveAt_fn(Each* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    int index_ = *index;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret15;
    ::g::Uno::Collections::List* ret16;

    if (!__this->_listening)
        return;

    if ((index_ < 0) || (index_ >= uPtr(__this->_nodes)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[25/*"Removing an...*/], __this, ::STRINGS[22/*"C:\\Program...*/], 800, ::STRINGS[26/*"Fuse.Reacti...*/]);
        return;
    }

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_nodes), uCRef<int>(index_), &ret16), ret16)), &ret15), ret15); enum1.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum1.Current(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(__this->Parent())->BeginRemoveChild(c, NULL);
    }

    uPtr(__this->_nodes)->RemoveAt(index_);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :771
void Each__FuseReactiveIObserverOnSet_fn(Each* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnSet(object)");

    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->AddNew(newValue);
    __this->SetValid();
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) :527
void Each__GetEach_fn(::g::Fuse::Visual* container, Each** __retval)
{
    *__retval = Each::GetEach(container);
}

// public static object GetItems(Fuse.Visual container) :555
void Each__GetItems_fn(::g::Fuse::Visual* container, uObject** __retval)
{
    *__retval = Each::GetItems(container);
}

// public static string GetMatchKey(Fuse.Visual container) :570
void Each__GetMatchKey_fn(::g::Fuse::Visual* container, uString** __retval)
{
    *__retval = Each::GetMatchKey(container);
}

// private string GetMatchKey(object dataContext) :898
void Each__GetMatchKey1_fn(Each* __this, uObject* dataContext, uString** __retval)
{
    *__retval = __this->GetMatchKey1(dataContext);
}

// private void InsertNew(int index, object dataContext) :916
void Each__InsertNew_fn(Each* __this, int* index, uObject* dataContext)
{
    __this->InsertNew(*index, dataContext);
}

// private bool IsUnchanged(object[] newDcs) :863
void Each__IsUnchanged_fn(Each* __this, uArray* newDcs, bool* __retval)
{
    *__retval = __this->IsUnchanged(newDcs);
}

// public object get_Items() :681
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :682
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public string get_MatchKey() :887
void Each__get_MatchKey_fn(Each* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :888
void Each__set_MatchKey_fn(Each* __this, uString* value)
{
    __this->MatchKey(value);
}

// public Each New() :580
void Each__New2_fn(Each** __retval)
{
    *__retval = Each::New2();
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) :575
void Each__New3_fn(uObject* templates, Each** __retval)
{
    *__retval = Each::New3(templates);
}

// private void OnItemsChanged() :711
void Each__OnItemsChanged_fn(Each* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :656
void Each__OnRooted_fn(Each* __this)
{
    uStackFrame __("Fuse.Reactive.Each", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnItemsChanged();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :650
void Each__OnTemplatesChanged_fn(Each* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :662
void Each__OnUnrooted_fn(Each* __this)
{
    uStackFrame __("Fuse.Reactive.Each", "OnUnrooted()");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
        __this->_listening = false;
    }

    __this->RemoveAll();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveAll() :854
void Each__RemoveAll_fn(Each* __this)
{
    __this->RemoveAll();
}

// private void ReplaceAll(object[] dcs) :844
void Each__ReplaceAll_fn(Each* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :730
void Each__Repopulate_fn(Each* __this)
{
    __this->Repopulate();
}

// private void SetFailed(string message) :763
void Each__SetFailed_fn(Each* __this, uString* message)
{
    __this->SetFailed(message);
}

// public static void SetItems(Fuse.Visual container, object items) :549
void Each__SetItems_fn(::g::Fuse::Visual* container, uObject* items)
{
    Each::SetItems(container, items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) :564
void Each__SetMatchKey_fn(::g::Fuse::Visual* container, uString* key)
{
    Each::SetMatchKey(container, key);
}

// private void SetValid() :757
void Each__SetValid_fn(Each* __this)
{
    __this->SetValid();
}

// public generated string get_TemplateKey() :642
void Each__get_TemplateKey_fn(Each* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public generated void set_TemplateKey(string value) :642
void Each__set_TemplateKey_fn(Each* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :587
void Each__get_Templates_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public generated Fuse.Visual get_TemplateSource() :631
void Each__get_TemplateSource_fn(Each* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->TemplateSource();
}

// public generated void set_TemplateSource(Fuse.Visual value) :631
void Each__set_TemplateSource_fn(Each* __this, ::g::Fuse::Visual* value)
{
    __this->TemplateSource(value);
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :580
void Each::ctor_3()
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor()");
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
    ctor_2();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) [instance] :575
void Each::ctor_4(uObject* templates)
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor(Uno.Collections.IList<Uno.UX.Template>)");
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
    ctor_2();
    _templates = templates;
}

// private void AddNew(object dataContext) [instance] :911
void Each::AddNew(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "AddNew(object)");
    InsertNew(uPtr(_nodes)->Count(), dataContext);
}

// private void AddTemplate(Uno.UX.Template f, object dataContext, Uno.Collections.List<Fuse.Node> newElements) [instance] :972
void Each::AddTemplate(::g::Uno::UX::Template* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    uStackFrame __("Fuse.Reactive.Each", "AddTemplate(Uno.UX.Template,object,Uno.Collections.List<Fuse.Node>)");
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[7/*Fuse.Node*/]);

    if (elm != NULL)
    {
        if (dataContext != NULL)
            uPtr(elm)->DataContext(dataContext);

        ::g::Uno::Collections::List__Add_fn(uPtr(newElements), elm);
    }
}

// public int get_Count() [instance] :695
int Each::Count()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Count()");
    return _count;
}

// public void set_Count(int value) [instance] :699
void Each::Count(int value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Count(int)");

    if (_count != value)
    {
        _count = value;
        OnItemsChanged();
    }
}

// private string GetMatchKey(object dataContext) [instance] :898
uString* Each::GetMatchKey1(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(object)");
    ::g::Fuse::Reactive::ObjectMirror* so = uAs< ::g::Fuse::Reactive::ObjectMirror*>(dataContext, ::TYPES[43/*Fuse.Reactive.ObjectMirror*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(_matchKey, NULL))
    {
        if (uPtr(so)->ContainsKey(_matchKey))
            return uAs<uString*>(uPtr(so)->Item(_matchKey), ::TYPES[18/*string*/]);
    }

    return NULL;
}

// private void InsertNew(int index, object dataContext) [instance] :916
void Each::InsertNew(int index, uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "InsertNew(int,object)");
    ::g::Uno::UX::Template* ret17;
    int ret18;
    ::g::Uno::Collections::List* ret19;
    ::g::Fuse::Node* ret20;
    ::g::Uno::Collections::List* newElements = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Node>*/]);
    bool anyMatched = false;
    ::g::Uno::UX::Template* defaultTemplate = NULL;
    uString* key = GetMatchKey1(dataContext);

    if ((TemplateSource() != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = uPtr(TemplateSource())->FindTemplate(TemplateKey());

        if (t != NULL)
        {
            anyMatched = true;
            AddTemplate(t, dataContext, newElements);
        }
    }

    if (!anyMatched)

        for (uObject* enum9 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Templates()), ::TYPES[44/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum9), ::TYPES[45/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum9), ::TYPES[46/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret17), ret17);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Inequality(uPtr(f)->Key(), key))
                continue;

            anyMatched = true;
            AddTemplate(f, dataContext, newElements);
        }

    if (!anyMatched && (defaultTemplate != NULL))
        AddTemplate(defaultTemplate, dataContext, newElements);

    int childIndex = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[47/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), this, &ret18), ret18) + 1;

    for (int i = 0; i < index; i++)
        childIndex = childIndex + uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(i), &ret19), ret19))->Count();

    for (int i1 = 0; i1 < newElements->Count(); ++i1)
        ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[49/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(childIndex + i1), (::g::Uno::Collections::List__get_Item_fn(uPtr(newElements), uCRef<int>(i1), &ret20), ret20));

    ::g::Uno::Collections::List__Insert_fn(uPtr(_nodes), uCRef<int>(index), newElements);
}

// private bool IsUnchanged(object[] newDcs) [instance] :863
bool Each::IsUnchanged(uArray* newDcs)
{
    uStackFrame __("Fuse.Reactive.Each", "IsUnchanged(object[])");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret21;
    ::g::Uno::Collections::List* ret22;

    if (newDcs == NULL)
    {
        if (uPtr(_nodes)->Count() == 0)
            return true;
        else
            return false;
    }

    if (uPtr(newDcs)->Length() != uPtr(_nodes)->Count())
        return false;

    for (int i = 0; i < uPtr(newDcs)->Length(); i++)

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(i), &ret22), ret22)), &ret21), ret21); enum8.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
        {
            ::g::Fuse::Node* e = enum8.Current(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

            if (!::g::Uno::Object::Equals(uPtr(uPtr(newDcs)->Strong<uObject*>(i)), uPtr(e)->DataContext()))
                return false;
        }

    return true;
}

// public object get_Items() [instance] :681
uObject* Each::Items()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :682
void Each::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public string get_MatchKey() [instance] :887
uString* Each::MatchKey()
{
    uStackFrame __("Fuse.Reactive.Each", "get_MatchKey()");
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :888
void Each::MatchKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_MatchKey(string)");

    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        OnItemsChanged();
    }
}

// private void OnItemsChanged() [instance] :711
void Each::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.Each", "OnItemsChanged()");

    if (!IsRootingStarted())
        return;

    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[30/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));

        _listening = true;
        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Repopulate();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :650
void Each::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    uStackFrame __("Fuse.Reactive.Each", "OnTemplatesChanged(Uno.UX.Template)");

    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void RemoveAll() [instance] :854
void Each::RemoveAll()
{
    uStackFrame __("Fuse.Reactive.Each", "RemoveAll()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret23;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret24;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_nodes), &ret23), ret23); enum6.MoveNext(::TYPES[50/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* es = enum6.Current(::TYPES[50/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>.Enumerator*/]);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(es), &ret24), ret24); enum7.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
        {
            ::g::Fuse::Node* e = enum7.Current(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
            uPtr(Parent())->BeginRemoveChild(e, NULL);
        }
    }

    uPtr(_nodes)->Clear();
}

// private void ReplaceAll(object[] dcs) [instance] :844
void Each::ReplaceAll(uArray* dcs)
{
    uStackFrame __("Fuse.Reactive.Each", "ReplaceAll(object[])");
    uArray* array3;
    int index4;
    int length5;

    if (IsUnchanged(dcs))
        return;

    RemoveAll();

    if (dcs != NULL)

        for (array3 = dcs, index4 = 0, length5 = uPtr(array3)->Length(); index4 < length5; ++index4)
        {
            uObject* d = uPtr(array3)->Strong<uObject*>(index4);
            AddNew(d);
        }
}

// private void Repopulate() [instance] :730
void Each::Repopulate()
{
    uStackFrame __("Fuse.Reactive.Each", "Repopulate()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[2/*object[]*/]);
    ::g::Fuse::Reactive::ListMirror* a = uAs< ::g::Fuse::Reactive::ListMirror*>(_items, ::TYPES[51/*Fuse.Reactive.ListMirror*/]);

    if (e != NULL)
    {
        ReplaceAll(e);
        return;
    }
    else if (a != NULL)
    {
        RemoveAll();

        for (int i = 0; i < uPtr(a)->Length(); i++)
            AddNew(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(a)->Item(i)));
    }
    else
    {
        RemoveAll();

        for (int i1 = 0; i1 < Count(); i1++)
            AddNew(NULL);
    }
}

// private void SetFailed(string message) [instance] :763
void Each::SetFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "SetFailed(string)");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(Parent(), true, message);
}

// private void SetValid() [instance] :757
void Each::SetValid()
{
    uStackFrame __("Fuse.Reactive.Each", "SetValid()");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(Parent(), false, NULL);
}

// public generated string get_TemplateKey() [instance] :642
uString* Each::TemplateKey()
{
    uStackFrame __("Fuse.Reactive.Each", "get_TemplateKey()");
    return _TemplateKey;
}

// public generated void set_TemplateKey(string value) [instance] :642
void Each::TemplateKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_TemplateKey(string)");
    _TemplateKey = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :587
uObject* Each::Templates()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Templates()");
    uObject* ind10 = _templates;
    return (ind10 != NULL) ? ind10 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[15/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[16/*Uno.Action<Uno.UX.Template>*/], (void*)Each__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[16/*Uno.Action<Uno.UX.Template>*/], (void*)Each__OnTemplatesChanged_fn, this))));
}

// public generated Fuse.Visual get_TemplateSource() [instance] :631
::g::Fuse::Visual* Each::TemplateSource()
{
    uStackFrame __("Fuse.Reactive.Each", "get_TemplateSource()");
    return _TemplateSource;
}

// public generated void set_TemplateSource(Fuse.Visual value) [instance] :631
void Each::TemplateSource(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_TemplateSource(Fuse.Visual)");
    _TemplateSource = value;
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) [static] :527
Each* Each::GetEach(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetEach(Fuse.Visual)");
    Each_typeof()->Init();
    Each* each = uAs<Each*>(uPtr(uPtr(container)->Properties())->Get(Each::_eachHandle()), Each_typeof());

    if (each == NULL)
    {
        each = Each::New3(uPtr(container)->Templates());
        uPtr(container->Properties())->Set(Each::_eachHandle(), each);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(container->Children()), ::TYPES[42/*Uno.Collections.ICollection<Fuse.Node>*/]), each);
    }

    return each;
}

// public static object GetItems(Fuse.Visual container) [static] :555
uObject* Each::GetItems(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetItems(Fuse.Visual)");
    Each_typeof()->Init();
    return uPtr(Each::GetEach(container))->Items();
}

// public static string GetMatchKey(Fuse.Visual container) [static] :570
uString* Each::GetMatchKey(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(Fuse.Visual)");
    Each_typeof()->Init();
    return uPtr(Each::GetEach(container))->MatchKey();
}

// public Each New() [static] :580
Each* Each::New2()
{
    Each* obj12 = (Each*)uNew(Each_typeof());
    obj12->ctor_3();
    return obj12;
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) [static] :575
Each* Each::New3(uObject* templates)
{
    Each* obj11 = (Each*)uNew(Each_typeof());
    obj11->ctor_4(templates);
    return obj11;
}

// public static void SetItems(Fuse.Visual container, object items) [static] :549
void Each::SetItems(::g::Fuse::Visual* container, uObject* items)
{
    uStackFrame __("Fuse.Reactive.Each", "SetItems(Fuse.Visual,object)");
    Each_typeof()->Init();
    uPtr(Each::GetEach(container))->Items(items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) [static] :564
void Each::SetMatchKey(::g::Fuse::Visual* container, uString* key)
{
    uStackFrame __("Fuse.Reactive.Each", "SetMatchKey(Fuse.Visual,string)");
    Each_typeof()->Init();
    uPtr(Each::GetEach(container))->MatchKey(key);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class JavaScript.EvaluateDataContext :1291
// {
static void JavaScript__EvaluateDataContext_build(uType* type)
{
    ::TYPES[39] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _dc), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _js), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _worker), 0);
}

uType* JavaScript__EvaluateDataContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JavaScript__EvaluateDataContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.JavaScript.EvaluateDataContext", options);
    type->fp_build_ = JavaScript__EvaluateDataContext_build;
    return type;
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :1297
void JavaScript__EvaluateDataContext__ctor__fn(JavaScript__EvaluateDataContext* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_(worker, js);
}

// private void Evaluate() :1305
void JavaScript__EvaluateDataContext__Evaluate_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->Evaluate();
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :1297
void JavaScript__EvaluateDataContext__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, JavaScript__EvaluateDataContext** __retval)
{
    *__retval = JavaScript__EvaluateDataContext::New1(worker, js);
}

// private void SetDataContext() :1314
void JavaScript__EvaluateDataContext__SetDataContext_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->SetDataContext();
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :1297
void JavaScript__EvaluateDataContext::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    uStackFrame __("Fuse.Reactive.JavaScript.EvaluateDataContext", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Reactive.JavaScript)");
    _js = js;
    _worker = worker;
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__Evaluate_fn, this));
}

// private void Evaluate() [instance] :1305
void JavaScript__EvaluateDataContext::Evaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript.EvaluateDataContext", "Evaluate()");
    _dc = uPtr(_worker)->Reflect(uPtr(_js)->EvaluateExports());
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__SetDataContext_fn, this));
}

// private void SetDataContext() [instance] :1314
void JavaScript__EvaluateDataContext::SetDataContext()
{
    uStackFrame __("Fuse.Reactive.JavaScript.EvaluateDataContext", "SetDataContext()");
    uPtr(_js)->SetDataContext(_dc);
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :1297
JavaScript__EvaluateDataContext* JavaScript__EvaluateDataContext::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    JavaScript__EvaluateDataContext* obj1 = (JavaScript__EvaluateDataContext*)uNew(JavaScript__EvaluateDataContext_typeof());
    obj1->ctor_(worker, js);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class EventBinding :1017
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[39] = ::g::Uno::Action_typeof();
    ::TYPES[52] = ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof());
    type->SetFields(3,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding, _function), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof()), offsetof(::g::Fuse::Reactive::EventBinding, _queuedEvents), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EventBinding__New1_fn, 0, true, EventBinding_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnEvent", NULL, (void*)EventBinding__OnEvent_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::EventArgs_typeof()));
}

::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ContextBinding_type);
    type = (::g::Fuse::Reactive::ContextBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->SetBase(::g::Fuse::Reactive::ContextBinding_typeof());
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    return type;
}

// public EventBinding(string key) :1020
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(string key) :1020
void EventBinding__New1_fn(uString* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :1043
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "NewValue(object)");
    __this->_function = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[25/*Fuse.Scripting.Function*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :1119
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :1049
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnUnrooted()");
    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :1028
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(string key) [instance] :1020
void EventBinding::ctor_2(uString* key)
{
    uStackFrame __("Fuse.Reactive.EventBinding", ".ctor(string)");
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :1119
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnEvent(object,Uno.EventArgs)");

    if (Parent() == NULL)
        return;

    EventBinding__CallClosure* callClosure = EventBinding__CallClosure::New1(uAs<uObject*>(args, ::TYPES[8/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[7/*Fuse.Node*/]));

    if (_function != NULL)
    {
        uPtr(callClosure)->Function = _function;
        uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, callClosure));
    }
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[52/*Uno.Collections.List<Fuse.Reactive.EventBinding.CallClosure>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), callClosure);
    }
}

// private void ProcessQueuedEvents() [instance] :1028
void EventBinding::ProcessQueuedEvents()
{
    uStackFrame __("Fuse.Reactive.EventBinding", "ProcessQueuedEvents()");
    EventBinding__CallClosure* ret2;
    EventBinding__CallClosure* ret3;

    if ((_function != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2))->Function = _function;
            uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, uPtr((::g::Uno::Collections::List__get_Item_fn(events, uCRef<int>(i), &ret3), ret3))));
        }
    }
}

// public EventBinding New(string key) [static] :1020
EventBinding* EventBinding::New1(uString* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class ThreadWorker.Flag :2626
// {
static void ThreadWorker__Flag_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__Flag, _processed), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ThreadWorker__Flag__New1_fn, 0, true, ThreadWorker__Flag_typeof(), 0));
}

uType* ThreadWorker__Flag_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadWorker__Flag);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.Flag", options);
    type->fp_build_ = ThreadWorker__Flag_build;
    type->fp_ctor_ = (void*)ThreadWorker__Flag__New1_fn;
    return type;
}

// public generated Flag() :2626
void ThreadWorker__Flag__ctor__fn(ThreadWorker__Flag* __this)
{
    __this->ctor_();
}

// public generated Flag New() :2626
void ThreadWorker__Flag__New1_fn(ThreadWorker__Flag** __retval)
{
    *__retval = ThreadWorker__Flag::New1();
}

// internal void Process() :2632
void ThreadWorker__Flag__Process_fn(ThreadWorker__Flag* __this)
{
    __this->Process();
}

// public generated Flag() [instance] :2626
void ThreadWorker__Flag::ctor_()
{
}

// internal void Process() [instance] :2632
void ThreadWorker__Flag::Process()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.Flag", "Process()");
    _processed = true;
}

// public generated Flag New() [static] :2626
ThreadWorker__Flag* ThreadWorker__Flag::New1()
{
    ThreadWorker__Flag* obj1 = (ThreadWorker__Flag*)uNew(ThreadWorker__Flag_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class Observable.InsertAt :2264
// {
static void Observable__InsertAt_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAt, _index), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAt, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.InsertAt", options);
    type->SetBase(::g::Fuse::Reactive::Observable__Operation_typeof());
    type->fp_build_ = Observable__InsertAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__InsertAt__OnPerform_fn;
    type->fp_SendMessage = (void(*)(::g::Fuse::Reactive::Observable__Operation*, ::g::Fuse::Reactive::Observable__Subscription*))Observable__InsertAt__SendMessage_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__InsertAt__Unsubscribe_fn;
    return type;
}

// public InsertAt(Fuse.Reactive.Observable obs, int index, object value) :2269
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* value)
{
    __this->ctor_1(obs, *index, value);
}

// public InsertAt New(Fuse.Reactive.Observable obs, int index, object value) :2269
void Observable__InsertAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* value, Observable__InsertAt** __retval)
{
    *__retval = Observable__InsertAt::New1(obs, *index, value);
}

// protected override sealed void OnPerform() :2280
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.InsertAt", "OnPerform()");
    ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index), __this->_value);
}

// protected override sealed void SendMessage(Fuse.Reactive.Observable.Subscription sub) :2285
void Observable__InsertAt__SendMessage_fn(Observable__InsertAt* __this, ::g::Fuse::Reactive::Observable__Subscription* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.InsertAt", "SendMessage(Fuse.Reactive.Observable.Subscription)");
    ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr(sub)->Observer()), ::TYPES[0/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :2275
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.InsertAt", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public InsertAt(Fuse.Reactive.Observable obs, int index, object value) [instance] :2269
void Observable__InsertAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Observable.InsertAt", ".ctor(Fuse.Reactive.Observable,int,object)");
    ctor_(obs);
    _index = index;
    _value = value;
}

// public InsertAt New(Fuse.Reactive.Observable obs, int index, object value) [static] :2269
Observable__InsertAt* Observable__InsertAt::New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value)
{
    Observable__InsertAt* obj1 = (Observable__InsertAt*)uNew(Observable__InsertAt_typeof());
    obj1->ctor_1(obs, index, value);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public abstract interface IObserver :1187
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    type->Reflection.SetFunctions(7,
        new uFunction("OnAdd", NULL, NULL, offsetof(IObserver, fp_OnAdd), false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("OnFailed", NULL, NULL, offsetof(IObserver, fp_OnFailed), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnInsertAt", NULL, NULL, offsetof(IObserver, fp_OnInsertAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnNewAll", NULL, NULL, offsetof(IObserver, fp_OnNewAll), false, uVoid_typeof(), 1, ::g::Fuse::Reactive::ListMirror_typeof()),
        new uFunction("OnNewAt", NULL, NULL, offsetof(IObserver, fp_OnNewAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnRemoveAt", NULL, NULL, offsetof(IObserver, fp_OnRemoveAt), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("OnSet", NULL, NULL, offsetof(IObserver, fp_OnSet), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class JavaScript :1218
// {
// static JavaScript() :1218
static void JavaScript__cctor_1_fn(uType* __type)
{
    JavaScript::_resetHookMutex_ = ::g::Uno::Threading::Mutex::Create();
}

static void JavaScript_build(uType* type)
{
    ::STRINGS[27] = uString::Const("exports");
    ::STRINGS[28] = uString::Const("JavaScript error in ");
    ::STRINGS[29] = uString::Const(" fixed!");
    ::STRINGS[22] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.32.14\\$.uno");
    ::STRINGS[30] = uString::Const("EvaluateModule");
    ::STRINGS[31] = uString::Const(" line ");
    ::STRINGS[32] = uString::Const(". ");
    ::STRINGS[33] = uString::Const("Cannot require() a rooted module");
    ::TYPES[53] = ::g::Fuse::Scripting::ScriptModule_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[39] = ::g::Uno::Action_typeof();
    ::TYPES[54] = ::g::Fuse::Scripting::Module_typeof();
    ::TYPES[55] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[56] = ::g::Uno::UX::Resource_typeof()->MakeMethod(1, ::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[57] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface3),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface4));
    type->SetFields(13,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _currentDc), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _moduleResult), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _scriptModule), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        ::g::Uno::Threading::Mutex_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_resetHookMutex_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::previousErrorFile_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Code", NULL, (void*)JavaScript__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)JavaScript__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_File", NULL, (void*)JavaScript__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)JavaScript__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)JavaScript__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)JavaScript__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumber", NULL, (void*)JavaScript__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumber", NULL, (void*)JavaScript__set_LineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)JavaScript__New2_fn, 0, true, JavaScript_typeof(), 1, ::g::Uno::UX::NameTable_typeof()));
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = JavaScript_build;
    type->fp_cctor_ = JavaScript__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface4.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public JavaScript(Uno.UX.NameTable nameTable) :1227
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public string get_Code() :1381
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :1382
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// private void DispatchEvaluate() :1275
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private object EvaluateExports() :1322
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :1334
void JavaScript__EvaluateModule_fn(JavaScript* __this)
{
    __this->EvaluateModule();
}

// public Uno.UX.FileSource get_File() :1400
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1401
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :1407
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :1408
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :1264
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModuleProvider.GetModule()");

    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[33/*"Cannot requ...*/]));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :1394
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :1395
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :1227
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :1237
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter()++;
    __this->DispatchEvaluate();
}

// protected override sealed void OnUnrooted() :1244
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnUnrooted()");
    ::g::Fuse::Scripting::NativeModule* ret3;
    __this->SetDataContext(NULL);

    if (__this->_moduleResult != NULL)
    {
        uPtr(__this->_moduleResult)->Dispose();
        __this->_moduleResult = NULL;
    }

    if ((--JavaScript::_javaScriptCounter()) <= 0)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::TYPES[56/*Uno.UX.Resource.GetGlobalsOfType<Fuse.Scripting.NativeModule>*/])), ::TYPES[55/*Uno.Collections.IEnumerable<Fuse.Scripting.NativeModule>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[45/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[57/*Uno.Collections.IEnumerator<Fuse.Scripting.NativeModule>*/]), &ret3), ret3);
            uPtr(nm)->InternalReset();
        }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void SetDataContext(object newDc) :1283
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :1222
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong< ::g::Uno::Threading::Mutex*> JavaScript::_resetHookMutex_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;
uSStrong<uString*> JavaScript::previousErrorFile_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :1227
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Reactive.JavaScript", ".ctor(Uno.UX.NameTable)");
    ctor_2();

    if (JavaScript::_worker() == NULL)
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1();

    _scriptModule = ::g::Fuse::Reactive::RootableScriptModule::New2(JavaScript::_worker(), nameTable);
}

// public string get_Code() [instance] :1381
uString* JavaScript::Code()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Code()");
    return uPtr(_scriptModule)->Code();
}

// public void set_Code(string value) [instance] :1382
void JavaScript::Code(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(uPtr(_scriptModule)->Code(), value))
        uPtr(_scriptModule)->Code(value);
}

// private void DispatchEvaluate() [instance] :1275
void JavaScript::DispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluate()");

    if (!IsRootingStarted())
        return;

    JavaScript__EvaluateDataContext::New1(JavaScript::Worker(), this);
}

// private object EvaluateExports() [instance] :1322
uObject* JavaScript::EvaluateExports()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateExports()");
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[27/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :1334
void JavaScript::EvaluateModule()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateModule()");
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);

    {
        const auto __finally_fun = [&]()
        {
            uPtr(JavaScript::_resetHookMutex())->Unlock();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(JavaScript::_resetHookMutex())->Lock();
        ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(_scriptModule)->Evaluate1(uPtr(JavaScript::_worker())->Context(), globalId);
        uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)JavaScript__DispatchEvaluate_fn, this));

        if (newModuleResult->Error() == NULL)
        {
            _moduleResult = newModuleResult;

            if (::g::Uno::String::op_Equality(JavaScript::previousErrorFile(), ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[23/*int*/], LineNumber()))))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[28/*"JavaScript ...*/], FileName()), ::STRINGS[29/*" fixed!"*/]), this, ::STRINGS[22/*"C:\\Program...*/], 1350, ::STRINGS[30/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
            {
                ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[28/*"JavaScript ...*/], uPtr(se)->FileName()), ::STRINGS[31/*" line "*/]), uBox<int>(::TYPES[23/*int*/], uPtr(se)->LineNumber())), ::STRINGS[32/*". "*/]), uPtr(se)->ErrorMessage()), this, ::STRINGS[22/*"C:\\Program...*/], 1361, ::STRINGS[30/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[23/*int*/], LineNumber()));
            }
        }
    }
}

// public Uno.UX.FileSource get_File() [instance] :1400
::g::Uno::UX::FileSource* JavaScript::File()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_File()");
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :1401
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_File(Uno.UX.FileSource)");
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :1407
uString* JavaScript::FileName()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_FileName()");
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :1408
void JavaScript::FileName(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_FileName(string)");
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :1394
int JavaScript::LineNumber()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_LineNumber()");
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :1395
void JavaScript::LineNumber(int value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_LineNumber(int)");
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// private void SetDataContext(object newDc) [instance] :1283
void JavaScript::SetDataContext(uObject* newDc)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetDataContext(object)");
    uObject* oldDc = _currentDc;
    _currentDc = newDc;

    if (Parent() != NULL)
        uPtr(Parent())->DataContext(newDc);

    if (oldDc != NULL)
        ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(oldDc);
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :1227
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :1222
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Worker()");
    JavaScript_typeof()->Init();
    return JavaScript::_worker();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// internal sealed class LazyObservableProperty :2305
// {
static void LazyObservableProperty_build(uType* type)
{
    ::STRINGS[34] = uString::Const("_dispose_context");
    ::TYPES[33] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[31] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[39] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(LazyObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(LazyObservableProperty_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _obj), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _observable), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _property), 0,
        ::g::Fuse::Reactive::Observable__Subscription_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _subscription), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::LazyObservableProperty, _worker), 0);
}

LazyObservableProperty_type* LazyObservableProperty_typeof()
{
    static uSStrong<LazyObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LazyObservableProperty);
    options.TypeSize = sizeof(LazyObservableProperty_type);
    type = (LazyObservableProperty_type*)uClassType::New("Fuse.Reactive.LazyObservableProperty", options);
    type->fp_build_ = LazyObservableProperty_build;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))LazyObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))LazyObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))LazyObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))LazyObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))LazyObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))LazyObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))LazyObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))LazyObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :2311
void LazyObservableProperty__ctor__fn(LazyObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_(w, obj, p);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :2370
void LazyObservableProperty__FuseReactiveIObserverOnAdd_fn(LazyObservableProperty* __this, uObject* addedValue)
{
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :2382
void LazyObservableProperty__FuseReactiveIObserverOnFailed_fn(LazyObservableProperty* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :2378
void LazyObservableProperty__FuseReactiveIObserverOnInsertAt_fn(LazyObservableProperty* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (index_ == 0)
        __this->Set(value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror values) :2358
void LazyObservableProperty__FuseReactiveIObserverOnNewAll_fn(LazyObservableProperty* __this, ::g::Fuse::Reactive::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror)");

    if (uPtr(values)->Length() == 1)
        __this->Set(uPtr(values)->Item(0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :2362
void LazyObservableProperty__FuseReactiveIObserverOnNewAt_fn(LazyObservableProperty* __this, int* index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    int index_ = *index;

    if (index_ == 0)
        __this->Set(newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :2374
void LazyObservableProperty__FuseReactiveIObserverOnRemoveAt_fn(LazyObservableProperty* __this, int* index)
{
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :2366
void LazyObservableProperty__FuseReactiveIObserverOnSet_fn(LazyObservableProperty* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->Set(newValue);
}

// private object Get(object[] args) :2321
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Get(args);
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :2311
void LazyObservableProperty__New1_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval)
{
    *__retval = LazyObservableProperty::New1(w, obj, p);
}

// private void PushValue() :2401
void LazyObservableProperty__PushValue_fn(LazyObservableProperty* __this)
{
    __this->PushValue();
}

// public void Reset() :2341
void LazyObservableProperty__Reset_fn(LazyObservableProperty* __this)
{
    __this->Reset();
}

// private void Set(object value) :2387
void LazyObservableProperty__Set_fn(LazyObservableProperty* __this, uObject* value)
{
    __this->Set(value);
}

// private void Subscribe() :2334
void LazyObservableProperty__Subscribe_fn(LazyObservableProperty* __this)
{
    __this->Subscribe();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :2392
void LazyObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(LazyObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Inequality(prop_, uPtr(__this->_property)->Name()))
        return;

    if (obj != uPtr(__this->_property)->Object())
        return;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_worker)->Invoke(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)LazyObservableProperty__PushValue_fn, __this));
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :2311
void LazyObservableProperty::ctor_(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Uno.UX.Property)");
    _obj = obj;
    _worker = w;
    _property = p;
    uPtr(uPtr(_worker)->Context())->ObjectDefineProperty(obj, uPtr(p)->Name().ToString(::TYPES[33/*Uno.UX.Selector*/]), uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)LazyObservableProperty__Get_fn, this), NULL, false, false);
}

// private object Get(object[] args) [instance] :2321
uObject* LazyObservableProperty::Get(uArray* args)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Get(object[])");

    if (_observable == NULL)
    {
        _observable = ::g::Fuse::Reactive::Observable::Create(_worker);
        uPtr(uPtr(_observable)->Object())->Item(::STRINGS[34/*"_dispose_co...*/], _obj);
        Subscribe();
    }

    return uPtr(_worker)->Unwrap(_observable);
}

// private void PushValue() [instance] :2401
void LazyObservableProperty::PushValue()
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "PushValue()");
    uPtr(_subscription)->SetExclusive(uPtr(_worker)->Unwrap(uPtr(_property)->GetAsObject()));
}

// public void Reset() [instance] :2341
void LazyObservableProperty::Reset()
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Reset()");

    if (_subscription != NULL)
    {
        uPtr(_subscription)->Dispose();
        _subscription = NULL;
        uPtr(_property)->RemoveListener((uObject*)this);
    }

    if (_observable != NULL)
    {
        uPtr(_observable)->Unsubscribe();
        uPtr(uPtr(_observable)->Object())->Item(::STRINGS[34/*"_dispose_co...*/], NULL);
        _observable = NULL;
    }
}

// private void Set(object value) [instance] :2387
void LazyObservableProperty::Set(uObject* value)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Set(object)");
    uPtr(_property)->SetAsObject(::g::Fuse::Scripting::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value), (uObject*)this);
}

// private void Subscribe() [instance] :2334
void LazyObservableProperty::Subscribe()
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Subscribe()");
    _subscription = uPtr(_observable)->Subscribe((uObject*)this);
    uPtr(_subscription)->SetExclusiveIfNoValue(uPtr(_worker)->Unwrap(uPtr(_property)->GetAsObject()));
    uPtr(_property)->AddListener((uObject*)this);
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :2311
LazyObservableProperty* LazyObservableProperty::New1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    LazyObservableProperty* obj1 = (LazyObservableProperty*)uNew(LazyObservableProperty_typeof());
    obj1->ctor_(w, obj, p);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public abstract class ListMirror :2704
// {
static void ListMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(ListMirror_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Item", NULL, NULL, offsetof(ListMirror_type, fp_get_Item), false, uObject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Length", NULL, NULL, offsetof(ListMirror_type, fp_get_Length), false, ::g::Uno::Int_typeof(), 0));
}

ListMirror_type* ListMirror_typeof()
{
    static uSStrong<ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ListMirror);
    options.TypeSize = sizeof(ListMirror_type);
    type = (ListMirror_type*)uClassType::New("Fuse.Reactive.ListMirror", options);
    type->SetBase(::g::Fuse::Reactive::ValueMirror_typeof());
    type->fp_build_ = ListMirror_build;
    return type;
}

// protected ListMirror(object raw) :2709
void ListMirror__ctor_1_fn(ListMirror* __this, uObject* raw)
{
    __this->ctor_1(raw);
}

// protected ListMirror(object raw) [instance] :2709
void ListMirror::ctor_1(uObject* raw)
{
    uStackFrame __("Fuse.Reactive.ListMirror", ".ctor(object)");
    ctor_(raw);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class Match :1444
// {
static void Match_build(uType* type)
{
    ::STRINGS[35] = uString::Const("Could not locate Match in parent, content not added");
    ::STRINGS[22] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.32.14\\$.uno");
    ::STRINGS[36] = uString::Const("AddElements");
    ::STRINGS[16] = uString::Const("Not handled: OnAdd");
    ::STRINGS[37] = uString::Const("Not handled: InsertAt");
    ::STRINGS[38] = uString::Const("<Match> can not be used on lists (received OnNewAll)");
    ::STRINGS[20] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[39] = uString::Const("<Match> can not be used on lists (received OnRemoveAt)");
    ::STRINGS[40] = uString::Const("Case already has a Match");
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[47] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[48] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[44] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[46] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[49] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[41] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[58] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[59] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[60] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[61] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[62] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[23] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Uno::Double_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Match_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface3),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Match_type, interface4));
    type->SetFields(13,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), offsetof(::g::Fuse::Reactive::Match, _cases), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::Match, _elements), 0,
        ::g::Fuse::Reactive::Case_typeof(), offsetof(::g::Fuse::Reactive::Match, _oldCase), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _realValue), 0,
        ::g::Fuse::Reactive::Observable__Subscription_typeof(), offsetof(::g::Fuse::Reactive::Match, _subscription), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Match__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Match__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Cases", NULL, (void*)Match__get_Cases_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), 0),
        new uFunction("get_Integer", NULL, (void*)Match__get_Integer_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Integer", NULL, (void*)Match__set_Integer_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Match__New2_fn, 0, true, Match_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Match__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Match__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Match__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Match__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Match__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Match__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

Match_type* Match_typeof()
{
    static uSStrong<Match_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Match);
    options.TypeSize = sizeof(Match_type);
    type = (Match_type*)uClassType::New("Fuse.Reactive.Match", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = Match_build;
    type->fp_ctor_ = (void*)Match__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Match__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Match__OnUnrooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnSet_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnAdd_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnNewAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnInsertAt_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))Match__FuseReactiveIObserverOnFailed_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))Match__FuseReactiveIObserverOnNewAll_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))Match__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Match() :1444
void Match__ctor_3_fn(Match* __this)
{
    __this->ctor_3();
}

// private void AddElements(Fuse.Reactive.Case c) :1628
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->AddElements(c);
}

// public bool get_Bool() :1570
void Match__get_Bool_fn(Match* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1571
void Match__set_Bool_fn(Match* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() :1451
void Match__get_Cases_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Cases();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1476
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1491
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1486
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[37/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror values) :1496
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, ::g::Fuse::Reactive::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror)");

    if (uPtr(values)->Length() == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[38/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :1481
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[20/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :1508
void Match__FuseReactiveIObserverOnRemoveAt_fn(Match* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[39/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1470
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->_realValue = newValue;
    __this->Invalidate();
}

// public int get_Integer() :1564
void Match__get_Integer_fn(Match* __this, int* __retval)
{
    *__retval = __this->Integer();
}

// public void set_Integer(int value) :1565
void Match__set_Integer_fn(Match* __this, int* value)
{
    __this->Integer(*value);
}

// internal void Invalidate() :1590
void Match__Invalidate_fn(Match* __this)
{
    __this->Invalidate();
}

// public generated Match New() :1444
void Match__New2_fn(Match** __retval)
{
    *__retval = Match::New2();
}

// public double get_Number() :1558
void Match__get_Number_fn(Match* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1559
void Match__set_Number_fn(Match* __this, double* value)
{
    __this->Number(*value);
}

// private void OnCaseAdded(Fuse.Reactive.Case c) :1457
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseAdded(c);
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) :1464
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseRemoved(c);
}

// protected override sealed void OnRooted() :1574
void Match__OnRooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Update();
}

// protected override sealed void OnUnrooted() :1580
void Match__OnUnrooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnUnrooted()");
    __this->RemoveElements();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveElements() :1619
void Match__RemoveElements_fn(Match* __this)
{
    __this->RemoveElements();
}

// private Fuse.Reactive.Case SelectCase() :1608
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval)
{
    *__retval = __this->SelectCase();
}

// public string get_String() :1552
void Match__get_String_fn(Match* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1553
void Match__set_String_fn(Match* __this, uString* value)
{
    __this->String(value);
}

// private void Update() :1597
void Match__Update_fn(Match* __this)
{
    __this->Update();
}

// public object get_Value() :1521
void Match__get_Value_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1522
void Match__set_Value_fn(Match* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Match() [instance] :1444
void Match::ctor_3()
{
    uStackFrame __("Fuse.Reactive.Match", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Node>*/]));
    ctor_2();
}

// private void AddElements(Fuse.Reactive.Case c) [instance] :1628
void Match::AddElements(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "AddElements(Fuse.Reactive.Case)");
    int ret6;
    ::g::Uno::UX::Template* ret7;

    if (c != NULL)
    {
        int childIndex = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[47/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), this, &ret6), ret6) + 1;

        if (childIndex == -1)
        {
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[35/*"Could not l...*/], this, ::STRINGS[22/*"C:\\Program...*/], 1635, ::STRINGS[36/*"AddElements"*/]);
            return;
        }

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(c)->Factories()), ::TYPES[44/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[45/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[46/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret7), ret7);
            ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[7/*Fuse.Node*/]);

            if (elm != NULL)
            {
                uPtr(elm)->DataContext(DataContext());
                ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[49/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(childIndex + uPtr(_elements)->Count()), elm);
                ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
            }
        }
    }

    _oldCase = c;
}

// public bool get_Bool() [instance] :1570
bool Match::Bool()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Bool()");
    return uIs((uObject*)Value(), ::TYPES[13/*bool*/]) ? uUnbox<bool>(::TYPES[13/*bool*/], Value()) : false;
}

// public void set_Bool(bool value) [instance] :1571
void Match::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Bool(bool)");
    Value(uBox(::TYPES[13/*bool*/], value));
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() [instance] :1451
uObject* Match::Cases()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Cases()");
    uObject* ind4 = _cases;
    return (ind4 != NULL) ? ind4 : (uObject*)(_cases = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[61/*Uno.Collections.ObservableList<Fuse.Reactive.Case>*/], uDelegate::New(::TYPES[62/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, this), uDelegate::New(::TYPES[62/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, this))));
}

// public int get_Integer() [instance] :1564
int Match::Integer()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Integer()");
    return uIs((uObject*)Value(), ::TYPES[23/*int*/]) ? uUnbox<int>(::TYPES[23/*int*/], Value()) : 0;
}

// public void set_Integer(int value) [instance] :1565
void Match::Integer(int value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Integer(int)");
    Value(uBox<int>(::TYPES[23/*int*/], value));
}

// internal void Invalidate() [instance] :1590
void Match::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Match", "Invalidate()");

    if (!IsRootingCompleted())
        return;

    Update();
}

// public double get_Number() [instance] :1558
double Match::Number()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Number()");
    return uIs((uObject*)Value(), ::TYPES[17/*double*/]) ? uUnbox<double>(::TYPES[17/*double*/], Value()) : 0.0;
}

// public void set_Number(double value) [instance] :1559
void Match::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Number(double)");
    Value(uBox(::TYPES[17/*double*/], value));
}

// private void OnCaseAdded(Fuse.Reactive.Case c) [instance] :1457
void Match::OnCaseAdded(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseAdded(Fuse.Reactive.Case)");

    if (uPtr(c)->_match != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[40/*"Case alread...*/]));

    uPtr(c)->_match = this;
    Invalidate();
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) [instance] :1464
void Match::OnCaseRemoved(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseRemoved(Fuse.Reactive.Case)");
    uPtr(c)->_match = NULL;
    Invalidate();
}

// private void RemoveElements() [instance] :1619
void Match::RemoveElements()
{
    uStackFrame __("Fuse.Reactive.Match", "RemoveElements()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret8;
    _oldCase = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8); enum2.MoveNext(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* e = enum2.Current(::TYPES[41/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(Parent())->BeginRemoveChild(e, NULL);
    }

    uPtr(_elements)->Clear();
}

// private Fuse.Reactive.Case SelectCase() [instance] :1608
::g::Fuse::Reactive::Case* Match::SelectCase()
{
    uStackFrame __("Fuse.Reactive.Match", "SelectCase()");
    ::g::Fuse::Reactive::Case* ret9;
    ::g::Fuse::Reactive::Case* def = NULL;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_cases), ::TYPES[58/*Uno.Collections.IEnumerable<Fuse.Reactive.Case>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[45/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Reactive::Case* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[59/*Uno.Collections.IEnumerator<Fuse.Reactive.Case>*/]), &ret9), ret9);

        if ((uPtr(c)->Value() != NULL) && ::g::Uno::Object::Equals(uPtr(uPtr(c)->Value()), _realValue))
            return c;

        if (uPtr(c)->IsDefault())
            def = c;
    }

    return def;
}

// public string get_String() [instance] :1552
uString* Match::String()
{
    uStackFrame __("Fuse.Reactive.Match", "get_String()");
    return uAs<uString*>(Value(), ::TYPES[18/*string*/]);
}

// public void set_String(string value) [instance] :1553
void Match::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_String(string)");
    Value(value);
}

// private void Update() [instance] :1597
void Match::Update()
{
    uStackFrame __("Fuse.Reactive.Match", "Update()");
    ::g::Fuse::Reactive::Case* newCase = SelectCase();

    if (newCase != _oldCase)
    {
        RemoveElements();

        if (newCase != NULL)
            AddElements(newCase);
    }
}

// public object get_Value() [instance] :1521
uObject* Match::Value()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1522
void Match::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Value(object)");

    if (_value != value)
    {
        _value = value;

        if (_subscription != NULL)
        {
            uPtr(_subscription)->Dispose();
            _subscription = NULL;
        }

        if (uIs((uObject*)_value, ::TYPES[30/*Fuse.Reactive.Observable*/]))
        {
            ::g::Fuse::Reactive::Observable* obs = uCast< ::g::Fuse::Reactive::Observable*>(_value, ::TYPES[30/*Fuse.Reactive.Observable*/]);
            _subscription = uPtr(obs)->Subscribe((uObject*)this);
        }
        else
            _realValue = _value;

        Invalidate();
    }
}

// public generated Match New() [static] :1444
Match* Match::New2()
{
    Match* obj5 = (Match*)uNew(Match_typeof());
    obj5->ctor_3();
    return obj5;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class ThreadWorker.MethodClosure :2882
// {
// static MethodClosure() :2882
static void ThreadWorker__MethodClosure__cctor__fn(uType* __type)
{
    ThreadWorker__MethodClosure::_emptyArgs_ = uArray::New(::TYPES[2/*object[]*/], 0);
}

static void ThreadWorker__MethodClosure_build(uType* type)
{
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[63] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__MethodClosure, _m), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__MethodClosure, _worker), 0,
        uObject_typeof()->Array(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker__MethodClosure::_emptyArgs_, uFieldFlagsStatic);
}

uType* ThreadWorker__MethodClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ThreadWorker__MethodClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.MethodClosure", options);
    type->fp_build_ = ThreadWorker__MethodClosure_build;
    type->fp_cctor_ = ThreadWorker__MethodClosure__cctor__fn;
    return type;
}

// public MethodClosure(Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :2886
void ThreadWorker__MethodClosure__ctor__fn(ThreadWorker__MethodClosure* __this, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(m, worker);
}

// public object Callback(object[] args) :2894
void ThreadWorker__MethodClosure__Callback_fn(ThreadWorker__MethodClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) :2902
void ThreadWorker__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval)
{
    *__retval = ThreadWorker__MethodClosure::CopyArgs(args);
}

// public MethodClosure New(Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :2886
void ThreadWorker__MethodClosure__New1_fn(::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__MethodClosure** __retval)
{
    *__retval = ThreadWorker__MethodClosure::New1(m, worker);
}

uSStrong<uArray*> ThreadWorker__MethodClosure::_emptyArgs_;

// public MethodClosure(Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [instance] :2886
void ThreadWorker__MethodClosure::ctor_(::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", ".ctor(Fuse.Scripting.ScriptMethod,Fuse.Reactive.ThreadWorker)");
    _m = m;
    _worker = worker;
}

// public object Callback(object[] args) [instance] :2894
uObject* ThreadWorker__MethodClosure::Callback(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", "Callback(object[])");
    uObject* self = uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[63/*Fuse.Scripting.External*/]))->Object;
    uArray* realArgs = ThreadWorker__MethodClosure::CopyArgs(uCast< ::g::Fuse::Scripting::Array*>(args->Strong<uObject*>(1), ::TYPES[27/*Fuse.Scripting.Array*/]));
    uObject* res = uPtr(_worker)->Unwrap(uPtr(_m)->Call(self, realArgs));
    return res;
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) [static] :2902
uArray* ThreadWorker__MethodClosure::CopyArgs(::g::Fuse::Scripting::Array* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", "CopyArgs(Fuse.Scripting.Array)");
    ThreadWorker__MethodClosure_typeof()->Init();
    uArray* res = uArray::New(::TYPES[2/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < res->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = ::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(args)->Item(i));

    return res;
}

// public MethodClosure New(Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [static] :2886
ThreadWorker__MethodClosure* ThreadWorker__MethodClosure::New1(::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__MethodClosure* obj1 = (ThreadWorker__MethodClosure*)uNew(ThreadWorker__MethodClosure_typeof());
    obj1->ctor_(m, worker);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class Observable.NewAll :2195
// {
static void Observable__NewAll_build(uType* type)
{
    ::TYPES[64] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof());
    ::TYPES[65] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof());
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[51] = ::g::Fuse::Reactive::ListMirror_typeof();
    ::TYPES[1] = uObject_typeof();
    type->SetFields(2,
        ::g::Fuse::Reactive::ArrayMirror_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAll, _newValues), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAll_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__NewAll);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.NewAll", options);
    type->SetBase(::g::Fuse::Reactive::Observable__Operation_typeof());
    type->fp_build_ = Observable__NewAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAll__OnPerform_fn;
    type->fp_SendMessage = (void(*)(::g::Fuse::Reactive::Observable__Operation*, ::g::Fuse::Reactive::Observable__Subscription*))Observable__NewAll__SendMessage_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAll__Unsubscribe_fn;
    return type;
}

// public NewAll(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues) :2199
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues)
{
    __this->ctor_1(obs, newValues);
}

// public NewAll New(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues) :2199
void Observable__NewAll__New1_fn(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, Observable__NewAll** __retval)
{
    *__retval = Observable__NewAll::New1(obs, newValues);
}

// protected override sealed void OnPerform() :2209
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAll", "OnPerform()");
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    uPtr(uPtr(__this->Observable())->_values)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[65/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], uPtr(__this->_newValues)->ItemsReadonly())));
}

// protected override sealed void SendMessage(Fuse.Reactive.Observable.Subscription sub) :2217
void Observable__NewAll__SendMessage_fn(Observable__NewAll* __this, ::g::Fuse::Reactive::Observable__Subscription* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAll", "SendMessage(Fuse.Reactive.Observable.Subscription)");
    ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(uPtr(sub)->Observer()), ::TYPES[0/*Fuse.Reactive.IObserver*/]), __this->_newValues);
}

// protected override sealed void Unsubscribe() :2204
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAll", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_newValues);
}

// public NewAll(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues) [instance] :2199
void Observable__NewAll::ctor_1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAll", ".ctor(Fuse.Reactive.Observable,Fuse.Reactive.ArrayMirror)");
    ctor_(obs);
    _newValues = newValues;
}

// public NewAll New(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues) [static] :2199
Observable__NewAll* Observable__NewAll::New1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues)
{
    Observable__NewAll* obj1 = (Observable__NewAll*)uNew(Observable__NewAll_typeof());
    obj1->ctor_1(obs, newValues);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class Observable.NewAt :2166
// {
static void Observable__NewAt_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAt, _index), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAt, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.NewAt", options);
    type->SetBase(::g::Fuse::Reactive::Observable__Operation_typeof());
    type->fp_build_ = Observable__NewAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAt__OnPerform_fn;
    type->fp_SendMessage = (void(*)(::g::Fuse::Reactive::Observable__Operation*, ::g::Fuse::Reactive::Observable__Subscription*))Observable__NewAt__SendMessage_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAt__Unsubscribe_fn;
    return type;
}

// public NewAt(Fuse.Reactive.Observable obs, int index, object newValue) :2171
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue)
{
    __this->ctor_1(obs, *index, newValue);
}

// public NewAt New(Fuse.Reactive.Observable obs, int index, object newValue) :2171
void Observable__NewAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval)
{
    *__retval = Observable__NewAt::New1(obs, *index, newValue);
}

// protected override sealed void OnPerform() :2183
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAt", "OnPerform()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(__this->Observable())->SetValue(__this->_index, __this->_value);
}

// protected override sealed void SendMessage(Fuse.Reactive.Observable.Subscription sub) :2189
void Observable__NewAt__SendMessage_fn(Observable__NewAt* __this, ::g::Fuse::Reactive::Observable__Subscription* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAt", "SendMessage(Fuse.Reactive.Observable.Subscription)");
    ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(uPtr(sub)->Observer()), ::TYPES[0/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :2177
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAt", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public NewAt(Fuse.Reactive.Observable obs, int index, object newValue) [instance] :2171
void Observable__NewAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAt", ".ctor(Fuse.Reactive.Observable,int,object)");
    ctor_(obs);
    _index = index;
    _value = newValue;
}

// public NewAt New(Fuse.Reactive.Observable obs, int index, object newValue) [static] :2171
Observable__NewAt* Observable__NewAt::New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue)
{
    Observable__NewAt* obj1 = (Observable__NewAt*)uNew(Observable__NewAt_typeof());
    obj1->ctor_1(obs, index, newValue);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class ObjectMirror :1148
// {
static void ObjectMirror_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[1] = uObject_typeof();
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[3] = ::g::Fuse::Reactive::ValueMirror_typeof();
    ::TYPES[12] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObject_typeof(), offsetof(ObjectMirror_type, interface0));
    type->SetFields(1,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::ObjectMirror, _props), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("ContainsKey", NULL, (void*)ObjectMirror__ContainsKey_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Item", NULL, (void*)ObjectMirror__get_Item_fn, 0, false, uObject_typeof(), 1, ::g::Uno::String_typeof()));
}

ObjectMirror_type* ObjectMirror_typeof()
{
    static uSStrong<ObjectMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ObjectMirror);
    options.TypeSize = sizeof(ObjectMirror_type);
    type = (ObjectMirror_type*)uClassType::New("Fuse.Reactive.ObjectMirror", options);
    type->SetBase(::g::Fuse::Reactive::ValueMirror_typeof());
    type->fp_build_ = ObjectMirror_build;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))ObjectMirror__Unsubscribe_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ObjectMirror__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ObjectMirror__get_Item_fn;
    return type;
}

// internal ObjectMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :1152
void ObjectMirror__ctor_1_fn(ObjectMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_1(worker, obj);
}

// public bool ContainsKey(string key) :1171
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public object get_Item(string key) :1178
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// internal ObjectMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :1152
void ObjectMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval)
{
    *__retval = ObjectMirror::New1(worker, obj);
}

// public override sealed void Unsubscribe() :1162
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this)
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", "Unsubscribe()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret4;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_props), &ret4), ret4); enum1.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > p = enum1.Current(::TYPES[11/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        ::g::Fuse::Reactive::ValueMirror* d = uAs< ::g::Fuse::Reactive::ValueMirror*>(p.Value(::TYPES[12/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[3/*Fuse.Reactive.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ObjectMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [instance] :1152
void ObjectMirror::ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object)");
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_(obj);
    uArray* k = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(k)->Length(); i++)
    {
        uString* s = uPtr(k)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_props), s, uPtr(worker)->Reflect(uPtr(obj)->Item(s)));
    }
}

// public bool ContainsKey(string key) [instance] :1171
bool ObjectMirror::ContainsKey(uString* key)
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", "ContainsKey(string)");
    bool ret3;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret3), ret3);
}

// public object get_Item(string key) [instance] :1178
uObject* ObjectMirror::Item(uString* key)
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", "get_Item(string)");
    uObject* ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_props), key, &ret5), ret5);
}

// internal ObjectMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [static] :1152
ObjectMirror* ObjectMirror::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    ObjectMirror* obj2 = (ObjectMirror*)uNew(ObjectMirror_typeof());
    obj2->ctor_1(worker, obj);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// internal sealed class Observable :1956
// {
static void Observable_build(uType* type)
{
    ::STRINGS[41] = uString::Const("addSubscriber");
    ::STRINGS[42] = uString::Const("set");
    ::STRINGS[43] = uString::Const("newAt");
    ::STRINGS[44] = uString::Const("newAll");
    ::STRINGS[45] = uString::Const("add");
    ::STRINGS[46] = uString::Const("removeAt");
    ::STRINGS[47] = uString::Const("insertAt");
    ::STRINGS[48] = uString::Const("Unhandled observable operation: ");
    ::STRINGS[49] = uString::Const("removeSubscriber");
    ::TYPES[66] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[67] = ::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof());
    ::TYPES[68] = ::g::Uno::Collections::List_typeof()->MakeType(Observable__Operation_typeof());
    ::TYPES[1] = uObject_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    ::TYPES[69] = Observable__Operation_typeof();
    ::TYPES[70] = ::g::Fuse::Reactive::ArrayMirror_typeof();
    ::TYPES[39] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Reactive::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(::g::Fuse::Reactive::ListMirror_type, interface0));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable, _isUnsubscribed), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::Observable, _observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::Observable, _observeChange), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof()), offsetof(::g::Fuse::Reactive::Observable, _observers), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(Observable__Operation_typeof()), offsetof(::g::Fuse::Reactive::Observable, _operationLog), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Reactive::Observable, _values), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::Observable, _worker), 0);
}

::g::Fuse::Reactive::ListMirror_type* Observable_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ListMirror_type);
    type = (::g::Fuse::Reactive::ListMirror_type*)uClassType::New("Fuse.Reactive.Observable", options);
    type->SetBase(::g::Fuse::Reactive::ListMirror_typeof());
    type->fp_build_ = Observable_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Reactive::ListMirror*, int*, uObject**))Observable__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Reactive::ListMirror*, int*))Observable__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))Observable__Unsubscribe_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Observable__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Observable__get_Item_fn;
    return type;
}

// internal Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :2025
void Observable__ctor_2_fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_2(worker, obj);
}

// internal static Fuse.Reactive.Observable Create(Fuse.Reactive.ThreadWorker worker) :2033
void Observable__Create_fn(::g::Fuse::Reactive::ThreadWorker* worker, Observable** __retval)
{
    *__retval = Observable::Create(worker);
}

// public bool get_IsUnsubscribed() :2059
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval)
{
    *__retval = __this->IsUnsubscribed();
}

// public override sealed object get_Item(int index) :1964
void Observable__get_Item_fn(Observable* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "get_Item(int)");
    uObject* ret3;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int>(index_), &ret3), ret3), void();
}

// public override sealed int get_Length() :1960
void Observable__get_Length_fn(Observable* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "get_Length()");
    return *__retval = uPtr(__this->_values)->Count(), void();
}

// internal Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :2025
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, Observable** __retval)
{
    *__retval = Observable::New1(worker, obj);
}

// internal Fuse.Scripting.Object get_Object() :2021
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// private object ObserveChange(object[] args) :2038
void Observable__ObserveChange_fn(Observable* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// private void RemoveSubscriber() :2082
void Observable__RemoveSubscriber_fn(Observable* __this)
{
    __this->RemoveSubscriber();
}

// public void SetValue(int index, object value) :1968
void Observable__SetValue_fn(Observable* __this, int* index, uObject* value)
{
    __this->SetValue(*index, value);
}

// public Fuse.Reactive.Observable.Subscription Subscribe(Fuse.Reactive.IObserver observer) :2013
void Observable__Subscribe_fn(Observable* __this, uObject* observer, Observable__Subscription** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// public override sealed void Unsubscribe() :2062
void Observable__Unsubscribe_fn(Observable* __this)
{
    uStackFrame __("Fuse.Reactive.Observable", "Unsubscribe()");
    __this->UnsubscribeValues();

    if (!__this->_isUnsubscribed)
    {
        __this->_isUnsubscribed = true;
        uPtr(__this->_worker)->Invoke(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)Observable__RemoveSubscriber_fn, __this));
    }
}

// private void UnsubscribeValues() :2073
void Observable__UnsubscribeValues_fn(Observable* __this)
{
    __this->UnsubscribeValues();
}

// internal Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [instance] :2025
void Observable::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.Observable", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object)");
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[66/*Uno.Collections.List<object>*/]));
    _observers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[67/*Uno.Collections.List<Fuse.Reactive.Observable.Subscription>*/]));
    _operationLog = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[68/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/]));
    ctor_1(obj);
    _worker = worker;
    _observable = obj;
    _observeChange = uPtr(uPtr(worker)->Context())->CallbackToFunction(uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)Observable__ObserveChange_fn, this));
    uPtr(obj)->CallMethod(::STRINGS[41/*"addSubscriber"*/], uArray::Init<uObject*>(::TYPES[2/*object[]*/], 1, (::g::Fuse::Scripting::Function*)_observeChange));
}

// public bool get_IsUnsubscribed() [instance] :2059
bool Observable::IsUnsubscribed()
{
    uStackFrame __("Fuse.Reactive.Observable", "get_IsUnsubscribed()");
    return _isUnsubscribed;
}

// internal Fuse.Scripting.Object get_Object() [instance] :2021
::g::Fuse::Scripting::Object* Observable::Object()
{
    uStackFrame __("Fuse.Reactive.Observable", "get_Object()");
    return _observable;
}

// private object ObserveChange(object[] args) [instance] :2038
uObject* Observable::ObserveChange(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Observable", "ObserveChange(object[])");
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[18/*string*/]);

    if (::g::Uno::String::op_Equality(op, ::STRINGS[42/*"set"*/]))
    {
        int origin = -1;

        if (uPtr(args)->Length() > 3)
            origin = ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(3));

        uPtr(_worker)->Enqueue(Observable__Set::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(2)), origin));
    }
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[43/*"newAt"*/]))
        uPtr(_worker)->Enqueue(Observable__NewAt::New1(this, ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[44/*"newAll"*/]))
        uPtr(_worker)->Enqueue(Observable__NewAll::New1(this, uCast< ::g::Fuse::Reactive::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(2)), ::TYPES[70/*Fuse.Reactive.ArrayMirror*/])));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[45/*"add"*/]))
        uPtr(_worker)->Enqueue(Observable__Add::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(2))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[46/*"removeAt"*/]))
        uPtr(_worker)->Enqueue(Observable__RemoveAt::New1(this, ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[47/*"insertAt"*/]))
        uPtr(_worker)->Enqueue(Observable__InsertAt::New1(this, ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3))));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[48/*"Unhandled o...*/], op)));

    return NULL;
}

// private void RemoveSubscriber() [instance] :2082
void Observable::RemoveSubscriber()
{
    uStackFrame __("Fuse.Reactive.Observable", "RemoveSubscriber()");
    uPtr(_observable)->CallMethod(::STRINGS[49/*"removeSubsc...*/], uArray::Init<uObject*>(::TYPES[2/*object[]*/], 1, (::g::Fuse::Scripting::Function*)_observeChange));
    _observeChange = NULL;
    _observable = NULL;
}

// public void SetValue(int index, object value) [instance] :1968
void Observable::SetValue(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Observable", "SetValue(int,object)");
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_values), uCRef<int>(index), value);
}

// public Fuse.Reactive.Observable.Subscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :2013
Observable__Subscription* Observable::Subscribe(uObject* observer)
{
    uStackFrame __("Fuse.Reactive.Observable", "Subscribe(Fuse.Reactive.IObserver)");
    return Observable__Subscription::New1(this, observer);
}

// private void UnsubscribeValues() [instance] :2073
void Observable::UnsubscribeValues()
{
    uStackFrame __("Fuse.Reactive.Observable", "UnsubscribeValues()");
    uObject* ret2;

    for (int i = 0; i < uPtr(_values)->Count(); i++)
    {
        ::g::Fuse::Reactive::ValueMirror* vm = uAs< ::g::Fuse::Reactive::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(i), &ret2), ret2), ::TYPES[3/*Fuse.Reactive.ValueMirror*/]);

        if (vm != NULL)
            uPtr(vm)->Unsubscribe();
    }
}

// internal static Fuse.Reactive.Observable Create(Fuse.Reactive.ThreadWorker worker) [static] :2033
Observable* Observable::Create(::g::Fuse::Reactive::ThreadWorker* worker)
{
    uStackFrame __("Fuse.Reactive.Observable", "Create(Fuse.Reactive.ThreadWorker)");
    return Observable::New1(worker, uCast< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->FuseJS())->Observable)->Call(uArray::New(::TYPES[2/*object[]*/], 0)), ::TYPES[26/*Fuse.Scripting.Object*/]));
}

// internal Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [static] :2025
Observable* Observable::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_2(worker, obj);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public abstract class Observable.Operation :2091
// {
static void Observable__Operation_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable__Operation, _isPerformed), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::Observable__Operation, _observable), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Perform", NULL, (void*)Observable__Operation__Perform_fn, 0, false, uVoid_typeof(), 0));
}

Observable__Operation_type* Observable__Operation_typeof()
{
    static uSStrong<Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Operation);
    options.TypeSize = sizeof(Observable__Operation_type);
    type = (Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Operation", options);
    type->fp_build_ = Observable__Operation_build;
    type->fp_Unsubscribe = Observable__Operation__Unsubscribe_fn;
    return type;
}

// protected Operation(Fuse.Reactive.Observable observable) :2097
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable* observable)
{
    __this->ctor_(observable);
}

// protected Fuse.Reactive.Observable get_Observable() :2103
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable** __retval)
{
    *__retval = __this->Observable();
}

// public void Perform() :2105
void Observable__Operation__Perform_fn(Observable__Operation* __this)
{
    __this->Perform();
}

// protected virtual void Unsubscribe() :2129
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this)
{
}

// protected Operation(Fuse.Reactive.Observable observable) [instance] :2097
void Observable__Operation::ctor_(::g::Fuse::Reactive::Observable* observable)
{
    uStackFrame __("Fuse.Reactive.Observable.Operation", ".ctor(Fuse.Reactive.Observable)");
    _observable = observable;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(_observable)->_operationLog), this);
}

// protected Fuse.Reactive.Observable get_Observable() [instance] :2103
::g::Fuse::Reactive::Observable* Observable__Operation::Observable()
{
    uStackFrame __("Fuse.Reactive.Observable.Operation", "get_Observable()");
    return _observable;
}

// public void Perform() [instance] :2105
void Observable__Operation::Perform()
{
    uStackFrame __("Fuse.Reactive.Observable.Operation", "Perform()");
    ::g::Fuse::Reactive::Observable__Subscription* ret1;

    if (uPtr(_observable)->IsUnsubscribed())
    {
        Unsubscribe();
        return;
    }

    OnPerform();
    int c = uPtr(uPtr(Observable())->_observers)->Count();

    if (c == 1)
        SendMessage((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(Observable())->_observers), uCRef<int>(0), &ret1), ret1));
    else
    {
        uArray* listeners = (uArray*)uPtr(uPtr(Observable())->_observers)->ToArray();

        for (int i = 0; i < uPtr(listeners)->Length(); i++)
            SendMessage(uPtr(listeners)->Strong< ::g::Fuse::Reactive::Observable__Subscription*>(i));
    }

    _isPerformed = true;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\Subscription\$.uno
// --------------------------------------------------------------------

// internal sealed class PathObserver :72
// {
static void PathObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PathObserver_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, _bindAttempt), 0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Binding), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Node), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Path), 0);
}

PathObserver_type* PathObserver_typeof()
{
    static uSStrong<PathObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PathObserver);
    options.TypeSize = sizeof(PathObserver_type);
    type = (PathObserver_type*)uClassType::New("Fuse.Reactive.PathObserver", options);
    type->fp_build_ = PathObserver_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PathObserver__Dispose_fn;
    return type;
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :80
void PathObserver__ctor__fn(PathObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    __this->ctor_(b, n, path);
}

// public void Dispose() :99
void PathObserver__Dispose_fn(PathObserver* __this)
{
    __this->Dispose();
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :80
void PathObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path, PathObserver** __retval)
{
    *__retval = PathObserver::New1(b, n, path);
}

// internal void RestartBinding() :88
void PathObserver__RestartBinding_fn(PathObserver* __this)
{
    __this->RestartBinding();
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [instance] :80
void PathObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    uStackFrame __("Fuse.Reactive.PathObserver", ".ctor(Fuse.Reactive.ContextBinding,Fuse.Node,string)");
    Node = n;
    Binding = b;
    Path = path;
    RestartBinding();
}

// public void Dispose() [instance] :99
void PathObserver::Dispose()
{
    uStackFrame __("Fuse.Reactive.PathObserver", "Dispose()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }
}

// internal void RestartBinding() [instance] :88
void PathObserver::RestartBinding()
{
    uStackFrame __("Fuse.Reactive.PathObserver", "RestartBinding()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }

    _bindAttempt = ::g::Fuse::Reactive::BindAttempt::New1(this);
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [static] :80
PathObserver* PathObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    PathObserver* obj1 = (PathObserver*)uNew(PathObserver_typeof());
    obj1->ctor_(b, n, path);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class Observable.RemoveAt :2243
// {
static void Observable__RemoveAt_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__RemoveAt, _index), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__RemoveAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.RemoveAt", options);
    type->SetBase(::g::Fuse::Reactive::Observable__Operation_typeof());
    type->fp_build_ = Observable__RemoveAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__RemoveAt__OnPerform_fn;
    type->fp_SendMessage = (void(*)(::g::Fuse::Reactive::Observable__Operation*, ::g::Fuse::Reactive::Observable__Subscription*))Observable__RemoveAt__SendMessage_fn;
    return type;
}

// public RemoveAt(Fuse.Reactive.Observable obs, int index) :2247
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index)
{
    __this->ctor_1(obs, *index);
}

// public RemoveAt New(Fuse.Reactive.Observable obs, int index) :2247
void Observable__RemoveAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, Observable__RemoveAt** __retval)
{
    *__retval = Observable__RemoveAt::New1(obs, *index);
}

// protected override sealed void OnPerform() :2252
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.RemoveAt", "OnPerform()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);
}

// protected override sealed void SendMessage(Fuse.Reactive.Observable.Subscription sub) :2258
void Observable__RemoveAt__SendMessage_fn(Observable__RemoveAt* __this, ::g::Fuse::Reactive::Observable__Subscription* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.RemoveAt", "SendMessage(Fuse.Reactive.Observable.Subscription)");
    ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr(sub)->Observer()), ::TYPES[0/*Fuse.Reactive.IObserver*/]), __this->_index);
}

// public RemoveAt(Fuse.Reactive.Observable obs, int index) [instance] :2247
void Observable__RemoveAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index)
{
    uStackFrame __("Fuse.Reactive.Observable.RemoveAt", ".ctor(Fuse.Reactive.Observable,int)");
    ctor_(obs);
    _index = index;
}

// public RemoveAt New(Fuse.Reactive.Observable obs, int index) [static] :2247
Observable__RemoveAt* Observable__RemoveAt::New1(::g::Fuse::Reactive::Observable* obs, int index)
{
    Observable__RemoveAt* obj1 = (Observable__RemoveAt*)uNew(Observable__RemoveAt_typeof());
    obj1->ctor_1(obs, index);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// internal sealed class RootableScriptModule :1830
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[50] = uString::Const("_moduleFunc");
    ::STRINGS[51] = uString::Const("_dispose");
    ::STRINGS[52] = uString::Const(", ");
    ::TYPES[1] = uObject_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[39] = ::g::Uno::Action_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[71] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::LazyObservableProperty_typeof());
    ::TYPES[72] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof());
    ::TYPES[73] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof());
    ::TYPES[21] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    ::TYPES[22] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof());
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(5,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _names), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::LazyObservableProperty_typeof()), offsetof(::g::Fuse::Reactive::RootableScriptModule, _properties), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _self), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _worker), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Reactive.RootableScriptModule", options);
    type->SetBase(::g::Fuse::Scripting::ScriptModule_typeof());
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1836
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// protected override sealed void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :1903
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "CallModuleFunc(Fuse.Scripting.Function,object[])");
    uPtr(__this->_self)->Item(::STRINGS[50/*"_moduleFunc"*/], moduleFunc);
    uPtr(__this->_self)->CallMethod(::STRINGS[50/*"_moduleFunc"*/], args);
}

// private void DispatchUnroot() :1909
void RootableScriptModule__DispatchUnroot_fn(RootableScriptModule* __this)
{
    __this->DispatchUnroot();
}

// private void EnsureRooted(Fuse.Scripting.Context context) :1851
void RootableScriptModule__EnsureRooted_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->EnsureRooted(context);
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :1842
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "Evaluate(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult)");
    __this->EnsureRooted(c);
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// private Uno.UX.NameTable FindRootTable() :1871
void RootableScriptModule__FindRootTable_fn(RootableScriptModule* __this, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = __this->FindRootTable();
}

// protected override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :1882
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "GenerateArgs(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult,Uno.Collections.List<object>)");
    uString* ret3;
    uObject* ret4;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret3), ret3);
    ::g::Uno::UX::NameTable* rootTable = __this->FindRootTable();
    ::g::Uno::UX::NameTable* nt = __this->_names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[21/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[52/*", "*/], uPtr(uPtr(nt)->Entries)->Strong<uString*>(e)));
            ::g::Uno::Collections::List__Add_fn(uPtr(args), uPtr(__this->_worker)->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(__this->_names)->Objects()), ::TYPES[22/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret4), ret4)));
        }

        nt = uPtr(nt)->ParentTable;
    }

    return *__retval = argsString, void();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1836
void RootableScriptModule__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// private void Unroot() :1918
void RootableScriptModule__Unroot_fn(RootableScriptModule* __this)
{
    __this->Unroot();
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [instance] :1836
void RootableScriptModule::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", ".ctor(Fuse.Reactive.ThreadWorker,Uno.UX.NameTable)");
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void DispatchUnroot() [instance] :1909
void RootableScriptModule::DispatchUnroot()
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "DispatchUnroot()");
    ::g::Uno::UX::NameTable* rootTable = FindRootTable();
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uPtr(rootTable)->This(), ::TYPES[7/*Fuse.Node*/]);
    uPtr(n)->remove_Unrooted(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)RootableScriptModule__DispatchUnroot_fn, this));
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)RootableScriptModule__Unroot_fn, this));
}

// private void EnsureRooted(Fuse.Scripting.Context context) [instance] :1851
void RootableScriptModule::EnsureRooted(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "EnsureRooted(Fuse.Scripting.Context)");
    ::g::Uno::UX::Property* ret2;

    if (_self != NULL)
        return;

    ::g::Uno::UX::NameTable* rootTable = FindRootTable();
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(uPtr(rootTable)->This(), ::TYPES[7/*Fuse.Node*/]);

    if (n != NULL)
        uPtr(n)->add_Unrooted(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)RootableScriptModule__DispatchUnroot_fn, this));

    _self = uAs< ::g::Fuse::Scripting::Object*>(uPtr(_worker)->Unwrap(rootTable->This()), ::TYPES[26/*Fuse.Scripting.Object*/]);
    uPtr(_self)->Item(::STRINGS[51/*"_dispose"*/], uPtr(context)->NewArray(uArray::New(::TYPES[2/*object[]*/], 0)));
    _properties = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[71/*Uno.Collections.List<Fuse.Reactive.LazyObservableProperty>*/]));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(rootTable->Properties()), ::TYPES[72/*Uno.Collections.ICollection<Uno.UX.Property>*/])); i++)
    {
        ::g::Uno::UX::Property* p = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(rootTable)->Properties()), ::TYPES[73/*Uno.Collections.IList<Uno.UX.Property>*/]), uCRef<int>(i), &ret2), ret2);

        if (!uPtr(_self)->ContainsKey(::g::Uno::UX::Selector__op_Implicit1(uPtr(p)->Name())))
            ::g::Uno::Collections::List__Add_fn(uPtr(_properties), ::g::Fuse::Reactive::LazyObservableProperty::New1(_worker, _self, p));
    }
}

// private Uno.UX.NameTable FindRootTable() [instance] :1871
::g::Uno::UX::NameTable* RootableScriptModule::FindRootTable()
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "FindRootTable()");
    ::g::Uno::UX::NameTable* nt = _names;

    while (nt != NULL)
    {
        if (uPtr(nt)->This() != NULL)
            return nt;

        nt = uPtr(nt)->ParentTable;
    }

    U_THROW(::g::Uno::Exception::New1());
}

// private void Unroot() [instance] :1918
void RootableScriptModule::Unroot()
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "Unroot()");
    ::g::Fuse::Reactive::LazyObservableProperty* ret5;

    if (_self == NULL)
        return;

    ::g::Fuse::Scripting::Array* disposeList = uAs< ::g::Fuse::Scripting::Array*>(uPtr(_self)->Item(::STRINGS[51/*"_dispose"*/]), ::TYPES[27/*Fuse.Scripting.Array*/]);

    if (disposeList != NULL)
    {
        for (int i = 0; i < uPtr(disposeList)->Length(); i++)
        {
            ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(disposeList)->Item(i), ::TYPES[25/*Fuse.Scripting.Function*/]);

            if (func != NULL)
                uPtr(func)->Call(uArray::New(::TYPES[2/*object[]*/], 0));
        }

        uPtr(_self)->Item(::STRINGS[51/*"_dispose"*/], NULL);
        _self = NULL;
    }

    if (_properties != NULL)
    {
        for (int i1 = 0; i1 < uPtr(_properties)->Count(); i1++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_properties), uCRef<int>(i1), &ret5), ret5))->Reset();

        uPtr(_properties)->Clear();
        _properties = NULL;
    }
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [static] :1836
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj1 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj1->ctor_2(worker, names);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\Subscription\$.uno
// --------------------------------------------------------------------

// internal sealed class SegmentObserver :203
// {
static void SegmentObserver_build(uType* type)
{
    ::STRINGS[53] = uString::Const(".");
    ::STRINGS[54] = uString::Const("Cannot access disposed PathSubscription");
    ::STRINGS[55] = uString::Const("Data binding to '");
    ::STRINGS[56] = uString::Const("': expected single value, got array");
    ::STRINGS[57] = uString::Const("': expected single value, got array of length ");
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::ObjectMirror_typeof();
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[39] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(SegmentObserver_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SegmentObserver_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _b), 0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _bindAttempt), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isInnerLink), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _key), 0,
        SegmentObserver_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _next), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _subscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _unhandledPath), 0);
}

SegmentObserver_type* SegmentObserver_typeof()
{
    static uSStrong<SegmentObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SegmentObserver);
    options.TypeSize = sizeof(SegmentObserver_type);
    type = (SegmentObserver_type*)uClassType::New("Fuse.Reactive.SegmentObserver", options);
    type->fp_build_ = SegmentObserver_build;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))SegmentObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))SegmentObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))SegmentObserver__OnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))SegmentObserver__OnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))SegmentObserver__OnFailed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SegmentObserver__Dispose_fn;
    return type;
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :211
void SegmentObserver__ctor__fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    __this->ctor_(b, bindAttempt);
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) :225
void SegmentObserver__ctor_1_fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    __this->ctor_1(b, path);
}

// private bool get_CanFail() :258
void SegmentObserver__get_CanFail_fn(SegmentObserver* __this, bool* __retval)
{
    *__retval = __this->CanFail();
}

// private static string CombineKeyAndPath(string key, string path) :317
void SegmentObserver__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval)
{
    *__retval = SegmentObserver::CombineKeyAndPath(key, path);
}

// public void Dispose() :395
void SegmentObserver__Dispose_fn(SegmentObserver* __this)
{
    __this->Dispose();
}

// private void Fail() :260
void SegmentObserver__Fail_fn(SegmentObserver* __this)
{
    __this->Fail();
}

// private void HandleNewDataContext(object val) :233
void SegmentObserver__HandleNewDataContext_fn(SegmentObserver* __this, uObject* val)
{
    __this->HandleNewDataContext(val);
}

// private void HandleObject(Fuse.Reactive.ObjectMirror obj) :239
void SegmentObserver__HandleObject_fn(SegmentObserver* __this, ::g::Fuse::Reactive::ObjectMirror* obj)
{
    __this->HandleObject(obj);
}

// private void HandlePath(object dc, string path) :272
void SegmentObserver__HandlePath_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->HandlePath(dc, path);
}

// public void Init(object dc, string path) :217
void SegmentObserver__Init_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->Init(dc, path);
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :211
void SegmentObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New1(b, bindAttempt);
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) :225
void SegmentObserver__New2_fn(::g::Fuse::Reactive::ContextBinding* b, uString* path, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New2(b, path);
}

// public void OnAdd(object addedValue) :350
void SegmentObserver__OnAdd_fn(SegmentObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnFailed(string message) :337
void SegmentObserver__OnFailed_fn(SegmentObserver* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :364
void SegmentObserver__OnInsertAt_fn(SegmentObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Reactive.ListMirror values) :323
void SegmentObserver__OnNewAll_fn(SegmentObserver* __this, ::g::Fuse::Reactive::ListMirror* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :331
void SegmentObserver__OnNewAt_fn(SegmentObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemoveAt(int index) :357
void SegmentObserver__OnRemoveAt_fn(SegmentObserver* __this, int* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnSet(object value) :343
void SegmentObserver__OnSet_fn(SegmentObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// private void SubscribeAndFail(Fuse.Reactive.Observable obs) :266
void SegmentObserver__SubscribeAndFail_fn(SegmentObserver* __this, ::g::Fuse::Reactive::Observable* obs)
{
    __this->SubscribeAndFail(obs);
}

// private static string TakeKeyFromPath(string& path) :372
void SegmentObserver__TakeKeyFromPath_fn(uString** path, uString** __retval)
{
    *__retval = SegmentObserver::TakeKeyFromPath(path);
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [instance] :211
void SegmentObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", ".ctor(Fuse.Reactive.ContextBinding,Fuse.Reactive.BindAttempt)");
    _b = b;
    _bindAttempt = bindAttempt;
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) [instance] :225
void SegmentObserver::ctor_1(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", ".ctor(Fuse.Reactive.ContextBinding,string)");
    _b = b;
    _key = SegmentObserver::TakeKeyFromPath(&path);
    _unhandledPath = path;
    _isInnerLink = true;
}

// private bool get_CanFail() [instance] :258
bool SegmentObserver::CanFail()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "get_CanFail()");
    return _bindAttempt != NULL;
}

// public void Dispose() [instance] :395
void SegmentObserver::Dispose()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Dispose()");

    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[54/*"Cannot acce...*/]));

    _isDisposed = true;

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    if (_next != NULL)
    {
        uPtr(_next)->Dispose();
        _next = NULL;
    }

    _b = NULL;
}

// private void Fail() [instance] :260
void SegmentObserver::Fail()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Fail()");
    _failed = true;
    uPtr(_bindAttempt)->Fail();
}

// private void HandleNewDataContext(object val) [instance] :233
void SegmentObserver::HandleNewDataContext(uObject* val)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandleNewDataContext(object)");

    if (!_isInnerLink)
        U_THROW(::g::Uno::Exception::New1());

    HandlePath(val, _unhandledPath);
}

// private void HandleObject(Fuse.Reactive.ObjectMirror obj) [instance] :239
void SegmentObserver::HandleObject(::g::Fuse::Reactive::ObjectMirror* obj)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandleObject(Fuse.Reactive.ObjectMirror)");

    if (_next == NULL)
        return;

    if (uPtr(obj)->ContainsKey(_key))
    {
        uObject* val = ::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(obj)->Item(_key));
        uPtr(_next)->HandleNewDataContext(val);
        uObject* disp = uAs<uObject*>(val, ::TYPES[29/*Uno.IDisposable*/]);

        if (disp != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disp), ::TYPES[29/*Uno.IDisposable*/]));
    }
    else
    {
        if (CanFail())
            Fail();
    }
}

// private void HandlePath(object dc, string path) [instance] :272
void SegmentObserver::HandlePath(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandlePath(object,string)");

    if (::g::Uno::String::op_Equality(_key, NULL))
        uPtr(_b)->NewValue(dc);
    else
    {
        if (_next != NULL)
            uPtr(_next)->Dispose();

        _next = NULL;
        ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(dc, ::TYPES[30/*Fuse.Reactive.Observable*/]);

        if (obs != NULL)
        {
            if (CanFail())
            {
                if (uPtr(obs)->Length() != 1)
                    SubscribeAndFail(obs);
                else
                {
                    ::g::Fuse::Reactive::ObjectMirror* so = uAs< ::g::Fuse::Reactive::ObjectMirror*>(uPtr(obs)->Item(0), ::TYPES[43/*Fuse.Reactive.ObjectMirror*/]);

                    if (so == NULL)
                        SubscribeAndFail(obs);
                    else if (!uPtr(so)->ContainsKey(_key))
                        SubscribeAndFail(obs);
                }
            }

            if (!_failed)
            {
                _next = SegmentObserver::New2(_b, SegmentObserver::CombineKeyAndPath(_key, path));

                if (_subscription != NULL)
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));

                _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
            }
        }
        else if (uIs(dc, ::TYPES[43/*Fuse.Reactive.ObjectMirror*/]))
        {
            _next = SegmentObserver::New2(_b, path);
            HandleObject(uCast< ::g::Fuse::Reactive::ObjectMirror*>(dc, ::TYPES[43/*Fuse.Reactive.ObjectMirror*/]));
        }
        else
        {
            if (_bindAttempt != NULL)
                uPtr(_bindAttempt)->Fail();

            _next = NULL;
        }
    }
}

// public void Init(object dc, string path) [instance] :217
void SegmentObserver::Init(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Init(object,string)");
    _key = SegmentObserver::TakeKeyFromPath(&path);
    HandlePath(dc, path);
}

// public void OnAdd(object addedValue) [instance] :350
void SegmentObserver::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnAdd(object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[55/*"Data bindin...*/], _key), ::STRINGS[56/*"': expected...*/])));
}

// public void OnFailed(string message) [instance] :337
void SegmentObserver::OnFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnFailed(string)");

    if (_isDisposed)
        return;
}

// public void OnInsertAt(int index, object value) [instance] :364
void SegmentObserver::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnInsertAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[55/*"Data bindin...*/], _key), ::STRINGS[56/*"': expected...*/])));
}

// public void OnNewAll(Fuse.Reactive.ListMirror values) [instance] :323
void SegmentObserver::OnNewAll(::g::Fuse::Reactive::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnNewAll(Fuse.Reactive.ListMirror)");

    if (_isDisposed)
        return;

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[55/*"Data bindin...*/], _key), ::STRINGS[57/*"': expected...*/]), uBox<int>(::TYPES[23/*int*/], uPtr(values)->Length()))));
}

// public void OnNewAt(int index, object newValue) [instance] :331
void SegmentObserver::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnNewAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[55/*"Data bindin...*/], _key), ::STRINGS[56/*"': expected...*/])));
}

// public void OnRemoveAt(int index) [instance] :357
void SegmentObserver::OnRemoveAt(int index)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnRemoveAt(int)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[55/*"Data bindin...*/], _key), ::STRINGS[56/*"': expected...*/])));
}

// public void OnSet(object value) [instance] :343
void SegmentObserver::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnSet(object)");

    if (_isDisposed)
        return;

    uPtr(_next)->HandleNewDataContext(value);
}

// private void SubscribeAndFail(Fuse.Reactive.Observable obs) [instance] :266
void SegmentObserver::SubscribeAndFail(::g::Fuse::Reactive::Observable* obs)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "SubscribeAndFail(Fuse.Reactive.Observable)");
    _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)::g::Fuse::Reactive::AnyChangeObserver::New1(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)::g::Fuse::Reactive::BindAttempt__Restart_fn, uPtr(_bindAttempt))));
    Fail();
}

// private static string CombineKeyAndPath(string key, string path) [static] :317
uString* SegmentObserver::CombineKeyAndPath(uString* key, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "CombineKeyAndPath(string,string)");

    if (::g::Uno::String::op_Inequality(path, NULL) && (uPtr(path)->Length() > 0))
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(key, ::STRINGS[53/*"."*/]), path);
    else
        return key;
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [static] :211
SegmentObserver* SegmentObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    SegmentObserver* obj1 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj1->ctor_(b, bindAttempt);
    return obj1;
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) [static] :225
SegmentObserver* SegmentObserver::New2(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    SegmentObserver* obj2 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj2->ctor_1(b, path);
    return obj2;
}

// private static string TakeKeyFromPath(string& path) [static] :372
uString* SegmentObserver::TakeKeyFromPath(uString** path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "TakeKeyFromPath(string&)");

    if (::g::Uno::String::op_Equality(*path, NULL))
        return NULL;

    uString* key = *path;
    int p = ::g::Uno::String::IndexOf(uPtr(key), '.', 0);

    if (p != -1)
    {
        key = ::g::Uno::String::Substring1(uPtr(key), 0, p);
        *path = ::g::Uno::String::Substring1(uPtr(*path), p + 1, (uPtr(*path)->Length() - p) - 1);
    }
    else
        *path = NULL;

    if (::g::Uno::String::op_Equality(key, NULL) || (uPtr(key)->Length() == 0))
        return NULL;
    else
        return key;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class Select :1761
// {
static void Select_build(uType* type)
{
    ::TYPES[48] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[74] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(27,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Select, _data), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Data", NULL, (void*)Select__get_Data_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)Select__set_Data_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)Select__New2_fn, 0, true, Select_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Select_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Select);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Reactive.Select", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = Select_build;
    type->fp_ctor_ = (void*)Select__New2_fn;
    type->fp_OnNodeAdded = (void(*)(::g::Fuse::Triggers::Trigger*, ::g::Fuse::Node*))Select__OnNodeAdded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Select__OnRooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Select() :1761
void Select__ctor_4_fn(Select* __this)
{
    __this->ctor_4();
}

// public object get_Data() :1768
void Select__get_Data_fn(Select* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :1769
void Select__set_Data_fn(Select* __this, uObject* value)
{
    __this->Data(value);
}

// private bool get_IsOn() :1797
void Select__get_IsOn_fn(Select* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated Select New() :1761
void Select__New2_fn(Select** __retval)
{
    *__retval = Select::New2();
}

// private void OnChanged() :1779
void Select__OnChanged_fn(Select* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnNodeAdded(Fuse.Node n) :1807
void Select__OnNodeAdded_fn(Select* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Select", "OnNodeAdded(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnNodeAdded_fn(__this, n);
    __this->OnChanged();
}

// protected override sealed void OnRooted() :1799
void Select__OnRooted_fn(Select* __this)
{
    uStackFrame __("Fuse.Reactive.Select", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->UpdateNodes();

    if (__this->IsOn())
        __this->Activate(NULL);
}

// private void UpdateNodes() :1791
void Select__UpdateNodes_fn(Select* __this)
{
    __this->UpdateNodes();
}

// public generated Select() [instance] :1761
void Select::ctor_4()
{
    uStackFrame __("Fuse.Reactive.Select", ".ctor()");
    ctor_3();
}

// public object get_Data() [instance] :1768
uObject* Select::Data()
{
    uStackFrame __("Fuse.Reactive.Select", "get_Data()");
    return _data;
}

// public void set_Data(object value) [instance] :1769
void Select::Data(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Select", "set_Data(object)");

    if (_data != value)
    {
        _data = value;
        OnChanged();
    }
}

// private bool get_IsOn() [instance] :1797
bool Select::IsOn()
{
    uStackFrame __("Fuse.Reactive.Select", "get_IsOn()");
    return _data != NULL;
}

// private void OnChanged() [instance] :1779
void Select::OnChanged()
{
    uStackFrame __("Fuse.Reactive.Select", "OnChanged()");
    UpdateNodes();

    if (IsRootingCompleted())
    {
        if (IsOn())
            Activate(NULL);
        else
            Deactivate();
    }
}

// private void UpdateNodes() [instance] :1791
void Select::UpdateNodes()
{
    uStackFrame __("Fuse.Reactive.Select", "UpdateNodes()");
    ::g::Fuse::Node* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Nodes()), ::TYPES[48/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[45/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[74/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);
        uPtr(n)->DataContext(_data);
    }
}

// public generated Select New() [static] :1761
Select* Select::New2()
{
    Select* obj2 = (Select*)uNew(Select_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// private sealed class Observable.Set :2135
// {
static void Observable__Set_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__Set, _origin), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__Set, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Set_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Set);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Set", options);
    type->SetBase(::g::Fuse::Reactive::Observable__Operation_typeof());
    type->fp_build_ = Observable__Set_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__Set__OnPerform_fn;
    type->fp_SendMessage = (void(*)(::g::Fuse::Reactive::Observable__Operation*, ::g::Fuse::Reactive::Observable__Subscription*))Observable__Set__SendMessage_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__Set__Unsubscribe_fn;
    return type;
}

// public Set(Fuse.Reactive.Observable obs, object value, int origin) :2140
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin)
{
    __this->ctor_1(obs, value, *origin);
}

// public Set New(Fuse.Reactive.Observable obs, object value, int origin) :2140
void Observable__Set__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin, Observable__Set** __retval)
{
    *__retval = Observable__Set::New1(obs, value, *origin);
}

// protected override sealed void OnPerform() :2151
void Observable__Set__OnPerform_fn(Observable__Set* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.Set", "OnPerform()");
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);
}

// protected override sealed void SendMessage(Fuse.Reactive.Observable.Subscription sub) :2159
void Observable__Set__SendMessage_fn(Observable__Set* __this, ::g::Fuse::Reactive::Observable__Subscription* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.Set", "SendMessage(Fuse.Reactive.Observable.Subscription)");

    if (uPtr(sub)->Origin() != __this->_origin)
        ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(uPtr(sub)->Observer()), ::TYPES[0/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// protected override sealed void Unsubscribe() :2146
void Observable__Set__Unsubscribe_fn(Observable__Set* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.Set", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public Set(Fuse.Reactive.Observable obs, object value, int origin) [instance] :2140
void Observable__Set::ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin)
{
    uStackFrame __("Fuse.Reactive.Observable.Set", ".ctor(Fuse.Reactive.Observable,object,int)");
    ctor_(obs);
    _value = value;
    _origin = origin;
}

// public Set New(Fuse.Reactive.Observable obs, object value, int origin) [static] :2140
Observable__Set* Observable__Set::New1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin)
{
    Observable__Set* obj1 = (Observable__Set*)uNew(Observable__Set_typeof());
    obj1->ctor_1(obs, value, origin);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class Observable.Subscription :1975
// {
static void Observable__Subscription_build(uType* type)
{
    ::STRINGS[58] = uString::Const("setValueWithOrigin");
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[51] = ::g::Fuse::Reactive::ListMirror_typeof();
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[1] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Observable__Subscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _obs), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _om), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _origin), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::Observable__Subscription::_counter_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("Dispose", NULL, (void*)Observable__Subscription__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Observable__Subscription__New1_fn, 0, true, Observable__Subscription_typeof(), 2, ::g::Fuse::Reactive::Observable_typeof(), ::g::Fuse::Reactive::IObserver_typeof()),
        new uFunction("get_Observer", NULL, (void*)Observable__Subscription__get_Observer_fn, 0, false, ::g::Fuse::Reactive::IObserver_typeof(), 0),
        new uFunction("get_Origin", NULL, (void*)Observable__Subscription__get_Origin_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("SetExclusive", NULL, (void*)Observable__Subscription__SetExclusive_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("SetExclusiveIfNoValue", NULL, (void*)Observable__Subscription__SetExclusiveIfNoValue_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

Observable__Subscription_type* Observable__Subscription_typeof()
{
    static uSStrong<Observable__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Observable__Subscription);
    options.TypeSize = sizeof(Observable__Subscription_type);
    type = (Observable__Subscription_type*)uClassType::New("Fuse.Reactive.Observable.Subscription", options);
    type->fp_build_ = Observable__Subscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Observable__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) :1985
void Observable__Subscription__ctor__fn(Observable__Subscription* __this, ::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    __this->ctor_(om, obs);
}

// public void Dispose() :2007
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) :1985
void Observable__Subscription__New1_fn(::g::Fuse::Reactive::Observable* om, uObject* obs, Observable__Subscription** __retval)
{
    *__retval = Observable__Subscription::New1(om, obs);
}

// public Fuse.Reactive.IObserver get_Observer() :1983
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval)
{
    *__retval = __this->Observer();
}

// public int get_Origin() :1979
void Observable__Subscription__get_Origin_fn(Observable__Subscription* __this, int* __retval)
{
    *__retval = __this->Origin();
}

// public void SetExclusive(object newValue) :1997
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// public void SetExclusiveIfNoValue(object newValue) :2002
void Observable__Subscription__SetExclusiveIfNoValue_fn(Observable__Subscription* __this, uObject* newValue)
{
    __this->SetExclusiveIfNoValue(newValue);
}

int Observable__Subscription::_counter_;

// public Subscription(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) [instance] :1985
void Observable__Subscription::ctor_(::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", ".ctor(Fuse.Reactive.Observable,Fuse.Reactive.IObserver)");
    _origin = (Observable__Subscription::_counter_++);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(om)->_observers), this);
    _om = om;
    _obs = obs;

    if (uPtr(_om)->Length() == 1)
        ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(obs), ::TYPES[0/*Fuse.Reactive.IObserver*/]), uPtr(_om)->Item(0));
    else
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(obs), ::TYPES[0/*Fuse.Reactive.IObserver*/]), _om);
}

// public void Dispose() [instance] :2007
void Observable__Subscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "Dispose()");
    bool ret2;
    ::g::Uno::Collections::List__Remove_fn(uPtr(uPtr(_om)->_observers), this, &ret2);
}

// public Fuse.Reactive.IObserver get_Observer() [instance] :1983
uObject* Observable__Subscription::Observer()
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "get_Observer()");
    return _obs;
}

// public int get_Origin() [instance] :1979
int Observable__Subscription::Origin()
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "get_Origin()");
    return _origin;
}

// public void SetExclusive(object newValue) [instance] :1997
void Observable__Subscription::SetExclusive(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "SetExclusive(object)");
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[58/*"setValueWit...*/], uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, (uObject*)::g::Fuse::Reactive::ValueMirror::Unbox(newValue), uBox<int>(::TYPES[23/*int*/], _origin)));
}

// public void SetExclusiveIfNoValue(object newValue) [instance] :2002
void Observable__Subscription::SetExclusiveIfNoValue(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "SetExclusiveIfNoValue(object)");

    if (uPtr(_om)->Length() == 0)
        SetExclusive(newValue);
}

// public Subscription New(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) [static] :1985
Observable__Subscription* Observable__Subscription::New1(::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    Observable__Subscription* obj1 = (Observable__Subscription*)uNew(Observable__Subscription_typeof());
    obj1->ctor_(om, obs);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// internal partial sealed class ThreadWorker :2419
// {
// static ThreadWorker() :2819
static void ThreadWorker__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(::TYPES[1/*object*/], uArray::New(::TYPES[75/*Fuse.Scripting.ScriptMethod[]*/], 0));
}

static void ThreadWorker_build(uType* type)
{
    ::STRINGS[59] = uString::Const("Skipped Exception");
    ::STRINGS[22] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.32.14\\$.uno");
    ::STRINGS[60] = uString::Const("CheckAndThrow");
    ::STRINGS[61] = uString::Const("JavaScript data model contains circular references or is too deep. Some data may not display correctly.");
    ::STRINGS[62] = uString::Const("CreateMirror");
    ::STRINGS[63] = uString::Const("external_object");
    ::STRINGS[64] = uString::Const("(class)");
    ::STRINGS[65] = uString::Const("(function(external_object) { this.external_object = external_object; })");
    ::STRINGS[66] = uString::Const("(set-superclass)");
    ::STRINGS[67] = uString::Const("(function(cl, superclass) { cl.prototype = new superclass(); cl.prototype.constructor = cl; })");
    ::STRINGS[68] = uString::Const("(func)");
    ::STRINGS[69] = uString::Const("(function (cl, callback) { cl.prototype.");
    ::STRINGS[70] = uString::Const(" = function() { callback(this.external_object, Array.prototype.slice.call(arguments)); }})");
    ::STRINGS[71] = uString::Const("ThreadWorked failed");
    ::STRINGS[72] = uString::Const("Run");
    ::STRINGS[73] = uString::Const("Could not create script context");
    ::TYPES[37] = ::g::Uno::Type_typeof();
    ::TYPES[75] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[76] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[77] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[68] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Observable__Operation_typeof());
    ::TYPES[78] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof());
    ::TYPES[39] = ::g::Uno::Action_typeof();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[79] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[3] = ::g::Fuse::Reactive::ValueMirror_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[80] = ::g::Uno::EventHandler_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[81] = ThreadWorker__Closure_typeof();
    ::TYPES[63] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[35] = ::g::Uno::Exception_typeof();
    ::TYPES[82] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[18] = ::g::Uno::String_typeof();
    ::TYPES[83] = ::g::Uno::Float2_typeof();
    ::TYPES[84] = ::g::Uno::Float3_typeof();
    ::TYPES[85] = ::g::Uno::Float4_typeof();
    ::TYPES[86] = ::g::Uno::Int2_typeof();
    ::TYPES[87] = ::g::Uno::Int3_typeof();
    ::TYPES[88] = ::g::Uno::Int4_typeof();
    ::TYPES[24] = ::g::Uno::Float_typeof();
    ::TYPES[23] = ::g::Uno::Int_typeof();
    ::TYPES[89] = ::g::Uno::UInt_typeof();
    ::TYPES[90] = ::g::Fuse::Scripting::IScriptObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _isReady), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _isReadyMutex), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Observable__Operation_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _messages), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _messagesMutex), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _reflectionDepth), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _registeredClasses), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _setSuperclass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _subscribedForClosing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, CanExecuteJavaScript), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, Pause), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->fp_cctor_ = ThreadWorker__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    return type;
}

// public ThreadWorker() :2463
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :2607
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :2450
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Uno.Threading.IDispatcher ownerThread) :2421
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(ownerThread);
}

// private Fuse.Reactive.ValueMirror CreateMirror(object obj) :2774
void ThreadWorker__CreateMirror_fn(ThreadWorker* __this, uObject* obj, ::g::Fuse::Reactive::ValueMirror** __retval)
{
    *__retval = __this->CreateMirror(obj);
}

// public void Dispose() :2485
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// internal void Enqueue(Fuse.Reactive.Observable.Operation op) :2729
void ThreadWorker__Enqueue_fn(ThreadWorker* __this, ::g::Fuse::Reactive::Observable__Operation* op)
{
    __this->Enqueue(op);
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :2453
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) :2846
void ThreadWorker__GetClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->GetClass(sc);
}

// public void Invoke(Uno.Action action) :2621
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public void Invoke<T>(Uno.Action<T> action, T arg) :2662
void ThreadWorker__Invoke1_fn(ThreadWorker* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[81/*Fuse.Reactive.ThreadWorker.Closure`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke`1(Uno.Action<T>,T)");
    ThreadWorker__Closure* ret4;
    __this->Invoke(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)ThreadWorker__Closure__Run_fn, (ThreadWorker__Closure__New1_fn(__types[1], action, arg, &ret4), ret4)));
}

// internal bool get_IsJavaScriptVMReady() :2434
void ThreadWorker__get_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* __retval)
{
    *__retval = __this->IsJavaScriptVMReady();
}

// private void set_IsJavaScriptVMReady(bool value) :2441
void ThreadWorker__set_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* value)
{
    __this->IsJavaScriptVMReady(*value);
}

// public ThreadWorker New() :2463
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnClosing(object sender, Uno.EventArgs args) :2480
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClosing(sender, args);
}

// public Fuse.Reactive.ThreadWorker.Flag PostFlag() :2638
void ThreadWorker__PostFlag_fn(ThreadWorker* __this, ThreadWorker__Flag** __retval)
{
    *__retval = __this->PostFlag();
}

// public void ProcessUIMessages() :2736
void ThreadWorker__ProcessUIMessages_fn(ThreadWorker* __this)
{
    __this->ProcessUIMessages();
}

// public object Reflect(object obj) :2750
void ThreadWorker__Reflect_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Reflect(obj);
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) :2857
void ThreadWorker__RegisterClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->RegisterClass(sc);
}

// private void Run() :2493
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner() :2506
void ThreadWorker__RunInner_fn(ThreadWorker* __this)
{
    __this->RunInner();
}

// private Uno.Collections.List<Fuse.Reactive.Observable.Operation> TakeMessages() :2717
void ThreadWorker__TakeMessages_fn(ThreadWorker* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->TakeMessages();
}

// private static Fuse.Scripting.Array ToArray(float2 v) :2958
void ThreadWorker__ToArray_fn(::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray(*v);
}

// private static Fuse.Scripting.Array ToArray(float3 v) :2963
void ThreadWorker__ToArray1_fn(::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray1(*v);
}

// private static Fuse.Scripting.Array ToArray(float4 v) :2968
void ThreadWorker__ToArray2_fn(::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray2(*v);
}

// private static Fuse.Scripting.Array ToArray(int2 v) :2973
void ThreadWorker__ToArray3_fn(::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray3(*v);
}

// private static Fuse.Scripting.Array ToArray(int3 v) :2978
void ThreadWorker__ToArray4_fn(::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray4(*v);
}

// private static Fuse.Scripting.Array ToArray(int4 v) :2983
void ThreadWorker__ToArray5_fn(::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray5(*v);
}

// public object Unwrap(object dc) :2942
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval)
{
    *__retval = __this->Unwrap(dc);
}

// public static object Wrap(object obj) :2921
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval)
{
    *__retval = ThreadWorker::Wrap(obj);
}

// private object WrapScriptClass(object obj) :2825
void ThreadWorker__WrapScriptClass_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->WrapScriptClass(obj);
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :2463
void ThreadWorker::ctor_()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", ".ctor()");
    _isReadyMutex = ::g::Uno::Threading::Mutex::Create();
    CanExecuteJavaScript = ::g::Uno::Threading::Mutex::Create();
    Pause = ::g::Uno::Threading::Mutex::Create();
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[76/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[77/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    _messages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[68/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/]));
    _messagesMutex = ::g::Uno::Threading::Mutex::Create();
    _registeredClasses = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[78/*Uno.Collections.Dictionary<Fuse.Scripting.ScriptClass, Fuse.Scripting.Function>*/]));
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)ThreadWorker__ProcessUIMessages_fn, this), 0);
    ::g::Uno::Threading::Thread* thread = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)ThreadWorker__Run_fn, this));
    uPtr(thread)->Start();
}

// public void CheckAndThrow() [instance] :2607
void ThreadWorker::CheckAndThrow()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CheckAndThrow()");
    bool ret2;
    ::g::Uno::Exception* next = NULL;
    ::g::Uno::Exception* prev = NULL;

    while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&next), &ret2), ret2))
    {
        if (prev != NULL)
            ::g::Fuse::Diagnostics::UnknownException(::STRINGS[59/*"Skipped Exc...*/], next, this, ::STRINGS[22/*"C:\\Program...*/], 2613, ::STRINGS[60/*"CheckAndThrow"*/]);

        prev = next;
    }

    if (prev != NULL)
        U_THROW(prev);
}

// public Fuse.Scripting.Context get_Context() [instance] :2450
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_Context()");
    return ThreadWorker::_context();
}

// private Fuse.Reactive.ValueMirror CreateMirror(object obj) [instance] :2774
::g::Fuse::Reactive::ValueMirror* ThreadWorker::CreateMirror(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateMirror(object)");

    if (_reflectionDepth > 50)
    {
        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[61/*"JavaScript ...*/], this, ::STRINGS[22/*"C:\\Program...*/], 2778, ::STRINGS[62/*"CreateMirror"*/]);
        return NULL;
    }

    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[27/*Fuse.Scripting.Array*/]);

    if (a != NULL)
        return ::g::Fuse::Reactive::ArrayMirror::New1(this, a);

    ::g::Fuse::Scripting::Object* o = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[26/*Fuse.Scripting.Object*/]);

    if (o != NULL)
    {
        if (uPtr(o)->InstanceOf(uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->FuseJS())->Observable))
            return ::g::Fuse::Reactive::Observable::New1(this, o);
        else
            return ::g::Fuse::Reactive::ObjectMirror::New1(this, o);
    }

    return NULL;
}

// public void Dispose() [instance] :2485
void ThreadWorker::Dispose()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dispose()");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[80/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _terminate = true;
}

// internal void Enqueue(Fuse.Reactive.Observable.Operation op) [instance] :2729
void ThreadWorker::Enqueue(::g::Fuse::Reactive::Observable__Operation* op)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Enqueue(Fuse.Reactive.Observable.Operation)");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_messagesMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[29/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(_messages), op);
    }
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :2453
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_FuseJS()");
    return ThreadWorker::_fuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) [instance] :2846
::g::Fuse::Scripting::Function* ThreadWorker::GetClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "GetClass(Fuse.Scripting.ScriptClass)");
    bool ret3;
    ::g::Fuse::Scripting::Function* cl;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_registeredClasses), sc, (void**)(&cl), &ret3), ret3))
    {
        cl = RegisterClass(sc);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_registeredClasses), sc, cl);
    }

    return cl;
}

// public void Invoke(Uno.Action action) [instance] :2621
void ThreadWorker::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// internal bool get_IsJavaScriptVMReady() [instance] :2434
bool ThreadWorker::IsJavaScriptVMReady()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_IsJavaScriptVMReady()");
    uPtr(_isReadyMutex)->Lock();
    bool ready = _isReady;
    uPtr(_isReadyMutex)->Unlock();
    return ready;
}

// private void set_IsJavaScriptVMReady(bool value) [instance] :2441
void ThreadWorker::IsJavaScriptVMReady(bool value)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "set_IsJavaScriptVMReady(bool)");
    uPtr(_isReadyMutex)->Lock();
    _isReady = value;
    uPtr(_isReadyMutex)->Unlock();
}

// private void OnClosing(object sender, Uno.EventArgs args) [instance] :2480
void ThreadWorker::OnClosing(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "OnClosing(object,Uno.EventArgs)");
    Dispose();
}

// public Fuse.Reactive.ThreadWorker.Flag PostFlag() [instance] :2638
ThreadWorker__Flag* ThreadWorker::PostFlag()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "PostFlag()");
    ThreadWorker__Flag* f = ThreadWorker__Flag::New1();
    Invoke(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)ThreadWorker__Flag__Process_fn, f));
    return f;
}

// public void ProcessUIMessages() [instance] :2736
void ThreadWorker::ProcessUIMessages()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ProcessUIMessages()");
    ::g::Fuse::Reactive::Observable__Operation* ret5;
    ::g::Uno::Collections::List* msgs = TakeMessages();

    if (msgs == NULL)
        return;

    for (int i = 0; i < uPtr(msgs)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(msgs), uCRef<int>(i), &ret5), ret5))->Perform();
}

// public object Reflect(object obj) [instance] :2750
uObject* ThreadWorker::Reflect(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Reflect(object)");
    ::g::Fuse::Scripting::External* e = uAs< ::g::Fuse::Scripting::External*>(obj, ::TYPES[63/*Fuse.Scripting.External*/]);

    if (e != NULL)
        return uPtr(e)->Object;

    ::g::Fuse::Scripting::Object* sobj = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[26/*Fuse.Scripting.Object*/]);

    if (sobj != NULL)
    {
        if (uPtr(sobj)->ContainsKey(::STRINGS[63/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[63/*"external_ob...*/]), ::TYPES[63/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    _reflectionDepth++;
    ::g::Fuse::Reactive::ValueMirror* res = CreateMirror(obj);
    _reflectionDepth--;

    if (res != NULL)
        return res;

    return obj;
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) [instance] :2857
::g::Fuse::Scripting::Function* ThreadWorker::RegisterClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "RegisterClass(Fuse.Scripting.ScriptClass)");
    ::g::Fuse::Scripting::Function* cl = uCast< ::g::Fuse::Scripting::Function*>(uPtr(ThreadWorker::_context())->Evaluate(::STRINGS[64/*"(class)"*/], ::STRINGS[65/*"(function(e...*/]), ::TYPES[25/*Fuse.Scripting.Function*/]);

    if (uPtr(sc)->SuperType() != NULL)
    {
        ::g::Fuse::Scripting::Function* super = RegisterClass(uPtr(sc)->SuperType());

        if (_setSuperclass == NULL)
            _setSuperclass = uCast< ::g::Fuse::Scripting::Function*>(uPtr(ThreadWorker::_context())->Evaluate(::STRINGS[66/*"(set-superc...*/], ::STRINGS[67/*"(function(c...*/]), ::TYPES[25/*Fuse.Scripting.Function*/]);

        uPtr(_setSuperclass)->Call(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, cl, super));
    }

    for (int i = 0; i < uPtr(uPtr(sc)->Methods())->Length(); i++)
    {
        uString* methodName = uPtr(uPtr(uPtr(sc)->Methods())->Strong< ::g::Fuse::Scripting::ScriptMethod*>(i))->Name;
        uDelegate* callback = uDelegate::New(::TYPES[28/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__MethodClosure__Callback_fn, ThreadWorker__MethodClosure::New1(uPtr(sc->Methods())->Strong< ::g::Fuse::Scripting::ScriptMethod*>(i), this));
        ::g::Fuse::Scripting::Function* factory = uCast< ::g::Fuse::Scripting::Function*>(uPtr(ThreadWorker::_context())->Evaluate(::STRINGS[68/*"(func)"*/], ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[69/*"(function (...*/], methodName), ::STRINGS[70/*" = function...*/])), ::TYPES[25/*Fuse.Scripting.Function*/]);
        uPtr(factory)->Call(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, cl, callback));
    }

    return cl;
}

// private void Run() [instance] :2493
void ThreadWorker::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Run()");

    try
    {
        RunInner();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[71/*"ThreadWorke...*/], e, this, ::STRINGS[22/*"C:\\Program...*/], 2501, ::STRINGS[72/*"Run"*/]);
        ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
    }
}

// private void RunInner() [instance] :2506
void ThreadWorker::RunInner()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "RunInner()");
    bool ret6;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[29/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (ThreadWorker::_context() == NULL)
        {
            ThreadWorker::_context() = ThreadWorker::CreateContext((uObject*)this);

            if (ThreadWorker::_context() == NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[73/*"Could not c...*/]));

            ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[39/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
            ThreadWorker::_fuseJS() = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context());
        }
    }

    IsJavaScriptVMReady(true);
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (!_terminate)
    {
        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current() != NULL)
            {
                uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[80/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        uObject* lg1 = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg1), ::TYPES[29/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uDelegate* action;

            if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret6), ret6))
            {
                try
                {
                    didAnything = true;
                    uPtr(action)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
                }
            }

            try
            {
                uPtr(ThreadWorker::_fuseJS())->UpdateModules(ThreadWorker::_context());
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e1 = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
            }
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }

        uObject* lg2 = ::g::Uno::Threading::LockGuard::Acquire(Pause);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg2), ::TYPES[29/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        }
    }
}

// private Uno.Collections.List<Fuse.Reactive.Observable.Operation> TakeMessages() [instance] :2717
::g::Uno::Collections::List* ThreadWorker::TakeMessages()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "TakeMessages()");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_messagesMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[29/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(_messages)->Count() == 0)
            return NULL;

        ::g::Uno::Collections::List* msgs = _messages;
        _messages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[68/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/]));
        return msgs;
    }
}

// public object Unwrap(object dc) [instance] :2942
uObject* ThreadWorker::Unwrap(uObject* dc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Unwrap(object)");

    if (dc == NULL)
        return NULL;
    else if (uIs(dc, ::TYPES[18/*string*/]))
        return dc;
    else if (uIs(dc, ::TYPES[3/*Fuse.Reactive.ValueMirror*/]))
        return uPtr(uCast< ::g::Fuse::Reactive::ValueMirror*>(dc, ::TYPES[3/*Fuse.Reactive.ValueMirror*/]))->Raw();
    else if (uIs(dc, ::TYPES[25/*Fuse.Scripting.Function*/]))
        return dc;
    else if (uIs(dc, ::TYPES[83/*float2*/]))
        return ThreadWorker::ToArray(uUnbox< ::g::Uno::Float2>(::TYPES[83/*float2*/], dc));
    else if (uIs(dc, ::TYPES[84/*float3*/]))
        return ThreadWorker::ToArray1(uUnbox< ::g::Uno::Float3>(::TYPES[84/*float3*/], dc));
    else if (uIs(dc, ::TYPES[85/*float4*/]))
        return ThreadWorker::ToArray2(uUnbox< ::g::Uno::Float4>(::TYPES[85/*float4*/], dc));
    else if (uIs(dc, ::TYPES[86/*int2*/]))
        return ThreadWorker::ToArray3(uUnbox< ::g::Uno::Int2>(::TYPES[86/*int2*/], dc));
    else if (uIs(dc, ::TYPES[87/*int3*/]))
        return ThreadWorker::ToArray4(uUnbox< ::g::Uno::Int3>(::TYPES[87/*int3*/], dc));
    else if (uIs(dc, ::TYPES[88/*int4*/]))
        return ThreadWorker::ToArray5(uUnbox< ::g::Uno::Int4>(::TYPES[88/*int4*/], dc));
    else if (::g::Uno::Type::IsClass(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return WrapScriptClass(dc);
    else
        return dc;
}

// private object WrapScriptClass(object obj) [instance] :2825
uObject* ThreadWorker::WrapScriptClass(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "WrapScriptClass(object)");
    uObject* so = uAs<uObject*>(obj, ::TYPES[90/*Fuse.Scripting.IScriptObject*/]);

    if ((so != NULL) && (::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[90/*Fuse.Scripting.IScriptObject*/])) != NULL))
        return ::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[90/*Fuse.Scripting.IScriptObject*/]));

    ::g::Fuse::Scripting::External* ext = ::g::Fuse::Scripting::External::New1(obj);
    ::g::Fuse::Scripting::ScriptClass* sc = ::g::Fuse::Scripting::ScriptClass::Get(::g::Uno::Object::GetType(uPtr(obj)));

    if (sc == NULL)
        return ext;

    ::g::Fuse::Scripting::Function* ctor = GetClass(sc);
    ::g::Fuse::Scripting::Object* res = uPtr(ctor)->Construct(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 1, ext));

    if (so != NULL)
        ::g::Fuse::Scripting::IScriptObject::SetScriptObject(uInterface(uPtr(so), ::TYPES[90/*Fuse.Scripting.IScriptObject*/]), res, Context());

    return res;
}

// internal static Fuse.Scripting.Context CreateContext(Uno.Threading.IDispatcher ownerThread) [static] :2421
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* ownerThread)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateContext(Uno.Threading.IDispatcher)");
    ThreadWorker_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Context::New1(ownerThread);
}

// public ThreadWorker New() [static] :2463
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}

// private static Fuse.Scripting.Array ToArray(float2 v) [static] :2958
::g::Fuse::Scripting::Array* ThreadWorker::ToArray(::g::Uno::Float2 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float2)");
    ThreadWorker_typeof()->Init();
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox(::TYPES[17/*double*/], (double)v.X), uBox(::TYPES[17/*double*/], (double)v.Y)));
}

// private static Fuse.Scripting.Array ToArray(float3 v) [static] :2963
::g::Fuse::Scripting::Array* ThreadWorker::ToArray1(::g::Uno::Float3 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float3)");
    ThreadWorker_typeof()->Init();
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 3, uBox(::TYPES[17/*double*/], (double)v.X), uBox(::TYPES[17/*double*/], (double)v.Y), uBox(::TYPES[17/*double*/], (double)v.Z)));
}

// private static Fuse.Scripting.Array ToArray(float4 v) [static] :2968
::g::Fuse::Scripting::Array* ThreadWorker::ToArray2(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float4)");
    ThreadWorker_typeof()->Init();
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 4, uBox(::TYPES[17/*double*/], (double)v.X), uBox(::TYPES[17/*double*/], (double)v.Y), uBox(::TYPES[17/*double*/], (double)v.Z), uBox(::TYPES[17/*double*/], (double)v.W)));
}

// private static Fuse.Scripting.Array ToArray(int2 v) [static] :2973
::g::Fuse::Scripting::Array* ThreadWorker::ToArray3(::g::Uno::Int2 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int2)");
    ThreadWorker_typeof()->Init();
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox(::TYPES[17/*double*/], (double)v.X), uBox(::TYPES[17/*double*/], (double)v.Y)));
}

// private static Fuse.Scripting.Array ToArray(int3 v) [static] :2978
::g::Fuse::Scripting::Array* ThreadWorker::ToArray4(::g::Uno::Int3 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int3)");
    ThreadWorker_typeof()->Init();
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 3, uBox(::TYPES[17/*double*/], (double)v.X), uBox(::TYPES[17/*double*/], (double)v.Y), uBox(::TYPES[17/*double*/], (double)v.Z)));
}

// private static Fuse.Scripting.Array ToArray(int4 v) [static] :2983
::g::Fuse::Scripting::Array* ThreadWorker::ToArray5(::g::Uno::Int4 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int4)");
    ThreadWorker_typeof()->Init();
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 4, uBox(::TYPES[17/*double*/], (double)v.X), uBox(::TYPES[17/*double*/], (double)v.Y), uBox(::TYPES[17/*double*/], (double)v.Z), uBox(::TYPES[17/*double*/], (double)v.W)));
}

// public static object Wrap(object obj) [static] :2921
uObject* ThreadWorker::Wrap(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Wrap(object)");
    ThreadWorker_typeof()->Init();

    if (uIs(obj, ::TYPES[63/*Fuse.Scripting.External*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[63/*Fuse.Scripting.External*/]))->Object;
    else if (uIs(obj, ::TYPES[26/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[26/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->ContainsKey(::STRINGS[63/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[63/*"external_ob...*/]), ::TYPES[63/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    if (uIs(obj, ::TYPES[24/*float*/]))
        return uBox(::TYPES[17/*double*/], (double)uUnbox<float>(::TYPES[24/*float*/], obj));

    if (uIs(obj, ::TYPES[23/*int*/]))
        return uBox(::TYPES[17/*double*/], (double)uUnbox<int>(::TYPES[23/*int*/], obj));

    if (uIs(obj, ::TYPES[89/*uint*/]))
        return uBox(::TYPES[17/*double*/], (double)uUnbox<uint32_t>(::TYPES[89/*uint*/], obj));

    return obj;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public abstract class ValueMirror :2678
// {
static void ValueMirror_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ValueMirror, _raw), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Raw", NULL, (void*)ValueMirror__get_Raw_fn, 0, false, uObject_typeof(), 0),
        new uFunction("Unbox", NULL, (void*)ValueMirror__Unbox_fn, 0, true, uObject_typeof(), 1, uObject_typeof()),
        new uFunction("Unsubscribe", NULL, NULL, offsetof(ValueMirror_type, fp_Unsubscribe), false, uVoid_typeof(), 0),
        new uFunction("Unsubscribe", NULL, (void*)ValueMirror__Unsubscribe1_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()));
}

ValueMirror_type* ValueMirror_typeof()
{
    static uSStrong<ValueMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ValueMirror);
    options.TypeSize = sizeof(ValueMirror_type);
    type = (ValueMirror_type*)uClassType::New("Fuse.Reactive.ValueMirror", options);
    type->fp_build_ = ValueMirror_build;
    return type;
}

// protected ValueMirror(object raw) :2685
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw)
{
    __this->ctor_(raw);
}

// public object get_Raw() :2683
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval)
{
    *__retval = __this->Raw();
}

// public static object Unbox(object obj) :2690
void ValueMirror__Unbox_fn(uObject* obj, uObject** __retval)
{
    *__retval = ValueMirror::Unbox(obj);
}

// public static void Unsubscribe(object obj) :2697
void ValueMirror__Unsubscribe1_fn(uObject* obj)
{
    ValueMirror::Unsubscribe1(obj);
}

// protected ValueMirror(object raw) [instance] :2685
void ValueMirror::ctor_(uObject* raw)
{
    uStackFrame __("Fuse.Reactive.ValueMirror", ".ctor(object)");
    _raw = raw;
}

// public object get_Raw() [instance] :2683
uObject* ValueMirror::Raw()
{
    uStackFrame __("Fuse.Reactive.ValueMirror", "get_Raw()");
    return _raw;
}

// public static object Unbox(object obj) [static] :2690
uObject* ValueMirror::Unbox(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ValueMirror", "Unbox(object)");
    ValueMirror* vm = uAs<ValueMirror*>(obj, ValueMirror_typeof());

    if (vm != NULL)
        return uPtr(vm)->_raw;

    return obj;
}

// public static void Unsubscribe(object obj) [static] :2697
void ValueMirror::Unsubscribe1(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ValueMirror", "Unsubscribe(object)");
    ValueMirror* vm = uAs<ValueMirror*>(obj, ValueMirror_typeof());

    if (vm != NULL)
        uPtr(vm)->Unsubscribe();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public class WhileCount :3015
// {
static void WhileCount_build(uType* type)
{
    ::TYPES[30] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[29] = ::g::Uno::IDisposable_typeof();
    ::TYPES[0] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[70] = ::g::Fuse::Reactive::ArrayMirror_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileCount_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileCount_type, interface4),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(WhileCount_type, interface5));
    type->SetFields(27,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _isRooting), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _oldCount), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _subscription), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_EqualTo", NULL, (void*)WhileCount__get_EqualTo_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileCount__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileCount__get_GreaterThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileCount__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Items", NULL, (void*)WhileCount__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)WhileCount__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileCount__get_LessThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileCount__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileCount__New2_fn, 0, true, WhileCount_typeof(), 0));
}

WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 37;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_build_ = WhileCount_build;
    type->fp_ctor_ = (void*)WhileCount__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface5.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface5.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface5.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface5.fp_OnRemoveAt = (void(*)(uObject*, int*))WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface5.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface5.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface5.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCount() :3015
void WhileCount__ctor_4_fn(WhileCount* __this)
{
    __this->ctor_4();
}

// private void Assess(int count) :3090
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// public int get_EqualTo() :3137
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->EqualTo();
}

// public void set_EqualTo(int value) :3138
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value)
{
    __this->EqualTo(*value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :3155
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :3151
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :3168
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror values) :3173
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, ::g::Fuse::Reactive::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Reactive.ListMirror)");
    __this->Assess(uPtr(values)->Length());
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :3164
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :3159
void WhileCount__FuseReactiveIObserverOnRemoveAt_fn(WhileCount* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :3147
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->Assess(1);
}

// public int get_GreaterThan() :3124
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :3125
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// public object get_Items() :3044
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :3045
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// public int get_LessThan() :3111
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(int value) :3112
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value)
{
    __this->LessThan(*value);
}

// public generated WhileCount New() :3015
void WhileCount__New2_fn(WhileCount** __retval)
{
    *__retval = WhileCount::New2();
}

// private void OnItemsChanged() :3055
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :3018
void WhileCount__OnRooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_isRooting = true;
    __this->OnItemsChanged();
    __this->_isRooting = false;
}

// protected override sealed void OnUnrooted() :3026
void WhileCount__OnUnrooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnUnrooted()");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[29/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->Assess(0);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void Reassess() :3069
void WhileCount__Reassess_fn(WhileCount* __this)
{
    __this->Reassess();
}

// public generated WhileCount() [instance] :3015
void WhileCount::ctor_4()
{
    uStackFrame __("Fuse.Reactive.WhileCount", ".ctor()");
    ctor_3();
}

// private void Assess(int count) [instance] :3090
void WhileCount::Assess(int count)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Assess(int)");
    _oldCount = count;

    if (((_equalToMode && (count == _equalToValue)) || (_lessThanMode && (count < _lessThanValue))) || (_greaterThanMode && (count > _greaterThanValue)))
        Activate(NULL);
    else
        Deactivate();
}

// public int get_EqualTo() [instance] :3137
int WhileCount::EqualTo()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_EqualTo()");
    return _equalToValue;
}

// public void set_EqualTo(int value) [instance] :3138
void WhileCount::EqualTo(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_EqualTo(int)");
    _equalToMode = true;
    _equalToValue = value;
}

// public int get_GreaterThan() [instance] :3124
int WhileCount::GreaterThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_GreaterThan()");
    return _greaterThanValue;
}

// public void set_GreaterThan(int value) [instance] :3125
void WhileCount::GreaterThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThan(int)");
    _greaterThanMode = true;
    _greaterThanValue = value;
}

// public object get_Items() [instance] :3044
uObject* WhileCount::Items()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :3045
void WhileCount::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public int get_LessThan() [instance] :3111
int WhileCount::LessThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_LessThan()");
    return _lessThanValue;
}

// public void set_LessThan(int value) [instance] :3112
void WhileCount::LessThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThan(int)");
    _lessThanMode = true;
    _lessThanValue = value;
}

// private void OnItemsChanged() [instance] :3055
void WhileCount::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnItemsChanged()");
    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[30/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[29/*Uno.IDisposable*/]));

        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Reassess();
}

// private void Reassess() [instance] :3069
void WhileCount::Reassess()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Reassess()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[2/*object[]*/]);

    if (e != NULL)
        Assess(uPtr(e)->Length());
    else
    {
        ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[30/*Fuse.Reactive.Observable*/]);

        if (obs != NULL)
            Assess(uPtr(obs)->Length());
        else
        {
            ::g::Fuse::Reactive::ArrayMirror* arr = uAs< ::g::Fuse::Reactive::ArrayMirror*>(_items, ::TYPES[70/*Fuse.Reactive.ArrayMirror*/]);

            if (arr != NULL)
                Assess(uPtr(arr)->Length());
        }
    }
}

// public generated WhileCount New() [static] :3015
WhileCount* WhileCount::New2()
{
    WhileCount* obj1 = (WhileCount*)uNew(WhileCount_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class WhileEmpty :3197
// {
static void WhileEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5));
    type->SetFields(37);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEmpty__New3_fn, 0, true, WhileEmpty_typeof(), 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 37;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileEmpty", options);
    type->SetBase(::g::Fuse::Reactive::WhileCount_typeof());
    type->fp_build_ = WhileEmpty_build;
    type->fp_ctor_ = (void*)WhileEmpty__New3_fn;
    type->interface5.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface5.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface5.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface5.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface5.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface5.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface5.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileEmpty() :3199
void WhileEmpty__ctor_5_fn(WhileEmpty* __this)
{
    __this->ctor_5();
}

// public WhileEmpty New() :3199
void WhileEmpty__New3_fn(WhileEmpty** __retval)
{
    *__retval = WhileEmpty::New3();
}

// public WhileEmpty() [instance] :3199
void WhileEmpty::ctor_5()
{
    uStackFrame __("Fuse.Reactive.WhileEmpty", ".ctor()");
    ctor_4();
    EqualTo(0);
}

// public WhileEmpty New() [static] :3199
WhileEmpty* WhileEmpty::New3()
{
    WhileEmpty* obj1 = (WhileEmpty*)uNew(WhileEmpty_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno
// -------------------------------------------------------

// public sealed class WhileNotEmpty :3205
// {
static void WhileNotEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5));
    type->SetFields(37);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNotEmpty__New3_fn, 0, true, WhileNotEmpty_typeof(), 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileNotEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 37;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileNotEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileNotEmpty", options);
    type->SetBase(::g::Fuse::Reactive::WhileCount_typeof());
    type->fp_build_ = WhileNotEmpty_build;
    type->fp_ctor_ = (void*)WhileNotEmpty__New3_fn;
    type->interface5.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface5.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface5.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface5.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface5.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface5.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface5.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Reactive::ListMirror*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileNotEmpty() :3207
void WhileNotEmpty__ctor_5_fn(WhileNotEmpty* __this)
{
    __this->ctor_5();
}

// public WhileNotEmpty New() :3207
void WhileNotEmpty__New3_fn(WhileNotEmpty** __retval)
{
    *__retval = WhileNotEmpty::New3();
}

// public WhileNotEmpty() [instance] :3207
void WhileNotEmpty::ctor_5()
{
    uStackFrame __("Fuse.Reactive.WhileNotEmpty", ".ctor()");
    ctor_4();
    GreaterThan(0);
}

// public WhileNotEmpty New() [static] :3207
WhileNotEmpty* WhileNotEmpty::New3()
{
    WhileNotEmpty* obj1 = (WhileNotEmpty*)uNew(WhileNotEmpty_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
