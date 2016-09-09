// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.Android.Blitter.h>
#include <Fuse.Controls.Native.Android.Button.h>
#include <Fuse.Controls.Native.Android.Circle.h>
#include <Fuse.Controls.Native.Android.DrawableViewGroup.h>
#include <Fuse.Controls.Native.Android.FocusChangedListener.h>
#include <Fuse.Controls.Native.Android.FocusManager.h>
#include <Fuse.Controls.Native.Android.GraphicsView.h>
#include <Fuse.Controls.Native.Android.Helpers.h>
#include <Fuse.Controls.Native.Android.InputDispatch.h>
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.JavaMap.h>
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.Android.MotionEvent.h>
#include <Fuse.Controls.Native.Android.NativeViewRenderer.h>
#include <Fuse.Controls.Native.Android.Rectangle.h>
#include <Fuse.Controls.Native.Android.ScrollView.h>
#include <Fuse.Controls.Native.Android.Shape.h>
#include <Fuse.Controls.Native.Android.Slider.h>
#include <Fuse.Controls.Native.Android.SoftKeyboard.h>
#include <Fuse.Controls.Native.Android.SurfaceView.h>
#include <Fuse.Controls.Native.Android.Switch.h>
#include <Fuse.Controls.Native.Android.TextEdit.h>
#include <Fuse.Controls.Native.Android.TextEditRenderer.h>
#include <Fuse.Controls.Native.Android.TextEditRenderHost.h>
#include <Fuse.Controls.Native.Android.TextInput.h>
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.Android.Typeface.h>
#include <Fuse.Controls.Native.Android.TypefaceCache.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.Android.ViewGroup.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Quaternion.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.Vector.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[6];
static uType* TYPES[26];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Blitter :971
// {
// static Blitter() :971
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, _draw_22e0d2d9), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, Blit_v_22e0d2d9_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, Blit_verts_22e0d2d9_1_6_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :971
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :975
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :971
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :971
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :971
void Blitter::ctor_()
{
    uStackFrame __("Fuse.Controls.Native.Android.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :975
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Controls.Native.Android.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_22e0d2d9.BlendEnabled(true);
    _draw_22e0d2d9.CullFace(0);
    _draw_22e0d2d9.BlendSrcAlpha(7);
    _draw_22e0d2d9.BlendDstRgb(3);
    _draw_22e0d2d9.Use();
    _draw_22e0d2d9.Attrib1(0, 2, Blit_v_22e0d2d9_1_7_1, 8, 0);
    _draw_22e0d2d9.Uniform2(1, size);
    _draw_22e0d2d9.Uniform2(2, pos);
    _draw_22e0d2d9.Uniform12(3, localToClipTransform);
    _draw_22e0d2d9.Sampler2(4, vt);
    _draw_22e0d2d9.DrawArrays(uPtr(Blit_verts_22e0d2d9_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :971
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Controls.Native.Android.Blitter", "init_DrawCalls()");
    uArray* verts_22e0d2d9_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_22e0d2d9_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_22e0d2d9_1_6_0), 0);
    Blit_verts_22e0d2d9_1_6_5 = verts_22e0d2d9_1_6_0;
    _draw_22e0d2d9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::Blitter5bfe9814());
}

// public generated Blitter New() [static] :971
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class Button :11
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(6);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, Button_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)Button__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New1_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__set_Text_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public Button() :13
void Button__ctor_2_fn(Button* __this)
{
    __this->ctor_2();
}

// private static Java.Object Create() :21
void Button__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Button::Create();
}

// public Button New() :13
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// private static void SetText(Java.Object handle, string text) :27
void Button__SetText_fn(::g::Java::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public void set_Text(string value) :17
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public Button() [instance] :13
void Button::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", ".ctor()");
    ctor_1(Button::Create());
}

// public void set_Text(string value) [instance] :17
void Button::Text(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", "set_Text(string)");
    Button::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :21
::g::Java::Object* Button::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create32", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public Button New() [static] :13
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static void SetText(Java.Object handle, string text) [static] :27
void Button::SetText(::g::Java::Object* handle, uString* text)
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", "SetText(Java.Object,string)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText33", "(Ljava/lang/Object;Ljava/lang/String;)V");
        jstring _text = JniHelper::UnoToJavaString(text);
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),_text);
        
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Circle :45
// {
static void Circle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Circle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Circle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Circle_type, interface2),
        ::g::Fuse::Controls::Native::ICircleView_typeof(), offsetof(Circle_type, interface3));
    type->SetFields(9,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _endAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _startAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _useAngle), 0);
}

Circle_type* Circle_typeof()
{
    static uSStrong<Circle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(Circle_type);
    type = (Circle_type*)uClassType::New("Fuse.Controls.Native.Android.Circle", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::Shape_typeof());
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Circle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_StartAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn;
    type->interface3.fp_set_EndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn;
    type->interface3.fp_set_UseAngle = (void(*)(uObject*, bool*))Circle__FuseControlsNativeICircleViewset_UseAngle_fn;
    type->interface3.fp_set_EffectiveEndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Circle() :45
void Circle__ctor_2_fn(Circle* __this)
{
    __this->ctor_2();
}

// private void Fuse.Controls.Native.ICircleView.set_EffectiveEndAngleDegrees(float value) :78
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value)
{
}

// private void Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float value) :61
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float)");
    float value_ = *value;
    __this->_endAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float value) :51
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float)");
    float value_ = *value;
    __this->_startAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_UseAngle(bool value) :71
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_UseAngle(bool)");
    bool value_ = *value;
    __this->_useAngle = value_;
    __this->OnShapeChanged();
}

// public generated Circle New() :45
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float startAngle, float endAngle) :86
void Circle__UpdateShapeDrawable1_fn(Circle* __this, ::g::Java::Object* handle, bool* useAngle, float* startAngle, float* endAngle)
{
    __this->UpdateShapeDrawable1(handle, *useAngle, *startAngle, *endAngle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :80
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "UpdateShapeDrawable(Java.Object,float)");
    __this->UpdateShapeDrawable1(handle, __this->_useAngle, __this->_startAngle, __this->_endAngle);
}

// public generated Circle() [instance] :45
void Circle::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", ".ctor()");
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float startAngle, float endAngle) [instance] :86
void Circle::UpdateShapeDrawable1(::g::Java::Object* handle, bool useAngle, float startAngle, float endAngle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "UpdateShapeDrawable(Java.Object,bool,float,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable134", "(Ljava/lang/Object;Ljava/lang/Object;ZFF)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jboolean)useAngle,(jfloat)startAngle,(jfloat)endAngle);
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Circle New() [static] :45
Circle* Circle::New1()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class DrawableViewGroup :106
// {
static void DrawableViewGroup_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Native::Android::View_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DrawableViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(DrawableViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(DrawableViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof(), offsetof(DrawableViewGroup_type, interface3),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(DrawableViewGroup_type, interface4),
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(DrawableViewGroup_type, interface5));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _isEnabled), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _nativeViewRenderer), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _offscreenParent), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DrawableViewGroup__New1_fn, 0, true, DrawableViewGroup_typeof(), 0));
}

DrawableViewGroup_type* DrawableViewGroup_typeof()
{
    static uSStrong<DrawableViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(DrawableViewGroup);
    options.TypeSize = sizeof(DrawableViewGroup_type);
    type = (DrawableViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.DrawableViewGroup", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = DrawableViewGroup_build;
    type->fp_ctor_ = (void*)DrawableViewGroup__New1_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))DrawableViewGroup__Dispose_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))DrawableViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_EnableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn;
    type->interface3.fp_DisableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn;
    type->interface5.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface5.fp_Invalidate = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DrawableViewGroup__Dispose_fn;
    return type;
}

// public DrawableViewGroup() :112
void DrawableViewGroup__ctor_1_fn(DrawableViewGroup* __this)
{
    __this->ctor_1();
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :188
void DrawableViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    DrawableViewGroup::AddView(parentHandle, childHandle);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :196
void DrawableViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index)
{
    DrawableViewGroup::AddView1(parentHandle, childHandle, *index);
}

// private static Java.Object Create() :221
void DrawableViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = DrawableViewGroup::Create();
}

// public override sealed void Dispose() :122
void DrawableViewGroup__Dispose_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :151
void DrawableViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View,float2)");
    ::g::Uno::Float2 size_ = *size;
    DrawableViewGroup::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :177
void DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn(DrawableViewGroup* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :182
void DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Fuse.Controls.Native.INativeViewRenderer*/]));
}

// private void Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen() :167
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen()");

    if (__this->_isEnabled)
    {
        DrawableViewGroup::RemoveView(__this->_offscreenParent, __this->_container);
        DrawableViewGroup::AddView(__this->Handle(), __this->_container);
        __this->_isEnabled = false;
    }
}

// private void Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen() :157
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen()");

    if (!__this->_isEnabled)
    {
        DrawableViewGroup::RemoveView(__this->Handle(), __this->_container);
        DrawableViewGroup::AddView(__this->_offscreenParent, __this->_container);
        __this->_isEnabled = true;
    }
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :130
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn(DrawableViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]);
    uPtr(x)->Parent((uObject*)__this);
    DrawableViewGroup::AddView(__this->_container, x->Handle());
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :137
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn(DrawableViewGroup* __this, uObject* child, int* index)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView,int)");
    int index_ = *index;
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]);
    uPtr(x)->Parent((uObject*)__this);
    DrawableViewGroup::AddView1(__this->_container, x->Handle(), index_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :144
void DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn(DrawableViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]);
    DrawableViewGroup::RemoveView(__this->_container, uPtr(x)->Handle());
    x->Parent(NULL);
}

// private static void HideOffscreenParent(Java.Object handle) :213
void DrawableViewGroup__HideOffscreenParent_fn(::g::Java::Object* handle)
{
    DrawableViewGroup::HideOffscreenParent(handle);
}

// public DrawableViewGroup New() :112
void DrawableViewGroup__New1_fn(DrawableViewGroup** __retval)
{
    *__retval = DrawableViewGroup::New1();
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :204
void DrawableViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    DrawableViewGroup::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :233
void DrawableViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    DrawableViewGroup::SetChildSize(handle, *w, *h);
}

// public DrawableViewGroup() [instance] :112
void DrawableViewGroup::ctor_1()
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", ".ctor()");
    ctor_(DrawableViewGroup::Create());
    _container = DrawableViewGroup::Create();
    _offscreenParent = DrawableViewGroup::Create();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::NativeViewRenderer::New1(_container);
    DrawableViewGroup::AddView(Handle(), _offscreenParent);
    DrawableViewGroup::AddView(Handle(), _container);
    DrawableViewGroup::HideOffscreenParent(_offscreenParent);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :188
void DrawableViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "AddView(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView35", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :196
void DrawableViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "AddView(Java.Object,Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView136", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)index);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :221
::g::Java::Object* DrawableViewGroup::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create37", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void HideOffscreenParent(Java.Object handle) [static] :213
void DrawableViewGroup::HideOffscreenParent(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "HideOffscreenParent(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideOffscreenParent38", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public DrawableViewGroup New() [static] :112
DrawableViewGroup* DrawableViewGroup::New1()
{
    DrawableViewGroup* obj1 = (DrawableViewGroup*)uNew(DrawableViewGroup_typeof());
    obj1->ctor_1();
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :204
void DrawableViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "RemoveView(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView39", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :233
void DrawableViewGroup::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "SetChildSize(Java.Object,int,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize40", "(Ljava/lang/Object;II)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)w,(jint)h);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class FocusChangedListener :2055
// {
static void FocusChangedListener_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _callback), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _listener), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _view), 0);
}

FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Controls.Native.Android.FocusChangedListener", options);
    type->fp_build_ = FocusChangedListener_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FocusChangedListener__Dispose_fn;
    return type;
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) :2062
void FocusChangedListener__ctor__fn(FocusChangedListener* __this, ::g::Java::Object* view, uDelegate* callback)
{
    __this->ctor_(view, callback);
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) :2077
void FocusChangedListener__AddHandler_fn(::g::Java::Object* view, uDelegate* callback, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) :2107
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle)
{
    FocusChangedListener::ClearListener(viewHandle);
}

// private Java.Object Create() :2090
void FocusChangedListener__Create_fn(FocusChangedListener* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Create();
}

// public void Dispose() :2084
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this)
{
    __this->Dispose();
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) :2062
void FocusChangedListener__New1_fn(::g::Java::Object* view, uDelegate* callback, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New1(view, callback);
}

// private void OnFocusChange(bool hasFocus) :2072
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus)
{
    __this->OnFocusChange(*hasFocus);
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) :2101
void FocusChangedListener__SetListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    FocusChangedListener::SetListener(viewHandle, listenerHandle);
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) [instance] :2062
void FocusChangedListener::ctor_(::g::Java::Object* view, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", ".ctor(Java.Object,Uno.Action<Java.Object, bool>)");
    _view = view;
    _callback = callback;
    _listener = Create();
    FocusChangedListener::SetListener(_view, _listener);
}

// private Java.Object Create() [instance] :2090
::g::Java::Object* FocusChangedListener::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create42", "(Ljava/lang/Object;)Ljava/lang/Object;");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_this_);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public void Dispose() [instance] :2084
void FocusChangedListener::Dispose()
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "Dispose()");
    FocusChangedListener::ClearListener(_view);
}

// private void OnFocusChange(bool hasFocus) [instance] :2072
void FocusChangedListener::OnFocusChange(bool hasFocus)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "OnFocusChange(bool)");
    uPtr(_callback)->Invoke(2, (::g::Java::Object*)_view, uCRef(hasFocus));
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :2077
uObject* FocusChangedListener::AddHandler(::g::Java::Object* view, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "AddHandler(Java.Object,Uno.Action<Java.Object, bool>)");
    return (uObject*)FocusChangedListener::New1(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) [static] :2107
void FocusChangedListener::ClearListener(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "ClearListener(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearListener41", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :2062
FocusChangedListener* FocusChangedListener::New1(::g::Java::Object* view, uDelegate* callback)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_(view, callback);
    return obj1;
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :2101
void FocusChangedListener::SetListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "SetListener(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetListener44", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(listenerHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)listenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class FocusManager :1983
// {
// static FocusManager() :1983
static void FocusManager__cctor__fn(uType* __type)
{
    FocusManager::Singleton_ = FocusManager::New1();
}

static void FocusManager_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, HideKeyboardContext), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, HideKeyboardWindowToken), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, LoseFocus), 0,
        FocusManager_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::FocusManager::Singleton_, uFieldFlagsStatic);
}

uType* FocusManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FocusManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.FocusManager", options);
    type->fp_build_ = FocusManager_build;
    type->fp_ctor_ = (void*)FocusManager__New1_fn;
    type->fp_cctor_ = FocusManager__cctor__fn;
    return type;
}

// public generated FocusManager() :1983
void FocusManager__ctor__fn(FocusManager* __this)
{
    __this->ctor_();
}

// public void CompleteFocusLoss() :1991
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this)
{
    __this->CompleteFocusLoss();
}

// public static Java.Object GetContext(Java.Object viewHandle) :2020
void FocusManager__GetContext_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetContext(viewHandle);
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) :2026
void FocusManager__GetWindowToken_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetWindowToken(viewHandle);
}

// private static bool HasFocus(Java.Object viewHandle) :2008
void FocusManager__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = FocusManager::HasFocus(viewHandle);
}

// public generated FocusManager New() :1983
void FocusManager__New1_fn(FocusManager** __retval)
{
    *__retval = FocusManager::New1();
}

// private static void RequestRootViewFocus(Java.Object viewHandle) :2014
void FocusManager__RequestRootViewFocus_fn(::g::Java::Object* viewHandle)
{
    FocusManager::RequestRootViewFocus(viewHandle);
}

uSStrong<FocusManager*> FocusManager::Singleton_;

// public generated FocusManager() [instance] :1983
void FocusManager::ctor_()
{
}

// public void CompleteFocusLoss() [instance] :1991
void FocusManager::CompleteFocusLoss()
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "CompleteFocusLoss()");

    if (LoseFocus != NULL)
    {
        if (FocusManager::HasFocus(LoseFocus))
            FocusManager::RequestRootViewFocus(LoseFocus);

        LoseFocus = NULL;
    }

    if (HideKeyboardContext != NULL)
    {
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::HideKeyboard(HideKeyboardContext, HideKeyboardWindowToken);
        HideKeyboardContext = NULL;
    }
}

// public static Java.Object GetContext(Java.Object viewHandle) [static] :2020
::g::Java::Object* FocusManager::GetContext(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "GetContext(Java.Object)");
    FocusManager_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetContext45", "(Ljava/lang/Object;)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) [static] :2026
::g::Java::Object* FocusManager::GetWindowToken(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "GetWindowToken(Java.Object)");
    FocusManager_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWindowToken46", "(Ljava/lang/Object;)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :2008
bool FocusManager::HasFocus(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "HasFocus(Java.Object)");
    FocusManager_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus47", "(Ljava/lang/Object;)Z");
        jboolean __jresult = _jni->CallStaticBooleanMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated FocusManager New() [static] :1983
FocusManager* FocusManager::New1()
{
    FocusManager* obj1 = (FocusManager*)uNew(FocusManager_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void RequestRootViewFocus(Java.Object viewHandle) [static] :2014
void FocusManager::RequestRootViewFocus(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "RequestRootViewFocus(Java.Object)");
    FocusManager_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestRootViewFocus48", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public abstract extern class GraphicsView :251
// {
static void GraphicsView_build(uType* type)
{
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsView_type, interface2));
    type->SetFields(6,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _eglSurface), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _nativeWindow), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _surfaceHandle), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("BeginDraw", NULL, (void*)GraphicsView__BeginDraw_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("EndDraw", NULL, (void*)GraphicsView__EndDraw_fn, 0, false, uVoid_typeof(), 0));
}

GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.Native.Android.GraphicsView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = GraphicsView_build;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*))GraphicsView__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsView__EndDraw_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected GraphicsView(Java.Object handle) :253
void GraphicsView__ctor_1_fn(GraphicsView* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// public void BeginDraw(int2 size) :288
void GraphicsView__BeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size)
{
    __this->BeginDraw(*size);
}

// protected void DestroySurface() :276
void GraphicsView__DestroySurface_fn(GraphicsView* __this)
{
    __this->DestroySurface();
}

// public void EndDraw() :309
void GraphicsView__EndDraw_fn(GraphicsView* __this)
{
    __this->EndDraw();
}

// protected void SetSurface(Java.Object surfaceHandle) :261
void GraphicsView__SetSurface_fn(GraphicsView* __this, ::g::Java::Object* surfaceHandle)
{
    __this->SetSurface(surfaceHandle);
}

// protected GraphicsView(Java.Object handle) [instance] :253
void GraphicsView::ctor_1(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", ".ctor(Java.Object)");
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    ctor_(handle);
}

// public void BeginDraw(int2 size) [instance] :288
void GraphicsView::BeginDraw(::g::Uno::Int2 size)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", "BeginDraw(int2)");

    if (::g::Uno::IntPtr::op_Equality(_eglSurface, ::g::Uno::IntPtr::Zero_))
        return;

    double t;
    GLHelper::MakeCurrent( GLHelper::GetSurfaceContext(), (EGLSurface)_eglSurface );
    ::g::OpenGL::GL::Viewport(0, 0, size.X, size.Y);
}

// protected void DestroySurface() [instance] :276
void GraphicsView::DestroySurface()
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", "DestroySurface()");
    GLHelper::SwapBackToBackgroundSurface( (EGLSurface)_eglSurface );
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    ANativeWindow_release( (ANativeWindow*)_nativeWindow );
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    _surfaceHandle = NULL;
}

// public void EndDraw() [instance] :309
void GraphicsView::EndDraw()
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", "EndDraw()");
    double t;
    GLHelper::SwapBuffers( _eglSurface );
}

// protected void SetSurface(Java.Object surfaceHandle) [instance] :261
void GraphicsView::SetSurface(::g::Java::Object* surfaceHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", "SetSurface(Java.Object)");

    if (_surfaceHandle != NULL)
        ;

    _surfaceHandle = surfaceHandle;
    _nativeWindow = GLHelper::GetANativeWindowFromSurface(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(_surfaceHandle, ::TYPES[5/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    EGLSurface tempSurface;
    GLHelper::CreateNewSurfaceAndMakeCurrent( (ANativeWindow*)_nativeWindow, tempSurface);
    _eglSurface = tempSurface;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal static class Helpers :332
// {
static void Helpers_build(uType* type)
{
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// public static float4 DecodeColor(int color) :344
void Helpers__DecodeColor_fn(int* color, ::g::Uno::Float4* __retval)
{
    *__retval = Helpers::DecodeColor(*color);
}

// public static int EncodeColor(float4 c) :334
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static float4 DecodeColor(int color) [static] :344
::g::Uno::Float4 Helpers::DecodeColor(int color)
{
    uStackFrame __("Fuse.Controls.Native.Android.Helpers", "DecodeColor(int)");
    int a = color >> 24;
    int r = (color >> 16) & 255;
    int g = (color >> 8) & 255;
    int b = color & 255;
    return ::g::Uno::Float4__New2((float)r / 255.0f, (float)g / 255.0f, (float)b / 255.0f, (float)a / 255.0f);
}

// public static int EncodeColor(float4 c) [static] :334
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    uStackFrame __("Fuse.Controls.Native.Android.Helpers", "EncodeColor(float4)");
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal static extern class InputDispatch :369
// {
// static InputDispatch() :369
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[7/*Uno.Collections.HashSet<int>*/]));
}

static void InputDispatch_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof());
    ::TYPES[7] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[8] = uObject_typeof();
    ::TYPES[9] = ::g::Fuse::Visual_typeof();
    ::TYPES[10] = ::g::Fuse::IViewport_typeof();
    ::TYPES[11] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_activePointers_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_listeners_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_touchListenerHandle_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::Android::JavaMap_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_viewVisualMap_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddListener(Fuse.Controls.Native.Android.View view, Fuse.Visual owner) :511
void InputDispatch__AddListener_fn(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener(view, owner);
}

// private static void ClearOnTouchListener(Java.Object viewHandle) :545
void InputDispatch__ClearOnTouchListener_fn(::g::Java::Object* viewHandle)
{
    InputDispatch::ClearOnTouchListener(viewHandle);
}

// private static Java.Object CreateTouchListener() :529
void InputDispatch__CreateTouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::CreateTouchListener();
}

// private static void DeactivatePointer(int pointerId) :442
void InputDispatch__DeactivatePointer_fn(int* pointerId)
{
    InputDispatch::DeactivatePointer(*pointerId);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :523
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static bool IsPointerActive(int pointerId) :432
void InputDispatch__IsPointerActive_fn(int* pointerId, bool* __retval)
{
    *__retval = InputDispatch::IsPointerActive(*pointerId);
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) :381
void InputDispatch__OnTouch_fn(::g::Java::Object* view, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = InputDispatch::OnTouch(view, motionEvent);
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) :396
void InputDispatch__RaiseEvent_fn(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(visual, viewHandle, motionEvent);
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) :463
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(visual, data);
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) :448
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(visual, data);
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) :475
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(visual, data);
}

// public static void RemoveListener(Fuse.Controls.Native.Android.View view) :517
void InputDispatch__RemoveListener_fn(::g::Fuse::Controls::Native::Android::View* view)
{
    InputDispatch::RemoveListener(view);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) :539
void InputDispatch__SetOnTouchListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch::SetOnTouchListener(viewHandle, listenerHandle);
}

// private static Java.Object get_TouchListener() :378
void InputDispatch__get_TouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::TouchListener();
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() :508
void InputDispatch__get_ViewVisualMap_fn(::g::Fuse::Controls::Native::Android::JavaMap** __retval)
{
    *__retval = InputDispatch::ViewVisualMap();
}

uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong< ::g::Java::Object*> InputDispatch::_touchListenerHandle_;
uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*> InputDispatch::_viewVisualMap_;

// public static void AddListener(Fuse.Controls.Native.Android.View view, Fuse.Visual owner) [static] :511
void InputDispatch::AddListener(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "AddListener(Fuse.Controls.Native.Android.View,Fuse.Visual)");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Put1(uPtr(view)->Handle(), owner);
    InputDispatch::SetOnTouchListener(view->Handle(), InputDispatch::TouchListener());
}

// private static void ClearOnTouchListener(Java.Object viewHandle) [static] :545
void InputDispatch::ClearOnTouchListener(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "ClearOnTouchListener(Java.Object)");
    InputDispatch_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearOnTouchListener49", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateTouchListener() [static] :529
::g::Java::Object* InputDispatch::CreateTouchListener()
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "CreateTouchListener()");
    InputDispatch_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTouchListener50", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void DeactivatePointer(int pointerId) [static] :442
void InputDispatch::DeactivatePointer(int pointerId)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "DeactivatePointer(int)");
    InputDispatch_typeof()->Init();
    bool ret3;
    bool ret4;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret3), ret3))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret4);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :523
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "FindRoot(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static bool IsPointerActive(int pointerId) [static] :432
bool InputDispatch::IsPointerActive(int pointerId)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "IsPointerActive(int)");
    InputDispatch_typeof()->Init();
    bool ret5;
    bool ret6;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret5), ret5))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret6);
        return false;
    }

    return true;
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) [static] :381
bool InputDispatch::OnTouch(::g::Java::Object* view, ::g::Java::Object* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "OnTouch(Java.Object,Java.Object)");
    InputDispatch_typeof()->Init();

    if (uPtr(InputDispatch::ViewVisualMap())->ContainsKey(view))
    {
        ::g::Fuse::Controls::Native::Android::MotionEvent* me = ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent);
        ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(InputDispatch::ViewVisualMap())->Get(view), ::TYPES[9/*Fuse.Visual*/]);

        if (visual == NULL)
            return false;

        InputDispatch::RaiseEvent(visual, view, me);
    }

    return false;
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) [static] :396
void InputDispatch::RaiseEvent(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseEvent(Fuse.Visual,Java.Object,Fuse.Controls.Native.Android.MotionEvent)");
    InputDispatch_typeof()->Init();
    int action = uPtr(motionEvent)->ActionMasked();
    uArray* data = motionEvent->PointerEventDataForView(viewHandle, ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(visual)->Viewport()), ::TYPES[10/*Fuse.IViewport*/])));

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseReleased(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int pointerMask = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexMask();
            int pointerShit = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexShift();
            int pointerIndex = (uPtr(motionEvent)->Action() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :463
void InputDispatch::RaiseMoved(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseMoved(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :448
void InputDispatch::RaisePressed(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaisePressed(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    if (InputDispatch::IsPointerActive(uPtr(data)->PointIndex))
        return;

    try
    {
        ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :475
void InputDispatch::RaiseReleased(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseReleased(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();
    InputDispatch::DeactivatePointer(uPtr(data)->PointIndex);

    try
    {
        ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Controls.Native.Android.View view) [static] :517
void InputDispatch::RemoveListener(::g::Fuse::Controls::Native::Android::View* view)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RemoveListener(Fuse.Controls.Native.Android.View)");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Remove(uPtr(view)->Handle());
    InputDispatch::ClearOnTouchListener(view->Handle());
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :539
void InputDispatch::SetOnTouchListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "SetOnTouchListener(Java.Object,Java.Object)");
    InputDispatch_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOnTouchListener52", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(listenerHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)listenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object get_TouchListener() [static] :378
::g::Java::Object* InputDispatch::TouchListener()
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "get_TouchListener()");
    InputDispatch_typeof()->Init();
    ::g::Java::Object* ind1 = InputDispatch::_touchListenerHandle();
    return (ind1 != NULL) ? ind1 : (::g::Java::Object*)(InputDispatch::_touchListenerHandle() = InputDispatch::CreateTouchListener());
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() [static] :508
::g::Fuse::Controls::Native::Android::JavaMap* InputDispatch::ViewVisualMap()
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "get_ViewVisualMap()");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Controls::Native::Android::JavaMap* ind2 = InputDispatch::_viewVisualMap();
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Controls::Native::Android::JavaMap*)(InputDispatch::_viewVisualMap() = ::g::Fuse::Controls::Native::Android::JavaMap::New1());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal abstract extern interface IViewParent :2824
// {
uInterfaceType* IViewParent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.Android.IViewParent", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class JavaMap :554
// {
static void JavaMap_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::JavaMap, _handle), 0);
}

uType* JavaMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JavaMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.JavaMap", options);
    type->fp_build_ = JavaMap_build;
    type->fp_ctor_ = (void*)JavaMap__New1_fn;
    return type;
}

// public JavaMap() :558
void JavaMap__ctor__fn(JavaMap* __this)
{
    __this->ctor_();
}

// public bool ContainsKey(Java.Object key) :573
void JavaMap__ContainsKey_fn(JavaMap* __this, ::g::Java::Object* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) :606
void JavaMap__ContainsKey1_fn(::g::Java::Object* handle, ::g::Java::Object* key, bool* __retval)
{
    *__retval = JavaMap::ContainsKey1(handle, key);
}

// private static Java.Object Create() :584
void JavaMap__Create_fn(::g::Java::Object** __retval)
{
    *__retval = JavaMap::Create();
}

// public object Get(Java.Object key) :578
void JavaMap__Get_fn(JavaMap* __this, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = __this->Get(key);
}

// private static object Get(Java.Object handle, Java.Object key) :614
void JavaMap__Get1_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = JavaMap::Get1(handle, key);
}

// public JavaMap New() :558
void JavaMap__New1_fn(JavaMap** __retval)
{
    *__retval = JavaMap::New1();
}

// private static void Put(Java.Object handle, Java.Object key, object value) :590
void JavaMap__Put_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(handle, key, value);
}

// public void Put(Java.Object key, object value) :563
void JavaMap__Put1_fn(JavaMap* __this, ::g::Java::Object* key, uObject* value)
{
    __this->Put1(key, value);
}

// public void Remove(Java.Object key) :568
void JavaMap__Remove_fn(JavaMap* __this, ::g::Java::Object* key)
{
    __this->Remove(key);
}

// private static void Remove(Java.Object handle, Java.Object key) :598
void JavaMap__Remove1_fn(::g::Java::Object* handle, ::g::Java::Object* key)
{
    JavaMap::Remove1(handle, key);
}

// public JavaMap() [instance] :558
void JavaMap::ctor_()
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", ".ctor()");
    _handle = JavaMap::Create();
}

// public bool ContainsKey(Java.Object key) [instance] :573
bool JavaMap::ContainsKey(::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "ContainsKey(Java.Object)");
    return JavaMap::ContainsKey1(_handle, key);
}

// public object Get(Java.Object key) [instance] :578
uObject* JavaMap::Get(::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Get(Java.Object)");
    return JavaMap::Get1(_handle, key);
}

// public void Put(Java.Object key, object value) [instance] :563
void JavaMap::Put1(::g::Java::Object* key, uObject* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Put(Java.Object,object)");
    JavaMap::Put(_handle, key, value);
}

// public void Remove(Java.Object key) [instance] :568
void JavaMap::Remove(::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Remove(Java.Object)");
    JavaMap::Remove1(_handle, key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) [static] :606
bool JavaMap::ContainsKey1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "ContainsKey(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ContainsKey153", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        jboolean __jresult = _jni->CallStaticBooleanMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(key==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)key, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create() [static] :584
::g::Java::Object* JavaMap::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create54", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static object Get(Java.Object handle, Java.Object key) [static] :614
uObject* JavaMap::Get1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Get(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Get155", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(key==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)key, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(__jresult);
        ::g::Android::Base::JNI::CheckException();
        __result;
    }
    
}

// public JavaMap New() [static] :558
JavaMap* JavaMap::New1()
{
    JavaMap* obj1 = (JavaMap*)uNew(JavaMap_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Put(Java.Object handle, Java.Object key, object value) [static] :590
void JavaMap::Put(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Put(Java.Object,Java.Object,object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Put56", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
        jobject _value = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(value);
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(key==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)key, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),_value);
        
        if (_value!=NULL) { _jni->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Remove(Java.Object handle, Java.Object key) [static] :598
void JavaMap::Remove1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Remove(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Remove157", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(key==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)key, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public abstract extern class LeafView :813
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction("Measure", NULL, (void*)LeafView__Measure_fn, 0, false, ::g::Uno::Float2_typeof(), 2, ::g::Fuse::LayoutParams_typeof(), ::g::Uno::Float_typeof()));
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.Android.LeafView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = LeafView_build;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected LeafView(Java.Object handle) :815
void LeafView__ctor_1_fn(LeafView* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// private static int GetMeasuredHeight(Java.Object handle) :840
void LeafView__GetMeasuredHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LeafView::GetMeasuredHeight(handle);
}

// private static int GetMeasuredWidth(Java.Object handle) :834
void LeafView__GetMeasuredWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LeafView::GetMeasuredWidth(handle);
}

// public float2 Measure(Fuse.LayoutParams lp, float density) :817
void LeafView__Measure_fn(LeafView* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(*lp, *density);
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) :825
void LeafView__Measure1_fn(::g::Java::Object* handle, int* w, int* h, bool* hasX, bool* hasY)
{
    LeafView::Measure1(handle, *w, *h, *hasX, *hasY);
}

// protected LeafView(Java.Object handle) [instance] :815
void LeafView::ctor_1(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", ".ctor(Java.Object)");
    ctor_(handle);
}

// public float2 Measure(Fuse.LayoutParams lp, float density) [instance] :817
::g::Uno::Float2 LeafView::Measure(::g::Fuse::LayoutParams lp, float density)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", "Measure(Fuse.LayoutParams,float)");
    ::g::Fuse::LayoutParams lp_ = lp;
    float density_ = density;
    LeafView::Measure1(Handle(), (int)(lp_.X() * density_), (int)(lp_.Y() * density_), lp_.HasX(), lp_.HasY());
    ::g::Uno::Float2 res = ::g::Uno::Float2__New2((float)LeafView::GetMeasuredWidth(Handle()) / density_, (float)LeafView::GetMeasuredHeight(Handle()) / density_);
    return res;
}

// private static int GetMeasuredHeight(Java.Object handle) [static] :840
int LeafView::GetMeasuredHeight(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", "GetMeasuredHeight(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredHeight58", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetMeasuredWidth(Java.Object handle) [static] :834
int LeafView::GetMeasuredWidth(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", "GetMeasuredWidth(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredWidth59", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) [static] :825
void LeafView::Measure1(::g::Java::Object* handle, int w, int h, bool hasX, bool hasY)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", "Measure(Java.Object,int,int,bool,bool)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Measure160", "(Ljava/lang/Object;IIZZ)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)w,(jint)h,(jboolean)hasX,(jboolean)hasY);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class MotionEvent :623
// {
static void MotionEvent_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::MotionEvent, _handle), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Action", NULL, (void*)MotionEvent__get_Action_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ActionMasked", NULL, (void*)MotionEvent__get_ActionMasked_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_EventTime", NULL, (void*)MotionEvent__get_EventTime_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("GetPointerId", NULL, (void*)MotionEvent__GetPointerId_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPosition", NULL, (void*)MotionEvent__GetPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)MotionEvent__New1_fn, 0, true, MotionEvent_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("get_PointerCount", NULL, (void*)MotionEvent__get_PointerCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("PointerEventDataForView", NULL, (void*)MotionEvent__PointerEventDataForView_fn, 0, false, ::g::Fuse::Input::PointerEventData_typeof()->Array(), 2, ::g::Java::Object_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_PointerIndexMask", NULL, (void*)MotionEvent__get_PointerIndexMask_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_PointerIndexShift", NULL, (void*)MotionEvent__get_PointerIndexShift_fn, 0, true, ::g::Uno::Int_typeof(), 0));
}

uType* MotionEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.MotionEvent", options);
    type->fp_build_ = MotionEvent_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))MotionEvent__Equals_fn;
    return type;
}

// public MotionEvent(Java.Object handle) :628
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public int get_Action() :645
void MotionEvent__get_Action_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->Action();
}

// public int get_ActionMasked() :640
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->ActionMasked();
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) :796
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval)
{
    *__retval = MotionEvent::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj) :686
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "Equals(object)");

    if (uIs(obj, MotionEvent_typeof()))
        return *__retval = MotionEvent::Compare(__this->_handle, uPtr(uCast<MotionEvent*>(obj, MotionEvent_typeof()))->_handle), void();
    else
        return *__retval = false, void();
}

// public long get_EventTime() :650
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval)
{
    *__retval = __this->EventTime();
}

// private int GetAction(Java.Object handle) :720
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetAction(handle);
}

// private int GetActionMasked(Java.Object handle) :732
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetActionMasked(handle);
}

// private long GetEventTime(Java.Object handle) :738
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval)
{
    *__retval = __this->GetEventTime(handle);
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) :698
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLocationOnScreen(viewHandle);
}

// private int GetLocationOnScreenX(Java.Object viewHandle) :704
void MotionEvent__GetLocationOnScreenX_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval)
{
    *__retval = __this->GetLocationOnScreenX(viewHandle);
}

// private int GetLocationOnScreenY(Java.Object viewHandle) :712
void MotionEvent__GetLocationOnScreenY_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval)
{
    *__retval = __this->GetLocationOnScreenY(viewHandle);
}

// private int GetPointerCount(Java.Object handle) :744
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetPointerCount(handle);
}

// public int GetPointerId(int pointerIndex) :633
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId(*pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) :726
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId1(handle, *pointerIndex);
}

// private static int GetPointerIndexMask() :784
void MotionEvent__GetPointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexMask();
}

// private static int GetPointerIndexShift() :790
void MotionEvent__GetPointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexShift();
}

// public float2 GetPosition(int pointerIndex) :658
void MotionEvent__GetPosition_fn(MotionEvent* __this, int* pointerIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPosition(*pointerIndex);
}

// private float GetX(Java.Object handle, int pointerIndex) :750
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetX(handle, *pointerIndex);
}

// private float GetY(Java.Object handle, int pointerIndex) :756
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetY(handle, *pointerIndex);
}

// public MotionEvent New(Java.Object handle) :628
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval)
{
    *__retval = MotionEvent::New1(handle);
}

// public int get_PointerCount() :655
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->PointerCount();
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object view, float pointDensity) :663
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* view, float* pointDensity, uArray** __retval)
{
    *__retval = __this->PointerEventDataForView(view, *pointDensity);
}

// public static int get_PointerIndexMask() :775
void MotionEvent__get_PointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexMask();
}

// public static int get_PointerIndexShift() :780
void MotionEvent__get_PointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexShift();
}

// public MotionEvent(Java.Object handle) [instance] :628
void MotionEvent::ctor_(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", ".ctor(Java.Object)");
    _handle = handle;
}

// public int get_Action() [instance] :645
int MotionEvent::Action()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_Action()");
    return GetAction(_handle);
}

// public int get_ActionMasked() [instance] :640
int MotionEvent::ActionMasked()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_ActionMasked()");
    return GetActionMasked(_handle);
}

// public long get_EventTime() [instance] :650
int64_t MotionEvent::EventTime()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_EventTime()");
    return GetEventTime(_handle);
}

// private int GetAction(Java.Object handle) [instance] :720
int MotionEvent::GetAction(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetAction(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAction62", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetActionMasked(Java.Object handle) [instance] :732
int MotionEvent::GetActionMasked(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetActionMasked(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActionMasked63", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private long GetEventTime(Java.Object handle) [instance] :738
int64_t MotionEvent::GetEventTime(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetEventTime(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEventTime64", "(Ljava/lang/Object;Ljava/lang/Object;)J");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jlong __jresult = _jni->CallStaticLongMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) [instance] :698
::g::Uno::Float2 MotionEvent::GetLocationOnScreen(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetLocationOnScreen(Java.Object)");
    return ::g::Uno::Float2__New2((float)GetLocationOnScreenX(viewHandle), (float)GetLocationOnScreenY(viewHandle));
}

// private int GetLocationOnScreenX(Java.Object viewHandle) [instance] :704
int MotionEvent::GetLocationOnScreenX(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetLocationOnScreenX(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreenX65", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,_this_,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetLocationOnScreenY(Java.Object viewHandle) [instance] :712
int MotionEvent::GetLocationOnScreenY(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetLocationOnScreenY(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreenY66", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,_this_,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetPointerCount(Java.Object handle) [instance] :744
int MotionEvent::GetPointerCount(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerCount(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerCount67", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int GetPointerId(int pointerIndex) [instance] :633
int MotionEvent::GetPointerId(int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerId(int)");
    return GetPointerId1(_handle, pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) [instance] :726
int MotionEvent::GetPointerId1(::g::Java::Object* handle, int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerId(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerId168", "(Ljava/lang/Object;Ljava/lang/Object;I)I");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)pointerIndex);
        int __result = (int)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public float2 GetPosition(int pointerIndex) [instance] :658
::g::Uno::Float2 MotionEvent::GetPosition(int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPosition(int)");
    return ::g::Uno::Float2__New2(GetX(_handle, pointerIndex), GetY(_handle, pointerIndex));
}

// private float GetX(Java.Object handle, int pointerIndex) [instance] :750
float MotionEvent::GetX(::g::Java::Object* handle, int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetX(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetX71", "(Ljava/lang/Object;Ljava/lang/Object;I)F");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jfloat __jresult = _jni->CallStaticFloatMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float GetY(Java.Object handle, int pointerIndex) [instance] :756
float MotionEvent::GetY(::g::Java::Object* handle, int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetY(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetY73", "(Ljava/lang/Object;Ljava/lang/Object;I)F");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jfloat __jresult = _jni->CallStaticFloatMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int get_PointerCount() [instance] :655
int MotionEvent::PointerCount()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_PointerCount()");
    return GetPointerCount(_handle);
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object view, float pointDensity) [instance] :663
uArray* MotionEvent::PointerEventDataForView(::g::Java::Object* view, float pointDensity)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "PointerEventDataForView(Java.Object,float)");
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[12/*Fuse.Input.PointerEventData[]*/], PointerCount());
    ::g::Uno::Float2 locationOnScreen = GetLocationOnScreen(view);

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(locationOnScreen, GetPosition(i)), pointDensity);
        int pointerId = GetPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = (((double)EventTime() / 1000.0) - ::g::Fuse::Time::FrameTimeBase()), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) [static] :796
bool MotionEvent::Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "Compare(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Compare61", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        jboolean __jresult = _jni->CallStaticBooleanMethod(__cls, __mtd,(handle1==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle1, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(handle2==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle2, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexMask() [static] :784
int MotionEvent::GetPointerIndexMask()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerIndexMask()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexMask69", "()I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexShift() [static] :790
int MotionEvent::GetPointerIndexShift()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerIndexShift()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexShift70", "()I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MotionEvent New(Java.Object handle) [static] :628
MotionEvent* MotionEvent::New1(::g::Java::Object* handle)
{
    MotionEvent* obj2 = (MotionEvent*)uNew(MotionEvent_typeof());
    obj2->ctor_(handle);
    return obj2;
}

// public static int get_PointerIndexMask() [static] :775
int MotionEvent::PointerIndexMask()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_PointerIndexMask()");
    return MotionEvent::GetPointerIndexMask();
}

// public static int get_PointerIndexShift() [static] :780
int MotionEvent::PointerIndexShift()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_PointerIndexShift()");
    return MotionEvent::GetPointerIndexShift();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class NativeViewRenderer :857
// {
static void NativeViewRenderer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(NativeViewRenderer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(NativeViewRenderer_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _bitmapHandle), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _oldSize), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _textureHandle), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _viewHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _visualValid), 0);
}

NativeViewRenderer_type* NativeViewRenderer_typeof()
{
    static uSStrong<NativeViewRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeViewRenderer);
    options.TypeSize = sizeof(NativeViewRenderer_type);
    type = (NativeViewRenderer_type*)uClassType::New("Fuse.Controls.Native.Android.NativeViewRenderer", options);
    type->fp_build_ = NativeViewRenderer_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NativeViewRenderer__UnoIDisposableDispose_fn;
    return type;
}

// public NativeViewRenderer(Java.Object viewHandle) :866
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this, ::g::Java::Object* viewHandle)
{
    __this->ctor_(viewHandle);
}

// private static Java.Object CreateBitmap(int w, int h) :941
void NativeViewRenderer__CreateBitmap_fn(int* w, int* h, ::g::Java::Object** __retval)
{
    *__retval = NativeViewRenderer::CreateBitmap(*w, *h);
}

// private void DeleteTexture() :956
void NativeViewRenderer__DeleteTexture_fn(NativeViewRenderer* __this)
{
    __this->DeleteTexture();
}

// private static void DisposeBitmap(Java.Object bitmap) :935
void NativeViewRenderer__DisposeBitmap_fn(::g::Java::Object* bitmap)
{
    NativeViewRenderer::DisposeBitmap(bitmap);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :872
void NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn(NativeViewRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Int2 realSize = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(size_, density_));
    bool reuse = true;

    if (::g::Uno::Int2__op_Inequality(__this->_oldSize, realSize))
    {
        __this->DeleteTexture();
        __this->_textureHandle = ::g::OpenGL::GL::CreateTexture();
        __this->_bitmapHandle = NativeViewRenderer::CreateBitmap(realSize.X, realSize.Y);
        __this->_oldSize = realSize;
        reuse = false;
        __this->_visualValid = false;
    }

    if (!__this->_visualValid)
    {
        ::g::OpenGL::GL::BindTexture(3553, __this->_textureHandle);
        NativeViewRenderer::Upload(__this->_viewHandle, __this->_bitmapHandle, reuse, realSize.X, realSize.Y);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        __this->_visualValid = true;
    }

    uPtr(::g::Fuse::Controls::Native::Android::Blitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(__this->_textureHandle, realSize, 1, 3), position_, size_, localToClipTransform_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :946
void NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(NativeViewRenderer* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    __this->_visualValid = false;
}

// public NativeViewRenderer New(Java.Object viewHandle) :866
void NativeViewRenderer__New1_fn(::g::Java::Object* viewHandle, NativeViewRenderer** __retval)
{
    *__retval = NativeViewRenderer::New1(viewHandle);
}

// private void Uno.IDisposable.Dispose() :951
void NativeViewRenderer__UnoIDisposableDispose_fn(NativeViewRenderer* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "Uno.IDisposable.Dispose()");
    __this->DeleteTexture();
}

// private static void Upload(Java.Object viewHandle, Java.Object bitmapHandle, bool reuse, int w, int h) :908
void NativeViewRenderer__Upload_fn(::g::Java::Object* viewHandle, ::g::Java::Object* bitmapHandle, bool* reuse, int* w, int* h)
{
    NativeViewRenderer::Upload(viewHandle, bitmapHandle, *reuse, *w, *h);
}

// public NativeViewRenderer(Java.Object viewHandle) [instance] :866
void NativeViewRenderer::ctor_(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", ".ctor(Java.Object)");
    _oldSize = ::g::Uno::Int2__New2(-1, -1);
    _viewHandle = viewHandle;
}

// private void DeleteTexture() [instance] :956
void NativeViewRenderer::DeleteTexture()
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "DeleteTexture()");

    if (::g::OpenGL::GLTextureHandle::op_Inequality(_textureHandle, ::g::OpenGL::GLTextureHandle::Zero_))
    {
        ::g::OpenGL::GL::DeleteTexture(_textureHandle);
        _textureHandle = ::g::OpenGL::GLTextureHandle::Zero_;
    }

    if (_bitmapHandle != NULL)
    {
        NativeViewRenderer::DisposeBitmap(_bitmapHandle);
        _bitmapHandle = NULL;
    }
}

// private static Java.Object CreateBitmap(int w, int h) [static] :941
::g::Java::Object* NativeViewRenderer::CreateBitmap(int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "CreateBitmap(int,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateBitmap75", "(II)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(jint)w,(jint)h);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void DisposeBitmap(Java.Object bitmap) [static] :935
void NativeViewRenderer::DisposeBitmap(::g::Java::Object* bitmap)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "DisposeBitmap(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "DisposeBitmap76", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(bitmap==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)bitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public NativeViewRenderer New(Java.Object viewHandle) [static] :866
NativeViewRenderer* NativeViewRenderer::New1(::g::Java::Object* viewHandle)
{
    NativeViewRenderer* obj1 = (NativeViewRenderer*)uNew(NativeViewRenderer_typeof());
    obj1->ctor_(viewHandle);
    return obj1;
}

// private static void Upload(Java.Object viewHandle, Java.Object bitmapHandle, bool reuse, int w, int h) [static] :908
void NativeViewRenderer::Upload(::g::Java::Object* viewHandle, ::g::Java::Object* bitmapHandle, bool reuse, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "Upload(Java.Object,Java.Object,bool,int,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Upload77", "(Ljava/lang/Object;Ljava/lang/Object;ZII)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(bitmapHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)bitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jboolean)reuse,(jint)w,(jint)h);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Rectangle :1016
// {
static void Rectangle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Rectangle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Rectangle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Rectangle_type, interface2),
        ::g::Fuse::Controls::Native::IRectangleView_typeof(), offsetof(Rectangle_type, interface3));
    type->SetFields(9,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Rectangle, _cornerRadius), 0);
}

Rectangle_type* Rectangle_typeof()
{
    static uSStrong<Rectangle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(Rectangle_type);
    type = (Rectangle_type*)uClassType::New("Fuse.Controls.Native.Android.Rectangle", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::Shape_typeof());
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Rectangle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_CornerRadius = (void(*)(uObject*, ::g::Uno::Float4*))Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Rectangle() :1016
void Rectangle__ctor_2_fn(Rectangle* __this)
{
    __this->ctor_2();
}

// private void Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4 value) :1021
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", "Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4)");
    ::g::Uno::Float4 value_ = *value;
    __this->_cornerRadius = value_;
    __this->OnShapeChanged();
}

// public generated Rectangle New() :1016
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :1028
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", "UpdateShapeDrawable(Java.Object,float)");
    float pixelsPerPoint_ = *pixelsPerPoint;
    ::g::Uno::Float4 r = ::g::Uno::Float4__op_Multiply1(__this->_cornerRadius, pixelsPerPoint_);
    __this->UpdateShapeDrawable1(handle, r.X, r.Y, r.Z, r.W);
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) :1035
void Rectangle__UpdateShapeDrawable1_fn(Rectangle* __this, ::g::Java::Object* handle, float* x, float* y, float* z, float* w)
{
    __this->UpdateShapeDrawable1(handle, *x, *y, *z, *w);
}

// public generated Rectangle() [instance] :1016
void Rectangle::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", ".ctor()");
    _cornerRadius = ::g::Uno::Float4__New1(0.0f);
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) [instance] :1035
void Rectangle::UpdateShapeDrawable1(::g::Java::Object* handle, float x, float y, float z, float w)
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", "UpdateShapeDrawable(Java.Object,float,float,float,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable178", "(Ljava/lang/Object;Ljava/lang/Object;FFFF)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)x,(jfloat)y,(jfloat)z,(jfloat)w);
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Rectangle New() [static] :1016
Rectangle* Rectangle::New1()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class ScrollView :1055
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Controls::Native::Android::View_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(ScrollView_type, interface2),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface3),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ScrollView_type, interface4));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _callbackHandle), 0,
        ::g::Fuse::Controls::Native::Android::View_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _content), 0,
        ::g::Fuse::Controls::Native::IScrollViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _host), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("set_AllowedScrollDirections", NULL, (void*)ScrollView__set_AllowedScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction("set_Content", NULL, (void*)ScrollView__set_Content_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::Android::View_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New1_fn, 0, true, ScrollView_typeof(), 1, ::g::Fuse::Controls::Native::IScrollViewHost_typeof()),
        new uFunction("set_ScrollPosition", NULL, (void*)ScrollView__set_ScrollPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))ScrollView__Dispose_fn;
    type->interface2.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface4.fp_Add = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupAdd_fn;
    type->interface4.fp_Add1 = (void(*)(uObject*, uObject*, int*))ScrollView__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupRemove_fn;
    type->interface3.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface3.fp_set_AllowedScrollDirections = (void(*)(uObject*, int*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :1061
void ScrollView__ctor_1_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_1(host);
}

// private Java.Object AddCallback(Java.Object handle) :1080
void ScrollView__AddCallback_fn(ScrollView* __this, ::g::Java::Object* handle, ::g::Java::Object** __retval)
{
    *__retval = __this->AddCallback(handle);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :1093
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// public void set_Content(Fuse.Controls.Native.Android.View value) :1134
void ScrollView__set_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* value)
{
    __this->Content(value);
}

// private static Java.Object Create() :1074
void ScrollView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :1067
void ScrollView__Dispose_fn(ScrollView* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Dispose()");
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :1111
void ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View,float2)");
    ::g::Uno::Float2 size_ = *size;
    ScrollView::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :1116
void ScrollView__FuseControlsNativeIViewGroupAdd_fn(ScrollView* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    __this->Content(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :1121
void ScrollView__FuseControlsNativeIViewGroupAdd1_fn(ScrollView* __this, uObject* child, int* index)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView,int)");
    __this->Content(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :1126
void ScrollView__FuseControlsNativeIViewGroupRemove_fn(ScrollView* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    __this->Content(NULL);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :1061
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) :1105
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y, int* oldx, int* oldy)
{
    __this->OnScrollChanged(*x, *y, *oldx, *oldy);
}

// public void set_ScrollPosition(float2 value) :1098
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :1168
void ScrollView__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    ScrollView::SetChildSize(handle, *w, *h);
}

// private static void SetContent(Java.Object parentHandle, Java.Object childHandle) :1155
void ScrollView__SetContent_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ScrollView::SetContent(parentHandle, childHandle);
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) :1147
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int* x, int* y)
{
    ScrollView::SetScrollPosition(handle, *x, *y);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :1061
void ScrollView::ctor_1(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", ".ctor(Fuse.Controls.Native.IScrollViewHost)");
    ctor_(ScrollView::Create());
    _host = host;
    _callbackHandle = AddCallback(Handle());
}

// private Java.Object AddCallback(Java.Object handle) [instance] :1080
::g::Java::Object* ScrollView::AddCallback(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "AddCallback(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback79", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :1093
void ScrollView::AllowedScrollDirections(int value)
{
}

// public void set_Content(Fuse.Controls.Native.Android.View value) [instance] :1134
void ScrollView::Content(::g::Fuse::Controls::Native::Android::View* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "set_Content(Fuse.Controls.Native.Android.View)");

    if (_content != NULL)
        uPtr(_content)->Parent(NULL);

    _content = value;

    if (_content != NULL)
        uPtr(_content)->Parent((uObject*)this);

    ScrollView::SetContent(Handle(), (_content != NULL) ? (::g::Java::Object*)uPtr(_content)->Handle() : NULL);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) [instance] :1105
void ScrollView::OnScrollChanged(int x, int y, int oldx, int oldy)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "OnScrollChanged(int,int,int,int)");
    float p = ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[13/*Fuse.Controls.Native.IScrollViewHost*/]));
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[13/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2((float)x / p, (float)y / p));
}

// public void set_ScrollPosition(float2 value) [instance] :1098
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "set_ScrollPosition(float2)");
    ::g::Uno::Int2 x = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(value, ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[13/*Fuse.Controls.Native.IScrollViewHost*/]))));
    ScrollView::SetScrollPosition(Handle(), x.X, x.Y);
}

// private static Java.Object Create() [static] :1074
::g::Java::Object* ScrollView::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create81", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :1061
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_1(host);
    return obj1;
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :1168
void ScrollView::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "SetChildSize(Java.Object,int,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize82", "(Ljava/lang/Object;II)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)w,(jint)h);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetContent(Java.Object parentHandle, Java.Object childHandle) [static] :1155
void ScrollView::SetContent(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "SetContent(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetContent83", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) [static] :1147
void ScrollView::SetScrollPosition(::g::Java::Object* handle, int x, int y)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "SetScrollPosition(Java.Object,int,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScrollPosition84", "(Ljava/lang/Object;II)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)x,(jint)y);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal abstract extern class Shape :1187
// {
static void Shape_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls.Native\\0.32.14\\Android\\$.uno");
    ::STRINGS[2] = uString::Const("SetBrush");
    ::TYPES[14] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[15] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[8] = uObject_typeof();
    ::TYPES[16] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Shape_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Drawing::Brush_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::Stroke_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _strokes), 0);
}

Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Shape", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = Shape_build;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected Shape() :1191
void Shape__ctor_1_fn(Shape* __this)
{
    __this->ctor_1();
}

// private static Java.Object Create() :1287
void Shape__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Shape::Create();
}

// private void Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[] fills, Fuse.Drawing.Stroke[] strokes, float pixelsPerPoint) :1200
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[],Fuse.Drawing.Stroke[],float)");
    float pixelsPerPoint_ = *pixelsPerPoint;
    __this->_fills = fills;
    __this->_strokes = strokes;
    __this->_pixelsPerPoint = pixelsPerPoint_;
    __this->OnShapeChanged();
}

// private static Java.Object GetLayer(Java.Object handle, int layer) :1299
void Shape__GetLayer_fn(::g::Java::Object* handle, int* layer, ::g::Java::Object** __retval)
{
    *__retval = Shape::GetLayer(handle, *layer);
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) :1306
void Shape__MakeLayerDrawable_fn(::g::Java::Object* handle, int* layerCount, ::g::Java::Object** __retval)
{
    *__retval = Shape::MakeLayerDrawable(handle, *layerCount);
}

// protected void OnShapeChanged() :1210
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) :1245
void Shape__SetBrush_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    __this->SetBrush(shapeDrawable, brush);
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) :1271
void Shape__SetShapeDrawableColor_fn(::g::Java::Object* shapeDrawable, int* r, int* g, int* b, int* a, int* opacity)
{
    Shape::SetShapeDrawableColor(shapeDrawable, *r, *g, *b, *a, *opacity);
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) :1279
void Shape__SetShapeDrawableStrokeWidth_fn(::g::Java::Object* shapeDrawable, float* width)
{
    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, *width);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) :1237
void Shape__SetStroke_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->SetStroke(shapeDrawable, stroke);
}

// protected Shape() [instance] :1191
void Shape::ctor_1()
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", ".ctor()");
    ctor_(Shape::Create());
}

// protected void OnShapeChanged() [instance] :1210
void Shape::OnShapeChanged()
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "OnShapeChanged()");
    int layerCount = ((_fills != NULL) ? uPtr(_fills)->Length() : 0) + ((_strokes != NULL) ? uPtr(_strokes)->Length() : 0);
    ::g::Java::Object* layerDrawable = Shape::MakeLayerDrawable(Handle(), layerCount);

    for (int i = 0; i < layerCount; i++)
        UpdateShapeDrawable(Shape::GetLayer(layerDrawable, i), _pixelsPerPoint);

    int layer = 0;

    if (_fills != NULL)

        for (int i1 = uPtr(_fills)->Length(); (i1--) > 0; )
            SetBrush(Shape::GetLayer(layerDrawable, layer++), uPtr(_fills)->Strong< ::g::Fuse::Drawing::Brush*>(i1));

    if (_strokes != NULL)

        for (int i2 = uPtr(_strokes)->Length(); (i2--) > 0; )
            SetStroke(Shape::GetLayer(layerDrawable, layer++), uPtr(_strokes)->Strong< ::g::Fuse::Drawing::Stroke*>(i2));
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) [instance] :1245
void Shape::SetBrush(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetBrush(Java.Object,Fuse.Drawing.Brush)");
    ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);
    ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[14/*Fuse.Drawing.SolidColor*/]);

    if (sc != NULL)
        c = uPtr(sc)->Color();

    ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[15/*Fuse.Drawing.StaticSolidColor*/]);

    if (ssc != NULL)
        c = uPtr(ssc)->Color();

    if ((sc == NULL) && (ssc == NULL))
        ::g::Fuse::Diagnostics::Unsupported(::STRINGS[0/*""*/], brush, ::STRINGS[1/*"C:\\Program...*/], 1256, ::STRINGS[2/*"SetBrush"*/]);

    ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(brush, ::TYPES[16/*Fuse.Drawing.DynamicBrush*/]);
    float opacity = (db != NULL) ? uPtr(db)->Opacity() : 1.0f;
    Shape::SetShapeDrawableColor(shapeDrawable, ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(opacity * 255.0f), 0, 255));
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) [instance] :1237
void Shape::SetStroke(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetStroke(Java.Object,Fuse.Drawing.Stroke)");

    if (uPtr(stroke)->Brush() != NULL)
        SetBrush(shapeDrawable, uPtr(stroke)->Brush());

    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, uPtr(stroke)->Width() * _pixelsPerPoint);
}

// private static Java.Object Create() [static] :1287
::g::Java::Object* Shape::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create85", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static Java.Object GetLayer(Java.Object handle, int layer) [static] :1299
::g::Java::Object* Shape::GetLayer(::g::Java::Object* handle, int layer)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "GetLayer(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLayer87", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)layer);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) [static] :1306
::g::Java::Object* Shape::MakeLayerDrawable(::g::Java::Object* handle, int layerCount)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "MakeLayerDrawable(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeLayerDrawable88", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)layerCount);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) [static] :1271
void Shape::SetShapeDrawableColor(::g::Java::Object* shapeDrawable, int r, int g, int b, int a, int opacity)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetShapeDrawableColor(Java.Object,int,int,int,int,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableColor89", "(Ljava/lang/Object;IIIII)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(shapeDrawable==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)shapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)r,(jint)g,(jint)b,(jint)a,(jint)opacity);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) [static] :1279
void Shape::SetShapeDrawableStrokeWidth(::g::Java::Object* shapeDrawable, float width)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetShapeDrawableStrokeWidth(Java.Object,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableStrokeWidth90", "(Ljava/lang/Object;F)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(shapeDrawable==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)shapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)width);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class Slider :1350
// {
static void Slider_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::IRangeViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Slider, _host), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New1_fn, 0, true, Slider_typeof(), 1, ::g::Fuse::Controls::Native::IRangeViewHost_typeof()),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :1361
void Slider__ctor_2_fn(Slider* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private void AddChangedCallback(Java.Object handle) :1382
void Slider__AddChangedCallback_fn(Slider* __this, ::g::Java::Object* handle)
{
    __this->AddChangedCallback(handle);
}

// private static Java.Object Create() :1368
void Slider__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose() :1398
void Slider__Dispose_fn(Slider* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "Dispose()");
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :1361
void Slider__New1_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New1(host);
}

// private void OnSeekBarChanged(double newProgress) :1393
void Slider__OnSeekBarChanged_fn(Slider* __this, double* newProgress)
{
    __this->OnSeekBarChanged(*newProgress);
}

// public void set_Progress(double value) :1355
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetProgress(Java.Object handle, double progress) :1376
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress)
{
    Slider::SetProgress(handle, *progress);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :1361
void Slider::ctor_2(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", ".ctor(Fuse.Controls.Native.IRangeViewHost)");
    ctor_1(Slider::Create());
    _host = host;
    AddChangedCallback(Handle());
}

// private void AddChangedCallback(Java.Object handle) [instance] :1382
void Slider::AddChangedCallback(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "AddChangedCallback(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddChangedCallback91", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSeekBarChanged(double newProgress) [instance] :1393
void Slider::OnSeekBarChanged(double newProgress)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "OnSeekBarChanged(double)");
    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[17/*Fuse.Controls.Native.IRangeViewHost*/]), newProgress);
}

// public void set_Progress(double value) [instance] :1355
void Slider::Progress(double value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "set_Progress(double)");
    Slider::SetProgress(Handle(), value);
}

// private static Java.Object Create() [static] :1368
::g::Java::Object* Slider::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create93", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :1361
Slider* Slider::New1(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetProgress(Java.Object handle, double progress) [static] :1376
void Slider::SetProgress(::g::Java::Object* handle, double progress)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "SetProgress(Java.Object,double)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetProgress94", "(Ljava/lang/Object;D)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jdouble)progress);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal static extern class SoftKeyboard :2033
// {
static void SoftKeyboard_build(uType* type)
{
}

uClassType* SoftKeyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.SoftKeyboard", options);
    type->fp_build_ = SoftKeyboard_build;
    return type;
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) :2037
void SoftKeyboard__HideKeyboard_fn(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    SoftKeyboard::HideKeyboard(hideKeyboardContext, hideKeyboardWindowToken);
}

// public static void ShowKeyboard(Java.Object viewHandle) :2046
void SoftKeyboard__ShowKeyboard_fn(::g::Java::Object* viewHandle)
{
    SoftKeyboard::ShowKeyboard(viewHandle);
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) [static] :2037
void SoftKeyboard::HideKeyboard(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    uStackFrame __("Fuse.Controls.Native.Android.SoftKeyboard", "HideKeyboard(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideKeyboard95", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(hideKeyboardContext==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)hideKeyboardContext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(hideKeyboardWindowToken==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)hideKeyboardWindowToken, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ShowKeyboard(Java.Object viewHandle) [static] :2046
void SoftKeyboard::ShowKeyboard(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.SoftKeyboard", "ShowKeyboard(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowKeyboard96", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class SurfaceView :1415
// {
static void SurfaceView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface2));
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SurfaceView__New1_fn, 0, true, SurfaceView_typeof(), 0));
}

::g::Fuse::Controls::Native::Android::GraphicsView_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsView_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsView_type*)uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::GraphicsView_typeof());
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New1_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*))::g::Fuse::Controls::Native::Android::GraphicsView__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsView__EndDraw_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public SurfaceView() :1417
void SurfaceView__ctor_2_fn(SurfaceView* __this)
{
    __this->ctor_2();
}

// private void AddCallback(Java.Object handle) :1440
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1459
void SurfaceView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = SurfaceView::Create();
}

// private static Java.Object GetSurface(Java.Object holder) :1434
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval)
{
    *__retval = SurfaceView::GetSurface(holder);
}

// public SurfaceView New() :1417
void SurfaceView__New1_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New1();
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) :1423
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int* f, int* w, int* h)
{
    __this->OnSurfaceChanged(holder, *f, *w, *h);
}

// private void OnSurfaceCreated(Java.Object holder) :1424
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceCreated(holder);
}

// private void OnSurfaceDestroyed(Java.Object holder) :1428
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceDestroyed(holder);
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) :1422
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceRedrawNeeded(holder);
}

// public SurfaceView() [instance] :1417
void SurfaceView::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", ".ctor()");
    ctor_1(SurfaceView::Create());
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1440
void SurfaceView::AddCallback(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "AddCallback(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback97", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) [instance] :1423
void SurfaceView::OnSurfaceChanged(::g::Java::Object* holder, int f, int w, int h)
{
}

// private void OnSurfaceCreated(Java.Object holder) [instance] :1424
void SurfaceView::OnSurfaceCreated(::g::Java::Object* holder)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "OnSurfaceCreated(Java.Object)");
    SetSurface(SurfaceView::GetSurface(holder));
}

// private void OnSurfaceDestroyed(Java.Object holder) [instance] :1428
void SurfaceView::OnSurfaceDestroyed(::g::Java::Object* holder)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "OnSurfaceDestroyed(Java.Object)");
    DestroySurface();
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) [instance] :1422
void SurfaceView::OnSurfaceRedrawNeeded(::g::Java::Object* holder)
{
}

// private static Java.Object Create() [static] :1459
::g::Java::Object* SurfaceView::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create102", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static Java.Object GetSurface(Java.Object holder) [static] :1434
::g::Java::Object* SurfaceView::GetSurface(::g::Java::Object* holder)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "GetSurface(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSurface103", "(Ljava/lang/Object;)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(holder==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)holder, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public SurfaceView New() [static] :1417
SurfaceView* SurfaceView::New1()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class Switch :1484
// {
static void Switch_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::IToggleViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Switch, _host), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, Switch_typeof(), 1, ::g::Fuse::Controls::Native::IToggleViewHost_typeof()),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :1494
void Switch__ctor_2_fn(Switch* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private void AddCallback(Java.Object handle) :1507
void Switch__AddCallback_fn(Switch* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1501
void Switch__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose() :1527
void Switch__Dispose_fn(Switch* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "Dispose()");
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :1494
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// private void OnToggleChanged(bool value) :1522
void Switch__OnToggleChanged_fn(Switch* __this, bool* value)
{
    __this->OnToggleChanged(*value);
}

// private static void SetValue(Java.Object handle, bool value) :1517
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value) :1488
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :1494
void Switch::ctor_2(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", ".ctor(Fuse.Controls.Native.IToggleViewHost)");
    ctor_1(Switch::Create());
    _host = host;
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1507
void Switch::AddCallback(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "AddCallback(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback104", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnToggleChanged(bool value) [instance] :1522
void Switch::OnToggleChanged(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "OnToggleChanged(bool)");
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[18/*Fuse.Controls.Native.IToggleViewHost*/]), value);
}

// public void set_Value(bool value) [instance] :1488
void Switch::Value(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "set_Value(bool)");
    Switch::SetValue(Handle(), value);
}

// private static Java.Object Create() [static] :1501
::g::Java::Object* Switch::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create106", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :1494
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetValue(Java.Object handle, bool value) [static] :1517
void Switch::SetValue(::g::Java::Object* handle, bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "SetValue(Java.Object,bool)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetValue107", "(Ljava/lang/Object;Z)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jboolean)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class TextEdit :1543
// {
static void TextEdit_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface4));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextEdit__New4_fn, 0, true, TextEdit_typeof(), 2, ::g::Fuse::Controls::Native::ITextEditHost_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::TextInput_type);
    type = (::g::Fuse::Controls::Native::Android::TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextEdit", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::TextInput_typeof());
    type->fp_build_ = TextEdit_build;
    type->interface4.fp_FocusGained = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsMultiline = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsMultiline_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__Dispose_fn;
    return type;
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1545
void TextEdit__ctor_5_fn(TextEdit* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_5(host, *isMultiline);
}

// private static void MakeItPlain(Java.Object handle) :1551
void TextEdit__MakeItPlain_fn(::g::Java::Object* handle)
{
    TextEdit::MakeItPlain(handle);
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1545
void TextEdit__New4_fn(uObject* host, bool* isMultiline, TextEdit** __retval)
{
    *__retval = TextEdit::New4(host, *isMultiline);
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :1545
void TextEdit::ctor_5(uObject* host, bool isMultiline)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEdit", ".ctor(Fuse.Controls.Native.ITextEditHost,bool)");
    ctor_4(host, isMultiline);
    TextEdit::MakeItPlain(Handle());
}

// private static void MakeItPlain(Java.Object handle) [static] :1551
void TextEdit::MakeItPlain(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEdit", "MakeItPlain(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeItPlain108", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :1545
TextEdit* TextEdit::New4(uObject* host, bool isMultiline)
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_5(host, isMultiline);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class TextEditRenderer :2126
// {
static void TextEditRenderer_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(TextEditRenderer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextEditRenderer_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _container), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _nativeViewRenderer), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _source), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _valid), 0);
}

TextEditRenderer_type* TextEditRenderer_typeof()
{
    static uSStrong<TextEditRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextEditRenderer);
    options.TypeSize = sizeof(TextEditRenderer_type);
    type = (TextEditRenderer_type*)uClassType::New("Fuse.Controls.Native.Android.TextEditRenderer", options);
    type->fp_build_ = TextEditRenderer_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))TextEditRenderer__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextEditRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextEditRenderer__UnoIDisposableDispose_fn;
    return type;
}

// public TextEditRenderer(Java.Object soruce) :2135
void TextEditRenderer__ctor__fn(TextEditRenderer* __this, ::g::Java::Object* soruce)
{
    __this->ctor_(soruce);
}

// private static void CopyState(Java.Object container, Java.Object sourceHandle, Java.Object targetHandle) :2170
void TextEditRenderer__CopyState_fn(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle)
{
    TextEditRenderer::CopyState(container, sourceHandle, targetHandle);
}

// private static Java.Object CreateContainer() :2236
void TextEditRenderer__CreateContainer_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderer::CreateContainer();
}

// private static Java.Object CreateTextEdit() :2228
void TextEditRenderer__CreateTextEdit_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderer::CreateTextEdit();
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :2144
void TextEditRenderer__FuseControlsNativeINativeViewRendererDraw_fn(TextEditRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;

    if (!__this->_valid)
    {
        TextEditRenderer::CopyState(__this->_container, __this->_source, __this->_target);
        __this->_valid = true;
    }

    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :2154
void TextEditRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(TextEditRenderer* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Fuse.Controls.Native.INativeViewRenderer*/]));
    __this->_valid = false;
}

// public TextEditRenderer New(Java.Object soruce) :2135
void TextEditRenderer__New1_fn(::g::Java::Object* soruce, TextEditRenderer** __retval)
{
    *__retval = TextEditRenderer::New1(soruce);
}

// private void Uno.IDisposable.Dispose() :2160
void TextEditRenderer__UnoIDisposableDispose_fn(TextEditRenderer* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "Uno.IDisposable.Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_source = NULL;
    __this->_target = NULL;
    __this->_container = NULL;
}

// public TextEditRenderer(Java.Object soruce) [instance] :2135
void TextEditRenderer::ctor_(::g::Java::Object* soruce)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", ".ctor(Java.Object)");
    _source = soruce;
    _target = TextEditRenderer::CreateTextEdit();
    _container = TextEditRenderer::CreateContainer();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::NativeViewRenderer::New1(_container);
}

// private static void CopyState(Java.Object container, Java.Object sourceHandle, Java.Object targetHandle) [static] :2170
void TextEditRenderer::CopyState(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "CopyState(Java.Object,Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CopyState109", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(container==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)container, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(sourceHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)sourceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(targetHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)targetHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateContainer() [static] :2236
::g::Java::Object* TextEditRenderer::CreateContainer()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "CreateContainer()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateContainer110", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static Java.Object CreateTextEdit() [static] :2228
::g::Java::Object* TextEditRenderer::CreateTextEdit()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "CreateTextEdit()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTextEdit111", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public TextEditRenderer New(Java.Object soruce) [static] :2135
TextEditRenderer* TextEditRenderer::New1(::g::Java::Object* soruce)
{
    TextEditRenderer* obj1 = (TextEditRenderer*)uNew(TextEditRenderer_typeof());
    obj1->ctor_(soruce);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class TextEditRenderHost :2248
// {
static void TextEditRenderHost_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextEditRenderHost_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextEditRenderHost_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(TextEditRenderHost_type, interface2),
        ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof(), offsetof(TextEditRenderHost_type, interface3),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(TextEditRenderHost_type, interface4),
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(TextEditRenderHost_type, interface5));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _isEnabled), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _nativeViewRenderer), 0,
        ::g::Fuse::Controls::Native::Android::TextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _textEdit), 0);
}

TextEditRenderHost_type* TextEditRenderHost_typeof()
{
    static uSStrong<TextEditRenderHost_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(TextEditRenderHost);
    options.TypeSize = sizeof(TextEditRenderHost_type);
    type = (TextEditRenderHost_type*)uClassType::New("Fuse.Controls.Native.Android.TextEditRenderHost", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = TextEditRenderHost_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))TextEditRenderHost__Dispose_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))TextEditRenderHost__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))TextEditRenderHost__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))TextEditRenderHost__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))TextEditRenderHost__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_EnableOffscreen = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn;
    type->interface3.fp_DisableOffscreen = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn;
    type->interface5.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))TextEditRenderHost__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface5.fp_Invalidate = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextEditRenderHost__Dispose_fn;
    return type;
}

// public TextEditRenderHost(Fuse.Controls.Native.Android.TextEdit textEdit) :2256
void TextEditRenderHost__ctor_1_fn(TextEditRenderHost* __this, ::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    __this->ctor_1(textEdit);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :2322
void TextEditRenderHost__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    TextEditRenderHost::AddView(parentHandle, childHandle);
}

// private static Java.Object Create() :2338
void TextEditRenderHost__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderHost::Create();
}

// public override sealed void Dispose() :2269
void TextEditRenderHost__Dispose_fn(TextEditRenderHost* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Dispose()");
    uPtr(__this->_textEdit)->Parent(NULL);
    TextEditRenderHost::RemoveView(__this->_container, uPtr(__this->_textEdit)->Handle());
    __this->_textEdit = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :2287
void TextEditRenderHost__FuseControlsNativeAndroidIViewParentSetChildSize_fn(TextEditRenderHost* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View,float2)");
    ::g::Uno::Float2 size_ = *size;
    TextEditRenderHost::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :2311
void TextEditRenderHost__FuseControlsNativeINativeViewRendererDraw_fn(TextEditRenderHost* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :2316
void TextEditRenderHost__FuseControlsNativeINativeViewRendererInvalidate_fn(TextEditRenderHost* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[1/*Fuse.Controls.Native.INativeViewRenderer*/]));
}

// private void Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen() :2302
void TextEditRenderHost__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(TextEditRenderHost* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen()");

    if (__this->_isEnabled)
    {
        TextEditRenderHost::AddView(__this->Handle(), __this->_container);
        __this->_isEnabled = false;
    }
}

// private void Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen() :2293
void TextEditRenderHost__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(TextEditRenderHost* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen()");

    if (!__this->_isEnabled)
    {
        TextEditRenderHost::RemoveView(__this->Handle(), __this->_container);
        __this->_isEnabled = true;
    }
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :2283
void TextEditRenderHost__FuseControlsNativeIViewGroupAdd_fn(TextEditRenderHost* __this, uObject* child)
{
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :2284
void TextEditRenderHost__FuseControlsNativeIViewGroupAdd1_fn(TextEditRenderHost* __this, uObject* child, int* index)
{
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :2285
void TextEditRenderHost__FuseControlsNativeIViewGroupRemove_fn(TextEditRenderHost* __this, uObject* child)
{
}

// public TextEditRenderHost New(Fuse.Controls.Native.Android.TextEdit textEdit) :2256
void TextEditRenderHost__New1_fn(::g::Fuse::Controls::Native::Android::TextEdit* textEdit, TextEditRenderHost** __retval)
{
    *__retval = TextEditRenderHost::New1(textEdit);
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :2330
void TextEditRenderHost__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    TextEditRenderHost::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :2350
void TextEditRenderHost__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    TextEditRenderHost::SetChildSize(handle, *w, *h);
}

// public TextEditRenderHost(Fuse.Controls.Native.Android.TextEdit textEdit) [instance] :2256
void TextEditRenderHost::ctor_1(::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", ".ctor(Fuse.Controls.Native.Android.TextEdit)");
    ctor_(TextEditRenderHost::Create());
    _textEdit = textEdit;
    _container = TextEditRenderHost::Create();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::TextEditRenderer::New1(uPtr(textEdit)->Handle());
    TextEditRenderHost::AddView(Handle(), _container);
    textEdit->Parent((uObject*)this);
    TextEditRenderHost::AddView(_container, textEdit->Handle());
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :2322
void TextEditRenderHost::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "AddView(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView112", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :2338
::g::Java::Object* TextEditRenderHost::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create113", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public TextEditRenderHost New(Fuse.Controls.Native.Android.TextEdit textEdit) [static] :2256
TextEditRenderHost* TextEditRenderHost::New1(::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    TextEditRenderHost* obj1 = (TextEditRenderHost*)uNew(TextEditRenderHost_typeof());
    obj1->ctor_1(textEdit);
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :2330
void TextEditRenderHost::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "RemoveView(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView114", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :2350
void TextEditRenderHost::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "SetChildSize(Java.Object,int,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize115", "(Ljava/lang/Object;II)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)w,(jint)h);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public extern class TextInput :1562
// {
static void TextInput_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[20] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    ::TYPES[21] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextInput_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(TextInput_type, interface4));
    type->SetFields(6,
        ::g::Fuse::Controls::TextInputActionStyle_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _actionStyle), 0,
        ::g::Fuse::Controls::AutoCapitalizationHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _autoCapitalizationHint), 0,
        ::g::Fuse::Controls::AutoCorrectHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _autoCorrentHint), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _focusEvent), 0,
        ::g::Fuse::Controls::Native::ITextEditHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _host), 0,
        ::g::Fuse::Controls::TextInputHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _inputHint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isPassword), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isReadOnly), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("set_ActionStyle", NULL, (void*)TextInput__set_ActionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionStyle_typeof()),
        new uFunction("set_AutoCapitalizationHint", NULL, (void*)TextInput__set_AutoCapitalizationHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCapitalizationHint_typeof()),
        new uFunction("set_AutoCorrectHint", NULL, (void*)TextInput__set_AutoCorrectHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCorrectHint_typeof()),
        new uFunction("set_CaretColor", NULL, (void*)TextInput__set_CaretColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_InputHint", NULL, (void*)TextInput__set_InputHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputHint_typeof()),
        new uFunction("set_IsMultiline", NULL, (void*)TextInput__set_IsMultiline_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsPassword", NULL, (void*)TextInput__set_IsPassword_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsReadOnly", NULL, (void*)TextInput__set_IsReadOnly_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)TextInput__New3_fn, 0, true, TextInput_typeof(), 2, ::g::Fuse::Controls::Native::ITextEditHost_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("set_PlaceholderColor", NULL, (void*)TextInput__set_PlaceholderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_PlaceholderText", NULL, (void*)TextInput__set_PlaceholderText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("set_SelectionColor", NULL, (void*)TextInput__set_SelectionColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

TextInput_type* TextInput_typeof()
{
    static uSStrong<TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(TextInput_type);
    type = (TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextInput", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::TextView_typeof());
    type->fp_build_ = TextInput_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))TextInput__Dispose_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsMultiline = (void(*)(uObject*, bool*))TextInput__set_IsMultiline_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int*))TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int*))TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextInput__Dispose_fn;
    return type;
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1566
void TextInput__ctor_4_fn(TextInput* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_4(host, *isMultiline);
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :1701
void TextInput__set_ActionStyle_fn(TextInput* __this, int* value)
{
    __this->ActionStyle(*value);
}

// private void AddEditorActionListener(Java.Object handle) :1951
void TextInput__AddEditorActionListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddEditorActionListener(handle);
}

// private void AddTextChangedListener(Java.Object handle) :1912
void TextInput__AddTextChangedListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddTextChangedListener(handle);
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :1681
void TextInput__set_AutoCapitalizationHint_fn(TextInput* __this, int* value)
{
    __this->AutoCapitalizationHint(*value);
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :1671
void TextInput__set_AutoCorrectHint_fn(TextInput* __this, int* value)
{
    __this->AutoCorrectHint(*value);
}

// public void set_CaretColor(float4 value) :1796
void TextInput__set_CaretColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->CaretColor(*value);
}

// private static Java.Object Create() :1878
void TextInput__Create1_fn(::g::Java::Object** __retval)
{
    *__retval = TextInput::Create1();
}

// public override sealed void Dispose() :1600
void TextInput__Dispose_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_focusEvent), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_focusEvent = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :1608
void TextInput__FuseControlsNativeITextEditFocusGained_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Fuse.Controls.Native.ITextEdit.FocusGained()");
    TextInput::RequestFocus(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :1613
void TextInput__FuseControlsNativeITextEditFocusLost_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Fuse.Controls.Native.ITextEdit.FocusLost()");

    if (TextInput::HasFocus(__this->Handle()))
        __this->ScheduleFocusLoss();
}

// private static bool HasFocus(Java.Object viewHandle) :1620
void TextInput__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = TextInput::HasFocus(viewHandle);
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) :1691
void TextInput__set_InputHint_fn(TextInput* __this, int* value)
{
    __this->InputHint(*value);
}

// public void set_IsMultiline(bool value) :1641
void TextInput__set_IsMultiline_fn(TextInput* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public void set_IsPassword(bool value) :1651
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value)
{
    __this->IsPassword(*value);
}

// public void set_IsReadOnly(bool value) :1661
void TextInput__set_IsReadOnly_fn(TextInput* __this, bool* value)
{
    __this->IsReadOnly(*value);
}

// public TextInput New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1566
void TextInput__New3_fn(uObject* host, bool* isMultiline, TextInput** __retval)
{
    *__retval = TextInput::New3(host, *isMultiline);
}

// private bool OnEditorAction(int actionCode) :1965
void TextInput__OnEditorAction_fn(TextInput* __this, int* actionCode, bool* __retval)
{
    *__retval = __this->OnEditorAction(*actionCode);
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) :1575
void TextInput__OnNativeFocusChanged_fn(TextInput* __this, ::g::Java::Object* view, bool* hasFocus)
{
    __this->OnNativeFocusChanged(view, *hasFocus);
}

// private void OnTextChanged(string value) :1960
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value)
{
    __this->OnTextChanged(value);
}

// public void set_PlaceholderColor(float4 value) :1811
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->PlaceholderColor(*value);
}

// public void set_PlaceholderText(string value) :1806
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// private static void RequestFocus(Java.Object viewHandle) :1626
void TextInput__RequestFocus_fn(::g::Java::Object* viewHandle)
{
    TextInput::RequestFocus(viewHandle);
}

// private int get_ReturnKeyType() :1828
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private void ScheduleFocusLoss() :1590
void TextInput__ScheduleFocusLoss_fn(TextInput* __this)
{
    __this->ScheduleFocusLoss();
}

// public void set_SelectionColor(float4 value) :1801
void TextInput__set_SelectionColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// private void SetCursorDrawableColor(Java.Object handle, int color) :1884
void TextInput__SetCursorDrawableColor_fn(TextInput* __this, ::g::Java::Object* handle, int* color)
{
    __this->SetCursorDrawableColor(handle, *color);
}

// private static void SetImeOptions(Java.Object handle, int value) :1872
void TextInput__SetImeOptions_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetImeOptions(handle, *value);
}

// private static void SetInputType(Java.Object handle, int value) :1849
void TextInput__SetInputType_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetInputType(handle, *value);
}

// private static void SetPlaceholderColor(Java.Object handle, int value) :1815
void TextInput__SetPlaceholderColor_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetPlaceholderColor(handle, *value);
}

// private static void SetPlaceholderText(Java.Object handle, string value) :1821
void TextInput__SetPlaceholderText_fn(::g::Java::Object* handle, uString* value)
{
    TextInput::SetPlaceholderText(handle, value);
}

// private static void SetSelectionColor(Java.Object handle, int color) :1843
void TextInput__SetSelectionColor_fn(::g::Java::Object* handle, int* color)
{
    TextInput::SetSelectionColor(handle, *color);
}

// private void UpdateFlags() :1708
void TextInput__UpdateFlags_fn(TextInput* __this)
{
    __this->UpdateFlags();
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :1566
void TextInput::ctor_4(uObject* host, bool isMultiline)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", ".ctor(Fuse.Controls.Native.ITextEditHost,bool)");
    ctor_3(TextInput::Create1());
    _host = host;
    IsMultiline(isMultiline);
    AddEditorActionListener(Handle());
    _focusEvent = ::g::Fuse::Controls::Native::Android::FocusChangedListener::AddHandler(Handle(), uDelegate::New(::TYPES[19/*Uno.Action<Java.Object, bool>*/], (void*)TextInput__OnNativeFocusChanged_fn, this));
    AddTextChangedListener(Handle());
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) [instance] :1701
void TextInput::ActionStyle(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_ActionStyle(Fuse.Controls.TextInputActionStyle)");
    _actionStyle = value;
    UpdateFlags();
}

// private void AddEditorActionListener(Java.Object handle) [instance] :1951
void TextInput::AddEditorActionListener(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "AddEditorActionListener(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddEditorActionListener116", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void AddTextChangedListener(Java.Object handle) [instance] :1912
void TextInput::AddTextChangedListener(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "AddTextChangedListener(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddTextChangedListener118", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) [instance] :1681
void TextInput::AutoCapitalizationHint(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint)");
    _autoCapitalizationHint = value;
    UpdateFlags();
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) [instance] :1671
void TextInput::AutoCorrectHint(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint)");
    _autoCorrentHint = value;
    UpdateFlags();
}

// public void set_CaretColor(float4 value) [instance] :1796
void TextInput::CaretColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_CaretColor(float4)");
    SetCursorDrawableColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) [instance] :1691
void TextInput::InputHint(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_InputHint(Fuse.Controls.TextInputHint)");
    _inputHint = value;
    UpdateFlags();
}

// public void set_IsMultiline(bool value) [instance] :1641
void TextInput::IsMultiline(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_IsMultiline(bool)");
    _isMultiline = value;
    UpdateFlags();
}

// public void set_IsPassword(bool value) [instance] :1651
void TextInput::IsPassword(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_IsPassword(bool)");
    _isPassword = value;
    UpdateFlags();
}

// public void set_IsReadOnly(bool value) [instance] :1661
void TextInput::IsReadOnly(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_IsReadOnly(bool)");
    _isReadOnly = value;
    UpdateFlags();
}

// private bool OnEditorAction(int actionCode) [instance] :1965
bool TextInput::OnEditorAction(int actionCode)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnEditorAction(int)");

    switch (actionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.ITextEditHost*/]), 0);
    }

    return false;
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) [instance] :1575
void TextInput::OnNativeFocusChanged(::g::Java::Object* view, bool hasFocus)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnNativeFocusChanged(Java.Object,bool)");

    if (!hasFocus)
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.ITextEditHost*/]));
        ScheduleFocusLoss();
    }
    else
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.ITextEditHost*/]));
        uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = NULL;
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::ShowKeyboard(Handle());
    }
}

// private void OnTextChanged(string value) [instance] :1960
void TextInput::OnTextChanged(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnTextChanged(string)");
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[20/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// public void set_PlaceholderColor(float4 value) [instance] :1811
void TextInput::PlaceholderColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_PlaceholderColor(float4)");
    TextInput::SetPlaceholderColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_PlaceholderText(string value) [instance] :1806
void TextInput::PlaceholderText(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_PlaceholderText(string)");
    TextInput::SetPlaceholderText(Handle(), value);
}

// private int get_ReturnKeyType() [instance] :1828
int TextInput::ReturnKeyType()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "get_ReturnKeyType()");

    switch (_actionStyle)
    {
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
    }

    return 0;
}

// private void ScheduleFocusLoss() [instance] :1590
void TextInput::ScheduleFocusLoss()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "ScheduleFocusLoss()");
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->LoseFocus = Handle();
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = ::g::Fuse::Controls::Native::Android::FocusManager::GetContext(Handle());
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardWindowToken = ::g::Fuse::Controls::Native::Android::FocusManager::GetWindowToken(Handle());
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[21/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::Android::FocusManager__CompleteFocusLoss_fn, uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())), -1, 0);
}

// public void set_SelectionColor(float4 value) [instance] :1801
void TextInput::SelectionColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_SelectionColor(float4)");
    TextInput::SetSelectionColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// private void SetCursorDrawableColor(Java.Object handle, int color) [instance] :1884
void TextInput::SetCursorDrawableColor(::g::Java::Object* handle, int color)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetCursorDrawableColor(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCursorDrawableColor124", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)color);
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void UpdateFlags() [instance] :1708
void TextInput::UpdateFlags()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "UpdateFlags()");
    int flags = 0;

    switch (_inputHint)
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        case 5:
        {
            flags = flags | 8194;
            break;
        }
        default:
        {
            flags = flags | 1;

            switch (_autoCorrentHint)
            {
                case 0:
                {
                    flags = flags | 32768;
                    break;
                }
                case 1:
                    break;
                case 2:
                {
                    flags = flags | 32768;
                    break;
                }
            }

            switch (_autoCapitalizationHint)
            {
                case 0:
                    break;
                case 1:
                {
                    flags = flags | 4096;
                    break;
                }
                case 2:
                {
                    flags = flags | 8192;
                    break;
                }
                case 3:
                {
                    flags = flags | 16384;
                    break;
                }
            }

            break;
        }
    }

    if (_isMultiline)
        flags = flags | 131072;

    if (_isPassword)
        flags = flags | 128;

    if (_isReadOnly)
        TextInput::SetInputType(Handle(), 0);
    else
    {
        TextInput::SetInputType(Handle(), flags);
        TextInput::SetImeOptions(Handle(), ReturnKeyType());
    }
}

// private static Java.Object Create() [static] :1878
::g::Java::Object* TextInput::Create1()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1121", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :1620
bool TextInput::HasFocus(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "HasFocus(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus122", "(Ljava/lang/Object;)Z");
        jboolean __jresult = _jni->CallStaticBooleanMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextInput New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :1566
TextInput* TextInput::New3(uObject* host, bool isMultiline)
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_4(host, isMultiline);
    return obj1;
}

// private static void RequestFocus(Java.Object viewHandle) [static] :1626
void TextInput::RequestFocus(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "RequestFocus(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestFocus123", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(viewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)viewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImeOptions(Java.Object handle, int value) [static] :1872
void TextInput::SetImeOptions(::g::Java::Object* handle, int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetImeOptions(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImeOptions125", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetInputType(Java.Object handle, int value) [static] :1849
void TextInput::SetInputType(::g::Java::Object* handle, int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetInputType(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetInputType126", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderColor(Java.Object handle, int value) [static] :1815
void TextInput::SetPlaceholderColor(::g::Java::Object* handle, int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetPlaceholderColor(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderColor127", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderText(Java.Object handle, string value) [static] :1821
void TextInput::SetPlaceholderText(::g::Java::Object* handle, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetPlaceholderText(Java.Object,string)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderText128", "(Ljava/lang/Object;Ljava/lang/String;)V");
        jstring _value = JniHelper::UnoToJavaString(value);
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),_value);
        
        if (_value!=NULL) { _jni->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetSelectionColor(Java.Object handle, int color) [static] :1843
void TextInput::SetSelectionColor(::g::Java::Object* handle, int color)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetSelectionColor(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetSelectionColor129", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)color);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public extern class TextView :2367
// {
static void TextView_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextView_type, interface3));
    type->SetFields(6);
    type->Reflection.SetFunctions(11,
        new uFunction("set_Font", NULL, (void*)TextView__set_Font_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Font_typeof()),
        new uFunction("set_FontSize", NULL, (void*)TextView__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_LineSpacing", NULL, (void*)TextView__set_LineSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_MaxLength", NULL, (void*)TextView__set_MaxLength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)TextView__New1_fn, 0, true, TextView_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TextView__New2_fn, 0, true, TextView_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("set_TextAlignment", NULL, (void*)TextView__set_TextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextAlignment_typeof()),
        new uFunction("set_TextColor", NULL, (void*)TextView__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_TextTruncation", NULL, (void*)TextView__set_TextTruncation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextTruncation_typeof()),
        new uFunction("set_TextWrapping", NULL, (void*)TextView__set_TextWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextWrapping_typeof()),
        new uFunction("set_Value", NULL, (void*)TextView__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))TextView__set_TextTruncation_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public TextView() :2371
void TextView__ctor_2_fn(TextView* __this)
{
    __this->ctor_2();
}

// public TextView(Java.Object handle) :2369
void TextView__ctor_3_fn(TextView* __this, ::g::Java::Object* handle)
{
    __this->ctor_3(handle);
}

// private static Java.Object Create() :2437
void TextView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextView::Create();
}

// public void set_Font(Fuse.Font value) :2404
void TextView__set_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public void set_FontSize(float value) :2399
void TextView__set_FontSize_fn(TextView* __this, float* value)
{
    __this->FontSize(*value);
}

// public void set_LineSpacing(float value) :2394
void TextView__set_LineSpacing_fn(TextView* __this, float* value)
{
    __this->LineSpacing(*value);
}

// public void set_MaxLength(int value) :2380
void TextView__set_MaxLength_fn(TextView* __this, int* value)
{
    __this->MaxLength(*value);
}

// public TextView New() :2371
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public TextView New(Java.Object handle) :2369
void TextView__New2_fn(::g::Java::Object* handle, TextView** __retval)
{
    *__retval = TextView::New2(handle);
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) :2468
void TextView__SetFont_fn(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    TextView::SetFont(handle, fontHandle);
}

// private static void SetFontSize(Java.Object handle, float size) :2462
void TextView__SetFontSize_fn(::g::Java::Object* handle, float* size)
{
    TextView::SetFontSize(handle, *size);
}

// private static void SetLineSpacing(Java.Object handle, float spacing) :2456
void TextView__SetLineSpacing_fn(::g::Java::Object* handle, float* spacing)
{
    TextView::SetLineSpacing(handle, *spacing);
}

// private static void SetMaxLength(Java.Object handle, int maxLength) :2489
void TextView__SetMaxLength_fn(::g::Java::Object* handle, int* maxLength)
{
    TextView::SetMaxLength(handle, *maxLength);
}

// private static void SetText(Java.Object handle, string text) :2443
void TextView__SetText_fn(::g::Java::Object* handle, uString* text)
{
    TextView::SetText(handle, text);
}

// private static void SetTextAlignment(Java.Object handle, int alignment) :2474
void TextView__SetTextAlignment_fn(::g::Java::Object* handle, int* alignment)
{
    TextView::SetTextAlignment(handle, *alignment);
}

// private static void SetTextColor(Java.Object handle, int color) :2483
void TextView__SetTextColor_fn(::g::Java::Object* handle, int* color)
{
    TextView::SetTextColor(handle, *color);
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) :2450
void TextView__SetTextWrapping_fn(::g::Java::Object* handle, bool* wrap)
{
    TextView::SetTextWrapping(handle, *wrap);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) :2415
void TextView__set_TextAlignment_fn(TextView* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public void set_TextColor(float4 value) :2428
void TextView__set_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) :2433
void TextView__set_TextTruncation_fn(TextView* __this, int* value)
{
    __this->TextTruncation(*value);
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) :2389
void TextView__set_TextWrapping_fn(TextView* __this, int* value)
{
    __this->TextWrapping(*value);
}

// public void set_Value(string value) :2375
void TextView__set_Value_fn(TextView* __this, uString* value)
{
    __this->Value(value);
}

// public TextView() [instance] :2371
void TextView::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", ".ctor()");
    ctor_3(TextView::Create());
}

// public TextView(Java.Object handle) [instance] :2369
void TextView::ctor_3(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", ".ctor(Java.Object)");
    ctor_1(handle);
}

// public void set_Font(Fuse.Font value) [instance] :2404
void TextView::Font(::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_Font(Fuse.Font)");
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = (value != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(value) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default();
    TextView::SetFont(Handle(), uPtr(typeface)->Handle());
}

// public void set_FontSize(float value) [instance] :2399
void TextView::FontSize(float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_FontSize(float)");
    TextView::SetFontSize(Handle(), value);
}

// public void set_LineSpacing(float value) [instance] :2394
void TextView::LineSpacing(float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_LineSpacing(float)");
    TextView::SetLineSpacing(Handle(), value);
}

// public void set_MaxLength(int value) [instance] :2380
void TextView::MaxLength(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_MaxLength(int)");
    TextView::SetMaxLength(Handle(), (value == 0) ? 2147483647 : value);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) [instance] :2415
void TextView::TextAlignment(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_TextAlignment(Fuse.Controls.TextAlignment)");

    switch (value)
    {
        case 0:
        {
            TextView::SetTextAlignment(Handle(), 3);
            break;
        }
        case 1:
        {
            TextView::SetTextAlignment(Handle(), 1);
            break;
        }
        case 2:
        {
            TextView::SetTextAlignment(Handle(), 5);
            break;
        }
    }
}

// public void set_TextColor(float4 value) [instance] :2428
void TextView::TextColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_TextColor(float4)");
    TextView::SetTextColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) [instance] :2433
void TextView::TextTruncation(int value)
{
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) [instance] :2389
void TextView::TextWrapping(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_TextWrapping(Fuse.Controls.TextWrapping)");
    TextView::SetTextWrapping(Handle(), value == 1);
}

// public void set_Value(string value) [instance] :2375
void TextView::Value(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_Value(string)");
    TextView::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :2437
::g::Java::Object* TextView::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create130", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public TextView New() [static] :2371
TextView* TextView::New1()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_2();
    return obj2;
}

// public TextView New(Java.Object handle) [static] :2369
TextView* TextView::New2(::g::Java::Object* handle)
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_3(handle);
    return obj1;
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) [static] :2468
void TextView::SetFont(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetFont(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFont131", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(fontHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)fontHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFontSize(Java.Object handle, float size) [static] :2462
void TextView::SetFontSize(::g::Java::Object* handle, float size)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetFontSize(Java.Object,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFontSize132", "(Ljava/lang/Object;F)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)size);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetLineSpacing(Java.Object handle, float spacing) [static] :2456
void TextView::SetLineSpacing(::g::Java::Object* handle, float spacing)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetLineSpacing(Java.Object,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetLineSpacing133", "(Ljava/lang/Object;F)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)spacing);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetMaxLength(Java.Object handle, int maxLength) [static] :2489
void TextView::SetMaxLength(::g::Java::Object* handle, int maxLength)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetMaxLength(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxLength134", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)maxLength);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetText(Java.Object handle, string text) [static] :2443
void TextView::SetText(::g::Java::Object* handle, uString* text)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetText(Java.Object,string)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText135", "(Ljava/lang/Object;Ljava/lang/String;)V");
        jstring _text = JniHelper::UnoToJavaString(text);
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),_text);
        
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextAlignment(Java.Object handle, int alignment) [static] :2474
void TextView::SetTextAlignment(::g::Java::Object* handle, int alignment)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetTextAlignment(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextAlignment136", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)alignment);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextColor(Java.Object handle, int color) [static] :2483
void TextView::SetTextColor(::g::Java::Object* handle, int color)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetTextColor(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextColor137", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)color);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) [static] :2450
void TextView::SetTextWrapping(::g::Java::Object* handle, bool wrap)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetTextWrapping(Java.Object,bool)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextWrapping138", "(Ljava/lang/Object;Z)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jboolean)wrap);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal sealed extern class Typeface :2511
// {
static void Typeface_build(uType* type)
{
    ::TYPES[23] = ::g::Java::Object_typeof();
    ::TYPES[8] = uObject_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Typeface, _handle), 0);
}

uType* Typeface_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Typeface", options);
    type->fp_build_ = Typeface_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Typeface__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Typeface__GetHashCode_fn;
    return type;
}

// public Typeface(Java.Object handle) :2521
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// private static Java.Object CreateFromBundleFile(string bundlePath) :2554
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromBundleFile(bundlePath);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) :2543
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval)
{
    *__retval = Typeface::CreateFromBundleFile1(file);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) :2548
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval)
{
    *__retval = Typeface::CreateFromFile(path);
}

// private static Java.Object CreateFromFileImpl(string path) :2562
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromFileImpl(path);
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() :2528
void Typeface__get_Default_fn(Typeface** __retval)
{
    *__retval = Typeface::Default();
}

// public override sealed bool Equals(object obj) :2531
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "Equals(object)");
    return *__retval = uIs(obj, ::TYPES[23/*Java.Object*/]) ? ::g::Uno::Object::Equals(uPtr(__this->_handle), uCast< ::g::Java::Object*>(obj, ::TYPES[23/*Java.Object*/])) : false, void();
}

// private static Java.Object GetDefault() :2568
void Typeface__GetDefault_fn(::g::Java::Object** __retval)
{
    *__retval = Typeface::GetDefault();
}

// public override sealed int GetHashCode() :2538
void Typeface__GetHashCode_fn(Typeface* __this, int* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// public Java.Object get_Handle() :2515
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Typeface New(Java.Object handle) :2521
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval)
{
    *__retval = Typeface::New1(handle);
}

// public Typeface(Java.Object handle) [instance] :2521
void Typeface::ctor_(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", ".ctor(Java.Object)");
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :2515
::g::Java::Object* Typeface::Handle()
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "get_Handle()");
    return _handle;
}

// private static Java.Object CreateFromBundleFile(string bundlePath) [static] :2554
::g::Java::Object* Typeface::CreateFromBundleFile(uString* bundlePath)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromBundleFile(string)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromBundleFile139", "(Ljava/lang/String;)Ljava/lang/Object;");
        jstring _bundlePath = JniHelper::UnoToJavaString(bundlePath);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_bundlePath);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_bundlePath!=NULL) { _jni->DeleteLocalRef(_bundlePath); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) [static] :2543
Typeface* Typeface::CreateFromBundleFile1(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromBundleFile(Uno.IO.BundleFile)");
    return Typeface::New1(Typeface::CreateFromBundleFile(uPtr(file)->BundlePath()));
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) [static] :2548
Typeface* Typeface::CreateFromFile(uString* path)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromFile(string)");
    return Typeface::New1(Typeface::CreateFromFileImpl(path));
}

// private static Java.Object CreateFromFileImpl(string path) [static] :2562
::g::Java::Object* Typeface::CreateFromFileImpl(uString* path)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromFileImpl(string)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromFileImpl140", "(Ljava/lang/String;)Ljava/lang/Object;");
        jstring _path = JniHelper::UnoToJavaString(path);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_path);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_path!=NULL) { _jni->DeleteLocalRef(_path); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static Java.Object GetDefault() [static] :2568
::g::Java::Object* Typeface::GetDefault()
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "GetDefault()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDefault141", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public Typeface New(Java.Object handle) [static] :2521
Typeface* Typeface::New1(::g::Java::Object* handle)
{
    Typeface* obj1 = (Typeface*)uNew(Typeface_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() [static] :2528
Typeface* Typeface::Default()
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "get_Default()");
    return Typeface::New1(Typeface::GetDefault());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// internal static extern class TypefaceCache :2574
// {
// static TypefaceCache() :2574
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[24/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/]));
}

static void TypefaceCache_build(uType* type)
{
    ::STRINGS[3] = uString::Const("/tempFont");
    ::TYPES[24] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof());
    ::TYPES[25] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::TypefaceCache::_typefaces_, uFieldFlagsStatic);
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.TypefaceCache", options);
    type->fp_build_ = TypefaceCache_build;
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    return type;
}

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) :2579
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) :2586
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :2596
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) [static] :2579
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypeface(Fuse.Font)");
    TypefaceCache_typeof()->Init();
    return uIs((::g::Uno::UX::FileSource*)uPtr(font)->File(), ::TYPES[25/*Uno.UX.BundleFileSource*/]) ? (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->File(), ::TYPES[25/*Uno.UX.BundleFileSource*/]))->BundleFile) : (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->File());
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) [static] :2586
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypefaceFromBundleFile(Uno.IO.BundleFile)");
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::Android::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret2), ret2);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromBundleFile1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), typeface);
    return typeface;
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :2596
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypefaceFromFileSource(Uno.UX.FileSource)");
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::Android::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret4), ret4);

    uArray* data = uPtr(fileSource)->ReadAllBytes();
    uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[3/*"/tempFont"*/]);
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(path);
    ::g::Uno::IO::File::Delete(path);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), fileSource->Name, typeface);
    return typeface;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public abstract extern class View :2629
// {
static void View_build(uType* type)
{
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls.Native\\0.32.14\\Android\\$.uno");
    ::STRINGS[4] = uString::Const("set_Background");
    ::STRINGS[5] = uString::Const(" is missing parent view");
    ::TYPES[14] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[15] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[8] = uObject_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _handle), 0,
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _parent), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _rotation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _scale), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _size), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _translation), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("set_Background", NULL, (void*)View__set_Background_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("BringToFront", NULL, (void*)View__BringToFront_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(View_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("get_Handle", NULL, (void*)View__get_Handle_fn, 0, false, ::g::Java::Object_typeof(), 0),
        new uFunction("Hide", NULL, (void*)View__Hide_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)View__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_Opacity", NULL, (void*)View__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_Position", NULL, (void*)View__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Show", NULL, (void*)View__Show_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Size", NULL, (void*)View__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)View__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("set_Transform", NULL, (void*)View__set_Transform_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()));
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.Android.View", options);
    type->fp_build_ = View_build;
    type->fp_Dispose = View__Dispose_fn;
    type->interface0.fp_Show = (void(*)(uObject*))View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))View__Dispose_fn;
    return type;
}

// protected View(Java.Object handle) :2647
void View__ctor__fn(View* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public void set_Background(Fuse.Drawing.Brush value) :2686
void View__set_Background_fn(View* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Background(value);
}

// public void BringToFront() :2667
void View__BringToFront_fn(View* __this)
{
    __this->BringToFront();
}

// private static void BringToFront(Java.Object handle) :2673
void View__BringToFront1_fn(::g::Java::Object* handle)
{
    View::BringToFront1(handle);
}

// public virtual void Dispose() :2652
void View__Dispose_fn(View* __this)
{
}

// public Java.Object get_Handle() :2631
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public void Hide() :2662
void View__Hide_fn(View* __this)
{
    __this->Hide();
}

// public void set_IsEnabled(bool value) :2770
void View__set_IsEnabled_fn(View* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public void set_Opacity(float value) :2765
void View__set_Opacity_fn(View* __this, float* value)
{
    __this->Opacity(*value);
}

// internal Fuse.Controls.Native.Android.IViewParent get_Parent() :2636
void View__get_Parent_fn(View* __this, uObject** __retval)
{
    *__retval = __this->Parent();
}

// internal void set_Parent(Fuse.Controls.Native.Android.IViewParent value) :2637
void View__set_Parent_fn(View* __this, uObject* value)
{
    __this->Parent(value);
}

// public void set_Position(float2 value) :2748
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// private static void SetBackground(Java.Object handle, int argb) :2816
void View__SetBackground_fn(::g::Java::Object* handle, int* argb)
{
    View::SetBackground(handle, *argb);
}

// private static void SetEnabled(Java.Object handle, bool value) :2780
void View__SetEnabled_fn(::g::Java::Object* handle, bool* value)
{
    View::SetEnabled(handle, *value);
}

// private static void SetOpacity(Java.Object handle, float value) :2774
void View__SetOpacity_fn(::g::Java::Object* handle, float* value)
{
    View::SetOpacity(handle, *value);
}

// private static void SetPivotXY(Java.Object handle, float x, float y) :2800
void View__SetPivotXY_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetPivotXY(handle, *x, *y);
}

// private static void SetRotation(Java.Object handle, float value) :2794
void View__SetRotation_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotation(handle, *value);
}

// private static void SetScaleXY(Java.Object handle, float x, float y) :2808
void View__SetScaleXY_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetScaleXY(handle, *x, *y);
}

// private static void SetTranslation(Java.Object handle, float x, float y) :2786
void View__SetTranslation_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetTranslation(handle, *x, *y);
}

// private static void SetVisible(Java.Object handle, bool isVisible) :2679
void View__SetVisible_fn(::g::Java::Object* handle, bool* isVisible)
{
    View::SetVisible(handle, *isVisible);
}

// public void Show() :2657
void View__Show_fn(View* __this)
{
    __this->Show();
}

// public float2 get_Size() :2754
void View__get_Size_fn(View* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :2755
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public void set_Transform(float4x4 value) :2710
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value)
{
    __this->Transform(*value);
}

// protected View(Java.Object handle) [instance] :2647
void View::ctor_(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", ".ctor(Java.Object)");
    _handle = handle;
}

// public void set_Background(Fuse.Drawing.Brush value) [instance] :2686
void View::Background(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Background(Fuse.Drawing.Brush)");
    ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);

    if (value != NULL)
    {
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(value, ::TYPES[14/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(value, ::TYPES[15/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::g::Uno::Object::ToString(this), value, ::STRINGS[1/*"C:\\Program...*/], 2699, ::STRINGS[4/*"set_Backgro...*/]);
    }

    View::SetBackground(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(c));
}

// public void BringToFront() [instance] :2667
void View::BringToFront()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "BringToFront()");
    View::BringToFront1(Handle());
}

// public Java.Object get_Handle() [instance] :2631
::g::Java::Object* View::Handle()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "get_Handle()");
    return _handle;
}

// public void Hide() [instance] :2662
void View::Hide()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "Hide()");
    View::SetVisible(Handle(), false);
}

// public void set_IsEnabled(bool value) [instance] :2770
void View::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_IsEnabled(bool)");
    View::SetEnabled(Handle(), value);
}

// public void set_Opacity(float value) [instance] :2765
void View::Opacity(float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Opacity(float)");
    View::SetOpacity(Handle(), value);
}

// internal Fuse.Controls.Native.Android.IViewParent get_Parent() [instance] :2636
uObject* View::Parent()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "get_Parent()");
    return _parent;
}

// internal void set_Parent(Fuse.Controls.Native.Android.IViewParent value) [instance] :2637
void View::Parent(uObject* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Parent(Fuse.Controls.Native.Android.IViewParent)");
    _parent = value;

    if (_parent != NULL)
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(_parent), ::TYPES[4/*Fuse.Controls.Native.Android.IViewParent*/]), this, _size);
}

// public void set_Position(float2 value) [instance] :2748
void View::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Position(float2)");
    View::SetTranslation(Handle(), value.X, value.Y);
}

// public void Show() [instance] :2657
void View::Show()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "Show()");
    View::SetVisible(Handle(), true);
}

// public float2 get_Size() [instance] :2754
::g::Uno::Float2 View::Size()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "get_Size()");
    return _size;
}

// public void set_Size(float2 value) [instance] :2755
void View::Size(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Size(float2)");
    _size = value;

    if (Parent() != NULL)
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(Parent()), ::TYPES[4/*Fuse.Controls.Native.Android.IViewParent*/]), this, value);
}

// public void set_Transform(float4x4 value) [instance] :2710
void View::Transform(::g::Uno::Float4x4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Transform(float4x4)");
    ::g::Uno::Float4x4 t = value;
    ::g::Uno::Float3 scale;
    ::g::Uno::Float4 rotation;
    ::g::Uno::Float3 translation;
    ::g::Uno::Matrix::Decompose(t, &scale, &rotation, &translation);

    if (::g::Uno::Float2__op_Inequality(::g::Uno::Float2__New2(scale.X, scale.Y), _scale))
    {
        View::SetPivotXY(Handle(), 0.0f, 0.0f);
        View::SetScaleXY(Handle(), scale.X, scale.Y);
        _scale = ::g::Uno::Float2__New2(scale.X, scale.Y);
    }

    ::g::Uno::Float3 r = ::g::Uno::Quaternion::ToEulerAngleDegrees(rotation);

    if (r.X != _rotation)
    {
        View::SetRotation(Handle(), r.X);
        _rotation = r.X;
    }

    ::g::Uno::Float2 translationXY = ::g::Uno::Float2__New2(translation.X, translation.Y);

    if (::g::Uno::Vector::Distance(translationXY, _translation) > 0.1f)
    {
        Position(translationXY);
        _translation = translationXY;
    }

    if (Parent() == NULL)
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition(this, ::STRINGS[5/*" is missing...*/]), 1, ::STRINGS[1/*"C:\\Program...*/], 2741);
    else
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(Parent()), ::TYPES[4/*Fuse.Controls.Native.Android.IViewParent*/]), this, Size());
}

// private static void BringToFront(Java.Object handle) [static] :2673
void View::BringToFront1(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "BringToFront(Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "BringToFront1142", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetBackground(Java.Object handle, int argb) [static] :2816
void View::SetBackground(::g::Java::Object* handle, int argb)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetBackground(Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBackground143", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)argb);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetEnabled(Java.Object handle, bool value) [static] :2780
void View::SetEnabled(::g::Java::Object* handle, bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetEnabled(Java.Object,bool)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetEnabled144", "(Ljava/lang/Object;Z)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jboolean)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetOpacity(Java.Object handle, float value) [static] :2774
void View::SetOpacity(::g::Java::Object* handle, float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetOpacity(Java.Object,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOpacity145", "(Ljava/lang/Object;F)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPivotXY(Java.Object handle, float x, float y) [static] :2800
void View::SetPivotXY(::g::Java::Object* handle, float x, float y)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetPivotXY(Java.Object,float,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPivotXY146", "(Ljava/lang/Object;FF)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)x,(jfloat)y);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotation(Java.Object handle, float value) [static] :2794
void View::SetRotation(::g::Java::Object* handle, float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetRotation(Java.Object,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotation147", "(Ljava/lang/Object;F)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetScaleXY(Java.Object handle, float x, float y) [static] :2808
void View::SetScaleXY(::g::Java::Object* handle, float x, float y)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetScaleXY(Java.Object,float,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScaleXY148", "(Ljava/lang/Object;FF)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)x,(jfloat)y);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTranslation(Java.Object handle, float x, float y) [static] :2786
void View::SetTranslation(::g::Java::Object* handle, float x, float y)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetTranslation(Java.Object,float,float)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTranslation149", "(Ljava/lang/Object;FF)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)x,(jfloat)y);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetVisible(Java.Object handle, bool isVisible) [static] :2679
void View::SetVisible(::g::Java::Object* handle, bool isVisible)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetVisible(Java.Object,bool)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetVisible150", "(Ljava/lang/Object;Z)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jboolean)isVisible);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno
// ----------------------------------------------------------------------

// public sealed extern class ViewGroup :2839
// {
static void ViewGroup_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Native::Android::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(ViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ViewGroup_type, interface3));
    type->SetFields(6);
    type->Reflection.SetFunctions(4,
        new uFunction("Add", NULL, (void*)ViewGroup__Add_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::Android::View_typeof()),
        new uFunction("Add", NULL, (void*)ViewGroup__Add1_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Controls::Native::Android::View_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)ViewGroup__New1_fn, 0, true, ViewGroup_typeof(), 0),
        new uFunction("Remove", NULL, (void*)ViewGroup__Remove_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::Android::View_typeof()));
}

ViewGroup_type* ViewGroup_typeof()
{
    static uSStrong<ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(ViewGroup_type);
    type = (ViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.ViewGroup", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::View_typeof());
    type->fp_build_ = ViewGroup_build;
    type->fp_ctor_ = (void*)ViewGroup__New1_fn;
    type->interface3.fp_Add = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface3.fp_Add1 = (void(*)(uObject*, uObject*, int*))ViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public ViewGroup() :2842
void ViewGroup__ctor_1_fn(ViewGroup* __this)
{
    __this->ctor_1();
}

// public void Add(Fuse.Controls.Native.Android.View child) :2869
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child)
{
    __this->Add(child);
}

// public void Add(Fuse.Controls.Native.Android.View child, int index) :2875
void ViewGroup__Add1_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child, int* index)
{
    __this->Add1(child, *index);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :2900
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::AddView(parentHandle, childHandle);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :2908
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index)
{
    ViewGroup::AddView1(parentHandle, childHandle, *index);
}

// private static Java.Object Create() :2845
void ViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ViewGroup::Create();
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :2887
void ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View,float2)");
    ::g::Uno::Float2 size_ = *size;
    ViewGroup::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :2854
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    __this->Add(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :2859
void ViewGroup__FuseControlsNativeIViewGroupAdd1_fn(ViewGroup* __this, uObject* child, int* index)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView,int)");
    int index_ = *index;
    __this->Add1(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]), index_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :2864
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    __this->Remove(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[3/*Fuse.Controls.Native.Android.View*/]));
}

// public ViewGroup New() :2842
void ViewGroup__New1_fn(ViewGroup** __retval)
{
    *__retval = ViewGroup::New1();
}

// public void Remove(Fuse.Controls.Native.Android.View child) :2881
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child)
{
    __this->Remove(child);
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :2916
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :2893
void ViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    ViewGroup::SetChildSize(handle, *w, *h);
}

// public ViewGroup() [instance] :2842
void ViewGroup::ctor_1()
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", ".ctor()");
    ctor_(ViewGroup::Create());
}

// public void Add(Fuse.Controls.Native.Android.View child) [instance] :2869
void ViewGroup::Add(::g::Fuse::Controls::Native::Android::View* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Add(Fuse.Controls.Native.Android.View)");
    uPtr(child)->Parent((uObject*)this);
    ViewGroup::AddView(Handle(), child->Handle());
}

// public void Add(Fuse.Controls.Native.Android.View child, int index) [instance] :2875
void ViewGroup::Add1(::g::Fuse::Controls::Native::Android::View* child, int index)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Add(Fuse.Controls.Native.Android.View,int)");
    uPtr(child)->Parent((uObject*)this);
    ViewGroup::AddView1(Handle(), child->Handle(), index);
}

// public void Remove(Fuse.Controls.Native.Android.View child) [instance] :2881
void ViewGroup::Remove(::g::Fuse::Controls::Native::Android::View* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Remove(Fuse.Controls.Native.Android.View)");
    uPtr(child)->Parent(NULL);
    ViewGroup::RemoveView(Handle(), child->Handle());
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :2900
void ViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "AddView(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView151", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :2908
void ViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "AddView(Java.Object,Java.Object,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView1152", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)index);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :2845
::g::Java::Object* ViewGroup::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Create()");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create153", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public ViewGroup New() [static] :2842
ViewGroup* ViewGroup::New1()
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_1();
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :2916
void ViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "RemoveView(Java.Object,Java.Object)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView154", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(parentHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)parentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(childHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)childHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :2893
void ViewGroup::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "SetChildSize(Java.Object,int,int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize155", "(Ljava/lang/Object;II)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)w,(jint)h);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
