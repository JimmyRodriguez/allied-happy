// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.FileSystem.DirectoryInfo.h>
#include <Fuse.FileSystem.FileAttributes.h>
#include <Fuse.FileSystem.FileInfo.h>
#include <Fuse.FileSystem.FileStatus.h>
#include <Fuse.FileSystem.FileStatusHelpers.h>
#include <Fuse.FileSystem.FileSystemInfo.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.FileSystem.FileSystemOperations.Closure-2.h>
#include <Fuse.FileSystem.FileSystemOperations.Closure-3.h>
#include <Fuse.FileSystem.FileSystemOperations.h>
#include <Fuse.FileSystem.IosPaths.h>
#include <Fuse.FileSystem.Nothing.h>
#include <Fuse.FileSystem.PathTools.h>
#include <Fuse.FileSystem.UnifiedPaths.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Double.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.Constants.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.UX.Resource.h>
#include <Uno/Support.h>
static uString* STRINGS[45];
static uType* TYPES[58];

namespace g{
namespace Fuse{
namespace FileSystem{

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/$.uno
// ----------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, TResult> :1099
// {
static void FileSystemOperations__Closure_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::FileSystem::FileSystemOperations__Closure, _del), 0);
}

uType* FileSystemOperations__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(FileSystemOperations__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`2", options);
    type->fp_build_ = FileSystemOperations__Closure_build;
    return type;
}

// public Closure(Uno.Func<T1, TResult> del, T1 arg1) :1104
void FileSystemOperations__Closure__ctor__fn(FileSystemOperations__Closure* __this, uDelegate* del, void* arg1)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`2", ".ctor(Uno.Func<T1, TResult>,T1)");
    __this->_del = del;
    __this->_arg1() = arg1;
}

// public TResult Invoke() :1110
void FileSystemOperations__Closure__Invoke_fn(FileSystemOperations__Closure* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`2", "Invoke()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 1, (void*)__this->_arg1()), ret2)), void();
}

// public Closure New(Uno.Func<T1, TResult> del, T1 arg1) :1104
void FileSystemOperations__Closure__New1_fn(uType* __type, uDelegate* del, void* arg1, FileSystemOperations__Closure** __retval)
{
    FileSystemOperations__Closure* obj1 = (FileSystemOperations__Closure*)uNew(__type);
    FileSystemOperations__Closure__ctor__fn(obj1, del, arg1);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/$.uno
// ----------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, T2, TResult> :1117
// {
static void FileSystemOperations__Closure1_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(1), type->T(2)), offsetof(::g::Fuse::FileSystem::FileSystemOperations__Closure1, _del), 0);
}

uType* FileSystemOperations__Closure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(FileSystemOperations__Closure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`3", options);
    type->fp_build_ = FileSystemOperations__Closure1_build;
    return type;
}

// public Closure(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :1123
void FileSystemOperations__Closure1__ctor__fn(FileSystemOperations__Closure1* __this, uDelegate* del, void* arg1, void* arg2)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`3", ".ctor(Uno.Func<T1, T2, TResult>,T1,T2)");
    __this->_del = del;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public TResult Invoke() :1130
void FileSystemOperations__Closure1__Invoke_fn(FileSystemOperations__Closure1* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(2),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`3", "Invoke()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 2, (void*)__this->_arg1(), (void*)__this->_arg2()), ret2)), void();
}

// public Closure New(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :1123
void FileSystemOperations__Closure1__New1_fn(uType* __type, uDelegate* del, void* arg1, void* arg2, FileSystemOperations__Closure1** __retval)
{
    FileSystemOperations__Closure1* obj1 = (FileSystemOperations__Closure1*)uNew(__type);
    FileSystemOperations__Closure1__ctor__fn(obj1, del, arg1, arg2);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/Uno/IO/$.uno
// -----------------------------------------------------------------

// public sealed class DirectoryInfo :7
// {
static void DirectoryInfo_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DirectoryInfo__New1_fn, 0, true, DirectoryInfo_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::FileSystem::FileSystemInfo_type* DirectoryInfo_typeof()
{
    static uSStrong< ::g::Fuse::FileSystem::FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DirectoryInfo);
    options.TypeSize = sizeof(::g::Fuse::FileSystem::FileSystemInfo_type);
    type = (::g::Fuse::FileSystem::FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.DirectoryInfo", options);
    type->SetBase(::g::Fuse::FileSystem::FileSystemInfo_typeof());
    type->fp_build_ = DirectoryInfo_build;
    type->fp_LoadStatus = (void(*)(::g::Fuse::FileSystem::FileSystemInfo*, ::g::Fuse::FileSystem::FileStatus**))DirectoryInfo__LoadStatus_fn;
    return type;
}

// public DirectoryInfo(string originalPath) :9
void DirectoryInfo__ctor_1_fn(DirectoryInfo* __this, uString* originalPath)
{
    __this->ctor_1(originalPath);
}

// internal override sealed extern Fuse.FileSystem.FileStatus LoadStatus() :20
void DirectoryInfo__LoadStatus_fn(DirectoryInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    uStackFrame __("Fuse.FileSystem.DirectoryInfo", "LoadStatus()");
    ::g::Fuse::FileSystem::FileStatus* ret2;
    ::g::Fuse::FileSystem::FileStatus* status = (::g::Fuse::FileSystem::FileSystemInfo__LoadStatus_fn(__this, &ret2), ret2);

    if ((uPtr(status)->Attributes() & 16) == 0)
        return *__retval = ::g::Fuse::FileSystem::FileStatus::New1(), void();

    return *__retval = status, void();
}

// public DirectoryInfo New(string originalPath) :9
void DirectoryInfo__New1_fn(uString* originalPath, DirectoryInfo** __retval)
{
    *__retval = DirectoryInfo::New1(originalPath);
}

// public DirectoryInfo(string originalPath) [instance] :9
void DirectoryInfo::ctor_1(uString* originalPath)
{
    uStackFrame __("Fuse.FileSystem.DirectoryInfo", ".ctor(string)");
    ctor_(originalPath);
}

// public DirectoryInfo New(string originalPath) [static] :9
DirectoryInfo* DirectoryInfo::New1(uString* originalPath)
{
    DirectoryInfo* obj1 = (DirectoryInfo*)uNew(DirectoryInfo_typeof());
    obj1->ctor_1(originalPath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/Uno/IO/$.uno
// -----------------------------------------------------------------

// public enum FileAttributes :37
uEnumType* FileAttributes_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FileSystem.FileAttributes", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Directory", 16LL,
        "Device", 64LL,
        "ReparsePoint", 1024LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/Uno/IO/$.uno
// -----------------------------------------------------------------

// public sealed class FileInfo :66
// {
static void FileInfo_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Length", NULL, (void*)FileInfo__get_Length_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FileInfo__New1_fn, 0, true, FileInfo_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::FileSystem::FileSystemInfo_type* FileInfo_typeof()
{
    static uSStrong< ::g::Fuse::FileSystem::FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileInfo);
    options.TypeSize = sizeof(::g::Fuse::FileSystem::FileSystemInfo_type);
    type = (::g::Fuse::FileSystem::FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.FileInfo", options);
    type->SetBase(::g::Fuse::FileSystem::FileSystemInfo_typeof());
    type->fp_build_ = FileInfo_build;
    type->fp_LoadStatus = (void(*)(::g::Fuse::FileSystem::FileSystemInfo*, ::g::Fuse::FileSystem::FileStatus**))FileInfo__LoadStatus_fn;
    return type;
}

// public FileInfo(string originalPath) :71
void FileInfo__ctor_1_fn(FileInfo* __this, uString* originalPath)
{
    __this->ctor_1(originalPath);
}

// public long get_Length() :95
void FileInfo__get_Length_fn(FileInfo* __this, int64_t* __retval)
{
    *__retval = __this->Length();
}

// internal override sealed extern Fuse.FileSystem.FileStatus LoadStatus() :82
void FileInfo__LoadStatus_fn(FileInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    uStackFrame __("Fuse.FileSystem.FileInfo", "LoadStatus()");
    ::g::Fuse::FileSystem::FileStatus* ret2;
    ::g::Fuse::FileSystem::FileStatus* status = (::g::Fuse::FileSystem::FileSystemInfo__LoadStatus_fn(__this, &ret2), ret2);

    if ((uPtr(status)->Attributes() & 16) != 0)
        return *__retval = ::g::Fuse::FileSystem::FileStatus::New1(), void();

    return *__retval = status, void();
}

// public FileInfo New(string originalPath) :71
void FileInfo__New1_fn(uString* originalPath, FileInfo** __retval)
{
    *__retval = FileInfo::New1(originalPath);
}

// public FileInfo(string originalPath) [instance] :71
void FileInfo::ctor_1(uString* originalPath)
{
    uStackFrame __("Fuse.FileSystem.FileInfo", ".ctor(string)");
    ctor_(originalPath);
}

// public long get_Length() [instance] :95
int64_t FileInfo::Length()
{
    uStackFrame __("Fuse.FileSystem.FileInfo", "get_Length()");
    return uPtr(Status())->Length();
}

// public FileInfo New(string originalPath) [static] :71
FileInfo* FileInfo::New1(uString* originalPath)
{
    FileInfo* obj1 = (FileInfo*)uNew(FileInfo_typeof());
    obj1->ctor_1(originalPath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/Uno/IO/$.uno
// -----------------------------------------------------------------

// internal sealed class FileStatus :114
// {
// static FileStatus() :114
static void FileStatus__cctor__fn(uType* __type)
{
    FileStatus::FileTimeEpoch_ = ::g::Uno::Time::Instant__FromUtc(1601, 1, 1, 0, 0);
}

static void FileStatus_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::FileSystem::FileAttributes_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _attributes), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _creationTimeUtc), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _exists), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _lastAccessTimeUtc), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _lastWriteTimeUtc), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _length), 0,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&::g::Fuse::FileSystem::FileStatus::FileTimeEpoch_, uFieldFlagsStatic);
}

uType* FileStatus_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(FileStatus);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileStatus", options);
    type->fp_build_ = FileStatus_build;
    type->fp_ctor_ = (void*)FileStatus__New1_fn;
    type->fp_cctor_ = FileStatus__cctor__fn;
    return type;
}

// public FileStatus() :126
void FileStatus__ctor__fn(FileStatus* __this)
{
    __this->ctor_();
}

// public FileStatus(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) :142
void FileStatus__ctor_1_fn(FileStatus* __this, int64_t* length, int* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    __this->ctor_1(*length, *attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
}

// public Fuse.FileSystem.FileAttributes get_Attributes() :163
void FileStatus__get_Attributes_fn(FileStatus* __this, int* __retval)
{
    *__retval = __this->Attributes();
}

// public Uno.Time.ZonedDateTime get_CreationTimeUtc() :159
void FileStatus__get_CreationTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->CreationTimeUtc();
}

// public bool get_Exists() :161
void FileStatus__get_Exists_fn(FileStatus* __this, bool* __retval)
{
    *__retval = __this->Exists();
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() :165
void FileStatus__get_LastAccessTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastAccessTimeUtc();
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() :167
void FileStatus__get_LastWriteTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastWriteTimeUtc();
}

// public long get_Length() :169
void FileStatus__get_Length_fn(FileStatus* __this, int64_t* __retval)
{
    *__retval = __this->Length();
}

// public FileStatus New() :126
void FileStatus__New1_fn(FileStatus** __retval)
{
    *__retval = FileStatus::New1();
}

// public FileStatus New(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) :142
void FileStatus__New2_fn(int64_t* length, int* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc, FileStatus** __retval)
{
    *__retval = FileStatus::New2(*length, *attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
}

::g::Uno::Time::Instant FileStatus::FileTimeEpoch_;

// public FileStatus() [instance] :126
void FileStatus::ctor_()
{
    uStackFrame __("Fuse.FileSystem.FileStatus", ".ctor()");
    ::g::Uno::Time::ZonedDateTime* defaultTime = ::g::Uno::Time::ZonedDateTime::New1(FileStatus::FileTimeEpoch(), ::g::Uno::Time::DateTimeZone::Utc());
    _creationTimeUtc = defaultTime;
    _lastWriteTimeUtc = defaultTime;
    _lastAccessTimeUtc = defaultTime;
    _exists = false;
    _attributes = -1;
}

// public FileStatus(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) [instance] :142
void FileStatus::ctor_1(int64_t length, int attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    uStackFrame __("Fuse.FileSystem.FileStatus", ".ctor(long,Fuse.FileSystem.FileAttributes,Uno.Time.ZonedDateTime,Uno.Time.ZonedDateTime,Uno.Time.ZonedDateTime)");
    _length = length;
    _attributes = attributes;
    _creationTimeUtc = creationTimeUtc;
    _lastWriteTimeUtc = lastWriteTimeUtc;
    _lastAccessTimeUtc = lastAccessTimeUtc;
    _exists = true;
}

// public Fuse.FileSystem.FileAttributes get_Attributes() [instance] :163
int FileStatus::Attributes()
{
    uStackFrame __("Fuse.FileSystem.FileStatus", "get_Attributes()");
    return _attributes;
}

// public Uno.Time.ZonedDateTime get_CreationTimeUtc() [instance] :159
::g::Uno::Time::ZonedDateTime* FileStatus::CreationTimeUtc()
{
    uStackFrame __("Fuse.FileSystem.FileStatus", "get_CreationTimeUtc()");
    return _creationTimeUtc;
}

// public bool get_Exists() [instance] :161
bool FileStatus::Exists()
{
    uStackFrame __("Fuse.FileSystem.FileStatus", "get_Exists()");
    return _exists;
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() [instance] :165
::g::Uno::Time::ZonedDateTime* FileStatus::LastAccessTimeUtc()
{
    uStackFrame __("Fuse.FileSystem.FileStatus", "get_LastAccessTimeUtc()");
    return _lastAccessTimeUtc;
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :167
::g::Uno::Time::ZonedDateTime* FileStatus::LastWriteTimeUtc()
{
    uStackFrame __("Fuse.FileSystem.FileStatus", "get_LastWriteTimeUtc()");
    return _lastWriteTimeUtc;
}

// public long get_Length() [instance] :169
int64_t FileStatus::Length()
{
    uStackFrame __("Fuse.FileSystem.FileStatus", "get_Length()");
    return _length;
}

// public FileStatus New() [static] :126
FileStatus* FileStatus::New1()
{
    FileStatus* obj1 = (FileStatus*)uNew(FileStatus_typeof());
    obj1->ctor_();
    return obj1;
}

// public FileStatus New(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) [static] :142
FileStatus* FileStatus::New2(int64_t length, int attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    FileStatus* obj2 = (FileStatus*)uNew(FileStatus_typeof());
    obj2->ctor_1(length, attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/Uno/IO/$.uno
// -----------------------------------------------------------------

// internal static extern class FileStatusHelpers :186
// {
static void FileStatusHelpers_build(uType* type)
{
}

uClassType* FileStatusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.FileStatusHelpers", options);
    type->fp_build_ = FileStatusHelpers_build;
    return type;
}

// public static extern Fuse.FileSystem.FileStatus GetFileStatus(string path) :194
void FileStatusHelpers__GetFileStatus_fn(uString* path, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    *__retval = FileStatusHelpers::GetFileStatus(path);
}

// private static extern Uno.Time.ZonedDateTime UnixTimeToZoned(long sec) :188
void FileStatusHelpers__UnixTimeToZoned_fn(int64_t* sec, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = FileStatusHelpers::UnixTimeToZoned(*sec);
}

// public static extern Fuse.FileSystem.FileStatus GetFileStatus(string path) [static] :194
::g::Fuse::FileSystem::FileStatus* FileStatusHelpers::GetFileStatus(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileStatusHelpers", "GetFileStatus(string)");
    struct stat s;
    
                if (stat(uStringToXliString(path).Ptr(), &s) == -1)
                    return ::g::Fuse::FileSystem::FileStatus::New1();
    
                int attributes = 0;
    
                // ReadOnly used to be mapped the following way in uno-base,
                // but until we're sure this is the correct way to do we just avoid
                // mapping the ReadOnly attribute at all.
                //
                // if (!(((s.st_mode & S_IWOTH) == S_IWOTH)
                //    || (s.st_gid == getgid() && ((s.st_mode & S_IWGRP) == S_IWGRP))
                //    || (s.st_uid == getuid() && ((s.st_mode & S_IWUSR) == S_IWUSR))))
                //    attributes |= AT{FileAttributes.ReadOnly};
    
                if (S_ISDIR(s.st_mode))
                    attributes |= 16;
    
                if (S_ISCHR(s.st_mode) || S_ISBLK(s.st_mode))
                    attributes |= 64;
    
                if (S_ISLNK(s.st_mode))
                    attributes |= 1024;
    
                // Apparently posix stat standard doesn't define a way to get creation time,
                // so we'll just use lastWriteTime.
                // TODO: It seems like this might be possible on OS X though, in some non-posix way..
                ::g::Uno::Time::ZonedDateTime* lastWriteTime =
                    FileStatusHelpers::UnixTimeToZoned(s.st_mtime);
                ::g::Uno::Time::ZonedDateTime* lastAccessTime =
                    FileStatusHelpers::UnixTimeToZoned(s.st_atime);
    
                return ::g::Fuse::FileSystem::FileStatus::New2(s.st_size, attributes, lastWriteTime, lastAccessTime, lastWriteTime);
}

// private static extern Uno.Time.ZonedDateTime UnixTimeToZoned(long sec) [static] :188
::g::Uno::Time::ZonedDateTime* FileStatusHelpers::UnixTimeToZoned(int64_t sec)
{
    uStackFrame __("Fuse.FileSystem.FileStatusHelpers", "UnixTimeToZoned(long)");
    int64_t ticks = sec * 10000000LL;
    return ::g::Uno::Time::ZonedDateTime::New1(::g::Uno::Time::Instant__New1(ticks), ::g::Uno::Time::DateTimeZone::Utc());
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/Uno/IO/$.uno
// -----------------------------------------------------------------

// public abstract class FileSystemInfo :336
// {
static void FileSystemInfo_build(uType* type)
{
    ::STRINGS[0] = uString::Const("originalPath");
    ::TYPES[0] = ::g::Uno::Time::ZonedDateTime_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemInfo, _fullPath), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemInfo, _originalPath), 0,
        ::g::Fuse::FileSystem::FileStatus_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemInfo, _status), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Attributes", NULL, (void*)FileSystemInfo__get_Attributes_fn, 0, false, ::g::Fuse::FileSystem::FileAttributes_typeof(), 0),
        new uFunction("get_Exists", NULL, (void*)FileSystemInfo__get_Exists_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_FullName", NULL, (void*)FileSystemInfo__get_FullName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_LastAccessTimeUtc", NULL, (void*)FileSystemInfo__get_LastAccessTimeUtc_fn, 0, false, ::g::Uno::Time::ZonedDateTime_typeof(), 0),
        new uFunction("get_LastWriteTimeUtc", NULL, (void*)FileSystemInfo__get_LastWriteTimeUtc_fn, 0, false, ::g::Uno::Time::ZonedDateTime_typeof(), 0),
        new uFunction("Refresh", NULL, (void*)FileSystemInfo__Refresh_fn, 0, false, uVoid_typeof(), 0));
}

FileSystemInfo_type* FileSystemInfo_typeof()
{
    static uSStrong<FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileSystemInfo);
    options.TypeSize = sizeof(FileSystemInfo_type);
    type = (FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.FileSystemInfo", options);
    type->fp_build_ = FileSystemInfo_build;
    type->fp_LoadStatus = FileSystemInfo__LoadStatus_fn;
    return type;
}

// protected FileSystemInfo(string originalPath) :342
void FileSystemInfo__ctor__fn(FileSystemInfo* __this, uString* originalPath)
{
    __this->ctor_(originalPath);
}

// public Fuse.FileSystem.FileAttributes get_Attributes() :375
void FileSystemInfo__get_Attributes_fn(FileSystemInfo* __this, int* __retval)
{
    *__retval = __this->Attributes();
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) :362
void FileSystemInfo__ConvertTime_fn(uObject* time, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = FileSystemInfo::ConvertTime(time);
}

// public bool get_Exists() :377
void FileSystemInfo__get_Exists_fn(FileSystemInfo* __this, bool* __retval)
{
    *__retval = __this->Exists();
}

// public string get_FullName() :379
void FileSystemInfo__get_FullName_fn(FileSystemInfo* __this, uString** __retval)
{
    *__retval = __this->FullName();
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() :381
void FileSystemInfo__get_LastAccessTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastAccessTimeUtc();
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() :383
void FileSystemInfo__get_LastWriteTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastWriteTimeUtc();
}

// internal virtual extern Fuse.FileSystem.FileStatus LoadStatus() :399
void FileSystemInfo__LoadStatus_fn(FileSystemInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "LoadStatus()");
    return *__retval = ::g::Fuse::FileSystem::FileStatusHelpers::GetFileStatus(__this->_fullPath), void();
}

// public void Refresh() :352
void FileSystemInfo__Refresh_fn(FileSystemInfo* __this)
{
    __this->Refresh();
}

// internal extern Fuse.FileSystem.FileStatus get_Status() :390
void FileSystemInfo__get_Status_fn(FileSystemInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    *__retval = __this->Status();
}

// protected FileSystemInfo(string originalPath) [instance] :342
void FileSystemInfo::ctor_(uString* originalPath)
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", ".ctor(string)");

    if (::g::Uno::String::op_Equality(originalPath, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"originalPath"*/]));

    _originalPath = originalPath;
    _fullPath = ::g::Uno::IO::Path::GetFullPath(_originalPath);
}

// public Fuse.FileSystem.FileAttributes get_Attributes() [instance] :375
int FileSystemInfo::Attributes()
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "get_Attributes()");
    return uPtr(Status())->Attributes();
}

// public bool get_Exists() [instance] :377
bool FileSystemInfo::Exists()
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "get_Exists()");
    return uPtr(Status())->Exists();
}

// public string get_FullName() [instance] :379
uString* FileSystemInfo::FullName()
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "get_FullName()");
    return _fullPath;
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() [instance] :381
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastAccessTimeUtc()
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "get_LastAccessTimeUtc()");
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastAccessTimeUtc());
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :383
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastWriteTimeUtc()
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "get_LastWriteTimeUtc()");
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastWriteTimeUtc());
}

// public void Refresh() [instance] :352
void FileSystemInfo::Refresh()
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "Refresh()");
    _status = LoadStatus();
}

// internal extern Fuse.FileSystem.FileStatus get_Status() [instance] :390
::g::Fuse::FileSystem::FileStatus* FileSystemInfo::Status()
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "get_Status()");

    if (_status == NULL)
        Refresh();

    return _status;
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) [static] :362
::g::Uno::Time::ZonedDateTime* FileSystemInfo::ConvertTime(uObject* time)
{
    uStackFrame __("Fuse.FileSystem.FileSystemInfo", "ConvertTime(object)");
    return uCast< ::g::Uno::Time::ZonedDateTime*>(time, ::TYPES[0/*Uno.Time.ZonedDateTime*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/$.uno
// ----------------------------------------------------------

// public sealed class FileSystemModule :98
// {
static void FileSystemModule_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJS/FileSystem");
    ::STRINGS[2] = uString::Const("cacheDirectory");
    ::STRINGS[3] = uString::Const("dataDirectory");
    ::STRINGS[4] = uString::Const("iosPaths");
    ::STRINGS[5] = uString::Const("createDirectory");
    ::STRINGS[6] = uString::Const("createDirectorySync");
    ::STRINGS[7] = uString::Const("delete");
    ::STRINGS[8] = uString::Const("deleteSync");
    ::STRINGS[9] = uString::Const("exists");
    ::STRINGS[10] = uString::Const("existsSync");
    ::STRINGS[11] = uString::Const("getDirectoryInfo");
    ::STRINGS[12] = uString::Const("getDirectoryInfoSync");
    ::STRINGS[13] = uString::Const("getFileInfo");
    ::STRINGS[14] = uString::Const("getFileInfoSync");
    ::STRINGS[15] = uString::Const("listDirectories");
    ::STRINGS[16] = uString::Const("listDirectoriesSync");
    ::STRINGS[17] = uString::Const("listEntries");
    ::STRINGS[18] = uString::Const("listEntriesSync");
    ::STRINGS[19] = uString::Const("listFiles");
    ::STRINGS[20] = uString::Const("listFilesSync");
    ::STRINGS[21] = uString::Const("readBufferFromFile");
    ::STRINGS[22] = uString::Const("moveSync");
    ::STRINGS[23] = uString::Const("move");
    ::STRINGS[24] = uString::Const("readBufferFromFileSync");
    ::STRINGS[25] = uString::Const("readTextFromFile");
    ::STRINGS[26] = uString::Const("readTextFromFileSync");
    ::STRINGS[27] = uString::Const("writeBufferToFile");
    ::STRINGS[28] = uString::Const("writeBufferToFileSync");
    ::STRINGS[29] = uString::Const("writeTextToFile");
    ::STRINGS[30] = uString::Const("writeTextToFileSync");
    ::STRINGS[31] = uString::Const("appendTextToFile");
    ::STRINGS[32] = uString::Const("appendTextToFileSync");
    ::STRINGS[33] = uString::Const("Second argument \"text\" is required to be a string");
    ::STRINGS[34] = uString::Const("args");
    ::STRINGS[35] = uString::Const("first argument path is required to be a string");
    ::STRINGS[36] = uString::Const("First argument `source` has to be a valid path");
    ::STRINGS[37] = uString::Const("Second argument `destination` has to be a valid path");
    ::STRINGS[38] = uString::Const("(no file)");
    ::STRINGS[39] = uString::Const("new Date({0})");
    ::STRINGS[40] = uString::Const("length");
    ::STRINGS[41] = uString::Const("fullName");
    ::STRINGS[42] = uString::Const("lastWriteTime");
    ::STRINGS[43] = uString::Const("lastAccessTime");
    ::STRINGS[44] = uString::Const("Second argument \"data\" is required to be an ArrayBuffer");
    ::TYPES[1] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[4] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    ::TYPES[5] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[6] = FileSystemModule_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[7] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[8] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[9] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[11] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[12] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[13] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof());
    ::TYPES[14] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[15] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof());
    ::TYPES[16] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof()->Array());
    ::TYPES[17] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof());
    ::TYPES[18] = FileSystemModule_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[19] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[20] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Byte_typeof()->Array());
    ::TYPES[21] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[22] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[23] = FileSystemModule_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[25] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[27] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[28] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[29] = uObject_typeof()->Array();
    ::TYPES[30] = ::g::Fuse::FileSystem::FileInfo_typeof();
    ::TYPES[31] = ::g::Uno::Collections::Dictionary__Enumerator_typeof();
    ::TYPES[32] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[33] = FileSystemModule_typeof()->MakeMethod(1, ::g::Uno::Byte_typeof()->Array());
    type->SetPrecalc(
        ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, type->U(0), uObject_typeof()),
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(type->U(0)),
        ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), type->U(0)),
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), type->U(0)));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        ::g::Fuse::FileSystem::FileSystemOperations_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemModule, _operations), 0,
        FileSystemModule_typeof(), (uintptr_t)&::g::Fuse::FileSystem::FileSystemModule::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateDirectory", NULL, (void*)FileSystemModule__CreateDirectory_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 1, uObject_typeof()->Array()),
        new uFunction("CreateDirectorySync", NULL, (void*)FileSystemModule__CreateDirectorySync_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)FileSystemModule__New2_fn, 0, true, FileSystemModule_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* FileSystemModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(FileSystemModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.FileSystem.FileSystemModule", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_build_ = FileSystemModule_build;
    type->fp_ctor_ = (void*)FileSystemModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileSystemModule() :103
void FileSystemModule__ctor_2_fn(FileSystemModule* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(object[] args) :201
void FileSystemModule__AppendTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AppendTextToFile(args);
}

// private object AppendTextToFileSync(Fuse.Scripting.Context context, object[] args) :221
void FileSystemModule__AppendTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->AppendTextToFileSync(context, args);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) :246
void FileSystemModule__CreateDirectory_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(args);
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) :263
void FileSystemModule__CreateDirectorySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateDirectorySync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) :287
void FileSystemModule__Delete_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(args);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) :306
void FileSystemModule__DeleteSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DeleteSync(context, args);
}

// private Uno.Threading.Future<bool> Exists(object[] args) :330
void FileSystemModule__Exists_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(args);
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) :347
void FileSystemModule__ExistsSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ExistsSync(context, args);
}

// private static T GetArg<T>(object[] args, int index, string error) :798
void FileSystemModule__GetArg_fn(uType* __type, uArray* args, int* index, uString* error, uObject** __retval)
{
    *__retval = FileSystemModule::GetArg(__type, args, *index, error);
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(object[] args) :373
void FileSystemModule__GetDirectoryInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetDirectoryInfo(args);
}

// private object GetDirectoryInfoSync(Fuse.Scripting.Context context, object[] args) :397
void FileSystemModule__GetDirectoryInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetDirectoryInfoSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(object[] args) :424
void FileSystemModule__GetFileInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetFileInfo(args);
}

// private object GetFileInfoSync(Fuse.Scripting.Context context, object[] args) :448
void FileSystemModule__GetFileInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetFileInfoSync(context, args);
}

// private static string GetPathFromArgs(object[] args) :813
void FileSystemModule__GetPathFromArgs_fn(uArray* args, uString** __retval)
{
    *__retval = FileSystemModule::GetPathFromArgs(args);
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) :470
void FileSystemModule__ListDirectories_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(args);
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) :488
void FileSystemModule__ListDirectoriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListDirectoriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) :510
void FileSystemModule__ListEntries_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(args);
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) :528
void FileSystemModule__ListEntriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListEntriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) :550
void FileSystemModule__ListFiles_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(args);
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) :568
void FileSystemModule__ListFilesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListFilesSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(object[] args) :590
void FileSystemModule__Move_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Move(args);
}

// private object MoveSync(Fuse.Scripting.Context context, object[] args) :598
void FileSystemModule__MoveSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->MoveSync(context, args);
}

// public FileSystemModule New() :103
void FileSystemModule__New2_fn(FileSystemModule** __retval)
{
    *__retval = FileSystemModule::New2();
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) :635
void FileSystemModule__ReadBufferFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(args);
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) :652
void FileSystemModule__ReadBufferFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(context, args);
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) :674
void FileSystemModule__ReadTextFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(args);
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) :692
void FileSystemModule__ReadTextFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadTextFromFileSync(context, args);
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) :827
void FileSystemModule__ToScriptingArray_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = FileSystemModule::ToScriptingArray(__type, context, sourceArray);
}

// private static object ToScriptingDate(Fuse.Scripting.Context context, Uno.Time.ZonedDateTime time) :850
void FileSystemModule__ToScriptingDate_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time, uObject** __retval)
{
    *__retval = FileSystemModule::ToScriptingDate(context, time);
}

// private static Fuse.Scripting.Object ToScriptingObject(Fuse.Scripting.Context context, Fuse.FileSystem.FileSystemInfo info) :834
void FileSystemModule__ToScriptingObject_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::FileSystem::FileSystemInfo* info, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = FileSystemModule::ToScriptingObject(context, info);
}

// private static Fuse.Scripting.Object ToScriptingObject<T>(Fuse.Scripting.Context context, Uno.Collections.Dictionary<string, T> dict) :858
void FileSystemModule__ToScriptingObject1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = FileSystemModule::ToScriptingObject1(__type, context, dict);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) :719
void FileSystemModule__WriteBufferToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(args);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) :743
void FileSystemModule__WriteBufferToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteBufferToFileSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) :769
void FileSystemModule__WriteTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(args);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) :789
void FileSystemModule__WriteTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteTextToFileSync(context, args);
}

uSStrong<FileSystemModule*> FileSystemModule::_instance_;

// public FileSystemModule() [instance] :103
void FileSystemModule::ctor_2()
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", ".ctor()");
    _operations = ::g::Fuse::FileSystem::FileSystemOperations::New1();
    ctor_1();

    if (FileSystemModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileSystemModule::_instance_ = this, ::STRINGS[1/*"FuseJS/File...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[1/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[2/*"cacheDirect...*/], uDelegate::New(::TYPES[2/*Uno.Func<string>*/], (void*)::g::Fuse::FileSystem::UnifiedPaths__GetCacheDirectory_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[1/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[3/*"dataDirectory"*/], uDelegate::New(::TYPES[2/*Uno.Func<string>*/], (void*)::g::Fuse::FileSystem::UnifiedPaths__GetDataDirectory_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[3/*Fuse.Scripting.NativeProperty<Uno.Collections.Dictionary<string, string>, Fuse.Scripting.Object>*/], ::STRINGS[4/*"iosPaths"*/], uDelegate::New(::TYPES[4/*Uno.Func<Uno.Collections.Dictionary<string, string>>*/], (void*)::g::Fuse::FileSystem::IosPaths__GetPathDictionary_fn), NULL, uDelegate::New(::TYPES[5/*Fuse.Scripting.ValueConverter<Uno.Collections.Dictionary<string, string>, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject1_fn, NULL, ::TYPES[6/*Fuse.FileSystem.FileSystemModule.ToScriptingObject<string>*/])));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[5/*"createDirec...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__CreateDirectory_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"createDirec...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__CreateDirectorySync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[7/*"delete"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Delete_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"deleteSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__DeleteSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[10/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[9/*"exists"*/], uDelegate::New(::TYPES[11/*Fuse.Scripting.FutureFactory<bool>*/], (void*)FileSystemModule__Exists_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[10/*"existsSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ExistsSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[12/*Fuse.Scripting.NativePromise<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], ::STRINGS[11/*"getDirector...*/], uDelegate::New(::TYPES[13/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemModule__GetDirectoryInfo_fn, this), uDelegate::New(::TYPES[14/*Fuse.Scripting.ResultConverter<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[12/*"getDirector...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__GetDirectoryInfoSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[12/*Fuse.Scripting.NativePromise<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], ::STRINGS[13/*"getFileInfo"*/], uDelegate::New(::TYPES[13/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemModule__GetFileInfo_fn, this), uDelegate::New(::TYPES[14/*Fuse.Scripting.ResultConverter<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[14/*"getFileInfo...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__GetFileInfoSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[15/*"listDirecto...*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListDirectories_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[16/*"listDirecto...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListDirectoriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[17/*"listEntries"*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListEntries_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[18/*"listEntries...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListEntriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[19/*"listFiles"*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListFiles_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[20/*"listFilesSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListFilesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[19/*Fuse.Scripting.NativePromise<byte[], Fuse.Scripting.Object>*/], ::STRINGS[21/*"readBufferF...*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.FutureFactory<byte[]>*/], (void*)FileSystemModule__ReadBufferFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[22/*"moveSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__MoveSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[23/*"move"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Move_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[24/*"readBufferF...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadBufferFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[21/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[25/*"readTextFro...*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileSystemModule__ReadTextFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[26/*"readTextFro...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadTextFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[27/*"writeBuffer...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteBufferToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[28/*"writeBuffer...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteBufferToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[29/*"writeTextTo...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[30/*"writeTextTo...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteTextToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[31/*"appendTextT...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__AppendTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[32/*"appendTextT...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__AppendTextToFileSync_fn, this)));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(object[] args) [instance] :201
::g::Uno::Threading::Future1* FileSystemModule::AppendTextToFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "AppendTextToFile(object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[33/*"Second argu...*/]);
    return uPtr(_operations)->AppendTextToFile(path, text);
}

// private object AppendTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :221
uObject* FileSystemModule::AppendTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "AppendTextToFileSync(Fuse.Scripting.Context,object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[33/*"Second argu...*/]);
    uPtr(_operations)->AppendTextToFileSync(path, text);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) [instance] :246
::g::Uno::Threading::Future1* FileSystemModule::CreateDirectory(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "CreateDirectory(object[])");
    return uPtr(_operations)->CreateDirectory(FileSystemModule::GetPathFromArgs(args));
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) [instance] :263
uObject* FileSystemModule::CreateDirectorySync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "CreateDirectorySync(Fuse.Scripting.Context,object[])");
    uPtr(_operations)->CreateDirectorySync(FileSystemModule::GetPathFromArgs(args));
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) [instance] :287
::g::Uno::Threading::Future1* FileSystemModule::Delete(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Delete(object[])");
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[24/*bool*/])) ? uUnbox<bool>(::TYPES[24/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    return uPtr(_operations)->Delete(FileSystemModule::GetPathFromArgs(args), recursive);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) [instance] :306
uObject* FileSystemModule::DeleteSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "DeleteSync(Fuse.Scripting.Context,object[])");
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[24/*bool*/])) ? uUnbox<bool>(::TYPES[24/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    uPtr(_operations)->DeleteSync(FileSystemModule::GetPathFromArgs(args), recursive);
    return NULL;
}

// private Uno.Threading.Future<bool> Exists(object[] args) [instance] :330
::g::Uno::Threading::Future1* FileSystemModule::Exists(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Exists(object[])");
    return uPtr(_operations)->Exists(FileSystemModule::GetPathFromArgs(args));
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) [instance] :347
uObject* FileSystemModule::ExistsSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ExistsSync(Fuse.Scripting.Context,object[])");
    return uBox(::TYPES[24/*bool*/], uPtr(_operations)->ExistsSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(object[] args) [instance] :373
::g::Uno::Threading::Future1* FileSystemModule::GetDirectoryInfo(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetDirectoryInfo(object[])");
    return uPtr(_operations)->GetDirectoryInfo(FileSystemModule::GetPathFromArgs(args));
}

// private object GetDirectoryInfoSync(Fuse.Scripting.Context context, object[] args) [instance] :397
uObject* FileSystemModule::GetDirectoryInfoSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetDirectoryInfoSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingObject(context, uPtr(_operations)->GetDirectoryInfoSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(object[] args) [instance] :424
::g::Uno::Threading::Future1* FileSystemModule::GetFileInfo(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetFileInfo(object[])");
    return uPtr(_operations)->GetFileInfo(FileSystemModule::GetPathFromArgs(args));
}

// private object GetFileInfoSync(Fuse.Scripting.Context context, object[] args) [instance] :448
uObject* FileSystemModule::GetFileInfoSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetFileInfoSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingObject(context, uPtr(_operations)->GetFileInfoSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) [instance] :470
::g::Uno::Threading::Future1* FileSystemModule::ListDirectories(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListDirectories(object[])");
    return uPtr(_operations)->ListDirectories(FileSystemModule::GetPathFromArgs(args));
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) [instance] :488
uObject* FileSystemModule::ListDirectoriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListDirectoriesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListDirectoriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) [instance] :510
::g::Uno::Threading::Future1* FileSystemModule::ListEntries(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListEntries(object[])");
    return uPtr(_operations)->ListEntries(FileSystemModule::GetPathFromArgs(args));
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) [instance] :528
uObject* FileSystemModule::ListEntriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListEntriesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListEntriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) [instance] :550
::g::Uno::Threading::Future1* FileSystemModule::ListFiles(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListFiles(object[])");
    return uPtr(_operations)->ListFiles(FileSystemModule::GetPathFromArgs(args));
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) [instance] :568
uObject* FileSystemModule::ListFilesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListFilesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListFilesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(object[] args) [instance] :590
::g::Uno::Threading::Future1* FileSystemModule::Move(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Move(object[])");
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[36/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    return uPtr(_operations)->Move(source, destination);
}

// private object MoveSync(Fuse.Scripting.Context context, object[] args) [instance] :598
uObject* FileSystemModule::MoveSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "MoveSync(Fuse.Scripting.Context,object[])");
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[36/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    uPtr(_operations)->Move(source, destination);
    return NULL;
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) [instance] :635
::g::Uno::Threading::Future1* FileSystemModule::ReadBufferFromFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadBufferFromFile(object[])");
    return uPtr(_operations)->ReadBufferFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :652
uObject* FileSystemModule::ReadBufferFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadBufferFromFileSync(Fuse.Scripting.Context,object[])");
    return uPtr(_operations)->ReadBufferFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) [instance] :674
::g::Uno::Threading::Future1* FileSystemModule::ReadTextFromFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadTextFromFile(object[])");
    return uPtr(_operations)->ReadTextFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :692
uObject* FileSystemModule::ReadTextFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadTextFromFileSync(Fuse.Scripting.Context,object[])");
    return uPtr(_operations)->ReadTextFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) [instance] :719
::g::Uno::Threading::Future1* FileSystemModule::WriteBufferToFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteBufferToFile(object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[33/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[44/*"Second argu...*/]);
    return uPtr(_operations)->WriteBufferToFile(path, data);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :743
uObject* FileSystemModule::WriteBufferToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteBufferToFileSync(Fuse.Scripting.Context,object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[33/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[44/*"Second argu...*/]);
    uPtr(_operations)->WriteBufferToFileSync(path, data);
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) [instance] :769
::g::Uno::Threading::Future1* FileSystemModule::WriteTextToFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteTextToFile(object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[33/*"Second argu...*/]);
    return uPtr(_operations)->WriteTextToFile(path, text);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :789
uObject* FileSystemModule::WriteTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteTextToFileSync(Fuse.Scripting.Context,object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[33/*"Second argu...*/]);
    uPtr(_operations)->WriteTextToFileSync(path, text);
    return NULL;
}

// private static T GetArg<T>(object[] args, int index, string error) [static] :798
uObject* FileSystemModule::GetArg(uType* __type, uArray* args, int index, uString* error)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetArg`1(object[],int,string)");

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[34/*"args"*/]));

    uObject* val = (uPtr(args)->Length() > index) ? uAs<uObject*>(uPtr(args)->Strong<uObject*>(index), __types[0]) : NULL;

    if (val == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(error));

    return val;
}

// private static string GetPathFromArgs(object[] args) [static] :813
uString* FileSystemModule::GetPathFromArgs(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetPathFromArgs(object[])");

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[34/*"args"*/]));

    uString* filename = (uPtr(args)->Length() > 0) ? uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[25/*string*/]) : NULL;

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[35/*"first argum...*/]));

    return filename;
}

// public FileSystemModule New() [static] :103
FileSystemModule* FileSystemModule::New2()
{
    FileSystemModule* obj1 = (FileSystemModule*)uNew(FileSystemModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) [static] :827
::g::Fuse::Scripting::Array* FileSystemModule::ToScriptingArray(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.OfType<T, object>*/),
        __type->Precalced(1/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingArray`1(Fuse.Scripting.Context,T[])");
    uArray* convertedArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[26/*Uno.Collections.EnumerableExtensions.ToArray<object>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OfType(__types[0], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[1], sourceArray))));
    return uPtr(context)->NewArray(convertedArray);
}

// private static object ToScriptingDate(Fuse.Scripting.Context context, Uno.Time.ZonedDateTime time) [static] :850
uObject* FileSystemModule::ToScriptingDate(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingDate(Fuse.Scripting.Context,Uno.Time.ZonedDateTime)");
    int64_t msSinceUnixEpoch = ::g::Uno::Time::Instant__op_Subtraction1(uPtr(time)->ToInstant(), ::g::Uno::Time::Constants::UnixEpoch()).Ticks() / 10000LL;
    return uPtr(context)->Evaluate(::STRINGS[38/*"(no file)"*/], ::g::Uno::String::Format(::STRINGS[39/*"new Date({0})"*/], uArray::Init<uObject*>(::TYPES[29/*object[]*/], 1, uBox<int64_t>(::g::Uno::Long_typeof(), msSinceUnixEpoch))));
}

// private static Fuse.Scripting.Object ToScriptingObject(Fuse.Scripting.Context context, Fuse.FileSystem.FileSystemInfo info) [static] :834
::g::Fuse::Scripting::Object* FileSystemModule::ToScriptingObject(::g::Fuse::Scripting::Context* context, ::g::Fuse::FileSystem::FileSystemInfo* info)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingObject(Fuse.Scripting.Context,Fuse.FileSystem.FileSystemInfo)");
    ::g::Fuse::Scripting::Object* jsobj = uPtr(context)->NewObject();
    ::g::Fuse::FileSystem::FileInfo* fileInfo = uAs< ::g::Fuse::FileSystem::FileInfo*>(info, ::TYPES[30/*Fuse.FileSystem.FileInfo*/]);

    if (fileInfo != NULL)
        uPtr(jsobj)->Item(::STRINGS[40/*"length"*/], uBox(::g::Uno::Double_typeof(), (double)uPtr(fileInfo)->Length()));

    uPtr(jsobj)->Item(::STRINGS[9/*"exists"*/], uBox(::TYPES[24/*bool*/], uPtr(info)->Exists()));
    jsobj->Item(::STRINGS[41/*"fullName"*/], ::g::Fuse::FileSystem::PathTools::NormalizePath(info->FullName()));
    jsobj->Item(::STRINGS[42/*"lastWriteTime"*/], FileSystemModule::ToScriptingDate(context, info->LastWriteTimeUtc()));
    jsobj->Item(::STRINGS[43/*"lastAccessT...*/], FileSystemModule::ToScriptingDate(context, info->LastAccessTimeUtc()));
    return jsobj;
}

// private static Fuse.Scripting.Object ToScriptingObject<T>(Fuse.Scripting.Context context, Uno.Collections.Dictionary<string, T> dict) [static] :858
::g::Fuse::Scripting::Object* FileSystemModule::ToScriptingObject1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict)
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.Dictionary<string, T>.Enumerator*/),
        __type->Precalced(3/*Uno.Collections.KeyValuePair<string, T>*/),
        __type->U(0),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingObject`1(Fuse.Scripting.Context,Uno.Collections.Dictionary<string, T>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret6(__types[2], U_ALLOCA(__types[2]->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT kvp(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret3;
    uString* ret5;
    ::g::Fuse::Scripting::Object* jsobj = uPtr(context)->NewObject();

    for (enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(dict), &ret2), ret2); (::g::Uno::Collections::Dictionary__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3); )
    {
        kvp = (::g::Uno::Collections::Dictionary__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
        uPtr(jsobj)->Item((::g::Uno::Collections::KeyValuePair__get_Key_fn(&kvp, __types[1], &ret5), ret5), uBoxPtr(__types[2], (::g::Uno::Collections::KeyValuePair__get_Value_fn(&kvp, __types[1], &ret6), ret6)));
    }

    return jsobj;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/$.uno
// ----------------------------------------------------------

// public sealed class FileSystemOperations :880
// {
static void FileSystemOperations_build(uType* type)
{
    ::TYPES[34] = FileSystemOperations_typeof()->MakeMethod(3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[35] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[36] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[37] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[38] = FileSystemOperations_typeof()->MakeMethod(3, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[39] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[40] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[41] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[42] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::FileSystemInfo_typeof());
    ::TYPES[43] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::FileSystem::FileSystemInfo_typeof());
    ::TYPES[44] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array());
    ::TYPES[45] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array());
    ::TYPES[46] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[47] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[48] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[49] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array());
    ::TYPES[50] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array());
    ::TYPES[51] = FileSystemOperations_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[52] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[53] = ::g::Uno::Func_typeof();
    ::TYPES[54] = FileSystemOperations__Closure_typeof();
    ::TYPES[55] = FileSystemOperations__Closure1_typeof();
    ::TYPES[56] = FileSystemOperations_typeof()->MakeMethod(3, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof());
    ::TYPES[57] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof());
    type->SetPrecalc(
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->U(0)),
        FileSystemOperations_typeof()->MakeMethod(1, type->U(1)),
        ::g::Uno::Func_typeof()->MakeType(type->U(1)),
        FileSystemOperations__Closure_typeof()->MakeType(type->U(0), type->U(1)),
        FileSystemOperations_typeof()->MakeMethod(1, type->U(2)),
        ::g::Uno::Func_typeof()->MakeType(type->U(2)),
        FileSystemOperations__Closure1_typeof()->MakeType(type->U(0), type->U(1), type->U(2)));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemOperations, _dispatcher), 0);
    type->Reflection.SetFunctions(30,
        new uFunction("AppendTextToFile", NULL, (void*)FileSystemOperations__AppendTextToFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("AppendTextToFileSync", NULL, (void*)FileSystemOperations__AppendTextToFileSync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("CreateDirectory", NULL, (void*)FileSystemOperations__CreateDirectory_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("CreateDirectorySync", NULL, (void*)FileSystemOperations__CreateDirectorySync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Delete", NULL, (void*)FileSystemOperations__Delete_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("DeleteSync", NULL, (void*)FileSystemOperations__DeleteSync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Exists", NULL, (void*)FileSystemOperations__Exists_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Bool_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("ExistsSync", NULL, (void*)FileSystemOperations__ExistsSync_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetDirectoryInfo", NULL, (void*)FileSystemOperations__GetDirectoryInfo_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("GetDirectoryInfoSync", NULL, (void*)FileSystemOperations__GetDirectoryInfoSync_fn, 0, false, ::g::Fuse::FileSystem::FileSystemInfo_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetFileInfo", NULL, (void*)FileSystemOperations__GetFileInfo_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("GetFileInfoSync", NULL, (void*)FileSystemOperations__GetFileInfoSync_fn, 0, false, ::g::Fuse::FileSystem::FileSystemInfo_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ListDirectories", NULL, (void*)FileSystemOperations__ListDirectories_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()->Array()), 1, ::g::Uno::String_typeof()),
        new uFunction("ListDirectoriesSync", NULL, (void*)FileSystemOperations__ListDirectoriesSync_fn, 0, false, ::g::Uno::String_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("ListEntries", NULL, (void*)FileSystemOperations__ListEntries_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()->Array()), 1, ::g::Uno::String_typeof()),
        new uFunction("ListEntriesSync", NULL, (void*)FileSystemOperations__ListEntriesSync_fn, 0, false, ::g::Uno::String_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("ListFiles", NULL, (void*)FileSystemOperations__ListFiles_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()->Array()), 1, ::g::Uno::String_typeof()),
        new uFunction("ListFilesSync", NULL, (void*)FileSystemOperations__ListFilesSync_fn, 0, false, ::g::Uno::String_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("Move", NULL, (void*)FileSystemOperations__Move_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("MoveSync", NULL, (void*)FileSystemOperations__MoveSync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)FileSystemOperations__New1_fn, 0, true, FileSystemOperations_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FileSystemOperations__New2_fn, 0, true, FileSystemOperations_typeof(), 1, ::g::Uno::Threading::IDispatcher_typeof()),
        new uFunction("ReadBufferFromFile", NULL, (void*)FileSystemOperations__ReadBufferFromFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Byte_typeof()->Array()), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadBufferFromFileSync", NULL, (void*)FileSystemOperations__ReadBufferFromFileSync_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadTextFromFile", NULL, (void*)FileSystemOperations__ReadTextFromFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadTextFromFileSync", NULL, (void*)FileSystemOperations__ReadTextFromFileSync_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("WriteBufferToFile", NULL, (void*)FileSystemOperations__WriteBufferToFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("WriteBufferToFileSync", NULL, (void*)FileSystemOperations__WriteBufferToFileSync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("WriteTextToFile", NULL, (void*)FileSystemOperations__WriteTextToFile_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("WriteTextToFileSync", NULL, (void*)FileSystemOperations__WriteTextToFileSync_fn, 0, false, ::g::Fuse::FileSystem::Nothing_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uType* FileSystemOperations_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 3;
    options.PrecalcCount = 7;
    options.ObjectSize = sizeof(FileSystemOperations);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations", options);
    type->fp_build_ = FileSystemOperations_build;
    type->fp_ctor_ = (void*)FileSystemOperations__New1_fn;
    return type;
}

// public FileSystemOperations() :885
void FileSystemOperations__ctor__fn(FileSystemOperations* __this)
{
    __this->ctor_();
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) :888
void FileSystemOperations__ctor_1_fn(FileSystemOperations* __this, uObject* dispatcher)
{
    __this->ctor_1(dispatcher);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(string path, string text) :894
void FileSystemOperations__AppendTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AppendTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing AppendTextToFileSync(string path, string text) :900
void FileSystemOperations__AppendTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->AppendTextToFileSync(path, text);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) :907
void FileSystemOperations__CreateDirectory_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(path);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) :913
void FileSystemOperations__CreateDirectorySync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->CreateDirectorySync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) :920
void FileSystemOperations__Delete_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(path, *recursive);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) :926
void FileSystemOperations__DeleteSync_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->DeleteSync(path, *recursive);
}

// public Uno.Threading.Future<bool> Exists(string path) :937
void FileSystemOperations__Exists_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(path);
}

// public bool ExistsSync(string path) :943
void FileSystemOperations__ExistsSync_fn(FileSystemOperations* __this, uString* path, bool* __retval)
{
    *__retval = __this->ExistsSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(string path) :951
void FileSystemOperations__GetDirectoryInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetDirectoryInfo(path);
}

// public Fuse.FileSystem.FileSystemInfo GetDirectoryInfoSync(string path) :957
void FileSystemOperations__GetDirectoryInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::FileSystemInfo** __retval)
{
    *__retval = __this->GetDirectoryInfoSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(string path) :963
void FileSystemOperations__GetFileInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetFileInfo(path);
}

// public Fuse.FileSystem.FileSystemInfo GetFileInfoSync(string path) :969
void FileSystemOperations__GetFileInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::FileSystemInfo** __retval)
{
    *__retval = __this->GetFileInfoSync(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) :975
void FileSystemOperations__ListDirectories_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(path);
}

// public string[] ListDirectoriesSync(string path) :981
void FileSystemOperations__ListDirectoriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListDirectoriesSync(path);
}

// public Uno.Threading.Future<string[]> ListEntries(string path) :987
void FileSystemOperations__ListEntries_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(path);
}

// public string[] ListEntriesSync(string path) :993
void FileSystemOperations__ListEntriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListEntriesSync(path);
}

// public Uno.Threading.Future<string[]> ListFiles(string path) :999
void FileSystemOperations__ListFiles_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(path);
}

// public string[] ListFilesSync(string path) :1005
void FileSystemOperations__ListFilesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListFilesSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(string source, string destination) :1011
void FileSystemOperations__Move_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Move(source, destination);
}

// public Fuse.FileSystem.Nothing MoveSync(string source, string destination) :1017
void FileSystemOperations__MoveSync_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->MoveSync(source, destination);
}

// public FileSystemOperations New() :885
void FileSystemOperations__New1_fn(FileSystemOperations** __retval)
{
    *__retval = FileSystemOperations::New1();
}

// public FileSystemOperations New(Uno.Threading.IDispatcher dispatcher) :888
void FileSystemOperations__New2_fn(uObject* dispatcher, FileSystemOperations** __retval)
{
    *__retval = FileSystemOperations::New2(dispatcher);
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) :1027
void FileSystemOperations__ReadBufferFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(path);
}

// public byte[] ReadBufferFromFileSync(string path) :1033
void FileSystemOperations__ReadBufferFromFileSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) :1040
void FileSystemOperations__ReadTextFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(path);
}

// public string ReadTextFromFileSync(string path) :1046
void FileSystemOperations__ReadTextFromFileSync_fn(FileSystemOperations* __this, uString* path, uString** __retval)
{
    *__retval = __this->ReadTextFromFileSync(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) :1079
void FileSystemOperations__RunTask_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->RunTask(__type, del);
}

// private Uno.Threading.Future<TResult> RunTask<T1, TResult>(Uno.Func<T1, TResult> del, T1 arg1) :1087
void FileSystemOperations__RunTask1_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.FileSystem.FileSystemOperations.RunTask<TResult>*/),
        __type->Precalced(2/*Uno.Func<TResult>*/),
        __type->Precalced(3/*Fuse.FileSystem.FileSystemOperations.Closure<T1, TResult>*/),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "RunTask`2(Uno.Func<T1, TResult>,T1)");
    FileSystemOperations__Closure* ret15;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[0], uDelegate::New(__types[1], (void*)FileSystemOperations__Closure__Invoke_fn, (FileSystemOperations__Closure__New1_fn(__types[2], del, arg1, &ret15), ret15))), void();
}

// private Uno.Threading.Future<TResult> RunTask<T1, T2, TResult>(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :1093
void FileSystemOperations__RunTask2_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, void* arg2, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->Precalced(4/*Fuse.FileSystem.FileSystemOperations.RunTask<TResult>*/),
        __type->Precalced(5/*Uno.Func<TResult>*/),
        __type->Precalced(6/*Fuse.FileSystem.FileSystemOperations.Closure<T1, T2, TResult>*/),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "RunTask`3(Uno.Func<T1, T2, TResult>,T1,T2)");
    FileSystemOperations__Closure1* ret16;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[0], uDelegate::New(__types[1], (void*)FileSystemOperations__Closure1__Invoke_fn, (FileSystemOperations__Closure1__New1_fn(__types[2], del, arg1, arg2, &ret16), ret16))), void();
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) :1053
void FileSystemOperations__WriteBufferToFile_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(path, data);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) :1059
void FileSystemOperations__WriteBufferToFileSync_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteBufferToFileSync(path, data);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) :1066
void FileSystemOperations__WriteTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) :1072
void FileSystemOperations__WriteTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteTextToFileSync(path, text);
}

// public FileSystemOperations() [instance] :885
void FileSystemOperations::ctor_()
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", ".ctor()");
    ctor_1(NULL);
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) [instance] :888
void FileSystemOperations::ctor_1(uObject* dispatcher)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", ".ctor(Uno.Threading.IDispatcher)");
    _dispatcher = dispatcher;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(string path, string text) [instance] :894
::g::Uno::Threading::Future1* FileSystemOperations::AppendTextToFile(uString* path, uString* text)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "AppendTextToFile(string,string)");
    ::g::Uno::Threading::Future1* ret3;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[34/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[35/*Uno.Func<string, string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__AppendTextToFileSync_fn, this), path, text, &ret3), ret3);
}

// public Fuse.FileSystem.Nothing AppendTextToFileSync(string path, string text) [instance] :900
::g::Fuse::FileSystem::Nothing* FileSystemOperations::AppendTextToFileSync(uString* path, uString* text)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "AppendTextToFileSync(string,string)");
    ::g::Uno::IO::File::AppendAllText(path, text);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) [instance] :907
::g::Uno::Threading::Future1* FileSystemOperations::CreateDirectory(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "CreateDirectory(string)");
    ::g::Uno::Threading::Future1* ret4;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[36/*Fuse.FileSystem.FileSystemOperations.RunTask<string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[37/*Uno.Func<string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__CreateDirectorySync_fn, this), path, &ret4), ret4);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) [instance] :913
::g::Fuse::FileSystem::Nothing* FileSystemOperations::CreateDirectorySync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "CreateDirectorySync(string)");
    ::g::Uno::IO::Directory::CreateDirectory(path);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) [instance] :920
::g::Uno::Threading::Future1* FileSystemOperations::Delete(uString* path, bool recursive)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "Delete(string,bool)");
    ::g::Uno::Threading::Future1* ret5;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[38/*Fuse.FileSystem.FileSystemOperations.RunTask<string, bool, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[39/*Uno.Func<string, bool, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__DeleteSync_fn, this), path, uCRef(recursive), &ret5), ret5);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) [instance] :926
::g::Fuse::FileSystem::Nothing* FileSystemOperations::DeleteSync(uString* path, bool recursive)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "DeleteSync(string,bool)");

    if (::g::Uno::IO::Directory::Exists(path))
        ::g::Uno::IO::Directory::Delete(path, recursive);
    else
        ::g::Uno::IO::File::Delete(path);

    return NULL;
}

// public Uno.Threading.Future<bool> Exists(string path) [instance] :937
::g::Uno::Threading::Future1* FileSystemOperations::Exists(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "Exists(string)");
    ::g::Uno::Threading::Future1* ret6;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[40/*Fuse.FileSystem.FileSystemOperations.RunTask<string, bool>*/], uDelegate::New(::TYPES[41/*Uno.Func<string, bool>*/], (void*)FileSystemOperations__ExistsSync_fn, this), path, &ret6), ret6);
}

// public bool ExistsSync(string path) [instance] :943
bool FileSystemOperations::ExistsSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ExistsSync(string)");
    return ::g::Uno::IO::File::Exists(path) || ::g::Uno::IO::Directory::Exists(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(string path) [instance] :951
::g::Uno::Threading::Future1* FileSystemOperations::GetDirectoryInfo(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "GetDirectoryInfo(string)");
    ::g::Uno::Threading::Future1* ret7;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[42/*Fuse.FileSystem.FileSystemOperations.RunTask<string, Fuse.FileSystem.FileSystemInfo>*/], uDelegate::New(::TYPES[43/*Uno.Func<string, Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemOperations__GetDirectoryInfoSync_fn, this), path, &ret7), ret7);
}

// public Fuse.FileSystem.FileSystemInfo GetDirectoryInfoSync(string path) [instance] :957
::g::Fuse::FileSystem::FileSystemInfo* FileSystemOperations::GetDirectoryInfoSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "GetDirectoryInfoSync(string)");
    return ::g::Fuse::FileSystem::DirectoryInfo::New1(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(string path) [instance] :963
::g::Uno::Threading::Future1* FileSystemOperations::GetFileInfo(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "GetFileInfo(string)");
    ::g::Uno::Threading::Future1* ret8;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[42/*Fuse.FileSystem.FileSystemOperations.RunTask<string, Fuse.FileSystem.FileSystemInfo>*/], uDelegate::New(::TYPES[43/*Uno.Func<string, Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemOperations__GetFileInfoSync_fn, this), path, &ret8), ret8);
}

// public Fuse.FileSystem.FileSystemInfo GetFileInfoSync(string path) [instance] :969
::g::Fuse::FileSystem::FileSystemInfo* FileSystemOperations::GetFileInfoSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "GetFileInfoSync(string)");
    return ::g::Fuse::FileSystem::FileInfo::New1(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) [instance] :975
::g::Uno::Threading::Future1* FileSystemOperations::ListDirectories(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListDirectories(string)");
    ::g::Uno::Threading::Future1* ret9;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[44/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[45/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListDirectoriesSync_fn, this), path, &ret9), ret9);
}

// public string[] ListDirectoriesSync(string path) [instance] :981
uArray* FileSystemOperations::ListDirectoriesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListDirectoriesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[46/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[47/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateDirectories(path), uDelegate::New(::TYPES[48/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListEntries(string path) [instance] :987
::g::Uno::Threading::Future1* FileSystemOperations::ListEntries(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListEntries(string)");
    ::g::Uno::Threading::Future1* ret10;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[44/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[45/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListEntriesSync_fn, this), path, &ret10), ret10);
}

// public string[] ListEntriesSync(string path) [instance] :993
uArray* FileSystemOperations::ListEntriesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListEntriesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[46/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[47/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateFileSystemEntries(path), uDelegate::New(::TYPES[48/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListFiles(string path) [instance] :999
::g::Uno::Threading::Future1* FileSystemOperations::ListFiles(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListFiles(string)");
    ::g::Uno::Threading::Future1* ret11;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[44/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[45/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListFilesSync_fn, this), path, &ret11), ret11);
}

// public string[] ListFilesSync(string path) [instance] :1005
uArray* FileSystemOperations::ListFilesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListFilesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[46/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[47/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateFiles(path), uDelegate::New(::TYPES[48/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(string source, string destination) [instance] :1011
::g::Uno::Threading::Future1* FileSystemOperations::Move(uString* source, uString* destination)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "Move(string,string)");
    ::g::Uno::Threading::Future1* ret12;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[34/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[35/*Uno.Func<string, string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__MoveSync_fn, this), source, destination, &ret12), ret12);
}

// public Fuse.FileSystem.Nothing MoveSync(string source, string destination) [instance] :1017
::g::Fuse::FileSystem::Nothing* FileSystemOperations::MoveSync(uString* source, uString* destination)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "MoveSync(string,string)");

    if (::g::Uno::IO::Directory::Exists(source))
        ::g::Uno::IO::Directory::Move(source, destination);
    else
        ::g::Uno::IO::File::Move(source, destination);

    return NULL;
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) [instance] :1027
::g::Uno::Threading::Future1* FileSystemOperations::ReadBufferFromFile(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadBufferFromFile(string)");
    ::g::Uno::Threading::Future1* ret13;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[49/*Fuse.FileSystem.FileSystemOperations.RunTask<string, byte[]>*/], uDelegate::New(::TYPES[50/*Uno.Func<string, byte[]>*/], (void*)FileSystemOperations__ReadBufferFromFileSync_fn, this), path, &ret13), ret13);
}

// public byte[] ReadBufferFromFileSync(string path) [instance] :1033
uArray* FileSystemOperations::ReadBufferFromFileSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadBufferFromFileSync(string)");
    return ::g::Uno::IO::File::ReadAllBytes(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) [instance] :1040
::g::Uno::Threading::Future1* FileSystemOperations::ReadTextFromFile(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadTextFromFile(string)");
    ::g::Uno::Threading::Future1* ret14;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[51/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string>*/], uDelegate::New(::TYPES[48/*Uno.Func<string, string>*/], (void*)FileSystemOperations__ReadTextFromFileSync_fn, this), path, &ret14), ret14);
}

// public string ReadTextFromFileSync(string path) [instance] :1046
uString* FileSystemOperations::ReadTextFromFileSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadTextFromFileSync(string)");
    return ::g::Uno::IO::File::ReadAllText(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) [instance] :1079
::g::Uno::Threading::Future1* FileSystemOperations::RunTask(uType* __type, uDelegate* del)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Promise<T>*/),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "RunTask`1(Uno.Func<T>)");

    if (_dispatcher == NULL)
        return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(__types[0], del);

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(__types[0], _dispatcher, del);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) [instance] :1053
::g::Uno::Threading::Future1* FileSystemOperations::WriteBufferToFile(uString* path, uArray* data)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteBufferToFile(string,byte[])");
    ::g::Uno::Threading::Future1* ret17;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[56/*Fuse.FileSystem.FileSystemOperations.RunTask<string, byte[], Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[57/*Uno.Func<string, byte[], Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__WriteBufferToFileSync_fn, this), path, data, &ret17), ret17);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) [instance] :1059
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteBufferToFileSync(uString* path, uArray* data)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteBufferToFileSync(string,byte[])");
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) [instance] :1066
::g::Uno::Threading::Future1* FileSystemOperations::WriteTextToFile(uString* path, uString* text)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteTextToFile(string,string)");
    ::g::Uno::Threading::Future1* ret18;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[34/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[35/*Uno.Func<string, string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__WriteTextToFileSync_fn, this), path, text, &ret18), ret18);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) [instance] :1072
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteTextToFileSync(uString* path, uString* text)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteTextToFileSync(string,string)");
    ::g::Uno::IO::File::WriteAllText(path, text);
    return NULL;
}

// public FileSystemOperations New() [static] :885
FileSystemOperations* FileSystemOperations::New1()
{
    FileSystemOperations* obj1 = (FileSystemOperations*)uNew(FileSystemOperations_typeof());
    obj1->ctor_();
    return obj1;
}

// public FileSystemOperations New(Uno.Threading.IDispatcher dispatcher) [static] :888
FileSystemOperations* FileSystemOperations::New2(uObject* dispatcher)
{
    FileSystemOperations* obj2 = (FileSystemOperations*)uNew(FileSystemOperations_typeof());
    obj2->ctor_1(dispatcher);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/$.uno
// ----------------------------------------------------------

// public sealed class Nothing :1197
// {
static void Nothing_build(uType* type)
{
}

uType* Nothing_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.Nothing", options);
    type->fp_build_ = Nothing_build;
    type->fp_ctor_ = (void*)Nothing__New1_fn;
    return type;
}

// private Nothing() :1200
void Nothing__ctor__fn(Nothing* __this)
{
    __this->ctor_();
}

// private Nothing New() :1200
void Nothing__New1_fn(Nothing** __retval)
{
    *__retval = Nothing::New1();
}

// private Nothing() [instance] :1200
void Nothing::ctor_()
{
}

// private Nothing New() [static] :1200
Nothing* Nothing::New1()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/0.35.8/$.uno
// ----------------------------------------------------------

// internal static class PathTools :1212
// {
static void PathTools_build(uType* type)
{
}

uClassType* PathTools_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.PathTools", options);
    type->fp_build_ = PathTools_build;
    return type;
}

// public static string NormalizePath(string path) :1214
void PathTools__NormalizePath_fn(uString* path, uString** __retval)
{
    *__retval = PathTools::NormalizePath(path);
}

// public static string NormalizePath(string path) [static] :1214
uString* PathTools::NormalizePath(uString* path)
{
    uStackFrame __("Fuse.FileSystem.PathTools", "NormalizePath(string)");

    if (::g::Uno::IO::Path::DirectorySeparatorChar() == '\\')
        return ::g::Uno::String::Replace(uPtr(path), '\\', '/');

    return path;
}
// }

}}} // ::g::Fuse::FileSystem
