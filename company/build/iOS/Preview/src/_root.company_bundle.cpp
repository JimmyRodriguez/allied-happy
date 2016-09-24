// This file was generated based on '/Users/jimmysidney/workspace/apps-fuse/company/company.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.company_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class company_bundle :0
// {
// static company_bundle() :0
static void company_bundle__cctor__fn(uType* __type)
{
    company_bundle::MainView75a8e0b7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"company"*/]))->GetFile(::STRINGS[1/*"mainview-01...*/]);
}

static void company_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("company");
    ::STRINGS[1] = uString::Const("mainview-018b5187.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::company_bundle::MainView75a8e0b7_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MainView75a8e0b7", 0));
}

uClassType* company_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("company_bundle", options);
    type->fp_build_ = company_bundle_build;
    type->fp_cctor_ = company_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> company_bundle::MainView75a8e0b7_;
// }

} // ::g
