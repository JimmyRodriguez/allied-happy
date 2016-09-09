// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\Dripdoctors.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Dripdoctors_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{

// public static generated class Dripdoctors_bundle :0
// {
// static Dripdoctors_bundle() :0
static void Dripdoctors_bundle__cctor__fn(uType* __type)
{
    Dripdoctors_bundle::dripDoctors48515d95_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Dripdoctors"*/]))->GetFile(::STRINGS[1/*"dripdoctors...*/]);
    Dripdoctors_bundle::geolocation242c8c14_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Dripdoctors"*/]))->GetFile(::STRINGS[2/*"geolocation...*/]);
    Dripdoctors_bundle::landingaf6564a1_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Dripdoctors"*/]))->GetFile(::STRINGS[3/*"landing-175...*/]);
    Dripdoctors_bundle::login347fd4c0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Dripdoctors"*/]))->GetFile(::STRINGS[4/*"login-c8a3c...*/]);
}

static void Dripdoctors_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Dripdoctors");
    ::STRINGS[1] = uString::Const("dripdoctors-44b49d39.png");
    ::STRINGS[2] = uString::Const("geolocation-2161f184.js");
    ::STRINGS[3] = uString::Const("landing-1750f2fb.js");
    ::STRINGS[4] = uString::Const("login-c8a3c402.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Dripdoctors_bundle::dripDoctors48515d95_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Dripdoctors_bundle::geolocation242c8c14_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Dripdoctors_bundle::landingaf6564a1_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Dripdoctors_bundle::login347fd4c0_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("dripDoctors48515d95", 0),
        new uField("geolocation242c8c14", 1),
        new uField("landingaf6564a1", 2),
        new uField("login347fd4c0", 3));
}

uClassType* Dripdoctors_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Dripdoctors_bundle", options);
    type->fp_build_ = Dripdoctors_bundle_build;
    type->fp_cctor_ = Dripdoctors_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> Dripdoctors_bundle::dripDoctors48515d95_;
uSStrong< ::g::Uno::IO::BundleFile*> Dripdoctors_bundle::geolocation242c8c14_;
uSStrong< ::g::Uno::IO::BundleFile*> Dripdoctors_bundle::landingaf6564a1_;
uSStrong< ::g::Uno::IO::BundleFile*> Dripdoctors_bundle::login347fd4c0_;
// }

} // ::g
