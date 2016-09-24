// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.35.8/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.iOS.ImageView.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Matrix.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class ImageView :618
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" not supported in native context");
    ::TYPES[0] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[1] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[2] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(ImageView_type, interface2),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface3));
    type->SetFields(3,
        ::g::Fuse::Controls::Native::ImageHandle_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::ImageView, _imageHandle), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::ImageView, _uiImageView), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::ImageView, _visual), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.iOS.ImageView", options);
    type->SetBase(::g::Fuse::Controls::Native::iOS::LeafView_typeof());
    type->fp_build_ = ImageView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))ImageView__Dispose_fn;
    type->interface3.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface3.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::LeafView__Measure_fn;
    return type;
}

// public ImageView(Fuse.Visual visual) :639
void ImageView__ctor_2_fn(ImageView* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// private static ObjC.Object Create() :730
void ImageView__Create_fn(uObject** __retval)
{
    *__retval = ImageView::Create();
}

// private static ObjC.Object CreateImageView(ObjC.Object container) :741
void ImageView__CreateImageView_fn(uObject* container, uObject** __retval)
{
    *__retval = ImageView::CreateImageView(container);
}

// public override sealed void Dispose() :647
void ImageView__Dispose_fn(ImageView* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
    __this->ImageHandle(NULL);
}

// private Fuse.Controls.Native.ImageHandle get_ImageHandle() :657
void ImageView__get_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = __this->ImageHandle();
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) :658
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :622
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New(Fuse.Visual visual) :639
void ImageView__New1_fn(::g::Fuse::Visual* visual, ImageView** __retval)
{
    *__retval = ImageView::New1(visual);
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) :722
void ImageView__SetImage_fn(uObject* imageViewHandle, uObject* uiImageHandle)
{
    ImageView::SetImage(imageViewHandle, uiImageHandle);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) :675
void ImageView__UpdateImage_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) :680
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage1(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) :685
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage2(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) :690
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// public ImageView(Fuse.Visual visual) [instance] :639
void ImageView::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", ".ctor(Fuse.Visual)");
    ctor_1(ImageView::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, Handle());
    _uiImageView = ImageView::CreateImageView(Handle());
    ::g::Fuse::Controls::Native::iOS::View::SetAnchorPoint(_uiImageView);
}

// private Fuse.Controls.Native.ImageHandle get_ImageHandle() [instance] :657
::g::Fuse::Controls::Native::ImageHandle* ImageView::ImageHandle()
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "get_ImageHandle()");
    return _imageHandle;
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance] :658
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "set_ImageHandle(Fuse.Controls.Native.ImageHandle)");

    if (_imageHandle != NULL)
    {
        uPtr(_imageHandle)->Dispose();
        _imageHandle = NULL;
    }

    _imageHandle = value;

    if (_imageHandle != NULL)
        ImageView::SetImage(_uiImageView, (uObject*)uPtr(_imageHandle)->Handle());
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :622
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "set_ImageSource(Fuse.Resources.ImageSource)");

    if (uIs(value, ::TYPES[0/*Fuse.Resources.FileImageSource*/]))
        UpdateImage(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[0/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[1/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[1/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[2/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[2/*Fuse.Resources.MultiDensityImageSource*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[0/*" not suppor...*/])));
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance] :675
void ImageView::UpdateImage(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.FileImageSource)");
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load2(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance] :680
void ImageView::UpdateImage1(::g::Fuse::Resources::HttpImageSource* http)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.HttpImageSource)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance] :685
void ImageView::UpdateImage2(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.MultiDensityImageSource)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance] :690
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImageTransform(float,float2,float2,float2)");
    ::g::Fuse::Controls::Native::iOS::View::SetBounds(_uiImageView, 0.0f, 0.0f, drawSize.X, drawSize.Y);
    ::g::Fuse::Controls::Native::iOS::View::SetTransform1(_uiImageView, ::g::Uno::Matrix::Compose(::g::Uno::Float3__New4(scale, 0.0f), ::g::Uno::Float4__Identity(), ::g::Uno::Float3__New4(origin, 0.0f)));
}

// private static ObjC.Object Create() [static] :730
uObject* ImageView::Create()
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "Create()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            UIControl* uicontrol = [[UIControl alloc] init];
            			[uicontrol setMultipleTouchEnabled:true];
            			[uicontrol setAutoresizesSubviews:false];
            			[uicontrol setTranslatesAutoresizingMaskIntoConstraints:false];
            			[uicontrol setClipsToBounds:true];
            			return uicontrol;
        } ());
        
    }
    
}

// private static ObjC.Object CreateImageView(ObjC.Object container) [static] :741
uObject* ImageView::CreateImageView(uObject* container)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "CreateImageView(ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id container) -> ::id
        {
            UIImageView* imageView = [[UIImageView alloc] init];
            			[container addSubview:imageView];
            			return imageView;
        } (::g::ObjC::Helpers::GetHandle(container)));
        
    }
    
}

// public ImageView New(Fuse.Visual visual) [static] :639
ImageView* ImageView::New1(::g::Fuse::Visual* visual)
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) [static] :722
void ImageView::SetImage(uObject* imageViewHandle, uObject* uiImageHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "SetImage(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        [] (::id imageViewHandle, ::id uiImageHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            			UIImage* image = (UIImage*)uiImageHandle;
            			[imageView setImage:image];
        } (::g::ObjC::Helpers::GetHandle(imageViewHandle), ::g::ObjC::Helpers::GetHandle(uiImageHandle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
