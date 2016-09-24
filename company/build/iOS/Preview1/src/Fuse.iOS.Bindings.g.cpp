// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.iOS.Bindings.Blitter.h>
#include <Fuse.iOS.Bindings.FontCache.h>
#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <Fuse.iOS.Bindings.iOSExtensions.h>
#include <Fuse.iOS.Bindings.iOSInterop.h>
#include <Fuse.iOS.Bindings.NSAttributedStringConstants.h>
#include <Fuse.iOS.Bindings.TextLayout.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Visual.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.CoreGraphics.Functions.h>
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSAttributedString.h>
#include <iOS.Foundation.NSDictionary.h>
#include <iOS.Foundation.NSMutableArray.h>
#include <iOS.Foundation.NSMutableDictionary.h>
#include <iOS.Foundation.NSNumber.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.Foundation.NSString.h>
#include <iOS.QuartzCore.CAGradientLayer.h>
#include <iOS.QuartzCore.CALayer.h>
#include <iOS.UIKit.NSLayoutManager.h>
#include <iOS.UIKit.NSLineBreakMode.h>
#include <iOS.UIKit.NSMutableParagraphStyle.h>
#include <iOS.UIKit.NSParagraphStyle.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.NSTextContainer.h>
#include <iOS.UIKit.NSTextStorage.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIFont.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UX.FileSource.h>
static uString* STRINGS[4];
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// /usr/local/share/uno/Packages/Fuse.iOS/0.35.8/$.uno
// ---------------------------------------------------

// internal sealed class Blitter :1109
// {
// static Blitter() :1109
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, _draw_e36bc3a0), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_LocalTransform_e36bc3a0_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_LocalTransform_e36bc3a0_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_VertexData_e36bc3a0_7_2_1), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::iOS::Bindings::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Bindings.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :1109
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Visual where, texture2D vt, float2 pos, float2 size) :1113
void Blitter__Blit_fn(Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size)
{
    __this->Blit(dc, where, vt, *pos, *size);
}

// private generated void init_DrawCalls() :1109
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1109
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1109
void Blitter::ctor_()
{
    uStackFrame __("Fuse.iOS.Bindings.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Visual where, texture2D vt, float2 pos, float2 size) [instance] :1113
void Blitter::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOS.Bindings.Blitter", "Blit(Fuse.DrawContext,Fuse.Visual,texture2D,float2,float2)");
    ::g::Uno::Float4x4 LocalTransform_e36bc3a0_4_9_4 = ::g::Uno::Matrix::Mul10(Blit_LocalTransform_e36bc3a0_4_9_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Blit_LocalTransform_e36bc3a0_4_9_3, ::g::Uno::Matrix::Translation(pos.X, pos.Y, 0.0f));
    _draw_e36bc3a0.BlendEnabled(true);
    _draw_e36bc3a0.DepthTestEnabled(false);
    _draw_e36bc3a0.CullFace(uPtr(dc)->CullFace());
    _draw_e36bc3a0.BlendSrcAlpha(7);
    _draw_e36bc3a0.BlendDstRgb(3);
    _draw_e36bc3a0.Use();
    _draw_e36bc3a0.Attrib1(0, 2, Blit_VertexData_e36bc3a0_7_2_1, 8, 0);
    _draw_e36bc3a0.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    _draw_e36bc3a0.Uniform12(2, (where != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_e36bc3a0_4_9_4, uPtr(where)->WorldTransform()) : LocalTransform_e36bc3a0_4_9_4);
    _draw_e36bc3a0.Sampler2(3, vt);
    _draw_e36bc3a0.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :1109
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.iOS.Bindings.Blitter", "init_DrawCalls()");
    Blit_VertexData_e36bc3a0_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Blit_LocalTransform_e36bc3a0_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Blit_LocalTransform_e36bc3a0_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_e36bc3a0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::Viewportccb5cb29());
}

// public generated Blitter New() [static] :1109
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.35.8/$.uno
// ---------------------------------------------------

// internal static extern class iOSExtensions :484
// {
static void iOSExtensions_build(uType* type)
{
    ::STRINGS[0] = uString::Const("unsupported CALayer brush");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.iOS/0.35.8/$.uno");
    ::STRINGS[2] = uString::Const("ToCALayer");
    ::TYPES[2] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::LinearGradient_typeof();
}

uClassType* iOSExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSExtensions", options);
    type->fp_build_ = iOSExtensions_build;
    return type;
}

// public static iOS.QuartzCore.CALayer ToCALayer(float4 color) :539
void iOSExtensions__ToCALayer_fn(::g::Uno::Float4* color, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer(*color);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.Brush brush) :595
void iOSExtensions__ToCALayer1_fn(::g::Fuse::Drawing::Brush* brush, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer1(brush);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.LinearGradient linearGradient) :557
void iOSExtensions__ToCALayer2_fn(::g::Fuse::Drawing::LinearGradient* linearGradient, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer2(linearGradient);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.SolidColor solidColor) :547
void iOSExtensions__ToCALayer3_fn(::g::Fuse::Drawing::SolidColor* solidColor, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer3(solidColor);
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.StaticSolidColor staticSolidColor) :552
void iOSExtensions__ToCALayer4_fn(::g::Fuse::Drawing::StaticSolidColor* staticSolidColor, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = iOSExtensions::ToCALayer4(staticSolidColor);
}

// public static iOS.CoreGraphics.CGPoint ToCGPoint(float2 f) :515
void iOSExtensions__ToCGPoint_fn(::g::Uno::Float2* f, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = iOSExtensions::ToCGPoint(*f);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect rect) :508
void iOSExtensions__ToCGRect_fn(::g::Uno::Rect* rect, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = iOSExtensions::ToCGRect(*rect);
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 f) :520
void iOSExtensions__ToCGSize_fn(::g::Uno::Float2* f, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = iOSExtensions::ToCGSize(*f);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGPoint point) :503
void iOSExtensions__ToFloat2_fn(::g::iOS::CoreGraphics::CGPoint* point, ::g::Uno::Float2* __retval)
{
    *__retval = iOSExtensions::ToFloat2(*point);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size) :498
void iOSExtensions__ToFloat21_fn(::g::iOS::CoreGraphics::CGSize* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSExtensions::ToFloat21(*size);
}

// public static iOS.Foundation.NSNumber ToNSNumber(double d) :532
void iOSExtensions__ToNSNumber_fn(double* d, ::g::iOS::Foundation::NSNumber** __retval)
{
    *__retval = iOSExtensions::ToNSNumber(*d);
}

// public static iOS.Foundation.NSNumber ToNSNumber(float f) :525
void iOSExtensions__ToNSNumber1_fn(float* f, ::g::iOS::Foundation::NSNumber** __retval)
{
    *__retval = iOSExtensions::ToNSNumber1(*f);
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect rect) :493
void iOSExtensions__ToRect_fn(::g::iOS::CoreGraphics::CGRect* rect, ::g::Uno::Rect* __retval)
{
    *__retval = iOSExtensions::ToRect(*rect);
}

// public static iOS.UIKit.UIColor ToUIColor(float4 color) :486
void iOSExtensions__ToUIColor_fn(::g::Uno::Float4* color, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = iOSExtensions::ToUIColor(*color);
}

// public static iOS.QuartzCore.CALayer ToCALayer(float4 color) [static] :539
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(float4)");
    ::g::iOS::QuartzCore::CALayer* layer = ::g::iOS::QuartzCore::CALayer::New5();
    layer->init();
    layer->BackgroundColor(uPtr(iOSExtensions::ToUIColor(color))->CGColor());
    return layer;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.Brush brush) [static] :595
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer1(::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(Fuse.Drawing.Brush)");

    if (uIs(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))
        return iOSExtensions::ToCALayer3(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]));

    if (uIs(brush, ::TYPES[3/*Fuse.Drawing.StaticSolidColor*/]))
        return iOSExtensions::ToCALayer4(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.StaticSolidColor*/]));

    if (uIs(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))
        return iOSExtensions::ToCALayer2(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]));

    ::g::Fuse::Diagnostics::Unsupported(::STRINGS[0/*"unsupported...*/], brush, ::STRINGS[1/*"/usr/local/...*/], 604, ::STRINGS[2/*"ToCALayer"*/]);
    return NULL;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.LinearGradient linearGradient) [static] :557
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer2(::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(Fuse.Drawing.LinearGradient)");
    ::g::iOS::QuartzCore::CAGradientLayer* layer = ::g::iOS::QuartzCore::CAGradientLayer::New7();
    layer->init();
    layer->StartPoint(iOSExtensions::ToCGPoint(uPtr(linearGradient)->StartPoint()));
    layer->EndPoint(iOSExtensions::ToCGPoint(linearGradient->EndPoint()));
    ::g::iOS::Foundation::NSMutableArray* colors = ::g::iOS::Foundation::NSMutableArray::New7();
    colors->initWithCapacity((uint64_t)(uint32_t)uPtr(linearGradient->SortedStops())->Length());
    ::g::iOS::Foundation::NSMutableArray* offsets = ::g::iOS::Foundation::NSMutableArray::New7();
    offsets->initWithCapacity((uint64_t)(uint32_t)uPtr(linearGradient->SortedStops())->Length());

    for (int i = 0; i < uPtr(linearGradient->SortedStops())->Length(); i++)
    {
        ::g::Fuse::Drawing::GradientStop* gradientStop = uPtr(uPtr(linearGradient)->SortedStops())->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        ::g::iOS::Foundation::NSNumber* offset = iOSExtensions::ToNSNumber1(uPtr(gradientStop)->Offset());
        uPtr(offsets)->addObject(uPtr(offset)->Handle());
    }

    layer->setColors(colors);
    layer->setLocations(offsets);
    return layer;
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.SolidColor solidColor) [static] :547
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer3(::g::Fuse::Drawing::SolidColor* solidColor)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(Fuse.Drawing.SolidColor)");
    return iOSExtensions::ToCALayer(uPtr(solidColor)->Color());
}

// public static iOS.QuartzCore.CALayer ToCALayer(Fuse.Drawing.StaticSolidColor staticSolidColor) [static] :552
::g::iOS::QuartzCore::CALayer* iOSExtensions::ToCALayer4(::g::Fuse::Drawing::StaticSolidColor* staticSolidColor)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCALayer(Fuse.Drawing.StaticSolidColor)");
    return iOSExtensions::ToCALayer(uPtr(staticSolidColor)->Color());
}

// public static iOS.CoreGraphics.CGPoint ToCGPoint(float2 f) [static] :515
::g::iOS::CoreGraphics::CGPoint iOSExtensions::ToCGPoint(::g::Uno::Float2 f)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCGPoint(float2)");
    return ::g::iOS::CoreGraphics::CGPoint__New1((double)f.X, (double)f.Y);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect rect) [static] :508
::g::iOS::CoreGraphics::CGRect iOSExtensions::ToCGRect(::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCGRect(Uno.Rect)");
    return ::g::iOS::CoreGraphics::CGRect__New1(iOSExtensions::ToCGPoint(rect.Position()), iOSExtensions::ToCGSize(rect.Size()));
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 f) [static] :520
::g::iOS::CoreGraphics::CGSize iOSExtensions::ToCGSize(::g::Uno::Float2 f)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToCGSize(float2)");
    return ::g::iOS::CoreGraphics::CGSize__New1((double)f.X, (double)f.Y);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGPoint point) [static] :503
::g::Uno::Float2 iOSExtensions::ToFloat2(::g::iOS::CoreGraphics::CGPoint point)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToFloat2(iOS.CoreGraphics.CGPoint)");
    return ::g::Uno::Float2__New2((float)point.X, (float)point.Y);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size) [static] :498
::g::Uno::Float2 iOSExtensions::ToFloat21(::g::iOS::CoreGraphics::CGSize size)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToFloat2(iOS.CoreGraphics.CGSize)");
    return ::g::Fuse::iOS::Bindings::iOSInterop::ToFloat2(size, 1.0f);
}

// public static iOS.Foundation.NSNumber ToNSNumber(double d) [static] :532
::g::iOS::Foundation::NSNumber* iOSExtensions::ToNSNumber(double d)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToNSNumber(double)");
    ::g::iOS::Foundation::NSNumber* num = ::g::iOS::Foundation::NSNumber::New7();
    num->initWithDouble(d);
    return num;
}

// public static iOS.Foundation.NSNumber ToNSNumber(float f) [static] :525
::g::iOS::Foundation::NSNumber* iOSExtensions::ToNSNumber1(float f)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToNSNumber(float)");
    ::g::iOS::Foundation::NSNumber* num = ::g::iOS::Foundation::NSNumber::New7();
    num->initWithFloat(f);
    return num;
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect rect) [static] :493
::g::Uno::Rect iOSExtensions::ToRect(::g::iOS::CoreGraphics::CGRect rect)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToRect(iOS.CoreGraphics.CGRect)");
    return ::g::Fuse::iOS::Bindings::iOSInterop::ToRect(rect, 1.0f);
}

// public static iOS.UIKit.UIColor ToUIColor(float4 color) [static] :486
::g::iOS::UIKit::UIColor* iOSExtensions::ToUIColor(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSExtensions", "ToUIColor(float4)");
    ::g::iOS::UIKit::UIColor* uiColor = ::g::iOS::UIKit::UIColor::New5();
    uiColor->initWithRedGreenBlueAlpha((double)color.X, (double)color.Y, (double)color.Z, (double)color.W);
    return uiColor;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.35.8/$.uno
// ---------------------------------------------------

// internal static extern class iOSInterop :617
// {
static void iOSInterop_build(uType* type)
{
    ::STRINGS[3] = uString::Const("textAlignment");
    ::TYPES[5] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[6] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
}

uClassType* iOSInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSInterop", options);
    type->fp_build_ = iOSInterop_build;
    return type;
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp, float scale) :620
void iOSInterop__GetContentSize_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams* lp, float* scale, ::g::Uno::Float2* __retval)
{
    *__retval = iOSInterop::GetContentSize(view, *lp, *scale);
}

// public static float get_Scale() :636
void iOSInterop__get_Scale_fn(float* __retval)
{
    *__retval = iOSInterop::Scale();
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect unoRect, float scale) :639
void iOSInterop__ToCGRect_fn(::g::Uno::Rect* unoRect, float* scale, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = iOSInterop::ToCGRect(*unoRect, *scale);
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 unoSize, float scale) :669
void iOSInterop__ToCGSize_fn(::g::Uno::Float2* unoSize, float* scale, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = iOSInterop::ToCGSize(*unoSize, *scale);
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size, float scale) :664
void iOSInterop__ToFloat2_fn(::g::iOS::CoreGraphics::CGSize* size, float* scale, ::g::Uno::Float2* __retval)
{
    *__retval = iOSInterop::ToFloat2(*size, *scale);
}

// internal static iOS.Foundation.NSDictionary ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID> dict) :691
void iOSInterop__ToNSDictionary_fn(::g::Uno::Collections::Dictionary* dict, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = iOSInterop::ToNSDictionary(dict);
}

// public static iOS.UIKit.NSTextAlignment ToNSTextAlignment(Fuse.Controls.TextAlignment textAlignment) :674
void iOSInterop__ToNSTextAlignment_fn(int* textAlignment, int* __retval)
{
    *__retval = iOSInterop::ToNSTextAlignment(*textAlignment);
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect cgRect, float scale) :649
void iOSInterop__ToRect_fn(::g::iOS::CoreGraphics::CGRect* cgRect, float* scale, ::g::Uno::Rect* __retval)
{
    *__retval = iOSInterop::ToRect(*cgRect, *scale);
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp, float scale) [static] :620
::g::Uno::Float2 iOSInterop::GetContentSize(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams lp, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "GetContentSize(iOS.UIKit.UIView,Fuse.LayoutParams,float)");
    ::g::Uno::Float2 fillSize = lp.Size();

    if (!lp.HasX())
        fillSize.X = 1000000.0f;

    if (!lp.HasY())
        fillSize.Y = 1000000.0f;

    ::g::iOS::CoreGraphics::CGSize maxSize = ::g::Fuse::iOS::Bindings::iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(iOSInterop::ToCGSize(fillSize, scale), view);
    ::g::iOS::CoreGraphics::CGSize result = uPtr(view)->sizeThatFits(maxSize);
    return iOSInterop::ToFloat2(::g::Fuse::iOS::Bindings::iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(result, view), scale);
}

// public static iOS.CoreGraphics.CGRect ToCGRect(Uno.Rect unoRect, float scale) [static] :639
::g::iOS::CoreGraphics::CGRect iOSInterop::ToCGRect(::g::Uno::Rect unoRect, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToCGRect(Uno.Rect,float)");
    ::g::iOS::CoreGraphics::CGRect rect;
    rect.Origin.X = (double)(unoRect.Position().X / scale);
    rect.Origin.Y = (double)(unoRect.Position().Y / scale);
    rect.Size.Width = (double)(unoRect.Size().X / scale);
    rect.Size.Height = (double)(unoRect.Size().Y / scale);
    return rect;
}

// public static iOS.CoreGraphics.CGSize ToCGSize(float2 unoSize, float scale) [static] :669
::g::iOS::CoreGraphics::CGSize iOSInterop::ToCGSize(::g::Uno::Float2 unoSize, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToCGSize(float2,float)");
    return ::g::iOS::CoreGraphics::CGSize__New1((double)(unoSize.X / scale), (double)(unoSize.Y / scale));
}

// public static float2 ToFloat2(iOS.CoreGraphics.CGSize size, float scale) [static] :664
::g::Uno::Float2 iOSInterop::ToFloat2(::g::iOS::CoreGraphics::CGSize size, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToFloat2(iOS.CoreGraphics.CGSize,float)");
    return ::g::Uno::Float2__New2((float)size.Width * scale, (float)size.Height * scale);
}

// internal static iOS.Foundation.NSDictionary ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID> dict) [static] :691
::g::iOS::Foundation::NSDictionary* iOSInterop::ToNSDictionary(::g::Uno::Collections::Dictionary* dict)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToNSDictionary(Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>)");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, ::id> ret2;
    ::g::iOS::Foundation::NSMutableDictionary* ret = ::g::iOS::Foundation::NSMutableDictionary::New8(::g::iOS::Foundation::NSMutableDictionary::_dictionaryWithCapacity((uint64_t)(uint32_t)uPtr(dict)->Count()));

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, ::id> enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(dict, &ret2), ret2); enum1.MoveNext(::TYPES[5/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, ::id> e = enum1.Current(::TYPES[5/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>.Enumerator*/]);
        uPtr(ret)->setObjectForKey(e.Value(::TYPES[6/*Uno.Collections.KeyValuePair<iOS.Foundation.INSCopying, ObjC.ID>*/]), e.Key(::TYPES[6/*Uno.Collections.KeyValuePair<iOS.Foundation.INSCopying, ObjC.ID>*/]));
    }

    return ret;
}

// public static iOS.UIKit.NSTextAlignment ToNSTextAlignment(Fuse.Controls.TextAlignment textAlignment) [static] :674
int iOSInterop::ToNSTextAlignment(int textAlignment)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToNSTextAlignment(Fuse.Controls.TextAlignment)");

    switch (textAlignment)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
    }

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[3/*"textAlignment"*/]));
}

// public static Uno.Rect ToRect(iOS.CoreGraphics.CGRect cgRect, float scale) [static] :649
::g::Uno::Rect iOSInterop::ToRect(::g::iOS::CoreGraphics::CGRect cgRect, float scale)
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "ToRect(iOS.CoreGraphics.CGRect,float)");
    ::g::Uno::Rect rect = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);
    rect.Position(::g::Uno::Float2__New2((float)cgRect.Origin.X * scale, (float)cgRect.Origin.Y * scale));
    rect.Size(::g::Uno::Float2__New2((float)cgRect.Size.Width * scale, (float)cgRect.Size.Height * scale));
    return rect;
}

// public static float get_Scale() [static] :636
float iOSInterop::Scale()
{
    uStackFrame __("Fuse.iOS.Bindings.iOSInterop", "get_Scale()");
    return uPtr(::g::Uno::Platform2::Display::MainDisplay())->Density();
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.35.8/$.uno
// ---------------------------------------------------

// public sealed extern class TextLayout :884
// {
static void TextLayout_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[8] = ::g::Fuse::ICommonViewport_typeof();
    type->SetFields(0,
        ::g::iOS::UIKit::UIFont_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _font), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _layoutMin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _layoutSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _layoutValid), 0,
        ::g::iOS::UIKit::NSMutableParagraphStyle_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _style), 0,
        ::g::iOS::UIKit::UIColor_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _textColor), 0,
        ::g::iOS::UIKit::NSTextStorage_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, _textStorage), 0,
        ::g::iOS::UIKit::NSLayoutManager_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, LayoutManager), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, PixelBounds), 0,
        ::g::iOS::UIKit::NSTextContainer_typeof(), offsetof(::g::Fuse::iOS::Bindings::TextLayout, TextContainer), 0);
    type->Reflection.SetFields(3,
        new uField("LayoutManager", 7),
        new uField("PixelBounds", 8),
        new uField("TextContainer", 9));
    type->Reflection.SetFunctions(3,
        new uFunction("Invalidate", NULL, (void*)TextLayout__Invalidate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TextLayout__New1_fn, 0, true, TextLayout_typeof(), 0),
        new uFunction("UpdateLayout", NULL, (void*)TextLayout__UpdateLayout_fn, 0, false, ::g::Uno::Bool_typeof(), 3, ::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof()));
}

uType* TextLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(TextLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Bindings.TextLayout", options);
    type->fp_build_ = TextLayout_build;
    type->fp_ctor_ = (void*)TextLayout__New1_fn;
    return type;
}

// public TextLayout() :902
void TextLayout__ctor__fn(TextLayout* __this)
{
    __this->ctor_();
}

// private iOS.Foundation.NSDictionary GetTextAttributes() :969
void TextLayout__GetTextAttributes_fn(TextLayout* __this, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = __this->GetTextAttributes();
}

// public void Invalidate() :897
void TextLayout__Invalidate_fn(TextLayout* __this)
{
    __this->Invalidate();
}

// public TextLayout New() :902
void TextLayout__New1_fn(TextLayout** __retval)
{
    *__retval = TextLayout::New1();
}

// public bool UpdateLayout(Fuse.Controls.TextControl control, float2 size, [bool useMin]) :911
void TextLayout__UpdateLayout_fn(TextLayout* __this, ::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2* size, bool* useMin, bool* __retval)
{
    *__retval = __this->UpdateLayout(control, *size, *useMin);
}

// public TextLayout() [instance] :902
void TextLayout::ctor_()
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", ".ctor()");
    LayoutManager = ::g::iOS::UIKit::NSLayoutManager::New5();
    uPtr(LayoutManager)->init();
    TextContainer = ::g::iOS::UIKit::NSTextContainer::New5();
    _style = ::g::iOS::UIKit::NSMutableParagraphStyle::New8(uPtr(::g::iOS::UIKit::NSParagraphStyle::_defaultParagraphStyle())->mutableCopy());
}

// private iOS.Foundation.NSDictionary GetTextAttributes() [instance] :969
::g::iOS::Foundation::NSDictionary* TextLayout::GetTextAttributes()
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", "GetTextAttributes()");
    ::g::Uno::Collections::Dictionary* collection1;
    return ::g::Fuse::iOS::Bindings::iOSInterop::ToNSDictionary((collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[7/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSFontAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_font))), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSForegroundColorAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_textColor))), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::Bindings::NSAttributedStringConstants::NSParagraphStyleAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_style))), collection1));
}

// public void Invalidate() [instance] :897
void TextLayout::Invalidate()
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", "Invalidate()");
    _layoutValid = false;
}

// public bool UpdateLayout(Fuse.Controls.TextControl control, float2 size, [bool useMin]) [instance] :911
bool TextLayout::UpdateLayout(::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2 size, bool useMin)
{
    uStackFrame __("Fuse.iOS.Bindings.TextLayout", "UpdateLayout(Fuse.Controls.TextControl,float2,[bool])");
    size = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(size, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(control)->Viewport()), ::TYPES[8/*Fuse.ICommonViewport*/]))));
    bool valid = (_layoutValid && ::g::Uno::Float2__op_Equality(_layoutSize, size)) && (_layoutMin == useMin);

    if (valid)
        return false;

    _font = ((control->Font() != ::g::Fuse::Font::PlatformDefault()) ? (::g::iOS::UIKit::UIFont*)::g::Fuse::iOS::Bindings::FontCache::GetFontFromFile(uPtr(control->Font())->File(), control->FontSize() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[8/*Fuse.ICommonViewport*/]))) : (::g::iOS::UIKit::UIFont*)::g::iOS::UIKit::UIFont::_systemFontOfSize((double)(control->FontSize() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[8/*Fuse.ICommonViewport*/])))));
    _textColor = ::g::Fuse::iOS::Bindings::iOSExtensions::ToUIColor(control->TextColor());

    while (uPtr(uPtr(LayoutManager)->textContainers())->count() > 0ULL)
        uPtr(LayoutManager)->removeTextContainerAtIndex(0ULL);

    float width = size.X;

    if ((control->TextTruncation() == 1) && (control->TextWrapping() == 0))
        width = 0.0f;

    uPtr(TextContainer)->initWithSize(::g::iOS::CoreGraphics::Functions::CGSizeMake((double)width, (double)size.Y));
    uPtr(TextContainer)->setLineFragmentPadding(0.0);
    uPtr(LayoutManager)->addTextContainer(TextContainer);
    uPtr(_style)->setAlignment(::g::Fuse::iOS::Bindings::iOSInterop::ToNSTextAlignment(control->TextAlignment()));
    uPtr(_style)->setLineSpacing((double)(control->LineSpacing() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[8/*Fuse.ICommonViewport*/]))));

    switch (control->TextWrapping())
    {
        case 0:
        {
            uPtr(_style)->setLineBreakMode(4);
            break;
        }
        case 1:
        {
            uPtr(_style)->setLineBreakMode(0);
            break;
        }
    }

    _textStorage = ::g::iOS::UIKit::NSTextStorage::New9();
    uPtr(_textStorage)->initWithStringAttributes(control->Value(), GetTextAttributes());
    uPtr(LayoutManager)->setTextStorage(_textStorage);
    _layoutSize = size;
    _layoutValid = true;
    _layoutMin = useMin;
    ::g::iOS::CoreGraphics::CGRect cgRect = uPtr(LayoutManager)->usedRectForTextContainer(TextContainer);
    PixelBounds = ::g::Uno::Rect__New2(::g::Uno::Float2__New2((float)cgRect.Origin.X, (float)-cgRect.Origin.Y), ::g::Uno::Float2__New2((float)cgRect.Size.Width, (float)cgRect.Size.Height));
    return true;
}

// public TextLayout New() [static] :902
TextLayout* TextLayout::New1()
{
    TextLayout* obj2 = (TextLayout*)uNew(TextLayout_typeof());
    obj2->ctor_();
    return obj2;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
