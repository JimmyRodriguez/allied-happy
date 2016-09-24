// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNative_bundle.h>
#include <_root.FuseControlsNavigation_FuseControlsCircle_Color_Property.h>
#include <_root.FuseControlsPrimitives_bundle.h>
#include <_root.FuseControlsPrimitives_FuseControlsBackButton_Text_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsButton_Text_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsCircle_Fill_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsCircle_Opacity_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsRectangle_Fill_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsSwitch_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_Opacity_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_TextColor_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h>
#include <_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollView_KeepFocusIn-bccebf50.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewDefaultScrol-8dbd4f90.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewDefaultTrigg-43727aab.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseCore_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPolygons_bundle.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseEntities_bundle.h>
#include <_root.FuseReactive_bundle.h>
#include <_root.HashableWeakReference.h>
#include <_root.OutracksSimulatorClientUno_bundle.h>
#include <_root.OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseControlsText_Value_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu-d7313adc.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Fi-a4cead99.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Me-307dad8c.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Op-c517526e.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Sh-369acd0e.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_St-a28a5744.h>
#include <_root.UnoCore_bundle.h>
#include <_root.WeakDictionary-2.h>
#include <Fuse.Controls.BackButton.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.DefaultScroller.h>
#include <Fuse.Controls.ScrollView.DefaultTrigger.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Outracks.Simulator.DeveloperMenu.h>
#include <Outracks.Simulator.ErrorToast.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[161];
static uType* TYPES[3];

namespace g{

// /usr/local/share/uno/Packages/Fuse.Controls/0.35.8/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform mat...*/], ::STRINGS[1/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"n"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[15/*"uniform mat...*/], ::STRINGS[16/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[13/*"l"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[17/*"uniform mat...*/], ::STRINGS[18/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::Viewportccb5cb29_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[19/*"uniform mat...*/], ::STRINGS[20/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("uniform mat4 l, c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    m = ((((d * (false ? vec2(a.x, float(1) - a.y) : a)) - e) / f) * g) + h;\n"
        "    gl_Position = c * (l * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform vec4 i;\n"
        "uniform float j, k;\n"
        "\n"
        "uniform sampler2D n;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = (b ? vec4(float(0)) : texture2D(n, m)) * i;\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j) * k;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[15] = uString::Const("uniform mat4 h, b;\n"
        "uniform vec2 c, d, e, i;\n"
        "uniform float j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, i, j);\n"
        "    gl_Position = b * (h * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[16] = uString::Const("uniform float f, g;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = texture2D(l, vec2(k, 0.5));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f) * g;\n"
        "}\n"
        "");
    ::STRINGS[17] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[18] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[19] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[20] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle2f148815_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle7463714b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangled1bbfcb0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewportccb5cb29_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("SolidRectangle2f148815", 0),
        new uField("SolidRectangle7463714b", 1),
        new uField("SolidRectangled1bbfcb0", 2),
        new uField("Viewportccb5cb29", 3));
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle2f148815_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle7463714b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangled1bbfcb0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewportccb5cb29_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.35.8/.uno/package
// ----------------------------------------------------------------------

// public static generated class FuseControlsNative_bundle :0
// {
// static FuseControlsNative_bundle() :0
static void FuseControlsNative_bundle__cctor__fn(uType* __type)
{
    FuseControlsNative_bundle::Blitterbdb4a41b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[21/*"uniform vec...*/], ::STRINGS[22/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[7/*"f"*/]));
}

static void FuseControlsNative_bundle_build(uType* type)
{
    ::STRINGS[21] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "vec4 g(vec2 h, mat4 i){\n"
        "    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = a;\n"
        "    gl_Position = g(c + (a * b), d);\n"
        "}\n"
        "");
    ::STRINGS[22] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[7] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::Blitterbdb4a41b_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Blitterbdb4a41b", 0));
}

uClassType* FuseControlsNative_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsNative_bundle", options);
    type->fp_build_ = FuseControlsNative_bundle_build;
    type->fp_cctor_ = FuseControlsNative_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::Blitterbdb4a41b_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsCircle_Color_Property :255
// {
static void FuseControlsNavigation_FuseControlsCircle_Color_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsNavigation_FuseControlsCircle_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsCircle_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsCircle_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsCircle_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseControlsNavigation_FuseControlsCircle_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsNavigation_FuseControlsCircle_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsCircle_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsNavigation_FuseControlsCircle_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsNavigation_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) :258
void FuseControlsNavigation_FuseControlsCircle_Color_Property__ctor_2_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :260
void FuseControlsNavigation_FuseControlsCircle_Color_Property__Get_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsCircle_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) :258
void FuseControlsNavigation_FuseControlsCircle_Color_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsCircle_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsCircle_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :259
void FuseControlsNavigation_FuseControlsCircle_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsCircle_Color_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :261
void FuseControlsNavigation_FuseControlsCircle_Color_Property__Set_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsCircle_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :262
void FuseControlsNavigation_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsCircle_Color_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) [instance] :258
void FuseControlsNavigation_FuseControlsCircle_Color_Property::ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsCircle_Color_Property", ".ctor(Fuse.Controls.Circle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) [static] :258
FuseControlsNavigation_FuseControlsCircle_Color_Property* FuseControlsNavigation_FuseControlsCircle_Color_Property::New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsCircle_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsCircle_Color_Property*)uNew(FuseControlsNavigation_FuseControlsCircle_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/package
// --------------------------------------------------------------------------

// public static generated class FuseControlsPrimitives_bundle :0
// {
// static FuseControlsPrimitives_bundle() :0
static void FuseControlsPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_bundle::ImageElementDraw7660063a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[23/*"uniform mat...*/], ::STRINGS[24/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
}

static void FuseControlsPrimitives_bundle_build(uType* type)
{
    ::STRINGS[23] = uString::Const("uniform mat4 f, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = (a * c) + d;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[24] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, g) * e;\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[9] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_bundle::ImageElementDraw7660063a_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ImageElementDraw7660063a", 0));
}

uClassType* FuseControlsPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPrimitives_bundle", options);
    type->fp_build_ = FuseControlsPrimitives_bundle_build;
    type->fp_cctor_ = FuseControlsPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPrimitives_bundle::ImageElementDraw7660063a_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsBackButton_Text_Property :619
// {
static void FuseControlsPrimitives_FuseControlsBackButton_Text_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::BackButton_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsBackButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsBackButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsBackButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsBackButton_Text_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsBackButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsBackButton_Text_Property(Fuse.Controls.BackButton obj, Uno.UX.Selector name) :622
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, ::g::Fuse::Controls::BackButton* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :624
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, uString** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsBackButton_Text_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public FuseControlsPrimitives_FuseControlsBackButton_Text_Property New(Fuse.Controls.BackButton obj, Uno.UX.Selector name) :622
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__New1_fn(::g::Fuse::Controls::BackButton* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsBackButton_Text_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsBackButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :623
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsBackButton_Text_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :625
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsBackButton_Text_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :626
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsBackButton_Text_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsBackButton_Text_Property(Fuse.Controls.BackButton obj, Uno.UX.Selector name) [instance] :622
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property::ctor_2(::g::Fuse::Controls::BackButton* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsBackButton_Text_Property", ".ctor(Fuse.Controls.BackButton,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsBackButton_Text_Property New(Fuse.Controls.BackButton obj, Uno.UX.Selector name) [static] :622
FuseControlsPrimitives_FuseControlsBackButton_Text_Property* FuseControlsPrimitives_FuseControlsBackButton_Text_Property::New1(::g::Fuse::Controls::BackButton* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsBackButton_Text_Property* obj1 = (FuseControlsPrimitives_FuseControlsBackButton_Text_Property*)uNew(FuseControlsPrimitives_FuseControlsBackButton_Text_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsButton_Text_Property :628
// {
static void FuseControlsPrimitives_FuseControlsButton_Text_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Button_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsButton_Text_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property(Fuse.Controls.Button obj, Uno.UX.Selector name) :631
void FuseControlsPrimitives_FuseControlsButton_Text_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, ::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :633
void FuseControlsPrimitives_FuseControlsButton_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, uString** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsButton_Text_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj, Uno.UX.Selector name) :631
void FuseControlsPrimitives_FuseControlsButton_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsButton_Text_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :632
void FuseControlsPrimitives_FuseControlsButton_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsButton_Text_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :634
void FuseControlsPrimitives_FuseControlsButton_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsButton_Text_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :635
void FuseControlsPrimitives_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsButton_Text_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property(Fuse.Controls.Button obj, Uno.UX.Selector name) [instance] :631
void FuseControlsPrimitives_FuseControlsButton_Text_Property::ctor_2(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsButton_Text_Property", ".ctor(Fuse.Controls.Button,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj, Uno.UX.Selector name) [static] :631
FuseControlsPrimitives_FuseControlsButton_Text_Property* FuseControlsPrimitives_FuseControlsButton_Text_Property::New1(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsButton_Text_Property* obj1 = (FuseControlsPrimitives_FuseControlsButton_Text_Property*)uNew(FuseControlsPrimitives_FuseControlsButton_Text_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsCircle_Fill_Property :673
// {
static void FuseControlsPrimitives_FuseControlsCircle_Fill_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsCircle_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsCircle_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsCircle_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsCircle_Fill_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsCircle_Fill_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsCircle_Fill_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) :676
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get() :678
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Fill_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Fill(), void();
}

// public FuseControlsPrimitives_FuseControlsCircle_Fill_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) :676
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsCircle_Fill_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsCircle_Fill_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :677
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Fill_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :679
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Fill_Property", "Set(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Fill(v);
}

// public override sealed bool get_SupportsOriginSetter() :680
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Fill_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseControlsCircle_Fill_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) [instance] :676
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property::ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Fill_Property", ".ctor(Fuse.Controls.Circle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsCircle_Fill_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) [static] :676
FuseControlsPrimitives_FuseControlsCircle_Fill_Property* FuseControlsPrimitives_FuseControlsCircle_Fill_Property::New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsCircle_Fill_Property* obj1 = (FuseControlsPrimitives_FuseControlsCircle_Fill_Property*)uNew(FuseControlsPrimitives_FuseControlsCircle_Fill_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsCircle_Opacity_Property :664
// {
static void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsCircle_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsCircle_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsCircle_Opacity_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) :667
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :669
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Opacity_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public FuseControlsPrimitives_FuseControlsCircle_Opacity_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) :667
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsCircle_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsCircle_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :668
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Opacity_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :670
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Opacity_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :671
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Opacity_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsCircle_Opacity_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) [instance] :667
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property::ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsCircle_Opacity_Property", ".ctor(Fuse.Controls.Circle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsCircle_Opacity_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) [static] :667
FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* FuseControlsPrimitives_FuseControlsCircle_Opacity_Property::New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseControlsCircle_Opacity_Property*)uNew(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsRectangle_Fill_Property :709
// {
static void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsRectangle_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsRectangle_Fill_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsRectangle_Fill_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :712
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get() :714
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsRectangle_Fill_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Fill(), void();
}

// public FuseControlsPrimitives_FuseControlsRectangle_Fill_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :712
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsRectangle_Fill_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsRectangle_Fill_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :713
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsRectangle_Fill_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :715
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsRectangle_Fill_Property", "Set(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Fill(v);
}

// public override sealed bool get_SupportsOriginSetter() :716
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsRectangle_Fill_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseControlsRectangle_Fill_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :712
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property::ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsRectangle_Fill_Property", ".ctor(Fuse.Controls.Rectangle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsRectangle_Fill_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :712
FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* FuseControlsPrimitives_FuseControlsRectangle_Fill_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* obj1 = (FuseControlsPrimitives_FuseControlsRectangle_Fill_Property*)uNew(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsSwitch_Value_Property :637
// {
static void FuseControlsPrimitives_FuseControlsSwitch_Value_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Switch_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsSwitch_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsSwitch_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsSwitch_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsSwitch_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsSwitch_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property(Fuse.Controls.Switch obj, Uno.UX.Selector name) :640
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, ::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :642
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsSwitch_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property New(Fuse.Controls.Switch obj, Uno.UX.Selector name) :640
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__New1_fn(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsSwitch_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsSwitch_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :641
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsSwitch_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :643
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsSwitch_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->SetValue(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :644
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsSwitch_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property(Fuse.Controls.Switch obj, Uno.UX.Selector name) [instance] :640
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property::ctor_2(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsSwitch_Value_Property", ".ctor(Fuse.Controls.Switch,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property New(Fuse.Controls.Switch obj, Uno.UX.Selector name) [static] :640
FuseControlsPrimitives_FuseControlsSwitch_Value_Property* FuseControlsPrimitives_FuseControlsSwitch_Value_Property::New1(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsSwitch_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsSwitch_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsSwitch_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_Opacity_Property :655
// {
static void FuseControlsPrimitives_FuseControlsText_Opacity_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :658
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :660
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Opacity_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :658
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :659
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Opacity_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :661
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Opacity_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :662
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Opacity_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :658
void FuseControlsPrimitives_FuseControlsText_Opacity_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Opacity_Property", ".ctor(Fuse.Controls.Text,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :658
FuseControlsPrimitives_FuseControlsText_Opacity_Property* FuseControlsPrimitives_FuseControlsText_Opacity_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_Opacity_Property*)uNew(FuseControlsPrimitives_FuseControlsText_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_TextColor_Property :646
// {
static void FuseControlsPrimitives_FuseControlsText_TextColor_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :649
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :651
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_TextColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :649
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :650
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_TextColor_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :652
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_TextColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :653
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_TextColor_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :649
void FuseControlsPrimitives_FuseControlsText_TextColor_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_TextColor_Property", ".ctor(Fuse.Controls.Text,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :649
FuseControlsPrimitives_FuseControlsText_TextColor_Property* FuseControlsPrimitives_FuseControlsText_TextColor_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsText_TextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_Value_Property :601
// {
static void FuseControlsPrimitives_FuseControlsText_Value_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :604
void FuseControlsPrimitives_FuseControlsText_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :606
void FuseControlsPrimitives_FuseControlsText_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, uString** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :604
void FuseControlsPrimitives_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :605
void FuseControlsPrimitives_FuseControlsText_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :607
void FuseControlsPrimitives_FuseControlsText_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :608
void FuseControlsPrimitives_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :604
void FuseControlsPrimitives_FuseControlsText_Value_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsText_Value_Property", ".ctor(Fuse.Controls.Text,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :604
FuseControlsPrimitives_FuseControlsText_Value_Property* FuseControlsPrimitives_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsText_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :727
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :730
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :732
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :730
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :731
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :733
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :734
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :730
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", ".ctor(Fuse.Drawing.SolidColor,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :730
FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :682
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :685
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get() :687
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Brush(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :685
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Brush_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :686
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :688
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Set(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Brush(v);
}

// public override sealed bool get_SupportsOriginSetter() :689
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :685
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", ".ctor(Fuse.Drawing.Stroke,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :685
FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Brush_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :718
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :721
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :723
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :721
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :722
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :724
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :725
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :721
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property::ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", ".ctor(Fuse.Drawing.Stroke,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :721
FuseControlsPrimitives_FuseDrawingStroke_Color_Property* FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :691
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :694
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :696
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Distance(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :694
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :695
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :697
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->Distance(v_);
}

// public override sealed bool get_SupportsOriginSetter() :698
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :694
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", ".ctor(Fuse.Effects.DropShadow,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :694
FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :700
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :703
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :705
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Size(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :703
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :704
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :706
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->Size(v_);
}

// public override sealed bool get_SupportsOriginSetter() :707
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :703
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", ".ctor(Fuse.Effects.DropShadow,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :703
FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :610
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :613
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_2_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :615
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->IsActive(), void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :613
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :614
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :616
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :617
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [instance] :613
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::ctor_2(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", ".ctor(Fuse.Gestures.SwipeGesture,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [static] :613
FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* obj1 = (FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property*)uNew(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property :141
// {
static void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, ::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :146
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->KeepFocusInView(), void();
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :145
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :147
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->KeepFocusInView(v_);
}

// public override sealed bool get_SupportsOriginSetter() :148
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [instance] :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::ctor_2(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property", ".ctor(Fuse.Controls.ScrollView,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [static] :144
FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::New1(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property*)uNew(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property :132
// {
static void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :137
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :136
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :138
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :139
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [instance] :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::ctor_2(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property", ".ctor(Fuse.Controls.ScrollView,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [static] :135
FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::New1(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property*)uNew(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property :114
// {
static void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView__DefaultScroller_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :119
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property New(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :118
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :120
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :121
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) [instance] :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::ctor_2(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property", ".ctor(Fuse.Controls.ScrollView.DefaultScroller,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property New(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) [static] :117
FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::New1(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.35.8/.uno/ux11/$.uno
// -----------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property :123
// {
static void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView__DefaultTrigger_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, ::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :128
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property New(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__New1_fn(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :127
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :129
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :130
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) [instance] :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::ctor_2(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property", ".ctor(Fuse.Controls.ScrollView.DefaultTrigger,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property New(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) [static] :126
FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::New1(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.35.8/.uno/package
// ---------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[25/*"uniform flo...*/], ::STRINGS[26/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[29/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement6ea65baa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[30/*"uniform mat...*/], ::STRINGS[31/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[8/*"g"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[25] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[26] = uString::Const("uniform samplerExternalOES q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[27] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[28] = uString::Const("o");
    ::STRINGS[29] = uString::Const("q");
    ::STRINGS[30] = uString::Const("uniform mat4 e, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = (a * c) + d;\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[31] = uString::Const("uniform samplerExternalOES g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(g, vec2(f.x, f.y)).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::Scale9Rectangleda875692_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::VideoDrawElement6ea65baa_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Scale9Rectangleda875692", 0),
        new uField("VideoDrawElement6ea65baa", 1));
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangleda875692_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElement6ea65baa_;
// }

// /usr/local/share/uno/Packages/FuseCore/0.35.8/.uno/package
// ----------------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpers4c5c39ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[32/*"uniform vec...*/], ::STRINGS[33/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/]));
    FuseCore_bundle::RobotoRegulara4996f65_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[34/*"FuseCore"*/]))->GetFile(::STRINGS[35/*"roboto-regu...*/]);
}

static void FuseCore_bundle_build(uType* type)
{
    ::STRINGS[32] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[33] = uString::Const("uniform vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[34] = uString::Const("FuseCore");
    ::STRINGS[35] = uString::Const("roboto-regular-de906226.ttf");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpers4c5c39ae_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseCore_bundle::RobotoRegulara4996f65_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("DrawHelpers4c5c39ae", 0),
        new uField("RobotoRegulara4996f65", 1));
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_build_ = FuseCore_bundle_build;
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpers4c5c39ae_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseCore_bundle::RobotoRegulara4996f65_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/0.35.8/.uno/package
// --------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[36/*"attribute v...*/], ::STRINGS[37/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[3/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[36] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[37] = uString::Const("uniform float d[b], e;\n"
        "uniform vec4 f[c];\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 h(vec2 i){\n"
        "    float j = d[0] + (e * i.x);\n"
        "    vec4 k = f[0];\n"
        "\n"
        "    for (int l = 0; l < (b - 1); l++)\n"
        "    {\n"
        "        float m = d[l];\n"
        "        float n = d[l + 1];\n"
        "        vec4 o = f[l + 1];\n"
        "        k = mix(k, o, smoothstep(m, n, j));\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h(g);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawable479fd075_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("LinearGradientDrawable479fd075", 0));
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable479fd075_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.35.8/.uno/package
// -----------------------------------------------------------------------

// public static generated class FuseDrawingPolygons_bundle :0
// {
// static FuseDrawingPolygons_bundle() :0
static void FuseDrawingPolygons_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPolygons_bundle::Border59574a1c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[38/*"uniform mat...*/], ::STRINGS[39/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseDrawingPolygons_bundle::Border896a8e7a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform mat...*/], ::STRINGS[41/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::Borderb6afd581_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[42/*"uniform mat...*/], ::STRINGS[43/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[27/*"m"*/]));
    FuseDrawingPolygons_bundle::Borderfbfebeb7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform mat...*/], ::STRINGS[45/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawable13820064_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform mat...*/], ::STRINGS[18/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawable13820065_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[47/*"uniform mat...*/], ::STRINGS[48/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[11/*"j"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawable13820067_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[49/*"uniform mat...*/], ::STRINGS[50/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[13/*"l"*/]));
}

static void FuseDrawingPolygons_bundle_build(uType* type)
{
    ::STRINGS[38] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "uniform float d;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 e;\n"
        "\n"
        "vec4 f(vec2 g, mat4 h){\n"
        "    return vec4(((g.x * h[0].x) + (g.y * h[1].x)) + h[3].x, ((g.x * h[0].y) + (g.y * h[1].y)) + h[3].y, ((g.x * h[0].z) + (g.y * h[1].z)) + h[3].z, ((g.x * h[0].w) + (g.y * h[1].w)) + h[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = c * vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    e = vec4((g.xyz * g.w) * d, g.w * d);\n"
        "    gl_Position = f(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[39] = uString::Const("varying vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[40] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 d;\n"
        "\n"
        "vec4 e(vec2 f, mat4 g){\n"
        "    return vec4(((f.x * g[0].x) + (f.y * g[1].x)) + g[3].x, ((f.x * g[0].y) + (f.y * g[1].y)) + g[3].y, ((f.x * g[0].z) + (f.y * g[1].z)) + g[3].z, ((f.x * g[0].w) + (f.y * g[1].w)) + g[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 f = c * vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    d = vec4((f.xyz * f.w) * 1.0, f.w);\n"
        "    gl_Position = e(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[41] = uString::Const("varying vec4 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = d;\n"
        "}\n"
        "");
    ::STRINGS[42] = uString::Const("uniform mat4 c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 k;\n"
        "varying vec2 l;\n"
        "\n"
        "vec4 n(vec2 o, mat4 p){\n"
        "    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    l = ((((d * (a.xy / d)) - e) / f) * g) + h;\n"
        "    gl_Position = n(a.xy, c);\n"
        "}\n"
        "");
    ::STRINGS[43] = uString::Const("uniform vec4 i;\n"
        "uniform float j;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec4 k;\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = ((b ? vec4(float(0)) : texture2D(m, l)) * i) * k;\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j);\n"
        "}\n"
        "");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[27] = uString::Const("m");
    ::STRINGS[44] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 i;\n"
        "varying float j;\n"
        "\n"
        "vec4 l(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    j = m(a.xy / c, g, h);\n"
        "    gl_Position = l(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[45] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D k;\n"
        "\n"
        "varying vec4 i;\n"
        "varying float j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = texture2D(k, vec2(j, 0.5)) * i;\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f);\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[46] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "vec4 d(vec2 e, mat4 f){\n"
        "    return vec4(((e.x * f[0].x) + (e.y * f[1].x)) + f[3].x, ((e.x * f[0].y) + (e.y * f[1].y)) + f[3].y, ((e.x * f[0].z) + (e.y * f[1].z)) + f[3].z, ((e.x * f[0].w) + (e.y * f[1].w)) + f[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d(a, b);\n"
        "}\n"
        "");
    ::STRINGS[18] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[47] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "vec4 k(vec2 m, mat4 n){\n"
        "    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n"
        "}\n"
        "\n"
        "float l(vec2 m, vec2 n, float o){\n"
        "    vec2 p = (m * c) - d;\n"
        "    float q = dot(p, n) / o;\n"
        "    return (q - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = l(a / c, g, h);\n"
        "    gl_Position = k(a, b);\n"
        "}\n"
        "");
    ::STRINGS[48] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D j;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = texture2D(j, vec2(i, 0.5));\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * f, m.w * f);\n"
        "}\n"
        "");
    ::STRINGS[49] = uString::Const("uniform mat4 c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "vec4 m(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = ((((d * (a / d)) - e) / f) * g) + h;\n"
        "    gl_Position = m(a, c);\n"
        "}\n"
        "");
    ::STRINGS[50] = uString::Const("uniform vec4 i;\n"
        "uniform float j;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = (b ? vec4(float(0)) : texture2D(l, k)) * i;\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * j, n.w * j);\n"
        "}\n"
        "");
    ::STRINGS[13] = uString::Const("l");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border59574a1c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border896a8e7a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Borderb6afd581_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Borderfbfebeb7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawable13820064_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawable13820065_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawable13820067_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("Border59574a1c", 0),
        new uField("Border896a8e7a", 1),
        new uField("Borderb6afd581", 2),
        new uField("Borderfbfebeb7", 3),
        new uField("PolygonDrawable13820064", 4),
        new uField("PolygonDrawable13820065", 5),
        new uField("PolygonDrawable13820067", 6));
}

uClassType* FuseDrawingPolygons_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPolygons_bundle", options);
    type->fp_build_ = FuseDrawingPolygons_bundle_build;
    type->fp_cctor_ = FuseDrawingPolygons_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border59574a1c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border896a8e7a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Borderb6afd581_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Borderfbfebeb7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawable13820064_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawable13820065_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawable13820067_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.35.8/.uno/package
// -------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle01247f96_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[51/*"uniform vec...*/], ::STRINGS[52/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle038d0b56_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform vec...*/], ::STRINGS[57/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[58/*"s"*/], ::STRINGS[59/*"t"*/], ::STRINGS[60/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle09647386_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform vec...*/], ::STRINGS[62/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[58/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle09647387_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[63/*"uniform vec...*/], ::STRINGS[64/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[53/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle09647389_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform vec...*/], ::STRINGS[65/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[58/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[51/*"uniform vec...*/], ::STRINGS[66/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7ff_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform vec...*/], ::STRINGS[68/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[54/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle4a971b16_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[70/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle4c78c62c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle60e596bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform vec...*/], ::STRINGS[73/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[58/*"s"*/], ::STRINGS[59/*"t"*/], ::STRINGS[60/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle7aaa5f74_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[75/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle91c7af62_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[77/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlebe3e2220_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[78/*"uniform vec...*/], ::STRINGS[79/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[59/*"t"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform vec...*/], ::STRINGS[81/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform vec...*/], ::STRINGS[83/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[54/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305ca_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform vec...*/], ::STRINGS[84/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circled0e74ba4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform vec...*/], ::STRINGS[86/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circled802ead9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[87/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0edda_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[88/*"uniform vec...*/], ::STRINGS[89/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0eddb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[88/*"uniform vec...*/], ::STRINGS[90/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circleef203ac7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[91/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[92/*"uniform vec...*/], ::STRINGS[93/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[94/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[95/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee2e144c4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform flo...*/], ::STRINGS[97/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee2e144c5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[98/*"uniform flo...*/], ::STRINGS[99/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[59/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee2e144d2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[100/*"uniform flo...*/], ::STRINGS[101/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee2e144d3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[102/*"uniform flo...*/], ::STRINGS[103/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[104/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee2e1454c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[105/*"uniform flo...*/], ::STRINGS[106/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee2e1454d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform flo...*/], ::STRINGS[108/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[104/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee2e14552_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[110/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee2e14553_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"uniform flo...*/], ::STRINGS[112/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[58/*"s"*/], ::STRINGS[113/*"x"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[51] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "vec4 v(vec2 x, mat4 y){\n"
        "    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n"
        "}\n"
        "\n"
        "float w(vec2 x, vec2 y, float z){\n"
        "    vec2 A = (x * e) - f;\n"
        "    float B = dot(A, y) / z;\n"
        "    return (B - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = a * b;\n"
        "    vec2 y = x + c;\n"
        "    s = w(y / e, n, o);\n"
        "    t = x;\n"
        "    gl_Position = v(y, d);\n"
        "}\n"
        "");
    ::STRINGS[52] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[27] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[28] = uString::Const("o");
    ::STRINGS[53] = uString::Const("p");
    ::STRINGS[29] = uString::Const("q");
    ::STRINGS[54] = uString::Const("r");
    ::STRINGS[55] = uString::Const("u");
    ::STRINGS[56] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "vec4 x(vec2 y, mat4 z){\n"
        "    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * c;\n"
        "    vec2 z = y + d;\n"
        "    u = ((((f * (z / f)) - g) / h) * i) + j;\n"
        "    v = y;\n"
        "    gl_Position = x(z, e);\n"
        "}\n"
        "");
    ::STRINGS[57] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "uniform vec2 r, s, t;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((min(dot(v, r), min(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[58] = uString::Const("s");
    ::STRINGS[59] = uString::Const("t");
    ::STRINGS[60] = uString::Const("w");
    ::STRINGS[61] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "vec4 t(vec2 v, mat4 w){\n"
        "    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n"
        "}\n"
        "\n"
        "float u(vec2 v, vec2 w, float x){\n"
        "    vec2 y = (v * e) - f;\n"
        "    float z = dot(y, w) / x;\n"
        "    return (z - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = a * b;\n"
        "    vec2 w = v + c;\n"
        "    q = u(w / e, l, m);\n"
        "    r = v;\n"
        "    gl_Position = t(w, d);\n"
        "}\n"
        "");
    ::STRINGS[62] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n"
        "}\n"
        "");
    ::STRINGS[63] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "vec4 q(vec2 s, mat4 t){\n"
        "    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n"
        "}\n"
        "\n"
        "float r(vec2 s, vec2 t, float u){\n"
        "    vec2 v = (s * e) - f;\n"
        "    float w = dot(v, t) / u;\n"
        "    return (w - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = a * b;\n"
        "    vec2 t = s + c;\n"
        "    n = r(t / e, l, m);\n"
        "    o = s;\n"
        "    gl_Position = q(t, d);\n"
        "}\n"
        "");
    ::STRINGS[64] = uString::Const("uniform float h, i, j, k;\n"
        "\n"
        "uniform sampler2D p;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = texture2D(p, vec2(n, 0.5));\n"
        "    vec4 t = vec4(s.xyz, s.w * (clamp(0.5 - (((length(o) - h) * i) * j), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((t.xyz * t.w) * k, t.w * k);\n"
        "}\n"
        "");
    ::STRINGS[65] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n"
        "}\n"
        "");
    ::STRINGS[66] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[67] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "vec4 s(vec2 u, mat4 v){\n"
        "    return vec4(((u.x * v[0].x) + (u.y * v[1].x)) + v[3].x, ((u.x * v[0].y) + (u.y * v[1].y)) + v[3].y, ((u.x * v[0].z) + (u.y * v[1].z)) + v[3].z, ((u.x * v[0].w) + (u.y * v[1].w)) + v[3].w);\n"
        "}\n"
        "\n"
        "float t(vec2 u, vec2 v, float w){\n"
        "    vec2 x = (u * e) - f;\n"
        "    float y = dot(x, v) / w;\n"
        "    return (y - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    p = t(v / e, n, o);\n"
        "    q = u;\n"
        "    gl_Position = s(v, d);\n"
        "}\n"
        "");
    ::STRINGS[68] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = texture2D(r, vec2(p, 0.5));\n"
        "    vec4 v = vec4(u.xyz, u.w * (clamp(0.5 - (((abs((length(q) - h) - i) - j) * k) * l), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((v.xyz * v.w) * m, v.w * m);\n"
        "}\n"
        "");
    ::STRINGS[69] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "vec4 m(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = a * b;\n"
        "    l = n;\n"
        "    gl_Position = m(n + c, d);\n"
        "}\n"
        "");
    ::STRINGS[70] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = vec4(k, j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * 1.0, n.w);\n"
        "}\n"
        "");
    ::STRINGS[71] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "vec4 q(vec2 r, mat4 s){\n"
        "    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    p = r;\n"
        "    gl_Position = q(r + c, d);\n"
        "}\n"
        "");
    ::STRINGS[72] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(p, m), min(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "uniform vec2 r, s, t;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((max(dot(v, r), max(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[74] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "vec4 p(vec2 q, mat4 r){\n"
        "    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = a * b;\n"
        "    o = q;\n"
        "    gl_Position = p(q + c, d);\n"
        "}\n"
        "");
    ::STRINGS[75] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[76] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "vec4 n(vec2 o, mat4 p){\n"
        "    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = a * b;\n"
        "    m = o;\n"
        "    gl_Position = n(o + c, d);\n"
        "}\n"
        "");
    ::STRINGS[77] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(k, j * (clamp(0.5 - (((abs((length(m) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * l, o.w * l);\n"
        "}\n"
        "");
    ::STRINGS[78] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "vec4 u(vec2 v, mat4 w){\n"
        "    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = a * c;\n"
        "    vec2 w = v + d;\n"
        "    r = ((((f * (w / f)) - g) / h) * i) + j;\n"
        "    s = v;\n"
        "    gl_Position = u(w, e);\n"
        "}\n"
        "");
    ::STRINGS[79] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = (b ? vec4(float(0)) : texture2D(t, r)) * k;\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((abs((length(s) - l) - m) - n) * o) * p), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * q, w.w * q);\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "vec4 v(vec2 w, mat4 x){\n"
        "    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * c;\n"
        "    vec2 x = w + d;\n"
        "    s = ((((f * (x / f)) - g) / h) * i) + j;\n"
        "    t = w;\n"
        "    gl_Position = v(x, e);\n"
        "}\n"
        "");
    ::STRINGS[81] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n"
        "}\n"
        "");
    ::STRINGS[82] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "vec4 s(vec2 t, mat4 u){\n"
        "    return vec4(((t.x * u[0].x) + (t.y * u[1].x)) + u[3].x, ((t.x * u[0].y) + (t.y * u[1].y)) + u[3].y, ((t.x * u[0].z) + (t.y * u[1].z)) + u[3].z, ((t.x * u[0].w) + (t.y * u[1].w)) + u[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = a * c;\n"
        "    vec2 u = t + d;\n"
        "    p = ((((f * (u / f)) - g) / h) * i) + j;\n"
        "    q = t;\n"
        "    gl_Position = s(u, e);\n"
        "}\n"
        "");
    ::STRINGS[83] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 t = (b ? vec4(float(0)) : texture2D(r, p)) * k;\n"
        "    vec4 u = vec4(t.xyz, t.w * (clamp(0.5 - (((length(q) - l) * m) * n), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((u.xyz * u.w) * o, u.w * o);\n"
        "}\n"
        "");
    ::STRINGS[84] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n"
        "}\n"
        "");
    ::STRINGS[85] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "vec4 l(vec2 m, mat4 n){\n"
        "    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 m = a * b;\n"
        "    k = m;\n"
        "    gl_Position = l(m + c, d);\n"
        "}\n"
        "");
    ::STRINGS[86] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = vec4(i, h * (clamp(0.5 - (((length(k) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * j, m.w * j);\n"
        "}\n"
        "");
    ::STRINGS[87] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[88] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "vec4 o(vec2 p, mat4 q){\n"
        "    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = a * b;\n"
        "    n = p;\n"
        "    gl_Position = o(p + c, d);\n"
        "}\n"
        "");
    ::STRINGS[89] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n"
        "}\n"
        "");
    ::STRINGS[90] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n"
        "}\n"
        "");
    ::STRINGS[91] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(p, m), max(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[92] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "vec4 k(vec2 l, mat4 m){\n"
        "    return vec4(((l.x * m[0].x) + (l.y * m[1].x)) + m[3].x, ((l.x * m[0].y) + (l.y * m[1].y)) + m[3].y, ((l.x * m[0].z) + (l.y * m[1].z)) + m[3].z, ((l.x * m[0].w) + (l.y * m[1].w)) + m[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 l = a * b;\n"
        "    j = l;\n"
        "    gl_Position = k(l + c, d);\n"
        "}\n"
        "");
    ::STRINGS[93] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 l = vec4(i, h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((l.xyz * l.w) * 1.0, l.w);\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "vec4 o(vec2 p, mat4 q){\n"
        "    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    l = e[int(c)];\n"
        "    m = p;\n"
        "    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = o(p, g);\n"
        "}\n"
        "");
    ::STRINGS[97] = uString::Const("uniform float h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(k, j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n"
        "}\n"
        "");
    ::STRINGS[98] = uString::Const("uniform float e[d], o;\n"
        "uniform vec2 f, h, i, j, n;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "vec4 u(vec2 w, mat4 x){\n"
        "    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n"
        "}\n"
        "\n"
        "float v(vec2 w, vec2 x, float y){\n"
        "    vec2 z = (w * h) - i;\n"
        "    float A = dot(z, x) / y;\n"
        "    return (A - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    p = e[int(c)];\n"
        "    q = v(w / h, n, o);\n"
        "    r = w;\n"
        "    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = u(w, g);\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = texture2D(t, vec2(q, 0.5));\n"
        "    vec4 x = vec4(w.xyz, w.w * clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1)));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "vec4 p(vec2 q, mat4 r){\n"
        "    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    m = e[int(c)];\n"
        "    n = q;\n"
        "    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = p(q, g);\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("uniform float h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n"
        "}\n"
        "");
    ::STRINGS[102] = uString::Const("uniform float f[d];\n"
        "uniform vec2 g, i, j, k, l, m;\n"
        "uniform mat4 h;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "vec4 w(vec2 x, mat4 y){\n"
        "    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n"
        "    r = f[int(c)];\n"
        "    s = ((((i * (x / i)) - j) / k) * l) + m;\n"
        "    t = x;\n"
        "    u = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n"
        "    gl_Position = w(x, h);\n"
        "}\n"
        "");
    ::STRINGS[103] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = (e ? vec4(float(0)) : texture2D(v, s)) * n;\n"
        "    vec4 y = vec4(x.xyz, x.w * clamp(0.5 - (((distance(t, u) - r) * o) * p), float(0), float(1)));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * q, y.w * q);\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("v");
    ::STRINGS[105] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "vec4 q(vec2 r, mat4 s){\n"
        "    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    n = e[int(c)];\n"
        "    o = r;\n"
        "    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = q(r, g);\n"
        "}\n"
        "");
    ::STRINGS[106] = uString::Const("uniform float h, i, j, k, l;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(m, l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * 1.0, r.w);\n"
        "}\n"
        "");
    ::STRINGS[107] = uString::Const("uniform float e[d], q;\n"
        "uniform vec2 f, h, i, j, p;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "vec4 w(vec2 y, mat4 z){\n"
        "    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n"
        "}\n"
        "\n"
        "float x(vec2 y, vec2 z, float A){\n"
        "    vec2 B = (y * h) - i;\n"
        "    float C = dot(B, z) / A;\n"
        "    return (C - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    r = e[int(c)];\n"
        "    s = x(y / h, p, q);\n"
        "    t = y;\n"
        "    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = w(y, g);\n"
        "}\n"
        "");
    ::STRINGS[108] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = texture2D(v, vec2(s, 0.5));\n"
        "    vec4 z = vec4(y.xyz, y.w * clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1)));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * o, z.w * o);\n"
        "}\n"
        "");
    ::STRINGS[109] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "vec4 r(vec2 s, mat4 t){\n"
        "    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    o = e[int(c)];\n"
        "    p = s;\n"
        "    q = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = r(s, g);\n"
        "}\n"
        "");
    ::STRINGS[110] = uString::Const("uniform float h, i, j, k, l, n;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = vec4(m, l * clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((s.xyz * s.w) * n, s.w * n);\n"
        "}\n"
        "");
    ::STRINGS[111] = uString::Const("uniform float f[d];\n"
        "uniform vec2 g, i, j, k, l, m;\n"
        "uniform mat4 h;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "vec4 y(vec2 z, mat4 A){\n"
        "    return vec4(((z.x * A[0].x) + (z.y * A[1].x)) + A[3].x, ((z.x * A[0].y) + (z.y * A[1].y)) + A[3].y, ((z.x * A[0].z) + (z.y * A[1].z)) + A[3].z, ((z.x * A[0].w) + (z.y * A[1].w)) + A[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 z = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n"
        "    t = f[int(c)];\n"
        "    u = ((((i * (z / i)) - j) / k) * l) + m;\n"
        "    v = z;\n"
        "    w = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n"
        "    gl_Position = y(z, h);\n"
        "}\n"
        "");
    ::STRINGS[112] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q, r, s;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 z = (e ? vec4(float(0)) : texture2D(x, u)) * n;\n"
        "    vec4 A = vec4(z.xyz, z.w * clamp(0.5 - (((abs((distance(v, w) - t) - o) - p) * q) * r), float(0), float(1)));\n"
        "    gl_FragColor = vec4((A.xyz * A.w) * s, A.w * s);\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("x");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle01247f96_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle038d0b56_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647386_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647387_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647389_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7fe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7ff_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4a971b16_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4c78c62c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle60e596bb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7aaa5f74_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle91c7af62_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlebe3e2220_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305ca_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled0e74ba4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled802ead9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0edda_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0eddb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleef203ac7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee2e144c4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee2e144c5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee2e144d2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee2e144d3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee2e1454c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee2e1454d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee2e14552_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee2e14553_, uFieldFlagsStatic);
    type->Reflection.SetFields(32,
        new uField("Circle01247f96", 0),
        new uField("Circle038d0b56", 1),
        new uField("Circle09647386", 2),
        new uField("Circle09647387", 3),
        new uField("Circle09647389", 4),
        new uField("Circle27c6b7fe", 5),
        new uField("Circle27c6b7ff", 6),
        new uField("Circle4a971b16", 7),
        new uField("Circle4c78c62c", 8),
        new uField("Circle60e596bb", 9),
        new uField("Circle7aaa5f74", 10),
        new uField("Circle91c7af62", 11),
        new uField("Circlebe3e2220", 12),
        new uField("Circlecfb305c7", 13),
        new uField("Circlecfb305c9", 14),
        new uField("Circlecfb305ca", 15),
        new uField("Circled0e74ba4", 16),
        new uField("Circled802ead9", 17),
        new uField("Circlee8f0edda", 18),
        new uField("Circlee8f0eddb", 19),
        new uField("Circleef203ac7", 20),
        new uField("Circlef28f173b", 21),
        new uField("Circlef28f173d", 22),
        new uField("Circlef28f173e", 23),
        new uField("Rectanglee2e144c4", 24),
        new uField("Rectanglee2e144c5", 25),
        new uField("Rectanglee2e144d2", 26),
        new uField("Rectanglee2e144d3", 27),
        new uField("Rectanglee2e1454c", 28),
        new uField("Rectanglee2e1454d", 29),
        new uField("Rectanglee2e14552", 30),
        new uField("Rectanglee2e14553", 31));
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle01247f96_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle038d0b56_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647386_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647387_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647389_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7fe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7ff_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4a971b16_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4c78c62c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle60e596bb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7aaa5f74_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle91c7af62_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebe3e2220_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305ca_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled0e74ba4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled802ead9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0edda_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0eddb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleef203ac7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee2e144c4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee2e144c5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee2e144d2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee2e144d3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee2e1454c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee2e1454d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee2e14552_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee2e14553_;
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.35.8/.uno/package
// --------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform mat...*/], ::STRINGS[115/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform mat...*/], ::STRINGS[117/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[7/*"f"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"attribute v...*/], ::STRINGS[119/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[120/*"attribute v...*/], ::STRINGS[121/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform vec...*/], ::STRINGS[123/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[59/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform vec...*/], ::STRINGS[125/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[27/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[126/*"uniform mat...*/], ::STRINGS[127/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[29/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[129/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[130/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[131/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[114] = uString::Const("uniform mat4 f, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[115] = uString::Const("uniform vec3 e;\n"
        "uniform float c, d;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[116] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[117] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    vec4 h = vec4(g.xyz / max(g.w, 1e-05), g.w);\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n"
        "}\n"
        "");
    ::STRINGS[118] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    g = (j.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(j, float(1));\n"
        "}\n"
        "");
    ::STRINGS[119] = uString::Const("uniform float e[b];\n"
        "uniform vec2 f[d];\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 i(vec2 j){\n"
        "    vec4 k = texture2D(h, j) * e[0];\n"
        "\n"
        "    for (int l = 0; l < c; ++l)\n"
        "    {\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i(g);\n"
        "}\n"
        "");
    ::STRINGS[120] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[122] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\n"
        "    k = v;\n"
        "    l = v + c;\n"
        "    m = v - c;\n"
        "    n = v + e;\n"
        "    o = v - e;\n"
        "    p = v + f;\n"
        "    q = v + h;\n"
        "    r = v + i;\n"
        "    s = v + j;\n"
        "    gl_Position = vec4(u, float(1));\n"
        "}\n"
        "");
    ::STRINGS[123] = uString::Const("uniform float b, d, g;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[59] = uString::Const("t");
    ::STRINGS[124] = uString::Const("uniform vec2 c, e, f, g;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\n"
        "    h = o;\n"
        "    i = o + c;\n"
        "    j = o + e;\n"
        "    k = o + f;\n"
        "    l = o + g;\n"
        "    gl_Position = vec4(n, float(1));\n"
        "}\n"
        "");
    ::STRINGS[125] = uString::Const("uniform float b, d;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n"
        "}\n"
        "");
    ::STRINGS[27] = uString::Const("m");
    ::STRINGS[126] = uString::Const("uniform mat4 m, b;\n"
        "uniform vec2 g, h;\n"
        "uniform mat2 i;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    vec2 s = (r * g) + h;\n"
        "    n = r;\n"
        "    o = i * s;\n"
        "    p = s;\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[127] = uString::Const("uniform float c, d, e, f, k, l;\n"
        "uniform mat2 j;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(q, n);\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[29] = uString::Const("q");
    ::STRINGS[128] = uString::Const("uniform mat4 e, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 j = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    f = j;\n"
        "    g = (vec2(j.x, float(1) - j.y) * c) + d;\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[129] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).x;\n"
        "}\n"
        "");
    ::STRINGS[130] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 j = texture2D(i, g);\n"
        "    gl_FragColor = texture2D(h, f) * vec4(j.xyz * j.w, j.w);\n"
        "}\n"
        "");
    ::STRINGS[131] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).w;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitter6e650d31_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturate88bb7f94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers52052d40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers9b892494_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersd8c2e3e5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelperse7e608d1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftone3c4c510c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask0da73af7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask6affc65c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maskb04eaf92_, uFieldFlagsStatic);
    type->Reflection.SetFields(10,
        new uField("Blitter6e650d31", 0),
        new uField("Desaturate88bb7f94", 1),
        new uField("EffectHelpers52052d40", 2),
        new uField("EffectHelpers9b892494", 3),
        new uField("EffectHelpersd8c2e3e5", 4),
        new uField("EffectHelperse7e608d1", 5),
        new uField("Halftone3c4c510c", 6),
        new uField("Mask0da73af7", 7),
        new uField("Mask6affc65c", 8),
        new uField("Maskb04eaf92", 9));
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter6e650d31_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate88bb7f94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers52052d40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers9b892494_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersd8c2e3e5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelperse7e608d1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone3c4c510c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask0da73af7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask6affc65c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskb04eaf92_;
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.35.8/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper230c69b7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform vec...*/], ::STRINGS[133/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[8/*"g"*/]));
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[134/*"uniform mat...*/], ::STRINGS[135/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[136/*"uniform flo...*/], ::STRINGS[137/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[54/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[132] = uString::Const("uniform vec2 b;\n"
        "uniform mat4 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[133] = uString::Const("uniform float e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = vec4(h.xyz * e, h.w * e);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[134] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "attribute vec2 b;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = a.z;\n"
        "    e = vec2(b.x, 1.0 - b.y);\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n"
        "}\n"
        "");
    ::STRINGS[135] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[136] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[137] = uString::Const("uniform vec4 p;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(r, q) * p;\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[27] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[28] = uString::Const("o");
    ::STRINGS[53] = uString::Const("p");
    ::STRINGS[54] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper230c69b7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatchd43eeb4e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle720ad3ad_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("CacheHelper230c69b7", 0),
        new uField("ElementBatchd43eeb4e", 1),
        new uField("Scale9Rectangle720ad3ad", 2));
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper230c69b7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatchd43eeb4e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle720ad3ad_;
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.35.8/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseEntities_bundle :0
// {
// static FuseEntities_bundle() :0
static void FuseEntities_bundle__cctor__fn(uType* __type)
{
    FuseEntities_bundle::Blurc28c2aab_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[138/*"uniform vec...*/], ::STRINGS[139/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"h"*/]));
    FuseEntities_bundle::FindEdges06a48cc8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform vec...*/], ::STRINGS[141/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[14/*"n"*/]));
    FuseEntities_bundle::MeshBatchingEngine64346c9e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[142/*"uniform mat...*/], ::STRINGS[143/*"uniform vec...*/], 3, 5, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[60/*"w"*/], ::STRINGS[113/*"x"*/], ::STRINGS[144/*"y"*/]));
    FuseEntities_bundle::MeshBatchingEngine7f2c79e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[145/*"uniform mat...*/], ::STRINGS[146/*"uniform vec...*/], 3, 4, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[27/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[28/*"o"*/], ::STRINGS[53/*"p"*/], ::STRINGS[104/*"v"*/], ::STRINGS[60/*"w"*/], ::STRINGS[113/*"x"*/]));
    FuseEntities_bundle::MeshRenderer9e110bf4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[147/*"uniform mat...*/], ::STRINGS[148/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseEntities_bundle::MeshRendererf90be5f8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[149/*"uniform mat...*/], ::STRINGS[150/*"void main()...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/]));
    FuseEntities_bundle::RenderToTexture8b784dd0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[151/*"attribute v...*/], ::STRINGS[121/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/]));
}

static void FuseEntities_bundle_build(uType* type)
{
    ::STRINGS[138] = uString::Const("uniform vec2 b, c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d, e, f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 i = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 j = (i.xy * 0.5) + 0.5;\n"
        "    d = j + b;\n"
        "    e = j - b;\n"
        "    f = j + c;\n"
        "    g = j - c;\n"
        "    gl_Position = vec4(i, float(1));\n"
        "}\n"
        "");
    ::STRINGS[139] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 d, e, f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (((texture2D(h, d) + texture2D(h, e)) + texture2D(h, f)) + texture2D(h, g)) * 0.25;\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[140] = uString::Const("uniform vec2 b, c, d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 i, j, k, l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = vec2(a.x, 1.0 - a.y);\n"
        "    vec2 p = vec2(o.x, 1.0 - o.y);\n"
        "    i = p + b;\n"
        "    j = p + c;\n"
        "    k = p + d;\n"
        "    l = p + e;\n"
        "    m = p;\n"
        "    gl_Position = vec4(vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0)), float(1));\n"
        "}\n"
        "");
    ::STRINGS[141] = uString::Const("uniform float f;\n"
        "uniform vec4 g, h;\n"
        "\n"
        "uniform sampler2D n;\n"
        "\n"
        "varying vec2 i, j, k, l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 o = texture2D(n, m).xyz;\n"
        "    float p = min(1.0, (((length(texture2D(n, i).xyz - o) + length(texture2D(n, j).xyz - o)) + length(texture2D(n, k).xyz - o)) + length(texture2D(n, l).xyz - o)) * f);\n"
        "    gl_FragColor = (g * (1.0 - p)) + (h * p);\n"
        "}\n"
        "");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[142] = uString::Const("uniform mat4 i[16], q, m[16];\n"
        "uniform vec2 j, k;\n"
        "\n"
        "attribute vec3 a, e;\n"
        "attribute float b;\n"
        "attribute vec2 c;\n"
        "attribute vec4 d;\n"
        "\n"
        "varying vec3 r, s, t, v;\n"
        "varying vec2 u;\n"
        "\n"
        "mat3 z(mat3 A){\n"
        "    return mat3(A[0].x, A[1].x, A[2].x, A[0].y, A[1].y, A[2].y, A[0].z, A[1].z, A[2].z);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    mat3 A = z(mat3(m[int(b)][0].xyz, m[int(b)][1].xyz, m[int(b)][2].xyz));\n"
        "    r = A * d.xyz;\n"
        "    s = A * (cross(d.xyz, e) * d.w);\n"
        "    t = A * e;\n"
        "    u = (c * j) + k;\n"
        "    v = (i[int(b)] * vec4(a, 1.)).xyz;\n"
        "    gl_Position = (q * i[int(b)]) * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[143] = uString::Const("uniform vec3 l, n, o;\n"
        "uniform float p;\n"
        "\n"
        "uniform sampler2D w, x, y;\n"
        "\n"
        "varying vec3 r, s, t, v;\n"
        "varying vec2 u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 A = l * (f ? texture2D(w, u) : vec4(float(1))).xyz;\n"
        "    vec3 B = mat3(normalize(r), normalize(s), normalize(t)) * (g ? normalize((texture2D(x, u).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n"
        "    vec3 C = normalize(vec3(float(100), float(0), float(100)));\n"
        "    gl_FragColor = vec4(((A * vec3(0.5)) + ((A * max(0.0, dot(normalize(B), C))) * vec3(float(1)))) + (((n * (h ? texture2D(y, u) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(v - o, B)), C)), p)) * vec3(float(1))), 1.0);\n"
        "}\n"
        "");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[27] = uString::Const("m");
    ::STRINGS[28] = uString::Const("o");
    ::STRINGS[53] = uString::Const("p");
    ::STRINGS[29] = uString::Const("q");
    ::STRINGS[60] = uString::Const("w");
    ::STRINGS[113] = uString::Const("x");
    ::STRINGS[144] = uString::Const("y");
    ::STRINGS[145] = uString::Const("uniform mat4 o, l, p;\n"
        "uniform vec2 h, i;\n"
        "\n"
        "attribute vec3 a, d;\n"
        "attribute vec2 b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec3 q, r, s, u;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * c.xyz;\n"
        "    r = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * (cross(c.xyz, d) * c.w);\n"
        "    s = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * d;\n"
        "    t = (b * h) + i;\n"
        "    u = (l * vec4(a, 1.)).xyz;\n"
        "    gl_Position = o * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[146] = uString::Const("uniform vec3 j, k, m;\n"
        "uniform float n;\n"
        "\n"
        "uniform sampler2D v, w, x;\n"
        "\n"
        "varying vec3 q, r, s, u;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 y = j * (e ? texture2D(v, t) : vec4(float(1))).xyz;\n"
        "    vec3 z = mat3(normalize(q), normalize(r), normalize(s)) * (f ? normalize((texture2D(w, t).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n"
        "    vec3 A = normalize(vec3(float(100), float(0), float(100)));\n"
        "    gl_FragColor = vec4(((y * vec3(0.5)) + ((y * max(0.0, dot(normalize(z), A))) * vec3(float(1)))) + (((k * (g ? texture2D(x, t) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(u - m, z)), A)), n)) * vec3(float(1))), 1.0);\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("v");
    ::STRINGS[147] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = c * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[148] = uString::Const("uniform vec4 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = b;\n"
        "}\n"
        "");
    ::STRINGS[149] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec3 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[150] = uString::Const("void main()\n"
        "{\n"
        "    gl_FragColor = vec4(0.8, 0.85, 1.0, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[151] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * vec2(0.5, -0.5)) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::Blurc28c2aab_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::FindEdges06a48cc8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshBatchingEngine64346c9e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshBatchingEngine7f2c79e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshRenderer9e110bf4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshRendererf90be5f8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::RenderToTexture8b784dd0_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("Blurc28c2aab", 0),
        new uField("FindEdges06a48cc8", 1),
        new uField("MeshBatchingEngine64346c9e", 2),
        new uField("MeshBatchingEngine7f2c79e4", 3),
        new uField("MeshRenderer9e110bf4", 4),
        new uField("MeshRendererf90be5f8", 5),
        new uField("RenderToTexture8b784dd0", 6));
}

uClassType* FuseEntities_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEntities_bundle", options);
    type->fp_build_ = FuseEntities_bundle_build;
    type->fp_cctor_ = FuseEntities_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::Blurc28c2aab_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::FindEdges06a48cc8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshBatchingEngine64346c9e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshBatchingEngine7f2c79e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshRenderer9e110bf4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshRendererf90be5f8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::RenderToTexture8b784dd0_;
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.35.8/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseReactive_bundle :0
// {
// static FuseReactive_bundle() :0
static void FuseReactive_bundle__cctor__fn(uType* __type)
{
    FuseReactive_bundle::es6promise1d4b3140_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[152/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[153/*"es6-promise...*/]);
    FuseReactive_bundle::Observable86f09c28_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[152/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[154/*"observable-...*/]);
}

static void FuseReactive_bundle_build(uType* type)
{
    ::STRINGS[152] = uString::Const("Fuse.Reactive");
    ::STRINGS[153] = uString::Const("es6-promise-c078e7a5.js");
    ::STRINGS[154] = uString::Const("observable-de799b21.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::es6promise1d4b3140_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Observable86f09c28_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("es6promise1d4b3140", 0),
        new uField("Observable86f09c28", 1));
}

uClassType* FuseReactive_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactive_bundle", options);
    type->fp_build_ = FuseReactive_bundle_build;
    type->fp_cctor_ = FuseReactive_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::es6promise1d4b3140_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::Observable86f09c28_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class HashableWeakReference :2179
// {
static void HashableWeakReference_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof()), offsetof(::g::HashableWeakReference, _reference), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HashableWeakReference__New1_fn, 0, true, HashableWeakReference_typeof(), 1, ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof())),
        new uFunction("TryGetTarget", NULL, (void*)HashableWeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()->ByRef()));
}

uType* HashableWeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HashableWeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("HashableWeakReference", options);
    type->fp_build_ = HashableWeakReference_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))HashableWeakReference__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))HashableWeakReference__GetHashCode_fn;
    return type;
}

// public HashableWeakReference(Uno.WeakReference<object> reference) :2182
void HashableWeakReference__ctor__fn(HashableWeakReference* __this, ::g::Uno::WeakReference* reference)
{
    __this->ctor_(reference);
}

// public override sealed bool Equals(object that) :2201
void HashableWeakReference__Equals_fn(HashableWeakReference* __this, uObject* that, bool* __retval)
{
    uStackFrame __("HashableWeakReference", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(__this, that))
        return *__retval = true, void();

    uObject* a = NULL;
    uObject* b = NULL;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&a)))
        return *__retval = false, void();

    if (!uIs(that, HashableWeakReference_typeof()) || !uPtr(uPtr(uCast<HashableWeakReference*>(that, HashableWeakReference_typeof()))->_reference)->TryGetTarget((uObject**)(&b)))
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(a), b), void();
}

// public override sealed int GetHashCode() :2192
void HashableWeakReference__GetHashCode_fn(HashableWeakReference* __this, int* __retval)
{
    uStackFrame __("HashableWeakReference", "GetHashCode()");
    uObject* obj;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&obj)))
        return *__retval = 0, void();

    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(obj)), void();
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) :2182
void HashableWeakReference__New1_fn(::g::Uno::WeakReference* reference, HashableWeakReference** __retval)
{
    *__retval = HashableWeakReference::New1(reference);
}

// public bool TryGetTarget(object& obj) :2187
void HashableWeakReference__TryGetTarget_fn(HashableWeakReference* __this, uObject** obj, bool* __retval)
{
    *__retval = __this->TryGetTarget(obj);
}

// public HashableWeakReference(Uno.WeakReference<object> reference) [instance] :2182
void HashableWeakReference::ctor_(::g::Uno::WeakReference* reference)
{
    uStackFrame __("HashableWeakReference", ".ctor(Uno.WeakReference<object>)");
    _reference = reference;
}

// public bool TryGetTarget(object& obj) [instance] :2187
bool HashableWeakReference::TryGetTarget(uObject** obj)
{
    uStackFrame __("HashableWeakReference", "TryGetTarget(object&)");
    return uPtr(_reference)->TryGetTarget((uObject**)obj);
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) [static] :2182
HashableWeakReference* HashableWeakReference::New1(::g::Uno::WeakReference* reference)
{
    HashableWeakReference* obj1 = (HashableWeakReference*)uNew(HashableWeakReference_typeof());
    obj1->ctor_(reference);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/package
// ------------------------------------------------------------------------------

// public static generated class OutracksSimulatorClientUno_bundle :0
// {
// static OutracksSimulatorClientUno_bundle() :0
static void OutracksSimulatorClientUno_bundle__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_bundle::fight90e57290_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[155/*"Outracks.Si...*/]))->GetFile(::STRINGS[156/*"fight-15374...*/]);
}

static void OutracksSimulatorClientUno_bundle_build(uType* type)
{
    ::STRINGS[155] = uString::Const("Outracks.Simulator.Client.Uno");
    ::STRINGS[156] = uString::Const("fight-1537455b.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_bundle::fight90e57290_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("fight90e57290", 0));
}

uClassType* OutracksSimulatorClientUno_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OutracksSimulatorClientUno_bundle", options);
    type->fp_build_ = OutracksSimulatorClientUno_bundle_build;
    type->fp_cctor_ = OutracksSimulatorClientUno_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> OutracksSimulatorClientUno_bundle::fight90e57290_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property :266
// {
static void OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :269
void OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :271
void OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__Get_fn(OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :269
void OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :270
void OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__get_Object_fn(OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :272
void OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__Set_fn(OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :273
void OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :269
void OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property::ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property", ".ctor(Fuse.Controls.Rectangle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :269
OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property* OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property* obj1 = (OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property*)uNew(OutracksSimulatorClientUno_FuseControlsRectangle_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseControlsText_Value_Property :248
// {
static void OutracksSimulatorClientUno_FuseControlsText_Value_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseControlsText_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :251
void OutracksSimulatorClientUno_FuseControlsText_Value_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :253
void OutracksSimulatorClientUno_FuseControlsText_Value_Property__Get_fn(OutracksSimulatorClientUno_FuseControlsText_Value_Property* __this, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsText_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public OutracksSimulatorClientUno_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :251
void OutracksSimulatorClientUno_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseControlsText_Value_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseControlsText_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :252
void OutracksSimulatorClientUno_FuseControlsText_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsText_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :254
void OutracksSimulatorClientUno_FuseControlsText_Value_Property__Set_fn(OutracksSimulatorClientUno_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsText_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :255
void OutracksSimulatorClientUno_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseControlsText_Value_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsText_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :251
void OutracksSimulatorClientUno_FuseControlsText_Value_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsText_Value_Property", ".ctor(Fuse.Controls.Text,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :251
OutracksSimulatorClientUno_FuseControlsText_Value_Property* OutracksSimulatorClientUno_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseControlsText_Value_Property* obj1 = (OutracksSimulatorClientUno_FuseControlsText_Value_Property*)uNew(OutracksSimulatorClientUno_FuseControlsText_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property :275
// {
static void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :278
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :280
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Get_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :278
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :279
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_Object_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :281
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Set_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :282
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :278
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", ".ctor(Fuse.Drawing.Stroke,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :278
OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* obj1 = (OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property*)uNew(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property :257
// {
static void OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) :260
void OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property* __this, ::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :262
void OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__Get_fn(OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property New(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) :260
void OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__New1_fn(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :261
void OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :263
void OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__Set_fn(OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :264
void OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) [instance] :260
void OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property::ctor_2(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property", ".ctor(Fuse.Triggers.WhileTrue,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property New(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) [static] :260
OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property* OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property::New1(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property* obj1 = (OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property*)uNew(OutracksSimulatorClientUno_FuseTriggersWhileTrue_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property :329
// {
static void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Outracks::Simulator::DeveloperMenu_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property(Outracks.Simulator.DeveloperMenu obj, Uno.UX.Selector name) :332
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, ::g::Outracks::Simulator::DeveloperMenu* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :334
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property New(Outracks.Simulator.DeveloperMenu obj, Uno.UX.Selector name) :332
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__New1_fn(::g::Outracks::Simulator::DeveloperMenu* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :333
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :335
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :336
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property(Outracks.Simulator.DeveloperMenu obj, Uno.UX.Selector name) [instance] :332
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property::ctor_2(::g::Outracks::Simulator::DeveloperMenu* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property", ".ctor(Outracks.Simulator.DeveloperMenu,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property New(Outracks.Simulator.DeveloperMenu obj, Uno.UX.Selector name) [static] :332
OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property::New1(::g::Outracks::Simulator::DeveloperMenu* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property :302
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :305
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :307
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->FillColor(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :305
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :306
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :308
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetFillColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :309
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :305
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", ".ctor(Outracks.Simulator.ErrorToast,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :305
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property :284
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :287
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :289
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Message(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :287
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :288
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :290
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetMessage(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :291
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :287
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", ".ctor(Outracks.Simulator.ErrorToast,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :287
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property :320
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :323
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :325
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :323
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :324
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :326
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :327
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :323
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property", ".ctor(Outracks.Simulator.ErrorToast,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :323
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property :293
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :296
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :298
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->ShowMonitorInfo(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :296
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :297
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :299
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->SetShowMonitorInfo(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :300
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :296
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", ".ctor(Outracks.Simulator.ErrorToast,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :296
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property :311
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_build(uType* type)
{
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :314
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :316
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->StrokeColor(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :314
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :315
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :317
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetStrokeColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :318
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :314
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", ".ctor(Outracks.Simulator.ErrorToast,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :314
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.35.6/.uno/package
// ---------------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SdfFontShaderc4d110ba_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[157/*"uniform mat...*/], ::STRINGS[158/*"uniform flo...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[10/*"i"*/]));
    UnoCore_bundle::SpriteFontShader901b6a86_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[159/*"uniform mat...*/], ::STRINGS[160/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"g"*/]));
}

static void UnoCore_bundle_build(uType* type)
{
    ::STRINGS[157] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = b;\n"
        "    h = c;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[158] = uString::Const("uniform float e, f;\n"
        "\n"
        "uniform sampler2D i;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float j = smoothstep(e, f, texture2D(i, g).x);\n"
        "    if (j < 0.15) discard;\n"
        "    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[159] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, c;\n"
        "attribute vec4 b;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = c;\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[160] = uString::Const("uniform sampler2D g;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SdfFontShaderc4d110ba_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SpriteFontShader901b6a86_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("SdfFontShaderc4d110ba", 0),
        new uField("SpriteFontShader901b6a86", 1));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_build_ = UnoCore_bundle_build;
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SdfFontShaderc4d110ba_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShader901b6a86_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class WeakDictionary<TKey, TValue> :2216
// {
static void WeakDictionary_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[2] = ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof());
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1)), offsetof(::g::WeakDictionary, _dictionary), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("AsEnumerable", NULL, (void*)WeakDictionary__AsEnumerable_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1))), 0),
        new uFunction("Clear", NULL, (void*)WeakDictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)WeakDictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)WeakDictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)WeakDictionary__New1_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)WeakDictionary__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::HashableWeakReference_typeof()),
        new uFunction("TryGetValue", NULL, (void*)WeakDictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
}

uType* WeakDictionary_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(WeakDictionary);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("WeakDictionary`2", options);
    type->fp_build_ = WeakDictionary_build;
    type->fp_ctor_ = (void*)WeakDictionary__New1_fn;
    return type;
}

// public generated WeakDictionary() :2216
void WeakDictionary__ctor__fn(WeakDictionary* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() :2220
void WeakDictionary__AsEnumerable_fn(WeakDictionary* __this, uObject** __retval)
{
    *__retval = __this->AsEnumerable();
}

// public void Clear() :2225
void WeakDictionary__Clear_fn(WeakDictionary* __this)
{
    __this->Clear();
}

// private static HashableWeakReference GetKey(TKey obj) :2246
void WeakDictionary__GetKey_fn(uType* __type, void* obj, ::g::HashableWeakReference** __retval)
{
    uStackFrame __("WeakDictionary`2", "GetKey(TKey)");
    return *__retval = ::g::HashableWeakReference::New1((::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[2/*Uno.WeakReference<object>*/], uBoxPtr(__type->T(0), obj))), void();
}

// public TValue get_Item(TKey key) :2242
void WeakDictionary__get_Item_fn(WeakDictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("WeakDictionary`2", "get_Item(TKey)");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::HashableWeakReference* ret6;
    return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret6), ret6), &ret5), ret5)), void();
}

// public void set_Item(TKey key, TValue value) :2243
void WeakDictionary__set_Item_fn(WeakDictionary* __this, void* key, void* value)
{
    uStackFrame __("WeakDictionary`2", "set_Item(TKey,TValue)");
    ::g::HashableWeakReference* ret7;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret7), ret7), value);
}

// public generated WeakDictionary New() :2216
void WeakDictionary__New1_fn(uType* __type, WeakDictionary** __retval)
{
    *__retval = WeakDictionary::New1(__type);
}

// public bool Remove(HashableWeakReference key) :2235
void WeakDictionary__Remove_fn(WeakDictionary* __this, ::g::HashableWeakReference* key, bool* __retval)
{
    *__retval = __this->Remove(key);
}

// public bool TryGetValue(TKey key, TValue& value) :2230
void WeakDictionary__TryGetValue_fn(WeakDictionary* __this, void* key, uTRef value, bool* __retval)
{
    uStackFrame __("WeakDictionary`2", "TryGetValue(TKey,TValue&)");
    bool ret3;
    ::g::HashableWeakReference* ret4;
    return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret4), ret4), value, &ret3), ret3), void();
}

// public generated WeakDictionary() [instance] :2216
void WeakDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
    };
    uStackFrame __("WeakDictionary`2", ".ctor()");
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() [instance] :2220
uObject* WeakDictionary::AsEnumerable()
{
    uStackFrame __("WeakDictionary`2", "AsEnumerable()");
    return (uObject*)_dictionary;
}

// public void Clear() [instance] :2225
void WeakDictionary::Clear()
{
    uStackFrame __("WeakDictionary`2", "Clear()");
    uPtr(_dictionary)->Clear();
}

// public bool Remove(HashableWeakReference key) [instance] :2235
bool WeakDictionary::Remove(::g::HashableWeakReference* key)
{
    uStackFrame __("WeakDictionary`2", "Remove(HashableWeakReference)");
    bool ret2;
    return (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dictionary), key, &ret2), ret2);
}

// public generated WeakDictionary New() [static] :2216
WeakDictionary* WeakDictionary::New1(uType* __type)
{
    WeakDictionary* obj1 = (WeakDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

} // ::g
