// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <errno.h>
#include <Uno.Net.NetworkHelpers.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Net{

// C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.32.2\$.uno
// --------------------------------------------------------

// internal sealed extern class NetworkHelpers :295
// {
static void NetworkHelpers_build(uType* type)
{
}

uType* NetworkHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(NetworkHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.NetworkHelpers", options);
    type->fp_build_ = NetworkHelpers_build;
    return type;
}

// public static extern string GetError() :314
void NetworkHelpers__GetError_fn(uString** __retval)
{
    *__retval = NetworkHelpers::GetError();
}

// public static extern string GetError() [static] :314
uString* NetworkHelpers::GetError()
{
    return uString::Utf8(strerror(errno));
}
// }

}}} // ::g::Uno::Net
