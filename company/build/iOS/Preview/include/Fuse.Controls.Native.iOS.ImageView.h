// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.35.8/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IImageView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ImageView;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MultiDensityImageSource;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class ImageView :618
// {
struct ImageView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::IImageView interface3;
};

ImageView_type* ImageView_typeof();
void ImageView__ctor_2_fn(ImageView* __this, ::g::Fuse::Visual* visual);
void ImageView__Create_fn(uObject** __retval);
void ImageView__CreateImageView_fn(uObject* container, uObject** __retval);
void ImageView__Dispose_fn(ImageView* __this);
void ImageView__get_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value);
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value);
void ImageView__New1_fn(::g::Fuse::Visual* visual, ImageView** __retval);
void ImageView__SetImage_fn(uObject* imageViewHandle, uObject* uiImageHandle);
void ImageView__UpdateImage_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource);
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http);
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi);
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize);

struct ImageView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Controls::Native::ImageHandle*> _imageHandle;
    uStrong<uObject*> _uiImageView;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_2(::g::Fuse::Visual* visual);
    ::g::Fuse::Controls::Native::ImageHandle* ImageHandle();
    void ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value);
    void ImageSource(::g::Fuse::Resources::ImageSource* value);
    void UpdateImage(::g::Fuse::Resources::FileImageSource* fileImageSource);
    void UpdateImage1(::g::Fuse::Resources::HttpImageSource* http);
    void UpdateImage2(::g::Fuse::Resources::MultiDensityImageSource* multi);
    void UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize);
    static uObject* Create();
    static uObject* CreateImageView(uObject* container);
    static ImageView* New1(::g::Fuse::Visual* visual);
    static void SetImage(uObject* imageViewHandle, uObject* uiImageHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
