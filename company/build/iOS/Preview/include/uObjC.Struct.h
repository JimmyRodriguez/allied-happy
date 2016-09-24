#pragma once

#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.Foundation._NSRange.h>

namespace uObjC { namespace Struct {

template <class Source, class Destination>
inline Destination ConvertEnum(Source src, Destination dst = Destination())
{
    return dst = Destination(src);
}


// Struct conversion functions -- Declarations
template <class Destination>
inline Destination FromUno__NSRange(::g::iOS::Foundation::_NSRange const &, Destination = Destination());
template <class Source>
inline ::g::iOS::Foundation::_NSRange ToUno__NSRange(Source const &, ::g::iOS::Foundation::_NSRange = ::g::iOS::Foundation::_NSRange());
template <class Destination>
inline Destination FromUno_CGPoint(::g::iOS::CoreGraphics::CGPoint const &, Destination = Destination());
template <class Source>
inline ::g::iOS::CoreGraphics::CGPoint ToUno_CGPoint(Source const &, ::g::iOS::CoreGraphics::CGPoint = ::g::iOS::CoreGraphics::CGPoint());
template <class Destination>
inline Destination FromUno_CGRect(::g::iOS::CoreGraphics::CGRect const &, Destination = Destination());
template <class Source>
inline ::g::iOS::CoreGraphics::CGRect ToUno_CGRect(Source const &, ::g::iOS::CoreGraphics::CGRect = ::g::iOS::CoreGraphics::CGRect());
template <class Destination>
inline Destination FromUno_CGSize(::g::iOS::CoreGraphics::CGSize const &, Destination = Destination());
template <class Source>
inline ::g::iOS::CoreGraphics::CGSize ToUno_CGSize(Source const &, ::g::iOS::CoreGraphics::CGSize = ::g::iOS::CoreGraphics::CGSize());


// Struct conversion functions -- Definitions
// Converters for iOS.CoreGraphics.CGPoint
template <class Destination>
inline Destination FromUno_CGPoint(::g::iOS::CoreGraphics::CGPoint const &src, Destination dst)
{
    dst.x = src.X;
    dst.y = src.Y;

    return dst;
}
template <class Source>
inline ::g::iOS::CoreGraphics::CGPoint ToUno_CGPoint(Source const &src, ::g::iOS::CoreGraphics::CGPoint dst)
{
    dst.X = src.x;
    dst.Y = src.y;

    return dst;
}
// Converters for iOS.CoreGraphics.CGRect
template <class Destination>
inline Destination FromUno_CGRect(::g::iOS::CoreGraphics::CGRect const &src, Destination dst)
{
    dst.origin = FromUno_CGPoint(src.Origin, dst.origin);
    dst.size = FromUno_CGSize(src.Size, dst.size);

    return dst;
}
template <class Source>
inline ::g::iOS::CoreGraphics::CGRect ToUno_CGRect(Source const &src, ::g::iOS::CoreGraphics::CGRect dst)
{
    dst.Origin = ToUno_CGPoint(src.origin, dst.Origin);
    dst.Size = ToUno_CGSize(src.size, dst.Size);

    return dst;
}
// Converters for iOS.CoreGraphics.CGSize
template <class Destination>
inline Destination FromUno_CGSize(::g::iOS::CoreGraphics::CGSize const &src, Destination dst)
{
    dst.width = src.Width;
    dst.height = src.Height;

    return dst;
}
template <class Source>
inline ::g::iOS::CoreGraphics::CGSize ToUno_CGSize(Source const &src, ::g::iOS::CoreGraphics::CGSize dst)
{
    dst.Width = src.width;
    dst.Height = src.height;

    return dst;
}
// Converters for iOS.Foundation._NSRange
template <class Destination>
inline Destination FromUno__NSRange(::g::iOS::Foundation::_NSRange const &src, Destination dst)
{
    dst.location = src.Location;
    dst.length = src.Length;

    return dst;
}
template <class Source>
inline ::g::iOS::Foundation::_NSRange ToUno__NSRange(Source const &src, ::g::iOS::Foundation::_NSRange dst)
{
    dst.Location = src.location;
    dst.Length = src.length;

    return dst;
}

}} // namespace uObjC::Struct
