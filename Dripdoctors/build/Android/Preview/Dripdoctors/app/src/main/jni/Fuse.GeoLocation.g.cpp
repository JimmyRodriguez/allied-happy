// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.location.Location.h>
#include <Android.android.location.LocationManager.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Handler.h>
#include <Android.android.os.Looper.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Permissions.h>
#include <Android.Base.PlatPermission.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.List.h>
#include <Android.Runtime.UnoHelper.h>
#include <Fuse.GeoLocation.AndroidLocationProvider.h>
#include <Fuse.GeoLocation.GeoCoordinates.h>
#include <Fuse.GeoLocation.GeoLocation.h>
#include <Fuse.GeoLocation.GeoLocationAuthorizationType.h>
#include <Fuse.GeoLocation.ILocationTracker.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.LocationListenerBase.h>
#include <Fuse.GeoLocation.LocationTracker.h>
#include <Fuse.GeoLocation.PromiseListener.h>
#include <Fuse.GeoLocation.TimeoutListener.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.DateTime.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.CalendarSystem.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Type.h>
#include <Uno.UX.Resource.h>
//~
JNFUN(void,Binding_Fuse_GeoLocation_LocationListenerBase__onLocationChanged8298,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::location::Location*,((::g::Android::android::location::Location*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::location::Location_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::location::LocationListener::onLocationChanged(uInterface(uPtr, ::g::Android::android::location::LocationListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_GeoLocation_LocationListenerBase__onProviderDisabled8301,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::location::LocationListener::onProviderDisabled(uInterface(uPtr, ::g::Android::android::location::LocationListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_GeoLocation_LocationListenerBase__onProviderEnabled8300,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::location::LocationListener::onProviderEnabled(uInterface(uPtr, ::g::Android::android::location::LocationListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_GeoLocation_LocationListenerBase__onStatusChanged8299,jlong ujPtr, jobject arg0, jint arg1, jobject arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JARG_TO_UNO(arg5,::g::Android::android::os::Bundle*,((::g::Android::android::os::Bundle*)::g::Android::Base::Wrappers::JWrapper::New2(arg2, (uType*)::g::Android::android::os::Bundle_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::location::LocationListener::onStatusChanged(uInterface(uPtr, ::g::Android::android::location::LocationListener_typeof()), tmparg3, ((int)arg1), tmparg5);
    JCATCH
}
static uString* STRINGS[22];
static uType* TYPES[36];

namespace g{
namespace Fuse{
namespace GeoLocation{

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\Android\$.uno
// ------------------------------------------------------------------

// internal sealed extern class AndroidLocationProvider :19
// {
static void AndroidLocationProvider_build(uType* type)
{
    ::TYPES[0] = ::g::Android::android::location::LocationManager_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[4] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[6] = ::g::Android::java::util::List_typeof();
    ::TYPES[7] = ::g::Android::java::lang::String_typeof();
    ::TYPES[8] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[10] = ::g::Android::android::location::LocationListener_typeof();
    ::TYPES[11] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(AndroidLocationProvider_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AndroidLocationProvider_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(AndroidLocationProvider_type, interface2),
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), offsetof(AndroidLocationProvider_type, interface3));
    type->SetFields(5,
        ::g::Android::android::location::LocationManager_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _lm), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _onLocationChanged), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _started), 0);
}

AndroidLocationProvider_type* AndroidLocationProvider_typeof()
{
    static uSStrong<AndroidLocationProvider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(AndroidLocationProvider);
    options.TypeSize = sizeof(AndroidLocationProvider_type);
    type = (AndroidLocationProvider_type*)uClassType::New("Fuse.GeoLocation.AndroidLocationProvider", options);
    type->SetBase(::g::Fuse::GeoLocation::LocationListenerBase_typeof());
    type->fp_build_ = AndroidLocationProvider_build;
    type->fp_ctor_ = (void*)AndroidLocationProvider__New5_fn;
    type->fp_OnLocationChanged = (void(*)(::g::Fuse::GeoLocation::LocationListenerBase*, ::g::Fuse::GeoLocation::Location*))AndroidLocationProvider__OnLocationChanged_fn;
    type->interface3.fp_GetLastKnownPosition = (void(*)(uObject*, ::g::Fuse::GeoLocation::Location**))AndroidLocationProvider__GetLastKnownPosition_fn;
    type->interface3.fp_GetLocation = (void(*)(uObject*, ::g::Uno::Threading::Promise*, double*))AndroidLocationProvider__GetLocation_fn;
    type->interface3.fp_StartListening = (void(*)(uObject*, uDelegate*, uDelegate*, int*, double*))AndroidLocationProvider__StartListening_fn;
    type->interface3.fp_StopListening = (void(*)(uObject*))AndroidLocationProvider__StopListening_fn;
    type->interface3.fp_RequestAuthorization = (void(*)(uObject*, int*))AndroidLocationProvider__RequestAuthorization_fn;
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronLocationChanged_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronProviderDisabled_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronProviderEnabled_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronStatusChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public AndroidLocationProvider() :23
void AndroidLocationProvider__ctor_6_fn(AndroidLocationProvider* __this)
{
    __this->ctor_6();
}

// private Fuse.GeoLocation.Location ChooseBestLocation(Uno.Collections.IList<Fuse.GeoLocation.Location> locations, int minDistance, Uno.Time.Instant minTime) :112
void AndroidLocationProvider__ChooseBestLocation_fn(AndroidLocationProvider* __this, uObject* locations, int* minDistance, ::g::Uno::Time::Instant* minTime, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->ChooseBestLocation(locations, *minDistance, *minTime);
}

// internal static Fuse.GeoLocation.Location ConvertLocation(Android.android.location.Location location) :139
void AndroidLocationProvider__ConvertLocation_fn(::g::Android::android::location::Location* location, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = AndroidLocationProvider::ConvertLocation(location);
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() :94
void AndroidLocationProvider__GetLastKnownPosition_fn(AndroidLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLastKnownPosition();
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :87
void AndroidLocationProvider__GetLocation_fn(AndroidLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout)
{
    __this->GetLocation(promise, *timeout);
}

// private bool get_IsGPSEnabled() :72
void AndroidLocationProvider__get_IsGPSEnabled_fn(AndroidLocationProvider* __this, bool* __retval)
{
    *__retval = __this->IsGPSEnabled();
}

// private bool get_IsNetworkEnabled() :61
void AndroidLocationProvider__get_IsNetworkEnabled_fn(AndroidLocationProvider* __this, bool* __retval)
{
    *__retval = __this->IsNetworkEnabled();
}

// public AndroidLocationProvider New() :23
void AndroidLocationProvider__New5_fn(AndroidLocationProvider** __retval)
{
    *__retval = AndroidLocationProvider::New5();
}

// protected override sealed void OnLocationChanged(Fuse.GeoLocation.Location location) :81
void AndroidLocationProvider__OnLocationChanged_fn(AndroidLocationProvider* __this, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "OnLocationChanged(Fuse.GeoLocation.Location)");

    if (::g::Uno::Delegate::op_Inequality(__this->_onLocationChanged, NULL))
        uPtr(__this->_onLocationChanged)->InvokeVoid(location);
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) :35
void AndroidLocationProvider__RequestAuthorization_fn(AndroidLocationProvider* __this, int* type)
{
    __this->RequestAuthorization(*type);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :39
void AndroidLocationProvider__StartListening_fn(AndroidLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(onLocationChanged, onLocationError, *minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :53
void AndroidLocationProvider__StopListening_fn(AndroidLocationProvider* __this)
{
    __this->StopListening();
}

// public AndroidLocationProvider() [instance] :23
void AndroidLocationProvider::ctor_6()
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", ".ctor()");
    ctor_5();
    ::g::Android::Base::Permissions::RequestPermission(::g::Android::Base::Permissions::ACCESS_FINE_LOCATION());
    ::g::Android::Base::Permissions::RequestPermission(::g::Android::Base::Permissions::INTERNET());
    ::g::Android::android::app::Activity* activity = ::g::Android::android::app::Activity::GetAppActivity();
    _lm = uCast< ::g::Android::android::location::LocationManager*>(uPtr(activity)->getSystemService(::g::Android::android::content::Context::LOCATION_SERVICE()), ::TYPES[0/*Android.android.location.LocationManager*/]);
}

// private Fuse.GeoLocation.Location ChooseBestLocation(Uno.Collections.IList<Fuse.GeoLocation.Location> locations, int minDistance, Uno.Time.Instant minTime) [instance] :112
::g::Fuse::GeoLocation::Location* AndroidLocationProvider::ChooseBestLocation(uObject* locations, int minDistance, ::g::Uno::Time::Instant minTime)
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "ChooseBestLocation(Uno.Collections.IList<Fuse.GeoLocation.Location>,int,Uno.Time.Instant)");
    ::g::Fuse::GeoLocation::Location* ret3;
    ::g::Fuse::GeoLocation::Location* bestResult = NULL;
    double bestAccuracy = 1.7976931348623157e+308;
    ::g::Uno::Time::Instant bestTime = uDefault< ::g::Uno::Time::Instant>();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(locations), ::TYPES[1/*Uno.Collections.IEnumerable<Fuse.GeoLocation.Location>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::GeoLocation::Location* location = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator<Fuse.GeoLocation.Location>*/]), &ret3), ret3);
        double accuracy = uPtr(location)->Accuracy();
        ::g::Uno::Time::Instant time = uPtr(uPtr(location->DateTime())->InUtc())->ToInstant();

        if (::g::Uno::Time::Instant__op_GreaterThan(time, minTime) && (accuracy < bestAccuracy))
        {
            bestResult = location;
            bestAccuracy = accuracy;
            bestTime = time;
        }
        else if ((::g::Uno::Time::Instant__op_LessThan(time, minTime) && (bestAccuracy == 1.7976931348623157e+308)) && ::g::Uno::Time::Instant__op_GreaterThan(time, bestTime))
        {
            bestResult = location;
            bestTime = time;
        }
    }

    return bestResult;
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() [instance] :94
::g::Fuse::GeoLocation::Location* AndroidLocationProvider::GetLastKnownPosition()
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "GetLastKnownPosition()");

    if (::g::Android::java::lang::Object::op_Inequality1(_lm, NULL))
    {
        ::g::Uno::Collections::List* locations = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.GeoLocation.Location>*/]);
        uObject* providers = uPtr(_lm)->getAllProviders();

        for (int i = 0; i < ::g::Android::java::util::List::size(uInterface(uPtr(providers), ::TYPES[6/*Android.java.util.List*/])); i++)
        {
            ::g::Android::android::location::Location* lo = uPtr(_lm)->getLastKnownLocation(uCast< ::g::Android::java::lang::String*>(::g::Android::java::util::List::get(uInterface(uPtr(providers), ::TYPES[6/*Android.java.util.List*/]), i), ::TYPES[7/*Android.java.lang.String*/]));

            if (::g::Android::java::lang::Object::op_Inequality1(lo, NULL))
                ::g::Uno::Collections::List__Add_fn(uPtr(locations), AndroidLocationProvider::ConvertLocation(lo));
        }

        ::g::Uno::Time::Instant minTime = uPtr(uPtr(::g::Uno::DateTime::UtcNow())->Minus(::g::Uno::Time::Duration__FromHours(1LL)))->ToInstant();
        return ChooseBestLocation((uObject*)locations, 50, minTime);
    }

    return NULL;
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [instance] :87
void AndroidLocationProvider::GetLocation(::g::Uno::Threading::Promise* promise, double timeout)
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location>,double)");

    if (::g::Android::java::lang::Object::op_Equality1(_lm, NULL))
        return;

    ::g::Fuse::GeoLocation::PromiseListener* listener = ::g::Fuse::GeoLocation::PromiseListener::New5(_lm, timeout, promise);
}

// private bool get_IsGPSEnabled() [instance] :72
bool AndroidLocationProvider::IsGPSEnabled()
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "get_IsGPSEnabled()");

    if (::g::Android::java::lang::Object::op_Equality1(_lm, NULL))
        return false;

    bool isGpsEnabled = false;

    try
    {
        isGpsEnabled = uPtr(_lm)->isProviderEnabled(::g::Android::android::location::LocationManager::GPS_PROVIDER());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return isGpsEnabled;
}

// private bool get_IsNetworkEnabled() [instance] :61
bool AndroidLocationProvider::IsNetworkEnabled()
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "get_IsNetworkEnabled()");

    if (::g::Android::java::lang::Object::op_Equality1(_lm, NULL))
        return false;

    bool isNetworkEnabled = false;

    try
    {
        isNetworkEnabled = uPtr(_lm)->isProviderEnabled(::g::Android::android::location::LocationManager::NETWORK_PROVIDER());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return isNetworkEnabled;
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) [instance] :35
void AndroidLocationProvider::RequestAuthorization(int type)
{
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [instance] :39
void AndroidLocationProvider::StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters)
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "StartListening(Uno.Action<Fuse.GeoLocation.Location>,Uno.Action<Uno.Exception>,int,double)");

    if (::g::Android::java::lang::Object::op_Inequality1(_lm, NULL) && !_started)
    {
        _onLocationChanged = onLocationChanged;

        if (IsNetworkEnabled())
            uPtr(_lm)->requestLocationUpdates2(::g::Android::android::location::LocationManager::NETWORK_PROVIDER(), (int64_t)minimumReportInterval, (float)desiredAccuracyInMeters, (uObject*)this, ::g::Android::android::os::Looper::getMainLooper());

        if (IsGPSEnabled())
            uPtr(_lm)->requestLocationUpdates2(::g::Android::android::location::LocationManager::GPS_PROVIDER(), (int64_t)minimumReportInterval, (float)desiredAccuracyInMeters, (uObject*)this, ::g::Android::android::os::Looper::getMainLooper());

        _started = true;
    }
}

// public void StopListening() [instance] :53
void AndroidLocationProvider::StopListening()
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "StopListening()");
    uPtr(_lm)->removeUpdates1((uObject*)this);
    _started = false;
}

// internal static Fuse.GeoLocation.Location ConvertLocation(Android.android.location.Location location) [static] :139
::g::Fuse::GeoLocation::Location* AndroidLocationProvider::ConvertLocation(::g::Android::android::location::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.AndroidLocationProvider", "ConvertLocation(Android.android.location.Location)");
    ::g::Uno::Time::Instant instant = ::g::Uno::Time::Instant__FromMillisecondsSinceUnixEpoch(uPtr(location)->getTime());
    ::g::Uno::Time::LocalDateTime* dateTime = ::g::Uno::Time::LocalDateTime::New10(instant, ::g::Uno::Time::CalendarSystem::Iso());
    return ::g::Fuse::GeoLocation::Location::New1(::g::Fuse::GeoLocation::GeoCoordinates::New1(location->getLatitude(), location->getLongitude()), (double)location->getAccuracy(), dateTime);
}

// public AndroidLocationProvider New() [static] :23
AndroidLocationProvider* AndroidLocationProvider::New5()
{
    AndroidLocationProvider* obj2 = (AndroidLocationProvider*)uNew(AndroidLocationProvider_typeof());
    obj2->ctor_6();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\$.uno
// ----------------------------------------------------------

// public sealed class GeoCoordinates :7
// {
static void GeoCoordinates_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" - ");
    ::TYPES[12] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _lat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _long), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Latitude", NULL, (void*)GeoCoordinates__get_Latitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Longitude", NULL, (void*)GeoCoordinates__get_Longitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)GeoCoordinates__New1_fn, 0, true, GeoCoordinates_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()));
}

uType* GeoCoordinates_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GeoCoordinates);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.GeoCoordinates", options);
    type->fp_build_ = GeoCoordinates_build;
    type->fp_ToString = (void(*)(uObject*, uString**))GeoCoordinates__ToString_fn;
    return type;
}

// public GeoCoordinates(double latitude, double longitude) :15
void GeoCoordinates__ctor__fn(GeoCoordinates* __this, double* latitude, double* longitude)
{
    __this->ctor_(*latitude, *longitude);
}

// public double get_Latitude() :12
void GeoCoordinates__get_Latitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :13
void GeoCoordinates__get_Longitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public GeoCoordinates New(double latitude, double longitude) :15
void GeoCoordinates__New1_fn(double* latitude, double* longitude, GeoCoordinates** __retval)
{
    *__retval = GeoCoordinates::New1(*latitude, *longitude);
}

// public override sealed string ToString() :21
void GeoCoordinates__ToString_fn(GeoCoordinates* __this, uString** __retval)
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox(::g::Uno::Double_typeof(), __this->Latitude()), ::STRINGS[0/*" - "*/]), uBox(::g::Uno::Double_typeof(), __this->Longitude())), void();
}

// public GeoCoordinates(double latitude, double longitude) [instance] :15
void GeoCoordinates::ctor_(double latitude, double longitude)
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", ".ctor(double,double)");
    _lat = latitude;
    _long = longitude;
}

// public double get_Latitude() [instance] :12
double GeoCoordinates::Latitude()
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", "get_Latitude()");
    return _lat;
}

// public double get_Longitude() [instance] :13
double GeoCoordinates::Longitude()
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", "get_Longitude()");
    return _long;
}

// public GeoCoordinates New(double latitude, double longitude) [static] :15
GeoCoordinates* GeoCoordinates::New1(double latitude, double longitude)
{
    GeoCoordinates* obj1 = (GeoCoordinates*)uNew(GeoCoordinates_typeof());
    obj1->ctor_(latitude, longitude);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\$.uno
// ----------------------------------------------------------

// public sealed class GeoLocation :54
// {
static void GeoLocation_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJS/GeoLocation");
    ::STRINGS[2] = uString::Const("auhtorizationRequest");
    ::STRINGS[3] = uString::Const("startListening");
    ::STRINGS[4] = uString::Const("stopListening");
    ::STRINGS[5] = uString::Const("onChanged");
    ::STRINGS[6] = uString::Const("onError");
    ::STRINGS[7] = uString::Const("location");
    ::STRINGS[8] = uString::Const("getLocation");
    ::STRINGS[9] = uString::Const("latitude");
    ::STRINGS[10] = uString::Const("longitude");
    ::STRINGS[11] = uString::Const("accuracy");
    ::TYPES[12] = uObject_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[15] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof());
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[17] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[18] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[19] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[21] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[22] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[23] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[24] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[25] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[26] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[28] = uObject_typeof()->Array();
    ::TYPES[29] = ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::GeoLocation::LocationTracker_typeof(), offsetof(::g::Fuse::GeoLocation::GeoLocation, _locationTracker), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::GeoLocation::GeoLocation, _onChangedEvent), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::GeoLocation::GeoLocation, _onErrorEvent), 0,
        GeoLocation_typeof(), (uintptr_t)&::g::Fuse::GeoLocation::GeoLocation::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeoLocation__New2_fn, 0, true, GeoLocation_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GeoLocation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.GeoLocation.GeoLocation", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_build_ = GeoLocation_build;
    type->fp_ctor_ = (void*)GeoLocation__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public GeoLocation() :61
void GeoLocation__ctor_2_fn(GeoLocation* __this)
{
    __this->ctor_2();
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) :138
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval)
{
    *__retval = GeoLocation::AuthorizationRequestConverter(context, *type);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :190
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = GeoLocation::Converter(context, location);
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() :154
void GeoLocation__GetAuhtorizationRequest_fn(GeoLocation* __this, int* __retval)
{
    *__retval = __this->GetAuhtorizationRequest();
}

// private Fuse.GeoLocation.Location GetLocation() :170
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLocation();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) :184
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(args);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) :121
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location)
{
    __this->LocationChanged(location);
}

// private void LocationError(string error) :133
void GeoLocation__LocationError_fn(GeoLocation* __this, uString* error)
{
    __this->LocationError(error);
}

// public GeoLocation New() :61
void GeoLocation__New2_fn(GeoLocation** __retval)
{
    *__retval = GeoLocation::New2();
}

// private void SetAuhtorizationRequest(int value) :149
void GeoLocation__SetAuhtorizationRequest_fn(GeoLocation* __this, int* value)
{
    __this->SetAuhtorizationRequest(*value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) :94
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StartListening(c, args);
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) :108
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StopListening(c, args);
}

uSStrong<GeoLocation*> GeoLocation::_instance_;

// public GeoLocation() [instance] :61
void GeoLocation::ctor_2()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", ".ctor()");
    ctor_1();

    if (GeoLocation::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(GeoLocation::_instance_ = this, ::STRINGS[1/*"FuseJS/GeoL...*/]);
    _locationTracker = ::g::Fuse::GeoLocation::LocationTracker::New1();
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[14/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], ::STRINGS[2/*"auhtorizati...*/], uDelegate::New(::TYPES[15/*Uno.Func<Fuse.GeoLocation.GeoLocationAuthorizationType>*/], (void*)GeoLocation__GetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[16/*Uno.Action<int>*/], (void*)GeoLocation__SetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], (void*)GeoLocation__AuthorizationRequestConverter_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"startListen...*/], uDelegate::New(::TYPES[18/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StartListening_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"stopListening"*/], uDelegate::New(::TYPES[18/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StopListening_fn, this)));
    _onChangedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[5/*"onChanged"*/], true);
    uPtr(_locationTracker)->add_LocationChanged(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__LocationChanged_fn, this));
    AddMember(_onChangedEvent);
    _onErrorEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[6/*"onError"*/], true);
    uPtr(_locationTracker)->add_LocationError(uDelegate::New(::TYPES[20/*Uno.Action<string>*/], (void*)GeoLocation__LocationError_fn, this));
    AddMember(_onErrorEvent);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[21/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[7/*"location"*/], uDelegate::New(::TYPES[22/*Uno.Func<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocation_fn, this), NULL, uDelegate::New(::TYPES[23/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[24/*Fuse.Scripting.NativePromise<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[8/*"getLocation"*/], uDelegate::New(::TYPES[25/*Fuse.Scripting.FutureFactory<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocationAsync_fn, this), uDelegate::New(::TYPES[26/*Fuse.Scripting.ResultConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() [instance] :154
int GeoLocation::GetAuhtorizationRequest()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetAuhtorizationRequest()");
    return uPtr(_locationTracker)->AuthorizationType();
}

// private Fuse.GeoLocation.Location GetLocation() [instance] :170
::g::Fuse::GeoLocation::Location* GeoLocation::GetLocation()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetLocation()");
    return uPtr(_locationTracker)->Location();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) [instance] :184
::g::Uno::Threading::Future1* GeoLocation::GetLocationAsync(uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetLocationAsync(object[])");
    double timeout = (uPtr(args)->Length() > 0) ? ::g::Fuse::Scripting::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 20000.0;
    return uPtr(_locationTracker)->GetLocationAsync(timeout);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) [instance] :121
void GeoLocation::LocationChanged(::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "LocationChanged(Fuse.GeoLocation.Location)");
    uPtr(_onChangedEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[28/*object[]*/], 1, (::g::Fuse::Scripting::Object*)GeoLocation::Converter(uPtr(_onChangedEvent)->Context(), location)));
}

// private void LocationError(string error) [instance] :133
void GeoLocation::LocationError(uString* error)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "LocationError(string)");
    uPtr(_onErrorEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[28/*object[]*/], 1, error));
}

// private void SetAuhtorizationRequest(int value) [instance] :149
void GeoLocation::SetAuhtorizationRequest(int value)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "SetAuhtorizationRequest(int)");
    uPtr(_locationTracker)->AuthorizationType(value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) [instance] :94
uObject* GeoLocation::StartListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "StartListening(Fuse.Scripting.Context,object[])");
    int minimumReportInterval = (uPtr(args)->Length() > 0) ? ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)) : 0;
    double desiredAccuracyInMeters = (args->Length() > 1) ? ::g::Fuse::Scripting::Marshal::ToDouble(args->Strong<uObject*>(1)) : 0.0;
    uPtr(_locationTracker)->StartListening(minimumReportInterval, desiredAccuracyInMeters);
    return NULL;
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) [instance] :108
uObject* GeoLocation::StopListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "StopListening(Fuse.Scripting.Context,object[])");
    uPtr(_locationTracker)->StopListening();
    return NULL;
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :138
int GeoLocation::AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "AuthorizationRequestConverter(Fuse.Scripting.Context,Fuse.GeoLocation.GeoLocationAuthorizationType)");
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :190
::g::Fuse::Scripting::Object* GeoLocation::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "Converter(Fuse.Scripting.Context,Fuse.GeoLocation.Location)");
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (location != NULL)
    {
        uPtr(obj)->Item(::STRINGS[9/*"latitude"*/], uBox(::g::Uno::Double_typeof(), uPtr(uPtr(location)->Coordinates())->Latitude()));
        obj->Item(::STRINGS[10/*"longitude"*/], uBox(::g::Uno::Double_typeof(), uPtr(location->Coordinates())->Longitude()));
        obj->Item(::STRINGS[11/*"accuracy"*/], uBox(::g::Uno::Double_typeof(), location->Accuracy()));
    }

    return obj;
}

// public GeoLocation New() [static] :61
GeoLocation* GeoLocation::New2()
{
    GeoLocation* obj1 = (GeoLocation*)uNew(GeoLocation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\$.uno
// ----------------------------------------------------------

// public enum GeoLocationAuthorizationType :259
uEnumType* GeoLocationAuthorizationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.GeoLocation.GeoLocationAuthorizationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Never", 0LL,
        "WhenInUse", 1LL,
        "Always", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\$.uno
// ----------------------------------------------------------

// public abstract interface ILocationTracker :246
// {
uInterfaceType* ILocationTracker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.GeoLocation.ILocationTracker", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("GetLastKnownPosition", NULL, NULL, offsetof(ILocationTracker, fp_GetLastKnownPosition), false, ::g::Fuse::GeoLocation::Location_typeof(), 0),
        new uFunction("GetLocation", NULL, NULL, offsetof(ILocationTracker, fp_GetLocation), false, uVoid_typeof(), 2, ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), ::g::Uno::Double_typeof()),
        new uFunction("RequestAuthorization", NULL, NULL, offsetof(ILocationTracker, fp_RequestAuthorization), false, uVoid_typeof(), 1, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof()),
        new uFunction("StartListening", NULL, NULL, offsetof(ILocationTracker, fp_StartListening), false, uVoid_typeof(), 4, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof()), ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("StopListening", NULL, NULL, offsetof(ILocationTracker, fp_StopListening), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\$.uno
// ----------------------------------------------------------

// public sealed class Location :211
// {
static void Location_build(uType* type)
{
    ::STRINGS[12] = uString::Const(" ");
    ::STRINGS[13] = uString::Const(" (");
    ::STRINGS[14] = uString::Const("/");
    ::STRINGS[15] = uString::Const(":");
    ::STRINGS[16] = uString::Const(")");
    ::TYPES[12] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _accuracy), 0,
        ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _coordinates), 0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _dateTime), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Accuracy", NULL, (void*)Location__get_Accuracy_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Coordinates", NULL, (void*)Location__get_Coordinates_fn, 0, false, ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), 0),
        new uFunction("get_DateTime", NULL, (void*)Location__get_DateTime_fn, 0, false, ::g::Uno::Time::LocalDateTime_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Location__New1_fn, 0, true, Location_typeof(), 3, ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Time::LocalDateTime_typeof()));
}

uType* Location_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Location);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.Location", options);
    type->fp_build_ = Location_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Location__ToString_fn;
    return type;
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) :225
void Location__ctor__fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    __this->ctor_(coordinates, *accuracy, dateTime);
}

// public double get_Accuracy() :223
void Location__get_Accuracy_fn(Location* __this, double* __retval)
{
    *__retval = __this->Accuracy();
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() :217
void Location__get_Coordinates_fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates** __retval)
{
    *__retval = __this->Coordinates();
}

// public Uno.Time.LocalDateTime get_DateTime() :218
void Location__get_DateTime_fn(Location* __this, ::g::Uno::Time::LocalDateTime** __retval)
{
    *__retval = __this->DateTime();
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) :225
void Location__New1_fn(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, ::g::Uno::Time::LocalDateTime* dateTime, Location** __retval)
{
    *__retval = Location::New1(coordinates, *accuracy, dateTime);
}

// public override sealed string ToString() :232
void Location__ToString_fn(Location* __this, uString** __retval)
{
    uStackFrame __("Fuse.GeoLocation.Location", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this->Coordinates(), ::STRINGS[12/*" "*/]), uBox(::g::Uno::Double_typeof(), __this->Accuracy())), ::STRINGS[13/*" ("*/]), uBox<int>(::TYPES[27/*int*/], uPtr(__this->DateTime())->Month())), ::STRINGS[14/*"/"*/]), uBox<int>(::TYPES[27/*int*/], uPtr(__this->DateTime())->Day())), ::STRINGS[12/*" "*/]), uBox<int>(::TYPES[27/*int*/], uPtr(__this->DateTime())->Hour())), ::STRINGS[15/*":"*/]), uBox<int>(::TYPES[27/*int*/], uPtr(__this->DateTime())->Minute())), ::STRINGS[16/*")"*/]), void();
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) [instance] :225
void Location::ctor_(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    uStackFrame __("Fuse.GeoLocation.Location", ".ctor(Fuse.GeoLocation.GeoCoordinates,double,Uno.Time.LocalDateTime)");
    _coordinates = coordinates;
    _accuracy = accuracy;
    _dateTime = dateTime;
}

// public double get_Accuracy() [instance] :223
double Location::Accuracy()
{
    uStackFrame __("Fuse.GeoLocation.Location", "get_Accuracy()");
    return _accuracy;
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() [instance] :217
::g::Fuse::GeoLocation::GeoCoordinates* Location::Coordinates()
{
    uStackFrame __("Fuse.GeoLocation.Location", "get_Coordinates()");
    return _coordinates;
}

// public Uno.Time.LocalDateTime get_DateTime() [instance] :218
::g::Uno::Time::LocalDateTime* Location::DateTime()
{
    uStackFrame __("Fuse.GeoLocation.Location", "get_DateTime()");
    return _dateTime;
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) [static] :225
Location* Location::New1(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    Location* obj1 = (Location*)uNew(Location_typeof());
    obj1->ctor_(coordinates, accuracy, dateTime);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\Android\$.uno
// ------------------------------------------------------------------

// internal abstract extern class LocationListenerBase :161
// {
static void LocationListenerBase_build(uType* type)
{
    ::STRINGS[17] = uString::Const("com.Bindings.Binding_Fuse_GeoLocation_LocationListenerBase");
    ::STRINGS[18] = uString::Const("<init>");
    ::STRINGS[19] = uString::Const("(J)V");
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(LocationListenerBase_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LocationListenerBase_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(LocationListenerBase_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::GeoLocation::LocationListenerBase::_javaClass2_, uFieldFlagsStatic);
}

LocationListenerBase_type* LocationListenerBase_typeof()
{
    static uSStrong<LocationListenerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LocationListenerBase);
    options.TypeSize = sizeof(LocationListenerBase_type);
    type = (LocationListenerBase_type*)uClassType::New("Fuse.GeoLocation.LocationListenerBase", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = LocationListenerBase_build;
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))LocationListenerBase__AndroidandroidlocationLocationListeneronLocationChanged_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))LocationListenerBase__AndroidandroidlocationLocationListeneronProviderDisabled_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))LocationListenerBase__AndroidandroidlocationLocationListeneronProviderEnabled_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))LocationListenerBase__AndroidandroidlocationLocationListeneronStatusChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// protected generated LocationListenerBase() :161
void LocationListenerBase__ctor_5_fn(LocationListenerBase* __this)
{
    __this->ctor_5();
}

// private void Android.android.location.LocationListener.onLocationChanged(Android.android.location.Location location) :165
void LocationListenerBase__AndroidandroidlocationLocationListeneronLocationChanged_fn(LocationListenerBase* __this, ::g::Android::android::location::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.LocationListenerBase", "Android.android.location.LocationListener.onLocationChanged(Android.android.location.Location)");
    __this->OnLocationChanged(::g::Fuse::GeoLocation::AndroidLocationProvider::ConvertLocation(location));
}

// private void Android.android.location.LocationListener.onProviderDisabled(Android.java.lang.String provider) :170
void LocationListenerBase__AndroidandroidlocationLocationListeneronProviderDisabled_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider)
{
}

// private void Android.android.location.LocationListener.onProviderEnabled(Android.java.lang.String provider) :174
void LocationListenerBase__AndroidandroidlocationLocationListeneronProviderEnabled_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider)
{
}

// private void Android.android.location.LocationListener.onStatusChanged(Android.java.lang.String provider, int status, Android.android.os.Bundle extras) :178
void LocationListenerBase__AndroidandroidlocationLocationListeneronStatusChanged_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider, int* status, ::g::Android::android::os::Bundle* extras)
{
}

jclass LocationListenerBase::_javaClass2_;

// protected generated LocationListenerBase() [instance] :161
void LocationListenerBase::ctor_5()
{
    uStackFrame __("Fuse.GeoLocation.LocationListenerBase", ".ctor()");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[17/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(LocationListenerBase::_javaClass2_, ::g::Android::Base::Primitives::ujclass::Null()))
    {
        LocationListenerBase::_javaClass2_ = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[17/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(4);
        REG_MTD(0,"__n_onLocationChanged","(JLandroid/location/Location;J)V",Binding_Fuse_GeoLocation_LocationListenerBase__onLocationChanged8298);
        REG_MTD(1,"__n_onProviderDisabled","(JLjava/lang/String;J)V",Binding_Fuse_GeoLocation_LocationListenerBase__onProviderDisabled8301);
        REG_MTD(2,"__n_onProviderEnabled","(JLjava/lang/String;J)V",Binding_Fuse_GeoLocation_LocationListenerBase__onProviderEnabled8300);
        REG_MTD(3,"__n_onStatusChanged","(JLjava/lang/String;ILandroid/os/Bundle;JJJ)V",Binding_Fuse_GeoLocation_LocationListenerBase__onStatusChanged8299);
        COMMIT_REG_MTD(LocationListenerBase::_javaClass2_);
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[18/*"<init>"*/], ::STRINGS[19/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__weakptr));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\$.uno
// ----------------------------------------------------------

// public sealed class LocationTracker :266
// {
static void LocationTracker_build(uType* type)
{
    ::STRINGS[20] = uString::Const("Not supported for current target.");
    ::TYPES[30] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[31] = ::g::Uno::Action_typeof();
    ::TYPES[32] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[11] = ::g::Uno::Exception_typeof();
    ::TYPES[33] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    ::TYPES[34] = ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[19] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[35] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Fuse::GeoLocation::Location_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _lastLocation), 0,
        ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _AuthorizationType), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationError1), 0,
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), (uintptr_t)&::g::Fuse::GeoLocation::LocationTracker::_locationTracker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_AuthorizationType", NULL, (void*)LocationTracker__get_AuthorizationType_fn, 0, false, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), 0),
        new uFunction("set_AuthorizationType", NULL, (void*)LocationTracker__set_AuthorizationType_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof()),
        new uFunction("GetLocationAsync", NULL, (void*)LocationTracker__GetLocationAsync_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Location", NULL, (void*)LocationTracker__get_Location_fn, 0, false, ::g::Fuse::GeoLocation::Location_typeof(), 0),
        new uFunction("add_LocationChanged", NULL, (void*)LocationTracker__add_LocationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof())),
        new uFunction("remove_LocationChanged", NULL, (void*)LocationTracker__remove_LocationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof())),
        new uFunction("add_LocationError", NULL, (void*)LocationTracker__add_LocationError_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("remove_LocationError", NULL, (void*)LocationTracker__remove_LocationError_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction(".ctor", NULL, (void*)LocationTracker__New1_fn, 0, true, LocationTracker_typeof(), 0),
        new uFunction("StartListening", NULL, (void*)LocationTracker__StartListening_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("StopListening", NULL, (void*)LocationTracker__StopListening_fn, 0, false, uVoid_typeof(), 0));
}

uType* LocationTracker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LocationTracker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.LocationTracker", options);
    type->fp_build_ = LocationTracker_build;
    type->fp_ctor_ = (void*)LocationTracker__New1_fn;
    return type;
}

// public LocationTracker() :270
void LocationTracker__ctor__fn(LocationTracker* __this)
{
    __this->ctor_();
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() :292
void LocationTracker__get_AuthorizationType_fn(LocationTracker* __this, int* __retval)
{
    *__retval = __this->AuthorizationType();
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) :292
void LocationTracker__set_AuthorizationType_fn(LocationTracker* __this, int* value)
{
    __this->AuthorizationType(*value);
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) :335
void LocationTracker__GetLocationAsync_fn(LocationTracker* __this, double* timeout, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(*timeout);
}

// private void Init() :276
void LocationTracker__Init_fn(LocationTracker* __this)
{
    __this->Init();
}

// public Fuse.GeoLocation.Location get_Location() :296
void LocationTracker__get_Location_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->Location();
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :286
void LocationTracker__add_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationChanged(value);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :286
void LocationTracker__remove_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationChanged(value);
}

// public generated void add_LocationError(Uno.Action<string> value) :288
void LocationTracker__add_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationError(value);
}

// public generated void remove_LocationError(Uno.Action<string> value) :288
void LocationTracker__remove_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationError(value);
}

// public LocationTracker New() :270
void LocationTracker__New1_fn(LocationTracker** __retval)
{
    *__retval = LocationTracker::New1();
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) :308
void LocationTracker__OnLocationChanged_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location* newLocation)
{
    __this->OnLocationChanged(newLocation);
}

// private void OnLocationError(Uno.Exception error) :314
void LocationTracker__OnLocationError_fn(LocationTracker* __this, ::g::Uno::Exception* error)
{
    __this->OnLocationError(error);
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) :320
void LocationTracker__StartListening_fn(LocationTracker* __this, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(*minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :328
void LocationTracker__StopListening_fn(LocationTracker* __this)
{
    __this->StopListening();
}

uSStrong<uObject*> LocationTracker::_locationTracker_;

// public LocationTracker() [instance] :270
void LocationTracker::ctor_()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", ".ctor()");
    AuthorizationType(1);
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::TYPES[30/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[31/*Uno.Action*/], (void*)LocationTracker__Init_fn, this));
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() [instance] :292
int LocationTracker::AuthorizationType()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "get_AuthorizationType()");
    return _AuthorizationType;
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) [instance] :292
void LocationTracker::AuthorizationType(int value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType)");
    _AuthorizationType = value;
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) [instance] :335
::g::Uno::Threading::Future1* LocationTracker::GetLocationAsync(double timeout)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "GetLocationAsync([double])");
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[32/*Uno.Threading.Promise<Fuse.GeoLocation.Location>*/]);

    try
    {
        if (LocationTracker::_locationTracker_ != NULL)
        {
            ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[33/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
            ::g::Fuse::GeoLocation::ILocationTracker::GetLocation(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[33/*Fuse.GeoLocation.ILocationTracker*/]), promise, timeout);
        }
        else
            uPtr(promise)->Reject(::g::Uno::Exception::New2(::STRINGS[20/*"Not support...*/]));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(promise)->Reject(e);
    }

    return promise;
}

// private void Init() [instance] :276
void LocationTracker::Init()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "Init()");

    if (LocationTracker::_locationTracker_ != NULL)
        return;

    LocationTracker::_locationTracker_ = (uObject*)::g::Fuse::GeoLocation::AndroidLocationProvider::New5();
}

// public Fuse.GeoLocation.Location get_Location() [instance] :296
::g::Fuse::GeoLocation::Location* LocationTracker::Location()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "get_Location()");

    if ((_lastLocation == NULL) && (LocationTracker::_locationTracker_ != NULL))
    {
        ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[33/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
        _lastLocation = ::g::Fuse::GeoLocation::ILocationTracker::GetLastKnownPosition(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[33/*Fuse.GeoLocation.ILocationTracker*/]));
    }

    return _lastLocation;
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :286
void LocationTracker::add_LocationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location>)");
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationChanged1, value), ::TYPES[19/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :286
void LocationTracker::remove_LocationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location>)");
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationChanged1, value), ::TYPES[19/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void add_LocationError(Uno.Action<string> value) [instance] :288
void LocationTracker::add_LocationError(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "add_LocationError(Uno.Action<string>)");
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationError1, value), ::TYPES[20/*Uno.Action<string>*/]);
}

// public generated void remove_LocationError(Uno.Action<string> value) [instance] :288
void LocationTracker::remove_LocationError(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "remove_LocationError(Uno.Action<string>)");
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationError1, value), ::TYPES[20/*Uno.Action<string>*/]);
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) [instance] :308
void LocationTracker::OnLocationChanged(::g::Fuse::GeoLocation::Location* newLocation)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "OnLocationChanged(Fuse.GeoLocation.Location)");

    if (::g::Uno::Delegate::op_Inequality(LocationChanged1, NULL))
        uPtr(LocationChanged1)->InvokeVoid(newLocation);
}

// private void OnLocationError(Uno.Exception error) [instance] :314
void LocationTracker::OnLocationError(::g::Uno::Exception* error)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "OnLocationError(Uno.Exception)");

    if (::g::Uno::Delegate::op_Inequality(LocationError1, NULL))
        uPtr(LocationError1)->InvokeVoid(uPtr(error)->Message());
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) [instance] :320
void LocationTracker::StartListening(int minimumReportInterval, double desiredAccuracyInMeters)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "StartListening([int],[double])");

    if (LocationTracker::_locationTracker_ == NULL)
        return;

    ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[33/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
    ::g::Fuse::GeoLocation::ILocationTracker::StartListening(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[33/*Fuse.GeoLocation.ILocationTracker*/]), uDelegate::New(::TYPES[19/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)LocationTracker__OnLocationChanged_fn, this), uDelegate::New(::TYPES[35/*Uno.Action<Uno.Exception>*/], (void*)LocationTracker__OnLocationError_fn, this), minimumReportInterval, desiredAccuracyInMeters);
}

// public void StopListening() [instance] :328
void LocationTracker::StopListening()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "StopListening()");

    if (LocationTracker::_locationTracker_ == NULL)
        return;

    ::g::Fuse::GeoLocation::ILocationTracker::StopListening(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[33/*Fuse.GeoLocation.ILocationTracker*/]));
}

// public LocationTracker New() [static] :270
LocationTracker* LocationTracker::New1()
{
    LocationTracker* obj1 = (LocationTracker*)uNew(LocationTracker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\Android\$.uno
// ------------------------------------------------------------------

// internal sealed extern class PromiseListener :183
// {
static void PromiseListener_build(uType* type)
{
    ::STRINGS[21] = uString::Const("Location request timed out");
    ::TYPES[27] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Fuse::GeoLocation::TimeoutListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::GeoLocation::TimeoutListener_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(::g::Fuse::GeoLocation::TimeoutListener_type, interface2));
    type->SetFields(6,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::PromiseListener, _promise), 0);
}

::g::Fuse::GeoLocation::TimeoutListener_type* PromiseListener_typeof()
{
    static uSStrong< ::g::Fuse::GeoLocation::TimeoutListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(PromiseListener);
    options.TypeSize = sizeof(::g::Fuse::GeoLocation::TimeoutListener_type);
    type = (::g::Fuse::GeoLocation::TimeoutListener_type*)uClassType::New("Fuse.GeoLocation.PromiseListener", options);
    type->SetBase(::g::Fuse::GeoLocation::TimeoutListener_typeof());
    type->fp_build_ = PromiseListener_build;
    type->fp_OnLocationChanged = (void(*)(::g::Fuse::GeoLocation::LocationListenerBase*, ::g::Fuse::GeoLocation::Location*))PromiseListener__OnLocationChanged_fn;
    type->fp_OnTimeout = (void(*)(::g::Fuse::GeoLocation::TimeoutListener*))PromiseListener__OnTimeout_fn;
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronLocationChanged_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronProviderDisabled_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronProviderEnabled_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronStatusChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public PromiseListener(Android.android.location.LocationManager lm, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :187
void PromiseListener__ctor_7_fn(PromiseListener* __this, ::g::Android::android::location::LocationManager* lm, double* timeout, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_7(lm, *timeout, promise);
}

// public PromiseListener New(Android.android.location.LocationManager lm, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :187
void PromiseListener__New5_fn(::g::Android::android::location::LocationManager* lm, double* timeout, ::g::Uno::Threading::Promise* promise, PromiseListener** __retval)
{
    *__retval = PromiseListener::New5(lm, *timeout, promise);
}

// protected override sealed void OnLocationChanged(Fuse.GeoLocation.Location location) :198
void PromiseListener__OnLocationChanged_fn(PromiseListener* __this, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.PromiseListener", "OnLocationChanged(Fuse.GeoLocation.Location)");

    if (uPtr(__this->_promise)->State() != 0)
        return;

    __this->StopLocationUpdateAndTimer();
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(__this->_promise), location);
}

// protected override sealed void OnTimeout() :192
void PromiseListener__OnTimeout_fn(PromiseListener* __this)
{
    uStackFrame __("Fuse.GeoLocation.PromiseListener", "OnTimeout()");

    if (uPtr(__this->_promise)->State() != 0)
        return;

    uPtr(__this->_promise)->Reject(::g::Uno::Exception::New2(::STRINGS[21/*"Location re...*/]));
}

// public PromiseListener(Android.android.location.LocationManager lm, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [instance] :187
void PromiseListener::ctor_7(::g::Android::android::location::LocationManager* lm, double timeout, ::g::Uno::Threading::Promise* promise)
{
    uStackFrame __("Fuse.GeoLocation.PromiseListener", ".ctor(Android.android.location.LocationManager,double,Uno.Threading.Promise<Fuse.GeoLocation.Location>)");
    ctor_6(lm, timeout);
    _promise = promise;
}

// public PromiseListener New(Android.android.location.LocationManager lm, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [static] :187
PromiseListener* PromiseListener::New5(::g::Android::android::location::LocationManager* lm, double timeout, ::g::Uno::Threading::Promise* promise)
{
    PromiseListener* obj1 = (PromiseListener*)uNew(PromiseListener_typeof());
    obj1->ctor_7(lm, timeout, promise);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.32.14\Android\$.uno
// ------------------------------------------------------------------

// internal abstract extern class TimeoutListener :220
// {
static void TimeoutListener_build(uType* type)
{
    ::TYPES[10] = ::g::Android::android::location::LocationListener_typeof();
    ::TYPES[31] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(TimeoutListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TimeoutListener_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(TimeoutListener_type, interface2));
    type->SetFields(5,
        ::g::Android::android::location::LocationManager_typeof(), offsetof(::g::Fuse::GeoLocation::TimeoutListener, _lm), 0);
}

TimeoutListener_type* TimeoutListener_typeof()
{
    static uSStrong<TimeoutListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(TimeoutListener);
    options.TypeSize = sizeof(TimeoutListener_type);
    type = (TimeoutListener_type*)uClassType::New("Fuse.GeoLocation.TimeoutListener", options);
    type->SetBase(::g::Fuse::GeoLocation::LocationListenerBase_typeof());
    type->fp_build_ = TimeoutListener_build;
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronLocationChanged_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronProviderDisabled_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronProviderEnabled_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))::g::Fuse::GeoLocation::LocationListenerBase__AndroidandroidlocationLocationListeneronStatusChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public TimeoutListener(Android.android.location.LocationManager lm, double timeout) :224
void TimeoutListener__ctor_6_fn(TimeoutListener* __this, ::g::Android::android::location::LocationManager* lm, double* timeout)
{
    __this->ctor_6(lm, *timeout);
}

// private void RequestUpdate() :237
void TimeoutListener__RequestUpdate_fn(TimeoutListener* __this)
{
    __this->RequestUpdate();
}

// private void StartTimeoutAction(double timeout) :230
void TimeoutListener__StartTimeoutAction_fn(TimeoutListener* __this, double* timeout)
{
    __this->StartTimeoutAction(*timeout);
}

// protected void StopLocationUpdateAndTimer() :249
void TimeoutListener__StopLocationUpdateAndTimer_fn(TimeoutListener* __this)
{
    __this->StopLocationUpdateAndTimer();
}

// private void TimeoutAction() :243
void TimeoutListener__TimeoutAction_fn(TimeoutListener* __this)
{
    __this->TimeoutAction();
}

// public TimeoutListener(Android.android.location.LocationManager lm, double timeout) [instance] :224
void TimeoutListener::ctor_6(::g::Android::android::location::LocationManager* lm, double timeout)
{
    uStackFrame __("Fuse.GeoLocation.TimeoutListener", ".ctor(Android.android.location.LocationManager,double)");
    ctor_5();
    _lm = lm;
    StartTimeoutAction(timeout);
}

// private void RequestUpdate() [instance] :237
void TimeoutListener::RequestUpdate()
{
    uStackFrame __("Fuse.GeoLocation.TimeoutListener", "RequestUpdate()");
    uPtr(_lm)->requestSingleUpdate3(::g::Android::android::location::LocationManager::NETWORK_PROVIDER(), (uObject*)this, NULL);
    uPtr(_lm)->requestSingleUpdate3(::g::Android::android::location::LocationManager::GPS_PROVIDER(), (uObject*)this, NULL);
}

// private void StartTimeoutAction(double timeout) [instance] :230
void TimeoutListener::StartTimeoutAction(double timeout)
{
    uStackFrame __("Fuse.GeoLocation.TimeoutListener", "StartTimeoutAction(double)");
    ::g::Android::android::os::Handler* _handler = ::g::Android::android::os::Handler::New7(::g::Android::android::os::Looper::getMainLooper());
    _handler->postDelayed(::g::Android::Runtime::UnoHelper::RunnableFromAction(uDelegate::New(::TYPES[31/*Uno.Action*/], (void*)TimeoutListener__TimeoutAction_fn, this)), (int64_t)timeout);
    _handler->post(::g::Android::Runtime::UnoHelper::RunnableFromAction(uDelegate::New(::TYPES[31/*Uno.Action*/], (void*)TimeoutListener__RequestUpdate_fn, this)));
}

// protected void StopLocationUpdateAndTimer() [instance] :249
void TimeoutListener::StopLocationUpdateAndTimer()
{
    uStackFrame __("Fuse.GeoLocation.TimeoutListener", "StopLocationUpdateAndTimer()");
    uPtr(_lm)->removeUpdates1((uObject*)this);
}

// private void TimeoutAction() [instance] :243
void TimeoutListener::TimeoutAction()
{
    uStackFrame __("Fuse.GeoLocation.TimeoutListener", "TimeoutAction()");
    StopLocationUpdateAndTimer();
    OnTimeout();
}
// }

}}} // ::g::Fuse::GeoLocation
