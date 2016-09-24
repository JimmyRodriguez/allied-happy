// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.35.8/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.GraphicsWorker.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.Thread.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{

// public static class GraphicsWorker :2334
// {
static void GraphicsWorker_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_terminating_, uFieldFlagsStatic,
        ::g::Uno::Threading::Thread_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_thread_, uFieldFlagsStatic,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::GraphicsWorker::_work_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_workerContext_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("Dispatch", NULL, (void*)GraphicsWorker__Dispatch_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
}

uClassType* GraphicsWorker_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.GraphicsWorker", options);
    type->fp_build_ = GraphicsWorker_build;
    return type;
}

// private static extern ObjC.Object CreateContext() :2359
void GraphicsWorker__CreateContext_fn(uObject** __retval)
{
    *__retval = GraphicsWorker::CreateContext();
}

// public static void Dispatch(Uno.Action a) :2336
void GraphicsWorker__Dispatch_fn(uDelegate* a)
{
    GraphicsWorker::Dispatch(a);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :2387
void GraphicsWorker__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    GraphicsWorker::OnWindowClosed(sender, args);
}

// private static void Run() :2393
void GraphicsWorker__Run_fn()
{
    GraphicsWorker::Run();
}

// private static extern void SetCurrentContext(ObjC.Object context) :2365
void GraphicsWorker__SetCurrentContext_fn(uObject* context)
{
    GraphicsWorker::SetCurrentContext(context);
}

// private static void Start() :2370
void GraphicsWorker__Start_fn()
{
    GraphicsWorker::Start();
}

bool GraphicsWorker::_terminating_;
uSStrong< ::g::Uno::Threading::Thread*> GraphicsWorker::_thread_;
uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_work_;
uSStrong<uObject*> GraphicsWorker::_workerContext_;

// private static extern ObjC.Object CreateContext() [static] :2359
uObject* GraphicsWorker::CreateContext()
{
    uStackFrame __("Fuse.GraphicsWorker", "CreateContext()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2 sharegroup:[EAGLContext currentContext].sharegroup] autorelease];
        } ());
        
    }
    
}

// public static void Dispatch(Uno.Action a) [static] :2336
void GraphicsWorker::Dispatch(uDelegate* a)
{
    uStackFrame __("Fuse.GraphicsWorker", "Dispatch(Uno.Action)");
    GraphicsWorker::Start();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_work_), a);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :2387
void GraphicsWorker::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.GraphicsWorker", "OnWindowClosed(object,Uno.EventArgs)");
    GraphicsWorker::_terminating_ = true;
    uPtr(GraphicsWorker::_thread_)->Join();
}

// private static void Run() [static] :2393
void GraphicsWorker::Run()
{
    uStackFrame __("Fuse.GraphicsWorker", "Run()");
    bool ret1;
    GraphicsWorker::SetCurrentContext(GraphicsWorker::_workerContext_);

    while (!GraphicsWorker::_terminating_)
    {
        uAutoReleasePool ____pool;
        uDelegate* a;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_work_), (void**)(&a), &ret1), ret1))
        {
            uPtr(a)->InvokeVoid();
            continue;
        }

        ::g::Uno::Threading::Thread::Sleep(1);
    }

    GraphicsWorker::_workerContext_ = NULL;
}

// private static extern void SetCurrentContext(ObjC.Object context) [static] :2365
void GraphicsWorker::SetCurrentContext(uObject* context)
{
    uStackFrame __("Fuse.GraphicsWorker", "SetCurrentContext(ObjC.Object)");
    @autoreleasepool
    {
        [] (::id context) -> void
        {
            [EAGLContext setCurrentContext: context];
        } (::g::ObjC::Helpers::GetHandle(context));
        
    }
    
}

// private static void Start() [static] :2370
void GraphicsWorker::Start()
{
    uStackFrame __("Fuse.GraphicsWorker", "Start()");

    if (GraphicsWorker::_thread_ != NULL)
        return;

    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)GraphicsWorker__OnWindowClosed_fn));
    GraphicsWorker::_workerContext_ = GraphicsWorker::CreateContext();
    GraphicsWorker::_work_ = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[1/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    GraphicsWorker::_thread_ = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)GraphicsWorker__Run_fn));
    uPtr(GraphicsWorker::_thread_)->Start();
}
// }

}} // ::g::Fuse
