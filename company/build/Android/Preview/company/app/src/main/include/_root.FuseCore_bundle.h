// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.35.8/.uno/package'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{struct FuseCore_bundle;}

namespace g{

// public static generated class FuseCore_bundle :0
// {
uClassType* FuseCore_bundle_typeof();

struct FuseCore_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> DrawHelpers4c5c39ae_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& DrawHelpers4c5c39ae() { return FuseCore_bundle_typeof()->Init(), DrawHelpers4c5c39ae_; }
    static uSStrong< ::g::Uno::IO::BundleFile*> RobotoRegulara4996f65_;
    static uSStrong< ::g::Uno::IO::BundleFile*>& RobotoRegulara4996f65() { return FuseCore_bundle_typeof()->Init(), RobotoRegulara4996f65_; }
};
// }

} // ::g
